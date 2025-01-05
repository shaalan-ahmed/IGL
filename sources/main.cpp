#include "../headers/Gloabals.h"

int main (int argc, char** argv) {
    GUISetup();

    if (argc < 2) {
        cout << "Usage: igl.exe" << " <file>" << endl;

        return 1;
    }

    source.open(argv[1]);

    if (! source.is_open()) {
        cout << "Error opening file" << endl;

        return 1;
    }

    while (!WindowShouldClose()) {
        BeginDrawing();
        BeginMode2D(camera);
        ClearBackground(bg_color);

        handle_panning();
        
        while (! in_wait && getline(source, liny)) {
            line_counter++;

            if (liny.empty() || liny.at(0) == '#') continue;

            isCommand(liny);

            switch (cmd_number) {
                case -1:    invalid_command();    break;
                case  0:    window_size();        break;
                case  1:    set_color();          break;
                case  2:    circle();             break;
                case  3:    fill_background();    break;
                case  4:    window_title();       break;
                case  5:    window_position();    break;
                case  6:    rectangle();          break;
                case  7:    move();               break;
                case  8:    wait();               break;
                case  9:    panning_on();         break;
                case 10:    line();               break;
                case 11:    polygon();            break;
                case 12:    rotate_origin();      break;
                case 13:    rotate_self();        break;
                case 14:    animation_on();       break;
                case 15:    animation_off();      break;
                case 16:    filling_on();         break;
                case 17:    filling_off();        break;
                case 18:    panning_off();        break;
            }
        }

        handle_wait();

        drawShapes();

        EndMode2D();
        EndDrawing();
    }

    GUIFinish();

    source.close();

    return 0;
}
