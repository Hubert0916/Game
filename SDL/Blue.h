#pragma once
#include <vector>
#include "Enemy.h"
#include "Image.h"
#include "Mixer.h"
#include "Ball.h"
class Blue :
    public Enemy
{
    public:
        Blue();
        Blue(const char* pp, int picnumber, SDL_Renderer* rr, int ra, int rb, int s, int health);
        void startTimer(Uint32 t);
        void draw();
        void damaged(bool);
        void setHealth(int);
        int getWidth();
        int getHeight();
        int getHealth();
        void playEffect(int);
        void close();

    private:
        int num;
        int frame;
        Image* image;
        Mixer cry;
        static Uint32 ChangeData(Uint32 interval, void* param);
        int speed;
        int xv;
        int yv;
};
