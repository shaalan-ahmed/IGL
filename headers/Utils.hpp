#pragma once

#include "../Thirds/raylib/include/raylib.h"
#include "../Thirds/raylib/include/raymath.h"
#include "../Thirds/raylib/include/rlgl.h"
#include "./HighLevelUtils.h"

#define RAYGUI_IMPLEMENTATION
#include "../Thirds/raygui/src/raygui.h"
#undef RAYGUI_IMPLEMENTATION

#include <fstream>
#include <string>
#include <iostream>
#include <vector>
#include <cctype>
#include <memory>
#include <typeinfo>

using namespace std;

ifstream source;

vector <string> commands = {
    "window_size",
    "color",
    "circle",
    "background",
    "window_title",
    "window_position",
    "rectangle",
    "move",
    "wait",
    "panning_on",
    "line",
    "polygon",
    "rotate_origin",
    "rotate_self",
    "animation_on",
    "animation_off",
    "filling_on",
    "filling_off",
    "panning_off"
};

vector <float> n_args = {
    2, 4, 4, 3, 1, 2, 5, 
    4, 1, 0, 5, 5, 5, 3, 
    0 ,0, 0, 0, 0
};

int cmd_number, line_counter, FPS = 60, std_width = 1600, std_height = 900, wait_frames = 0;
bool panning = false, in_wait = false, pause = true, animation = false, filling = false;

Color draw_color = WHITE, bg_color = BLACK;
streampos resume_position;
vector <string> arguments;
Camera2D camera;
string liny;

