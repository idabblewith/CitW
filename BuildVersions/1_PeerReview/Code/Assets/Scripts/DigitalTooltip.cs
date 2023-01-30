
using UnityEngine;
using UnityEngine.UI;


// Jarid Prince - Updated: 7/10/22

// Tooltip Audio Lines
// • “The cabin comes completely furnished and consists of 1 bedroom, 1 bathroom, and a living
// area with an open kitchen.”
// • “Uses renewable solar energy as the primary power source for the property.”
// • “Includes a working fireplace to help keep warm during the colder months of winter.”
// • “The open kitchen includes a pantry, a fridge, a gas-powered stovetop, and a fan-forced
// oven.”
// • “The cabin is completely plumbed, including a working bathroom with a shower and toilet.”
// • “Includes one bedroom that is large enough to comfortably house two adults for long-term
// stays.”



// This class should be attached to the world-space canvases used for the interactable tooltips.
public class DigitalTooltip : InteractableObject
{
    [Tooltip("This is the sprite that will be displayed when the tooltip is inactive.")]
    [SerializeField] private Sprite icon;
    [Tooltip("This is the background sprite that will be displayed when the tooltip is active.")]
    [SerializeField] private Sprite background;
    [Tooltip("This is the audio clip that will play when notes are opened/closed.")]
    [SerializeField] private AudioClip interactClip;

    private Image imageRenderer; // should be a child of this object
    private GameObject textObject; // should be a child of the image renderer object
    private AudioSource audioSource;
    private AudioClip commentaryClip;

    private void Awake()
    {
        // Create necessary component references
        if (TryGetComponent(out audioSource) == false)
        {
            // Debug.LogWarning($"{name} needs an Audio Source attached to it!");
        }
        else 
        {
            commentaryClip = audioSource.clip;
        }
        imageRenderer = GetComponentInChildren<Image>();
        if (imageRenderer == null)
        {
            // Debug.LogWarning($"{name} should have a UI Image as a child!");
        }
        else
        {
            textObject = imageRenderer.GetComponentInChildren<Text>().gameObject;
            if (textObject == null)
            {
                // Debug.LogWarning($"{imageRenderer.name} should have a UI Text as a child!");
            }
        }
    }

    private void Start()
    {
        // Set icon sprite and disable text
        if (imageRenderer != null)
        {
            imageRenderer.sprite = icon;
        }
        if (textObject != null)
        {
            textObject.SetActive(false);
        }
    }

    // Update is called once per frame
    private void Update()
    {
        // Rotates the object so that it faces the same direction as the main camera.
        // Canvas's are inverted by default, so by facing the same direction the camera is facing it should appear correct to the player.
        transform.forward = Camera.main.transform.forward;
    }

    // Disables the current tooltip (if there is one) then sets the background sprite and activates the tooltip text.
    public override bool Activate()
    {
        if (Interaction.Instance.CurrentTooltip != this)
        {
            if (Interaction.Instance.CurrentTooltip != null)
            {
                Interaction.Instance.CurrentTooltip.Deactivate();
            }
            Interaction.Instance.CurrentTooltip = this;
            if (imageRenderer != null)
            {
                imageRenderer.sprite = background;
                imageRenderer.rectTransform.localScale = new Vector3(0.01f, 0.01f, 0.01f);
            }
            if (textObject != null)
            {
                textObject.SetActive(true);
            }
            if (audioSource != null && interactClip != null)
            {
                audioSource.PlayOneShot(interactClip);
                // Set Audio Line from audio file originally placed in Audio Source
                audioSource.clip = commentaryClip;
                // Play line
                audioSource.Play();
            }
            return true;
        }
        return false;
    }

    // If this tooltip is the current tooltip, sets the icon sprite then disables the tooltip text.
    public override bool Deactivate()
    {
        if (Interaction.Instance.CurrentTooltip == this)
        {
            Interaction.Instance.CurrentTooltip = null;
            if (imageRenderer != null)
            {
                imageRenderer.sprite = icon;
                imageRenderer.rectTransform.localScale = new Vector3(0.0025f, 0.0025f, 0.0025f);
            }
            if (textObject != null)
            {
                textObject.SetActive(false);
            }
            if (audioSource != null && interactClip != null)
            {
                audioSource.PlayOneShot(interactClip);
                // Stop Audio Line from playing on tooltip when disabled
                audioSource.Stop();
            }
            return true;
        }
        return false;
    }
}
