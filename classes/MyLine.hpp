#pragma once

class MyLine : public MyShape { 
public:
    Vector2 p1;
    Vector2 p2;

    MyLine (string id, float x1, float y1, float x2, float y2, bool anim) {
        vertices.push_back({x1, y1});
        vertices.push_back({x2, y2});
        for (int i = 0; i < vertices.size(); i++)
            diffs.push_back({self_center.x - vertices.at(i).x, self_center.y - vertices.at(i).y});
        this->id = id;
        this->name = "line";
        this->animatable = anim;
        this->this_color = draw_color;
    }

    void update_origin_rotation () override {
        if (rcicles1 <= 0) return;

        calculate_self_center();

        self_center = rotatePoint(self_center, origin, ang1);

        for (int i = 0; i < vertices.size(); i++) 
            vertices.at(i) = {self_center.x + diffs.at(i).x, self_center.y + diffs.at(i).y};

        rcicles1--;
    }

    void update_origin_rotation_noanim (float degs) override {
        calculate_self_center();

        self_center = rotatePoint(self_center, origin, degs);

        for (int i = 0; i < vertices.size(); i++) 
            vertices.at(i) = {self_center.x + diffs.at(i).x, self_center.y + diffs.at(i).y};
    }

    void update_self_rotation () override {
        if (rcicles0 <= 0) return;

        calculate_self_center();  

        for (int i = 0; i < vertices.size(); i++) {
            vertices.at(i) = rotatePoint(vertices.at(i), self_center, ang0);

            diffs.at(i).x = self_center.x - vertices.at(i).x;
            diffs.at(i).y = self_center.y - vertices.at(i).y;
        }

        rcicles0--;
    }

    void update_self_rotation_noanim (float degs) override {
        calculate_self_center();

        for (int i = 0; i < vertices.size(); i++)
            vertices.at(i) = rotatePoint(vertices.at(i), self_center, degs);
    }

    void update_movement () override {
        if (mcicles <= 0)
            return;

        for (int i = 0; i < vertices.size(); i++) {
            vertices.at(i).x += mvelocity_x;
            vertices.at(i).y += mvelocity_y;
        }

        mcicles--;
    }

    void update_movement_noanim (float offset_x, float offset_y) override {
        for (int i = 0; i < vertices.size(); i++) {
            vertices.at(i).x += offset_x;
            vertices.at(i).y += offset_y;
        }
    }

    void drawSelf () override {
        DrawLineV(p1, p2, this_color);
        
        update_movement();
        update_self_rotation();
    }
};