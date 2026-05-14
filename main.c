#include <stdlib.h>
#include <stdio.h>
#include <GL/glut.h>
#include "player.c"
#include "enemy.c"
#include "gamecontroler.c"

#define pi 3.1415

// gcc -o main main.c -lGL -lGLU -lglut -lm


int main()
{
    Player player = initialize_player(10,10);
    printf(":3 %d\t%d\t%d \n",player.hp,player.pos_x,player.pos_y);

    Enemy enemy_array[10];
    for (int i = 0; i < 10; i++)
    {
        Enemy enemy = spawn_enemy(player.pos_x,player.pos_y);
        enemy_array[i].hp = enemy.hp;
        enemy_array[i].pos_x = enemy.pos_x;
        enemy_array[i].pos_y = enemy.pos_y;
        printf("%d: %d, %d, %d\n",i,enemy_array[i].hp, enemy_array[i].pos_x,enemy_array[i].pos_y);
    }
    
    char map[map_size][map_size];

    init_map(map);
    display_map(map);
    printf("\n");
    put_on_map(map,'p',player.pos_x,player.pos_y);
    display_map(map);
    
    return 0;
}