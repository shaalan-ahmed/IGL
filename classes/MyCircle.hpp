#pragma once

class MyCircle : public MyShape { 
public:
    float r;

    MyCircle (string id, float x, float y, float r, bool anim, bool fill) {
        this->vertices.push_back({x, y});
        for (int i = 0; i < vertices.size(); i++)
            diffs.push_back({self_center.x - vertices.at(i).x, self_center.y - vertices.at(i).y});
        this->r = r;
        this->id = id;
        this->animatable = anim;
        this->fillable = fill;
        this->name = "circle";
        this->this_color = draw_color;
    }

    void update_origin_rotation () override {
        if (rcicles1 <= 0) return;

        calculate_self_center();

        self_center = rotatePoint(self_center, origin, ang1);

        for (int i = 0; i < vertices.size(); i++) 
            vertices.at(0) = {self_center.x + diffs.at(i).x, self_center.y + diffs.at(i).y};

        rcicles1--;
    }

    void update_origin_rotation_noanim (float degs) override {
        calculate_self_center();

        self_center = rotatePoint(self_center, origin, degs);

        for (int i = 0; i < vertices.size(); i++) 
            vertices.at(i) = {self_center.x + diffs.at(i).x, self_center.y + diffs.at(i).y};
    }

    void update_movement () override {
        if (mcicles <= 0)
            return;
        
        vertices.at(0).x += mvelocity_x;
        vertices.at(0).y += mvelocity_y;

        mcicles--;
    }

    void update_movement_noanim (float offset_x, float offset_y) override {  
        vertices.at(0).x += offset_x;
        vertices.at(0).y += offset_y;
    }

    void drawSelf () override {
        fillable ? DrawCircleV(vertices.at(0), r, draw_color) : DrawCircleLinesV(vertices.at(0), r, draw_color);
        
        update_movement();
        update_origin_rotation();
    }
};