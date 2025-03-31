# What is a Game Engine ?

A game engine is like a super-powered toolbox for creating games.

It's a software framework that helps developers bring their game ideas to life.

### Here's what a typical game engine handles:

- Rendering 🖼️: Manages the display of 2D and 3D graphics on the screen.
- Physics 🏀: Simulates physical behaviors and interactions between objects.
- Input 🖱️⌨️🕹️: Processes and manages user inputs from various devices.
- Scripting 📜: Allows implementation of game logic and mechanics through code.
- Audio 🔊: Handles sound playback, mixing, and management.

### Why use a Game Engine ?

Without Engines,

You'd have to create EVERYTHING yourself!

Game Engines saves developers tons of time and effort by providing pre-built systems for all the complex stuff.


## A Brief History

Game engines have come a long way! Some key milestones:

- 1993: id Tech powers Doom
- 1998: Unreal Engine revolutionizes 3D gaming
- 2005: Unity made game development accessible to everyone
- 2020: Unreal Engine 5 pushes graphics to new heights



## Unity: The Good, The Great, and The Awesome

Let's break down why Unity is so cool:

- Scalability: From tiny projects to massive games, Unity grows with you.
- Possibilities: 2D, 3D, VR, AR - if you can dream it, Unity can do it.
- Learning Curve: Easy to start, with tons of tutorials and help available.


## What's a Layout?

- Okay, so what's all this layout talk about? It's simple - layouts in Unity are just different ways to arrange all these panels and windows.

- You can switch things up depending on what you're doing. Designing levels? Coding? Testing? There's a layout for that!

- Why does it matter? Well, a good layout can make you work faster and smarter. It's like having all your tools right where you need them, when you need them.

## Unity's Pre-Made Layouts

**Default Layout**

This is the standard layout Unity opens with, containing the Scene View, Game View, Inspector, Hierarchy, Project, and Console.
Gives you a good balance of all essential panels.


**2 by 3 Layout**

Ideal when you want to preview your game frequently while working on the scene.
Good for working on level design or placing objects in the scene.


**4 Split Layout**

Divides the screen into four sections, giving each panel equal space: Four Scene Views, Game View, Inspector, and Hierarchy.
Useful for complex scenes, preferred for users working on 3D games, as it allows easier access to different perspectives.


**Wide Layout**

The Scene View is wide, and the Inspector, Hierarchy, and Project panels are arranged side by side, using the horizontal space more effectively.
Suitable for those who want to keep a wide scene or game view while managing side panels.


**Tall Layout**

It provides a vertically-oriented setup, where the Scene View is taller, and other panels (like Game View, Inspector, and Hierarchy) are docked below or on the side.
It is useful when focusing on games with tall environments (like platformers) or vertical UI elements.


**Custom Layout**

Unity allows users to create and save custom layouts by arranging panels according to personal preferences.


**But Transform isn't the only component out there.**

*Game Objects can have many different components. Some other common ones include:*

- Rigidbody: For realistic physics behaviour
- Collider: For detecting collisions with other objects
- Audio Source: For playing sounds

### What's a Script?

Scripts add custom behaviour to Game Objects.

You'll write these scripts in C#, Unity's primary programming language.

### Plain C# Classes vs. MonoBehaviour Scripts

Let's compare these two types of scripts:

**Plain C# Classes:**
Don't work directly with Unity's Game Objects or interact with the Unity Editor.

**MonoBehaviour Scripts:**
Can be attached to Game Objects
MonoBehaviour scripts are special because they give us access to Unity's event functions.

Event Functions: Start() and Update()

MonoBehaviour gives us access to special functions called event functions.

Two of the important ones are Start() and Update()


**What is Start()?**

Execute once when the script and the game object become active in the scene.
Here’s a demonstration of the Start() method:

```C#
private void Start()
{
    Debug.Log("I am Mr. Blocks!");
}
```

**What is Update()?**

Runs continuously, once per frame once the game object and the script are active.

```C#
private void Update()
{
    Debug.Log("I am Mr. Blocks!");
}
```

**Vector3, Speed, FrameRate**

```C#
Vector3 moveDirection = new Vector3(horizontalInput, verticalInput, 0);
moveDirection = moveDirection * speed;
moveDirection = moveDirection * speed * Time.deltaTime;
transform.position += moveDirection;
```

**NOTE** - Time.deltaTime helps make movement smooth across different frame rates. You'll explore this more in the Obstacle Behaviour chapter!


## Prefabs

Prefabs in Unity are like reusable templates for Game Objects.

Instead of recreating the same object multiple times, you create a Prefab that stores all the data about that object.

