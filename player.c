// Definition of players data structure
typedef struct
{
    int pos_x,pos_y,hp;
} Player;

// Constructor of player structure 
Player initialize_player()
{
    Player player;
    player.hp = 10;
    player.pos_x = 0;
    player.pos_x = 0;

    return player;
}