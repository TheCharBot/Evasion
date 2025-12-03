#include "player.hpp"


void Player::init(){}

void Player::update(){
    if(IsKeyDown(KEY_W)){
        pos.y-=PLAYER_SPEED;
    }
    if(IsKeyDown(KEY_S)){
        pos.y+=PLAYER_SPEED;
    }
    if(IsKeyDown(KEY_D)){
        pos.x+=PLAYER_SPEED;
    }
    if(IsKeyDown(KEY_A)){
        pos.x-=PLAYER_SPEED;
    }
    if(pos.y>=SCREEN_HEIGHT-PLAYER_HEIGHT) pos.y=SCREEN_HEIGHT-PLAYER_HEIGHT;
    if(pos.y<=0) pos.y=0;
    if(pos.x>=SCREEN_WIDTH-PLAYER_WIDTH) pos.x=SCREEN_WIDTH-PLAYER_WIDTH;
    if(pos.x<=0) pos.x=0;
    
    rect = {pos.x, pos.y, PLAYER_WIDTH, PLAYER_HEIGHT};
    
}

void Player::draw(){
    DrawRectangle(rect.x, rect.y, rect.width, rect.height, color);
}