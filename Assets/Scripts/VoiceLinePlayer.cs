using UnityEngine;



/*
// Separate file for playing voice lines
// Jarid Prince - Updated 16/11/22
*/
public class VoiceLinePlayer : MonoBehaviour
{

    // Get the clip from Inspector and assign audiosource from gameobject script attached to
    [SerializeField] AudioClip clip;
    AudioSource aSrc;

    private void Awake() {
        aSrc = this.gameObject.GetComponent<AudioSource>();
    }

    // Play the specified script
    public void Go()
    {
        aSrc.clip = clip;
        aSrc.Play();
    }

    // Stop playing Audio
    public void Stop()
    {
        aSrc.Stop();
    }
}
