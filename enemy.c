#include <stdlib.h>
#include <math.h>
#include <time.h>


// definition of the Enemy data structure
typedef struct
{
    int pos_x,pos_y,hp;
} Enemy;

// function returning an enemy in a random radiu of a player
Enemy spawn_enemy(int player_pos_x,int player_pos_y)
{
    Enemy enemy;
    enemy.hp = 2;

    // safe radius to spawn an enemy is between 3-7 spaces from player
    // equation for enemies spawn radius is:
    // (enemy_pos_x - player_pos_x)^2 + (enemy_pos_y - player_pos_y)^2 >= 3^2
    // (enemy_pos_x - player_pos_x)^2 + (enemy_pos_y - player_pos_y)^2 <= 7^2
    // we can assume radius as a pseudo random value, than we can transform the equation to get:
    // enemy_pos_x = +/-sqrt(radius^2 - (enemy_pos_y - player_pos_y)^2) + player_pos_x
    // we can chose a pseudo random value for pos_y and radius
    // with this equation we can calculate coresponding value for pos_x

    // srand((unsigned)time(NULL));

    double p_pos_x = (double)player_pos_x;      // type conversions
    double p_pos_y = (double)player_pos_y;
    int e_pos_y = (rand() % 15) - 7;            // pseudo random position y in range (-7;7)
    double d_pos_y = (double)e_pos_y;           // type conversion
    double radius = (double)(rand() % 4) + 3;   // pseudo random radius in range (3;7)
    int sign = (rand() % 2);                    // pseudo random variable if 
    if(sign == 0)
    {
        sign = -1;
    }

    double inside_equation = radius*radius - ((d_pos_y - p_pos_y)*(d_pos_y - p_pos_y));

    // faill safe
    if(inside_equation < 0.0)
    {
        inside_equation *= -1.0;
    }
    
    int e_pos_x = sign * (int)(sqrt(inside_equation) + p_pos_x);

    enemy.pos_x = e_pos_x;
    enemy.pos_y = e_pos_y;

    return enemy;
}