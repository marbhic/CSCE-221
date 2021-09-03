#include "Stress_ball.h"
#include <sstream>
#include <string>

Stress_ball::Stress_ball():color(Stress_ball_colors(rand()%4)), size(Stress_ball_sizes(rand()%3)){}
Stress_ball::Stress_ball(Stress_ball_colors color, Stress_ball_sizes size): color(color), size(size){}
Stress_ball_colors Stress_ball::get_color() const{
    return color;
}
Stress_ball_sizes Stress_ball::get_size() const{
    return size;
}
bool Stress_ball::operator==(const Stress_ball &sb){
    if (sb.get_color() == color && sb.get_size() == size){
        return true;
    }
    return false;
}

std::ostream & operator <<(std::ostream &o, const Stress_ball &sb){
    std::string ball_color;
    std::string ball_size;

    //Checks the color of the ball 
    if (sb.get_color() == Stress_ball_colors::red){
        ball_color = "red";
    }
    else if (sb.get_color() == Stress_ball_colors::blue){
        ball_color = "blue";
    }
    else if (sb.get_color() == Stress_ball_colors::yellow){
        ball_color = "yellow";
    }
    else if(sb.get_color() == Stress_ball_colors::green){
        ball_color = "green";
    }

    //Checks the size of the ball
    if (sb.get_size() == Stress_ball_sizes::small){
        ball_size = "small";
    }
    else if (sb.get_size() == Stress_ball_sizes::medium){
        ball_size = "medium";
    }
    else if (sb.get_size() == Stress_ball_sizes::large){
        ball_size = "large";
    }

    o << "(" << ball_color << "," << ball_size << ")";
    return o;
}
