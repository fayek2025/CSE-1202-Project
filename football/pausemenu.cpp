#include "pausemenu.hpp"
#include "TexturedRectangle.hpp"
#include "game.hpp"
#include "field.hpp"
#include "music.h"

extern TexturedRectangle resume;
extern Gamestate currState;
extern SDL_Renderer* renderer;
extern bool isGameRunning ;
extern int width ;
 extern int height;
 extern int player1Point;
 extern int player2Point;
 extern int dx;
 extern int dy;
 extern int SCREEN_WIDTH;
 extern int SCREEN_HEIGHT;
 extern int positionx;
 extern int positiony;
 extern int positionx1;
 extern int positiony1;
//DynamicText* object;
 pausemenu::~pausemenu()
    {
        
    }
 

void pausemenu::handleEvent_menu(SDL_Event e)
{
    int x , y;
    SDL_GetMouseState(&x , &y);
    cout << x << " " << y << endl;
    //bool running = true;
    //SDL_Event e;
    
        if(e.type == SDL_MOUSEBUTTONDOWN)
        {
        
            if(x >= 1050 && x <= 1272 && y >= 367  && y <= 437)
            {
                 playSelectSound(); 
                cout << "Play Now" << endl;
                currState = Football_Field;
            }


             if(x >= 1050 && x <= 1272 && y >= 453 && y <= 517)
            {
                 playSelectSound(); 
                cout << "Exit" << endl;
                player1Point = 0;
                player2Point = 0;
                dx = 30;
                dy = 30;
                SCREEN_WIDTH = 670;
                SCREEN_HEIGHT = 560;
                positionx = 300;
                positiony = 460;
                positionx1 = 1090;
                positiony1 = 460;
                currState = main_menu;
                
            }

            if(x >= 1050 && x <= 1272 && y>=530  && y<= 598)
            {
                 playSelectSound(); 
                currState = Exit;
            }

      }
    
    

    
}

void pausemenu::handle_menu()
{
    //object = new DynamicText("./font/RobotoSlab-Bold.ttf" , 24);
    
     resume.SetPosition(0 ,0 , width , height);
     //after_menu.playFrame(0 ,0 , width , height , 0);
    
    resume.Render(renderer);
    //object->DrawText(renderer , "Press w to proceed" , 300 , 500 , 700 , 100);
    SDL_RenderPresent(renderer);
    
}