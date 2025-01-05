# Interpreted Graphics Language (IGL)

## Overview
IGL (Interpreted Graphics Language) is a simple, domain-specific scripting language designed to create and control graphical animations and drawings. The language is ideal for rapid prototyping, education, and visual demonstrations, with a focus on clarity and ease of use.

## Supported Platforms
- Windows
- linux support is being implemented 

## Notes
The igl.exe file in the `bin` folder has all the dependencies embedded into it, so place it anywhere and it'll work just fine.

## Features
- Simplistic command structure.
- Draw basic shapes (lines, rectangles, circles, polygons).
- Configure window settings (size, title, position).
- Background and brush color controls.
- Animations with movement, rotation, and panning.
- Toggle states for filling, animation, and panning.

## Command List
Below is the list of supported commands and their descriptions:

### Window and Display Commands
- **`window_size width height`**: Set the window size.
- **`window_title title`**: Set the window title.
- **`window_position x y`**: Set the window position on the screen.
- **`background r g b`**: Set the background color with RGB values.

### Drawing Commands
- **`color r g b a`**: Set the brush color with the specified RGBA values. This color will be used by subsequent drawing commands.
- **`line id x1 y1 x2 y2`**: Draw a line with the given `id` from `(x1, y1)` to `(x2, y2)` using the current brush color.
- **`rectangle id x y width height`**: Draw a rectangle with the given `id` at `(x, y)` with the specified dimensions, using the current brush color.
- **`circle id x y radius`**: Draw a circle with the given `id` at `(x, y)` with the specified radius, using the current brush color.
- **`polygon id x y sides radius`**: Draw a polygon with the given `id`, centered at `(x, y)`, with the specified number of sides and radius, using the current brush color.

### Animation and Movement Commands
- **`move object_id dx dy time`**: Move the object with the specified `object_id` by `(dx, dy)`. If `animation_off` is active, the `time` (in milliseconds) will be ignored.
- **`rotate_origin object_id origin_x origin_y angle time`**: Rotate the object with the specified `object_id` around the point `(origin_x, origin_y)` by the specified angle (degrees). If `animation_off` is active, the `time` (in milliseconds) will be ignored.
- **`rotate_self object_id angle time`**: Rotate the object with the specified `object_id` around its own center by the specified angle (degrees). If `animation_off` is active, the `time` (in milliseconds) will be ignored.
- **`wait milli seconds`**: Pause the execution for a specified number of seconds.

### State Control Commands
- **`panning_on`**: Enable panning.
- **`panning_off`**: Disable panning.
- **`animation_on`**: Enable animation mode.
- **`animation_off`**: Disable animation mode.
- **`filling_on`**: Enable filling for shapes.
- **`filling_off`**: Disable filling for shapes.

## Example Script
```igl
window_size 800 600
window_title "IGL Demo"
background 0 0 0
panning_on

color 255 255 255 255
line line1 100 100 200 200

color 255 0 0 255
rectangle rect1 300 200 100 50

color 0 255 0 120
circle circ1 400 400 50

color 255 255 0 111
polygon poly1 500 300 6 100

move rect1 50 50 2000
wait 2000
rotate_origin rect1 250 250 45 1000

animation_on
rotate_self rect1 360 2000
```

## Getting Started
1. Create a file containing your script (any extension).
2. Load the script into the IGL interpreter.
3. Run the interpreter to render the graphics and animations.

## License
This project is licensed under the MIT License.
