# Tractor Simulator

Welcome to the **Tractor Simulator**, an interactive OpenGL-based simulation that allows you to control and explore a detailed 3D tractor model. Navigate through different camera perspectives, manipulate the tractor's arms and bucket, and observe realistic lighting and movement dynamics.

## Table of Contents

- [Features](#features)
- [Prerequisites](#prerequisites)
- [Installation](#installation)
- [Running the Simulator](#running-the-simulator)
- [Controls](#controls)
- [Camera Modes](#camera-modes)
- [Menu Options](#menu-options)
- [Additional Information](#additional-information)
- [License](#license)

## Features

- **3D Tractor Model:** Detailed representation with movable arms, bucket, and realistic wheels.
- **Multiple Camera Views:** Switch between free, first-person, and third-person perspectives.
- **Interactive Controls:** Maneuver the tractor, operate its arms and bucket, and control lighting features.
- **Dynamic Lighting:** Toggle headlights and turn signals with realistic blinking effects.
- **Scaffolding Structures:** Build and visualize scaffolding around construction walls.
- **Texture Mapping:** Apply realistic textures to various components like wheels, ground, and scaffolding.

## Controls

Interact with the simulator using the keyboard and mouse. Below are the available controls:

### Keyboard Controls

- **Movement:**
  - `W`: Move tractor forward.
  - `S`: Move tractor backward (reverse).
  - `A`: Steer tractor wheels to the left.
  - `D`: Steer tractor wheels to the right.

- **Camera Zoom:**
  - `+`: Zoom in (decrease camera distance).
  - `-`: Zoom out (increase camera distance).

- **Manipulate Tractor Arms:**
  - `U`: Raise the front arm.
  - `J`: Lower the front arm.
  - `O`: Raise the rear arm.
  - `L`: Lower the rear arm.
  - `I`: Rotate the front bucket upward.
  - `K`: Rotate the front bucket downward.
  - `[`: Tilt the rear bucket upward.
  - `]`: Tilt the rear bucket downward.
  - `P`: Incline the rear forearm upward.
  - `;`: Incline the rear forearm downward.

- **Lighting Controls:**
  - `F`: Toggle headlights on/off.
  - `N`: Toggle left turn signal on/off.
  - `M`: Toggle right turn signal on/off.

- **Miscellaneous:**
  - `ESC`: Exit the simulator.

### Special Keys (Arrow Keys)

- **Adjust Camera Angles:**
  - `Up Arrow`: Tilt camera upward.
  - `Down Arrow`: Tilt camera downward.
  - `Left Arrow`: Rotate camera to the left.
  - `Right Arrow`: Rotate camera to the right.

### Mouse Controls

- **Left Click:** Cycle through camera modes:
  1. **Free Camera (`CAMERA_FREE`):**
        - Offers an unrestricted view of the scene.
        - Ideal for exploring the environment around the tractor.

    2. **First-Person Camera (`CAMERA_FIRST_PERSON`):**
        - Simulates the driver's view from within the cabin.
        - Provides an immersive experience of operating the tractor.

    3. **Third-Person Camera (`CAMERA_THIRD_PERSON`):**
        - Positioned behind and above the tractor.
        - Useful for observing the tractor's movements and interactions with the environment.

- **Right Click:** Open the context menu for additional options (e.g., adjust lighting).



    1. **Aumentar intensidade da luz (Increase light intensity):**
        - Enhances the ambient and diffuse lighting in the scene.

    2. **Diminuir intensidade da luz (Decrease light intensity):**
        - Reduces the ambient and diffuse lighting in the scene.

    3. **Mover luz para a direita (Move light to the right):**
        - Shifts the main light source to the right.

    4. **Mover luz para a esquerda (Move light to the left):**
        - Shifts the main light source to the left.

    5. **Mover luz para cima (Move light upward):**
        - Raises the main light source.

    6. **Mover luz para baixo (Move light downward):**
        - Lowers the main light source.

    7. **Posicao Inicial (Reset position):**
        - Resets the tractor's position and orientation to the initial state.

    8. **Sair (Exit):**
        - Closes the simulator.