#include "menu.hpp"
#include "TexturedRectangle.hpp"
#include "music.h"
#include "game.hpp"

extern TexturedRectangle after_menu;
extern Gamestate currState;
extern SDL_Renderer* renderer;
extern bool isGameRunning ;
extern int width ;
 extern int height;
//  extern int player1Point;
//  extern int player2Point;
//  extern int dx  ;
//  extern int dy;
//  extern  int SCREEN_WIDTH ;
//  extern int SCREEN_HEIGHT ;
//  extern int positionx;
//  extern int positiony;
//  extern int positionx1;
//  extern int positiony1;
//DynamicText* object;
 menu::~menu()
    {
        
    }
 

void menu::handleEvent_menu(SDL_Event e)
{
    int x , y;
    SDL_GetMouseState(&x , &y);
    cout << x << " " << y << endl;
    //bool running = true;
    //SDL_Event e;
    
        if(e.type == SDL_MOUSEBUTTONDOWN)
        {
        
            if(x >= 1030 && x <= 1258 && y >= 396  && y <= 460)
            {
                 playSelectSound();
                cout << "Play Now" << endl;
                // player1Point = 0;
                // player2Point = 0;
                // dx = 30;
                // dy = 30;
                // SCREEN_WIDTH = 670;
                // SCREEN_HEIGHT = 560;
                // positionx = 300;
                // positiony = 460;
                // positionx1 = 1090;
                // positiony1 = 460;
                 currState = Player1;
            }


             if(x >= 1030 && x <= 1258 && y >= 500 && y <= 562)
            {
                 playSelectSound();
                cout << "Exit" << endl;
                currState = Exit;
                
            }

           

      }
    
    

    
}

void menu::handle_menu()
{
    //object = new DynamicText("./font/RobotoSlab-Bold.ttf" , 24);
    
     after_menu.SetPosition(0 ,0 , width , height);
     //after_menu.playFrame(0 ,0 , width , height , 0);
    
    after_menu.Render(renderer);
    //object->DrawText(renderer , "Press w to proceed" , 300 , 500 , 700 , 100);
    SDL_RenderPresent(renderer);
    
}