*With Prefabs, you can:*

- Create Mr. Blocks once
- Turn him into a Prefab
- Use that Prefab in all 10 levels
- If you need to make a change, update the Prefab once, and all instances update automatically!

## What is a Build?

Unity builds are specific packages for various platforms, containing all the assets, scripts, settings, and more necessary to run a game on a target platform.

Unity supports builds for multiple platforms like Windows, Android, iOS, WebGL, and more.

## What is a WebGL build?


In Unity, you can create games for Browsers!

WebGL builds can be uploaded on a website like ours and played on the browser. 

You can publish your games on our platform and play them here. Even other people will be able to play your game.

## Frame Rate Dependency Problem

This means that on a faster device or when the game is running smoothly, the spike will rotate much faster than on a slower device or when the game struggles to maintain frame rate.

Let's illustrate this:

If rotationAngle = 90 and the game runs at 60 FPS:
The spike rotates 90° * 60 = 5400° per second (15 full rotations!)
If rotationAngle = 90 and the game runs at 30 FPS:
The spike rotates 90° * 30 = 2700° per second (7.5 full rotations)


As you can see, the rotation speed is directly tied to the frame rate, which can vary widely.

In the same amount of time(1 second), the number of rotations varies!

**If you multiply Time.deltaTime to the rotationAmount the rotation will be independent of the frame rate.**

### Collision

For a collision to work, you’ll need these components:

- **Colliders:** Defines the physical boundaries of an object, allowing it to interact with other objects.
- **Rigidbody:** At least one object must have a Rigidbody component for collisions to work.

#### Rigidbody

It gives objects physics-related properties like:

Mass: How heavy the object is
Velocity: How fast and in what direction it's moving
Collision Detection: How accurately it detects collisions

Objects without a Rigidbody won't react to collisions or forces in the game world.

But, Why?!🤨

This is because Collisions are also a part of Unity’s physics engine!


**What is a Trigger?**

A trigger is a special type of collider that doesn't physically block objects, but instead detects when a game object enters, exits or stays in an area.

Triggers can be used to detect when a player enters a specific area.


**TRIGGERS V/S COLLIDER**

- A collider is like a wall - it physically stops objects.
- A trigger is like a motion sensor - it detects movement but doesn't block anything.

Use colliders when you need physical interactions and triggers when you just want to detect a presence

### Different Types of UI in Games

Let's look at two types of UI you'll find in most games:

- **Menus:** These help you navigate through the game options.
- **HUD (Heads-Up Display):** This shows important info while you're playing.

**Reference Resolution:** (Recommended: 1920 X 1080) The resolution is used as a reference. If the screen resolution is larger than the reference resolution, the UI will be scaled up, and if it's smaller, the UI will be scaled down.
**Match:**(Recommended: 0.5) Determines if the scaling is using the width or height as a reference, or a mix in between

## Anchors

Anchors define how UI elements stick to their parent container.

They have four values:

- Min X, Min Y: Bottom-left anchor point
- Max X, Max Y: Top-right anchor point

Values range from 0 to 1, representing percentage of parent's width/height.

*Here's what those values mean:*

- 0: Represents the starting point of the parent's width or height (e.g., left side or bottom).
- 1: Represents the ending point of the parent's width or height (e.g., right side or top).


So, an anchor of Min(0.5, 0.5) Max(0.5, 0.5) would place the UI element in the center of its parent, while Min(0, 0) Max(0, 0) would place it in the bottom-left corner, and Min(1, 1) Max(1, 1) in the top-right corner.

*Here’s another example:*

- Min X = 0, Max X = 1: Element stretches full width
- Min Y = 0, Max Y = 0: Element sticks to bottom


### Pivot: The Rotation and Scaling Center

*Pivot is the point around which UI elements rotate and scale.*

- (0, 0) is bottom-left
- (1, 1) is top-right
- (0.5, 0.5) is center
You can choose your pivot based on how you want your element to transform.

#### Anchor Presets: Quick UI Positioning

Anchor Presets are pre-defined anchor and pivot combinations.

They're great for quickly positioning UI elements.

You can use the presets to position the level number correctly

#### Event System

The Event System is crucial for interactive UI elements like buttons. It:

Detects user inputs (mouse clicks, touch, keyboard)
Determines which UI element is being interacted with
Triggers appropriate responses (e.g., button clicks)

*PRO TIP💡:* 
If your UI isn't responding to input, check if an Event System is present in your scene.

Unity automatically creates an Event System when you add your first UI element. You typically don't need to modify it, but understanding its role is important.

