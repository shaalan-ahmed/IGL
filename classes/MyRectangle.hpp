#pragma once

class MyRectangle : public MyShape {
public :
    float w, h;

    void calculate_vertices () {
        vertices.push_back({x1, y1});
        vertices.push_back({x1 + w, y1});
        vertices.push_back({x1 + w, y1 + h});
        vertices.push_back({x1, y1 + h});

        calculate_self_center();

        for (int i = 0; i < vertices.size(); i++)
            diffs.push_back({self_center.x - vertices.at(i).x, self_center.y - vertices.at(i).y});
    }

    void drawIGLRec() {
        DrawTriangle(vertices.at(1), vertices.at(0), vertices.at(3), this_color);
        DrawTriangle(vertices.at(1), vertices.at(3), vertices.at(2), this_color);
    }

    void drawIGLRecLines() {
        for (int i = 0; i < vertices.size() - 1; i++)
            DrawLineV(vertices.at(i), vertices.at(i + 1), this_color);
            
        DrawLineV(vertices.at(vertices.size() - 1), vertices.at(0), this_color);
    }

    MyRectangle (string id, float x, float y, float w, float h, bool anim, bool fill) {
        this->x1 = x;
        this->y1 = y;
        this->w = w;
        this->h = h;
        this->id = id;
        this->name = "rectangle";
        this->animatable = anim;
        this->fillable = fill;
        this->this_color = draw_color;

        calculate_vertices();
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
        fillable ? drawIGLRec() : drawIGLRecLines();
        
        update_movement();
        update_self_rotation();
        update_origin_rotation();
    }
};
