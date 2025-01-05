#pragma once

#include "./Utils.hpp"

Vector2 rotatePoint (Vector2 p, Vector2 origin, float degrees) {
    Vector2 rotated;
    
    rotated.x = (p.x - origin.x) * cos(degrees) - (p.y - origin.y) * sin(degrees) + origin.x;
    rotated.y = (p.x - origin.x) * sin(degrees) + (p.y - origin.y) * cos(degrees) + origin.y;

    return rotated;
}

#include "../classes/MyShape.hpp"
#include "../classes/MyRectangle.hpp"
#include "../classes/MyCircle.hpp"
#include "../classes/MyLine.hpp"
#include "../classes/MyPolygon.hpp"

vector <unique_ptr<MyShape>> shapes;

void print_error (exception e) {
    cout << "Error at line " << line_counter;
    cout << ":\n\t" << e.what() << " in \"" << commands.at(cmd_number) << "\"\n";
}

void animation_on  () {  animation = true;  }
void animation_off () {  animation = false; }
void filling_on    () {  filling = true;    }
void filling_off   () {  filling = false;   }
void panning_on    () {  panning = true;    }
void panning_off   () {  panning = false;   }


bool isInteger (string str) {
    for (float i = 0; i < str.length(); i++) {
        if (str.at(i) == '-' && i == 0) continue;
        if (! isdigit(str.at(i)) && str.at(i) != '.') return false;
    }

    return true;
}

void checkArgs () {
    if (arguments.size() < n_args.at(cmd_number)) 
        throw invalid_argument("missing arguments");

    if (arguments.size() > n_args.at(cmd_number)) 
        throw invalid_argument("too much arguments");
}

void isValid (float* var, float min, float max, float position, string err, bool limit) {
    string s1 = "invalid argument '";
    string s2 = "'";
    string s3 = s1 + err + s2;

    invalid_argument e(s3.c_str());

    size_t pos;

    if (arguments.at(position) == "" || ! isInteger(arguments.at(position))) 
        throw e;

    *var = stof(arguments.at(position), &pos);

    if (pos != arguments.at(position).length()) 
        throw e;

    if (limit && (*var < min || *var > max && (min != -1 && max != -1)))
        throw e;
}

void isCommand (string line) {
    vector<string> command = split(line, ' ');

    arguments.clear();

    for (float i = 1; i < command.size(); i++) {
        arguments.push_back(command.at(i));
    }

    for (float i = 0; i < commands.size(); i++) {
        if (command.at(0) == commands.at(i)) {
            cmd_number = i;

            return;
        }
    }    

    cmd_number = -1;
}

void invalid_command () {
    cout << "Error at line " << line_counter;
    cout << ":\n\t" << "invalid command\n";

    exit(1);
}

bool shapeExists (string id) {
    for (auto &i : shapes) {
        if (id == i->id) 
            return true;
    }

    return false;
}


void handle_panning () {
    if (float temp = GetMouseWheelMove()) {
        if (temp < 0 && panning) {
            if (IsKeyDown(KEY_LEFT_SHIFT)) camera.target.x += 65;
            else if (IsKeyDown(KEY_LEFT_CONTROL) && camera.zoom > 0.3) camera.zoom -= 0.2;
            else if (! IsKeyDown(KEY_LEFT_CONTROL)) camera.target.y += 65;
        }
        
        if (temp > 0 & panning) {
            if (IsKeyDown(KEY_LEFT_SHIFT)) camera.target.x -= 65;
            else if (IsKeyDown(KEY_LEFT_CONTROL) && camera.zoom < 3.9) camera.zoom += 0.2;
            else if (! IsKeyDown(KEY_LEFT_CONTROL)) camera.target.y -= 65;
        }
    }
}

void handle_wait () {
    if (in_wait) {
        wait_frames--;

        if (wait_frames == 0) {
            in_wait = false;

            source.seekg(resume_position, ios::beg);
        }
    }
}

