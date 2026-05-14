#include <stdlib.h>
#include <stdio.h>

int map_size = 21;

// initialize map
void init_map(char map[map_size][map_size])
{
    for(int i = 0; i < map_size; i++)
    {
        for(int j = 0; j < map_size; j++)
        {
            if(i == 0 || i == map_size-1)
            {
                map[i][j] = 'w'; // w - wall_tile
            }
            else if(j == 0 || j == map_size - 1)
            {
                map[i][j] = 'w'; // w - wall_tile
            }
            else
            {
                map[i][j] = '0'; // 0 - empty_tile
            }
        }
    }
}

void display_map(char map[map_size][map_size])
{
    for(int i = 0; i < map_size; i++)
    {
        for(int j = 0; j < map_size; j++)
        {
            printf("%c ",map[i][j]);
        }
        printf("\n");
    }
}

void put_on_map(char map[map_size][map_size], char prop, int prop_pos_x, int prop_pos_y)
{
    if(prop_pos_x > map_size)
    {
        prop_pos_x = map_size;
    }
    if(prop_pos_y > map_size)
    {
        prop_pos_y = map_size;
    }

    map[prop_pos_x][prop_pos_y] = prop;
}

