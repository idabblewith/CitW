using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// This class should be attached to the objects used for navigation waypoints.
public class NavigationWaypoint : InteractableObject
{
    [Tooltip("This is the audio clip that will play when notes are opened/closed.")]
    [SerializeField] private AudioClip interactClip;

    private ParticleSystem particles;
    private Collider objectCollider;
    private AudioSource audioSource;

    private void Awake()
    {
        // Ensures necessary components are present
        if(TryGetComponent(out audioSource) == false) 
        {
            // Debug.LogWarning($"{name} needs an Audio Source attached to it!");
        }
        if(TryGetComponent(out objectCollider) == false) 
        {
            // Debug.LogWarning($"{name} needs a Collider attached to it!");
        }

        particles = GetComponentInChildren<ParticleSystem>();
        if(particles == null) 
        {
            // Debug.LogWarning($"{name} should have a particle system as a child!");
        }
    }

    private void Start()
    {
        if (objectCollider != null)
        {
            objectCollider.enabled = true;
            // Debug.Log("Collider");
        }
        if (particles != null)
        {
            particles.Play();
            // Debug.Log("Playing particles");
        }
    }

    // Disables the currently active waypoint, then moves the player to the position of this waypoint.
    // Stops the particles and disables this objects collider.
    public override bool Activate()
    {
        // Debug.Log("ACT 1");
        if (Interaction.Instance.CurrentWaypoint != this)
        {
            // Debug.Log("ACT 2");

            if (Interaction.Instance.CurrentWaypoint != null)
            {
                // Debug.Log("ACT 3");
                Interaction.Instance.CurrentWaypoint.Deactivate();
            }
            Interaction.Instance.CurrentWaypoint = this;
            Interaction.Instance.transform.parent.position = transform.position;
            if (objectCollider != null)
            {
                        // Debug.Log("ACT 4");
                objectCollider.enabled = false;
            }
            if (particles != null)
            {
                        // Debug.Log("ACT 5");
                particles.Stop();
            }
            if (audioSource != null && interactClip != null)
            {
                        // Debug.Log("ACT 6");
                audioSource.PlayOneShot(interactClip);
            }
            return true;
        }
        return false;
    }


    // Disables the currently active tooltip (if there is one) then re-enables this object's collider and starts the particles playing.
    public override bool Deactivate()
    {
        // Debug.Log("DEACT 1");

        if (Interaction.Instance.CurrentWaypoint == this)
        {
                    // Debug.Log("DEACT 2");

            if (Interaction.Instance.CurrentTooltip != null)
            {
                        // Debug.Log("DEACT 3");

                Interaction.Instance.CurrentTooltip.Deactivate();
            }
            Interaction.Instance.CurrentWaypoint = null;
            if (objectCollider != null)
            {
                        // Debug.Log("DEACT 4");

                objectCollider.enabled = true;
            }
            if (particles != null)
            {
                        // Debug.Log("DEACT 5");

                particles.Play();
            }
            return true;
        }
        return false;
    }
}
