// Definition of players data structure
typedef struct
{
    int pos_x,pos_y,hp;
} Player;

// Constructor of player structure 
Player initialize_player(int pos_x, int pos_y)
{
    Player player;
    player.hp = 10;
    player.pos_x = pos_x;
    player.pos_y = pos_y;

    return player;
}