using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// This class should be attached to the main camera.
/// </summary>
public class Interaction : MonoBehaviour
{
    [Tooltip("Turn on to receive debug messages from this instance of the script.")]
    [SerializeField] private bool debug;
    [Tooltip("The distance from the player that objects can be interacted with.")]
    [SerializeField] private float reach;
    [Tooltip("Must reference the crosshair UI image.")]
    [SerializeField] private Image crosshair;

    /// <summary>
    /// The player's current waypoint.
    /// </summary>
    public NavigationWaypoint CurrentWaypoint { get; set; }
    /// <summary>
    /// The player's currently active tooltip.
    /// </summary>
    public DigitalTooltip CurrentTooltip { get; set; }

    /// <summary>
    /// Singleton for direct access of this class through the data type.
    /// There should only be once instance of this script in the scene.
    /// </summary>
    public static Interaction Instance { get; private set; }

    //Awake is executed before the Start method
    private void Awake()
    {
        //initialise singleton pattern
        if(Instance == null) 
        {
            Instance = this;
        }
        else 
        {
            enabled = false;
        }

        if(crosshair == null) 
        {
            Debug.LogWarning($"Interaction needs a reference set for the crosshair image!");
        }
    }

    // Update is called once per frame
    private void Update()
    {
        if (Physics.Raycast(transform.position, transform.forward, out RaycastHit rayHit, reach) == true)        //if raycast hits object
        {
            if (rayHit.collider.TryGetComponent(out InteractableObject interactable) == true)                   //if object hit has interactable component
            {
                if (crosshair != null && crosshair.color != Color.green)
                {
                    crosshair.color = Color.green;                  //set crosshair colour green
                }

                if (Input.GetButtonDown("Fire1") == true)           //if interaction input is pressed
                {
                    if (interactable.Activate() == false)           //if item cannot be activated, it must already be active
                    {
                        interactable.Deactivate();                  //try deactivate the object instead
                    }

                    if (debug == true)
                    {
                        Debug.DrawRay(transform.position, transform.forward * reach, Color.green, 0.25f);       //draw debug ray
                    }
                }
            }
            else            //if hit object doesnt have interactable component
            {
                if (crosshair != null && crosshair.color != Color.red)
                {
                    crosshair.color = Color.red;            //set crosshair colour red
                }
            }
        }

        if(Input.GetKeyDown(KeyCode.Escape) == true) 
        {
            Application.Quit();             //Quit application when escape is pressed
        }
    }
}

/// <summary>
/// This class is used to define objects that can be interacted with.
/// </summary>
public abstract class InteractableObject : MonoBehaviour
{
    /// <summary>
    /// Should return true if the interaction was successful.
    /// </summary>
    /// <returns></returns>
    public abstract bool Activate();
    
    /// <summary>
    /// Should return true if the interaction was successful.
    /// </summary>
    /// <returns></returns>
    public abstract bool Deactivate();
}

// using System.Collections;
// using System.Collections.Generic;
// using UnityEngine;
// using UnityEngine.UI;

// // This class should be attached to the main camera.
// public class Interaction : MonoBehaviour
// {
//     [Tooltip("Turn on to receive debug messages from this instance of the script.")]
//     [SerializeField] private bool debug;
//     [Tooltip("The distance from the player that objects can be interacted with.")]
//     [SerializeField] private float reach;
//     [Tooltip("Must reference the crosshair UI image.")]
//     [SerializeField] private Image crosshair;

//     public InputReader InputReader;

//     // The player's current waypoint.
//     public NavigationWaypoint CurrentWaypoint { get; set; }
//     // The player's currently active tooltip.
//     public DigitalTooltip CurrentTooltip { get; set; }

//     // Singleton for direct access of this class through the data type.
//     // There should only be once instance of this script in the scene.
//     public static Interaction Instance { get; private set; }


//     private void OnEnable()
//     {
//         InputReader.AcceptEvent += AcceptLogic;
//         InputReader.CancelEvent += CancelLogic;
//         InputReader.ClickEvent += ClickLogic;
//     }

//     private void OnDisable()
//     {
//         InputReader.AcceptEvent -= AcceptLogic;
//         InputReader.CancelEvent -= CancelLogic;
//         InputReader.ClickEvent -= ClickLogic;
//     }

//     private void AcceptLogic()
//     {
//         // Debug.Log("Clicked Accept Button");
//         if (Physics.Raycast(transform.position, transform.forward, out RaycastHit rayHit, reach) == true)
//         { //if raycast hits object
//             if (rayHit.collider.TryGetComponent(out InteractableObject interactable) == true)
//             { //if object hit has interactable component
//                     HandleInteractable(interactable);
//             }
//         }
//     }

//     private void CancelLogic()
//     {
//         // Debug.Log("Clicked Cancel Button");
//         HandleQuit();

//     }

//     private void ClickLogic()
//     {
//         // Debug.Log("Clicked LClick Button");
//         AcceptLogic();

//     }

//     //Awake is executed before the Start method
//     private void Awake()
//     {
//         //initialise singleton pattern
//         if (Instance == null) { Instance = this; }
//         else { enabled = false; }

//         if (crosshair == null)
//         {
//             Debug.LogWarning($"Interaction needs a reference set for the crosshair image!");
//         }
//     }

//     // Update is called once per frame
//     private void Update()
//     {
//         HandleInteraction();
//         HandleQuit();
//     }

//     public void HandleQuit()
//     {
//             Application.Quit();             //Quit application when escape is pressed
//     }

//     public void HandleInteraction()
//     {
//         if (Physics.Raycast(transform.position, transform.forward, out RaycastHit rayHit, reach) == true)
//         { //if raycast hits object
//             if (rayHit.collider.TryGetComponent(out InteractableObject interactable) == true)
//             { //if object hit has interactable component
//                 SetCrosshairGreen();
//                 // if (Input.GetButtonDown("Fire1") == true)
//                 // { //if interaction input is pressed
//                 //     // HandleInteractable(interactable);
//                 // }
//             }
//             else
//             { // if hit object doesnt have interactable component
//                 SetCrosshairRed();
//             }
//         }
//     }

//     private void HandleInteractable(InteractableObject interactable)
//     {
//         if (interactable.Activate() == false)           //if item cannot be activated, it must already be active
//         {
//             interactable.Deactivate();                  //try deactivate the object instead
//         }

//         if (debug == true)
//         {
//             Debug.DrawRay(transform.position, transform.forward * reach, Color.green, 0.25f);       //draw debug ray
//         }
//     }

//     private void SetCrosshairRed()
//     {
//         if (crosshair != null && crosshair.color != Color.red)
//         {
//             crosshair.color = Color.red;
//         }
//     }

//     private void SetCrosshairGreen()
//     {
//         if (crosshair != null && crosshair.color != Color.green)
//         {
//             crosshair.color = Color.green;
//         }
//     }
// }


// // This class is used to define objects that can be interacted with.
// public abstract class InteractableObject : MonoBehaviour
// {
//     // returns true if interaction was successful
//     public abstract bool Activate();

//     // returns true if interaction was successful
//     public abstract bool Deactivate();
// }