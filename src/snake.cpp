#include "snake.hpp"
#include "map.hpp"

void Snake::initSnake (){
    body = map[map_width/2][map_height/2];
    direction = dir::up;
    score = 0;
};