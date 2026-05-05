#include <stdlib.h>
#include <stdio.h>
#include "player.c"
#include "enemy.c"


int main()
{
    Player player = initialize_player();
    printf(":3 %d\n",player.hp);

    Enemy enemy = spawn_enemy(player.pos_x,player.pos_y);
    printf(">:3? %d, %d, %d",enemy.hp, enemy.pos_x,enemy.pos_y);

    return 0;
}