void GUISetup () {
    SetTraceLogLevel(LOG_NONE);

    InitWindow(std_width, std_height, nullptr);
    
    SetTargetFPS(FPS);

    camera.offset = {std_width / 2.0f, std_height / 2.0f};
    camera.target = {std_width / 2.0f, std_height / 2.0f};
    camera.rotation = 0;
    camera.zoom = 1;
}

void GUIFinish () {
    CloseWindow();
}

void set_color () {
    float r, g, b, a;

    try {
        checkArgs();

        isValid(&r, 0, 255, 0, "red", true);
        isValid(&g, 0, 255, 1, "green", true);
        isValid(&b, 0, 255, 2, "blue", true);
        isValid(&a, 0, 255, 3, "alpha", true);

        draw_color = {(unsigned char) r, (unsigned char) g, (unsigned char) b, (unsigned char) a};
    } catch (invalid_argument e) {
        print_error(e);


        exit(1);
    }
}

void fill_background () {
    float r, g, b;

    try {
        checkArgs();

        isValid(&r, 0, 255, 0, "red", true);
        isValid(&g, 0, 255, 1, "green", true);
        isValid(&b, 0, 255, 2, "blue", true);

        bg_color = {(unsigned char) r, (unsigned char) g, (unsigned char) b, 255};
    } catch (invalid_argument e) {
        print_error(e);


        exit(1);
    }
}














void rectangle () {
    if (shapeExists(arguments.at(0))) 
        return;

    float x, y, w, h;

    try {
        checkArgs();

        isValid(&x, -1, -1, 1, "x", false);
        isValid(&y, -1, -1, 2, "y", false);
        isValid(&w, -1, -1, 3, "width", false);
        isValid(&h, -1, -1, 4, "height", false);

        shapes.push_back(make_unique<MyRectangle>(arguments.at(0), x, y, w, h, animation, filling));

    } catch (invalid_argument e) {
        print_error(e);

        exit(1);
    }
}

void circle () {
    if (shapeExists(arguments.at(0))) 
        return;

    float x, y, r;

    try {
        checkArgs();

        isValid(&x, -1, -1, 1, "x", false);
        isValid(&y, -1, -1, 2, "y", false);
        isValid(&r, -1, -1, 3, "radius", false);

        shapes.push_back(make_unique<MyCircle>(arguments.at(0), x, y, r, animation, filling));

    } catch (invalid_argument e) {
        print_error(e);

        exit(1);
    }
}

void line () {
    if (shapeExists(arguments.at(0))) 
        return;

    float x1, y1, x2, y2;

    try {
        checkArgs();

        isValid(&x1, -1, -1, 1, "x1", false);
        isValid(&y1, -1, -1, 2, "y1", false);
        isValid(&x2, -1, -1, 3, "x2", false);
        isValid(&y2, -1, -1, 4, "y2", false);

        shapes.push_back(make_unique<MyLine>(arguments.at(0), x1, y1, x2, y2, animation));

    } catch (invalid_argument e) {
        print_error(e);

        exit(1);
    }
}

void polygon () {
    float x, y, r, s;

    try {
        checkArgs();

        isValid(&x, -1, -1, 1, "x", false);
        isValid(&y, -1, -1, 2, "y", false);
        isValid(&s, 3, -1, 3, "sides", true);
        isValid(&r, -1, -1, 4, "radius", false);

        shapes.push_back(make_unique<MyPolygon>(arguments.at(0), x, y, s, r, animation, filling));
    } catch (invalid_argument e) {
        print_error(e);


        exit(1);
    }
}












void window_title () {
    vector<string> temp = split(liny, '"');

    SetWindowTitle(temp.at(1).c_str());
}

void window_position () {
    float x, y;

    try {
        checkArgs();

        isValid(&x, -1, -1, 0, "x", false);
        isValid(&y, -1, -1, 1, "y", false);

        SetWindowPosition(x, y);
    } catch (invalid_argument e) {
        print_error(e);

        exit(1);
    }
}

