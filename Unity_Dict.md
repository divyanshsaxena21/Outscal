- **Components:** Functional pieces that can be attached to GameObjects to add specific functionality.


- **Scene View:** "A visual workspace where you build and arrange game elements. Every object you place in the Scene View becomes part of your game."

## What is MonoBehaviour?

It is a special class that allows interaction with the Unity engine
It enables your scripts to be attached to Game Objects

- **Frame:** Frame is like a single picture in a flip book. Your game shows many frames per second to create smooth motion. Most games aim for 60 frames per second (FPS) or higher. Remember, when Update() runs "every frame," it's happening 60 times each second(for 60 FPS)!

- **Input.GetKey()**: A method that detects if a specific key is being held down.

- **KeyCode:** A predefined reference in Unity for identifying specific keyboard keys (like W) in scripts. Using KeyCode is generally preferred as it's more performant than string comparisons.

- **Vector3:** In Unity, a Vector3 represents a point or direction in 3D space. It is made up of three numbers or "coordinates" that describe a position along the X, Y, and Z axes.

- **Time.deltaTime:** "The time in seconds it took to complete the last frame. Use this value to make your game frame rate independent."

- **Vector3.MoveTowards:** A Unity function that moves a game object towards a target position. It takes three parameters: the current position, the target position, and the maximum distance to move.

- **Mathf.Clamp:** A Unity function that constrains a value within a specified range. It takes three parameters: the value to clamp, the minimum allowed value, and the maximum allowed value.

- **GetComponent:** GetComponent<T>() is a method in Unity that allows you to access other components attached to the same GameObject as the script.

- **Canvas:** "A GameObject in Unity that acts as a container for all UI elements. It manages the rendering and scaling of UI across different screen sizes and resolutions.

- **Canvas Scaler:** "The Canvas Scaler component controls the overall scale and pixel density of UI elements in the Canvas. This scaling affects everything under the Canvas, including font sizes and image borders."

- **Text-TextMeshPro:** "A Unity package that provides high-quality text rendering with advanced features like custom fonts, rich text, and better performance than Unity's built-in text components."

- **Button:** "A UI element that responds to a click or touch event by executing assigned functionality."

- **Event System:** "A Unity component that manages input and event handling for UI elements."

- **AddListener:** "A method that assigns a function to be called when a UI element (like a button) is interacted with."

- **Audio Source:** "A Unity component that plays audio clips in a scene, controlling properties like volume, pitch, looping, and 3D spatial sound behavior."

- **PlayOneShot:**   "A method used to play an audio clip once without interrupting any audio already playing on the AudioSource. It is useful for sound effects, like button clicks or explosions."

- **DontDestroyOnLoad:**  "Preserves an Object during scene loading."

