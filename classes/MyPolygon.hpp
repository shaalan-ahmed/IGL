#pragma once

class MyPolygon : public MyShape { 
public:
    float s, r;

    void calculate_vertices (float x, float y, float r, int sides) {
        float angle;

        for (int i = 0; i < sides; i++) {
            angle = 2 * PI * i / sides - ((sides / 2.0f) * PI / sides); 

            if (sides % 2 == 0)
                angle = 2 * PI * i / sides - ((sides / 2.0f + 1) * PI / sides); 
            
            float xt = x + r * cos(angle);
            float yt = y + r * sin(angle);

            vertices.push_back({xt, yt});
        }

        for (int i = 0; i < vertices.size(); i++)
            diffs.push_back({self_center.x - vertices.at(i).x, self_center.y - vertices.at(i).y});
    }

    void DrawPolygon () {
        for (int i = 0; i < vertices.size() - 1; i++)
            DrawTriangle(vertices.at(i), vertices.at(0), vertices.at(i + 1), this_color);
    }

    void DrawPolygonLines (vector <Vector2> points, Color color) {
        for (int i = 0; i < vertices.size() - 1; i++)
            DrawLineV(vertices.at(i), vertices.at(i + 1), this_color);

        DrawLineV(vertices.at(vertices.size() - 1), vertices.at(0), this_color);
    }

    MyPolygon (string id, float x, float y, float s, float r, bool anim, bool fill) {
        this->x1 = x;
        this->y1 = y;
        this->s = s;
        this->r = r;
        this->name = "polygon";
        this->id = id;
        this->animatable = anim;
        this->fillable = fill;
        this->this_color = draw_color;

        calculate_vertices(x1, y1, r, s);
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
        fillable ? DrawPolygon() :  DrawPolygonLines(vertices, this_color);
        
        update_movement();
        update_self_rotation();
        update_origin_rotation();
    }
};