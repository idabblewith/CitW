using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectSpinner : MonoBehaviour
{
    private float speed = 0.5f;

    private void Update() {
        this.gameObject.transform.Rotate(0, speed, 0);
    }
}
