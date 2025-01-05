#pragma once

class MyShape {
public: 
    Color this_color;
    string id, name;

    Vector2 first_coords;
    float tempdegs = 0;

    Vector2 self_center, origin;

    vector <Vector2> vertices, diffs;

    float x1, y1, x2, y2, offset_x, offset_y;
    float mvelocity_x = 0, mvelocity_y = 0, mcicles = 0;
    float rcicles0 = 0, rcicles1 = 0, ang0, ang1;

    bool animatable = false, fillable = false;
    bool drawable = false, drawable0 = false, drawable1 = false;

    virtual void update_movement () {};
    virtual void update_movement_noanim (float offset_x, float offset_y) {};

    virtual void update_self_rotation () {};
    virtual void update_self_rotation_noanim (float degs) {};

    virtual void update_origin_rotation () {};
    virtual void update_origin_rotation_noanim (float degs) {};

    virtual void drawSelf () = 0;

    void calculate_self_center () {
        int xt = 0, yt = 0;

        for (int i = 0; i < vertices.size(); i++) {
            xt += vertices.at(i).x;
            yt += vertices.at(i).y; 
        }

        self_center.x = xt / vertices.size();
        self_center.y = yt / vertices.size();  
    }

    virtual ~MyShape() = default;
};
