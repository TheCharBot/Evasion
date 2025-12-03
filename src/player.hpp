#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "config.hpp"



class Player{
    public:
        Color color = RED;
        Rectangle rect;
        Vector2 pos;

        void init();
        void update();
        void draw();
};

#endif