void window_size () {
    float w, h;

    try {
        checkArgs();

        isValid(&w, -1, -1, 0, "width", false);
        isValid(&h, -1, -1, 1, "height", false);

        SetWindowSize(w, h);
    } catch (invalid_argument e) {
        print_error(e);

        exit(1);
    }
}

void drawShapes () {
    for (auto &i : shapes)
        i->drawSelf();
}


void move () {  
    float offset_x, offset_y, time, cicles;

    try {
        checkArgs();

        isValid(&offset_x, -1, -1, 1, "x_offset", false);
        isValid(&offset_y, -1, -1, 2, "y_offset", false);
        isValid(&time, -1, -1, 3, "duration_ms", false);

        if (! shapeExists(arguments.at(0)))
            throw invalid_argument("shape is not declared");

        for (float i = 0; i < shapes.size(); i++) {
            if (arguments.at(0) == shapes.at(i)->id) {
                if (animation) {
                    shapes.at(i)->drawable = true;
                    cicles = (time / 1000.0f) * FPS;
                    shapes.at(i)->mcicles = cicles;
                    
                    shapes.at(i)->mvelocity_x = offset_x / cicles;
                    shapes.at(i)->mvelocity_y = offset_y / cicles;
                } else {
                    shapes.at(i)->update_movement_noanim(offset_x, offset_y);
                }
            }
        }
    } catch (invalid_argument e) {
        print_error(e);

        exit(1);
    }
}

void rotate_self () {
    float deg, time;
    float cicles;

    try {
        checkArgs();

        isValid(&deg, -1, -1, 1, "degrees", false);
        isValid(&time, -1, -1, 2, "duration_ms", false);

        if (! shapeExists(arguments.at(0)))
            throw invalid_argument("shape is not declared");

        for (float i = 0; i < shapes.size(); i++) {
            if (arguments.at(0) == shapes.at(i)->id) {
                if (shapes.at(i)->name == "circle") {
                    continue;
                }

                if (animation) {
                    shapes.at(i)->drawable0 = true;
                    cicles = (time / 1000.0f) * FPS;
                    shapes.at(i)->rcicles0 = cicles;
                    shapes.at(i)->ang0 = deg * DEG2RAD / cicles;
                } else {
                    shapes.at(i)->update_self_rotation_noanim(deg * DEG2RAD);
                }
            }
        }
    } catch (invalid_argument e) {
        print_error(e);

        exit(1);
    }
}

void rotate_origin () {
    float x_origin, y_origin, deg, time, cicles;

    try {
        checkArgs();

        isValid(&x_origin, -1, -1, 1, "x_origin", false);
        isValid(&y_origin, -1, -1, 2, "y_origin", false);
        isValid(&deg, -1, -1, 3, "degrees", false);
        isValid(&time, -1, -1, 4, "duration_ms", false);

        if (! shapeExists(arguments.at(0)))
            throw invalid_argument("shape is not declared");

        for (float i = 0; i < shapes.size(); i++) {
            if (arguments.at(0) == shapes.at(i)->id) {
                if (animation) {
                    shapes.at(i)->drawable1 = true;
                    shapes.at(i)->origin = {x_origin, y_origin};
                    cicles = (time / 1000.0f) * FPS;
                    shapes.at(i)->rcicles1 = cicles;
                    shapes.at(i)->ang1 = deg * DEG2RAD / cicles;
                } else {
                    shapes.at(i)->update_origin_rotation_noanim (deg * DEG2RAD);
                }
            }
        }
    } catch (invalid_argument e) {
        print_error(e);

        exit(1);
    }
}

void wait() {
    float time;

    try {
        checkArgs();
        isValid(&time, -1, -1, 0, "duration_ms", false);

        wait_frames = (time / 1000.0f) * FPS;
        in_wait = true;

        resume_position = source.tellg();
    } catch (invalid_argument& e) {
        cout << "Error at line " << line_counter << ":\n\t" 
        << e.what() << " in \"" << commands.at(cmd_number) << "\"\n";
        exit(1);
    }
}

