#include <iostream>
#include "map.hpp"
#include "snake.hpp"

int main()
{
    
 std::cout<<Snake::direction;
    // initialisation de la map
    for (int x = 0; x < map_width; x++)
    {
        for (int y = 0; y < map_height; y++)
        {
            auto element = map[x][y];
            if (x == 0 || x == map_width-1 || y == 0 || y == map_height-1)
            {
                element = 1;
            }
            else
            {
                element = 0;
            }
            std::cout << element;
        }
        std::cout<<std::endl;
    }

}