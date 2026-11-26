#include <iostream>
#include <vector>
#include "position.cpp"

int main()
{
    // initialisation de la map
    int const map_width{10};
    int const map_height{10};
    int map[map_width][map_height];
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