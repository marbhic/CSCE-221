#include <iostream>

/* CREATE: enum Stress_ball_colors */
/* CREATE: enum Stress_ball_sizes */
enum class Stress_ball_colors {red, blue, yellow, green};
enum class Stress_ball_sizes {small, medium, large};

class Stress_ball {
    public:
        Stress_ball();
        Stress_ball(Stress_ball_colors color, Stress_ball_sizes size);
        Stress_ball_colors get_color() const;
        Stress_ball_sizes get_size() const;
        bool operator==(const Stress_ball &sb);
    private:
        Stress_ball_colors color;
        Stress_ball_sizes size;
};

std::ostream & operator <<(std::ostream &o, const Stress_ball &sb);
