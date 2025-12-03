//Evasion - a short, fast-paced, dodging game

//1000s of projectiles flying at you

//I-frames

//buffs and debuffs in the projectiles

//red - debuff(bigger hitbox, faster bullets, etc)

//green - buffs(faster mana regen, invincibility, etc)

//the ability to pause time, with a mana meter. when mana meter is full, you can pause time and move around for 1 second. once that second is over, mana takes 5 seconds to regen before you can pause time again


#include "config.hpp"
#include "updater.hpp"

int main() 
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Raylib Game Template");
    SetTargetFPS(60);
    Image icon;
    icon = LoadImage("gfx/icon/icon.png");
    SetWindowIcon(icon);
    UnloadImage(icon);

    //inits all
    init_all();

    //Game Loop
    while(WindowShouldClose() == false) 
    {
        //Game Logic
        update_all();

        BeginDrawing();
        ClearBackground(WHITE);
        //Game Drawing
        draw_all();
        
        EndDrawing();
    }

    CloseWindow();
    return 0;
}