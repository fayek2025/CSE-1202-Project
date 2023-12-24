#include "player1.hpp"
#include "TexturedRectangle.hpp"
#include "game.hpp"
#include "music.h"

extern TexturedRectangle player1;
extern Gamestate currState;
extern SDL_Renderer* renderer;
extern bool isGameRunning ;
extern int width ;
 extern int height;
 //extern string filename;
 //extern int count;
//DynamicText* object;
 play1::~play1()
    {
        
    }
 

int play1::handleEvent_menu(SDL_Event e )
{
    int x , y;
    int count;
    SDL_GetMouseState(&x , &y);
    cout << x << " " << y << endl;
    //bool running = true;
    //SDL_Event e;
    
        if(e.type == SDL_MOUSEBUTTONDOWN)
        {
        
            if(y >= 202 && y <= 400)
            {
                if(x >= 433  && x <= 500)
                {
                    playSelectSound();
                    cout << "Brazil" << endl;
                    currState = Player2;
                    count = 1;
                    return count;
                     
                }

                if(x >= 501  && x <= 586)
                {
                    playSelectSound();
                    cout << "Argentina" << endl;
                    currState = Player2;
                    count  = 2;
                    return count;

                }

                if(x >= 611  && x <= 678)
                {
                    playSelectSound();
                    cout << "Spain" << endl;
                    currState = Player2;
                    count = 3;
                    return count;
                }

                if(x >= 700  && x <= 766)
                {
                    playSelectSound();
                    cout << "Germany" << endl;
                    currState = Player2;
                    count = 4;
                    return count;
                }

                 if(x >= 788  && x <= 856)
                {
                    playSelectSound();
                    cout << "Portugal" << endl;
                    currState = Player2;
                    count = 5;
                    return count;
                }

                 if(x >= 878  && x <= 944)
                {
                    playSelectSound();
                    cout << "Uruguy" << endl;
                    currState = Player2;
                    count = 6;
                    return count;
                }
                
            }


            

            if(y >= 444 && y <= 656)
            {
                if(x >= 479  && x <= 548)
                {
                    playSelectSound();
                    cout << "France" << endl;
                    currState = Player2;
                    count = 7;
                    return count;
                     
                }

                if(x >= 577  && x <= 645)
                {
                    playSelectSound();
                    cout << "Italy" << endl;
                    currState = Player2;
                    count  = 8;
                    return count;

                }

                

                if(x >= 676  && x <= 746)
                {
                    playSelectSound();
                    cout << "Netherlands" << endl;
                    currState = Player2;
                    count = 9;
                    return count;
                }

                 if(x >= 777  && x <= 844)
                {
                    playSelectSound();
                    cout << "England" << endl;
                    currState = Player2;
                    count = 10;
                    return count;
                }

                 if(x >= 878  && x <= 944)
                {
                    playSelectSound();
                    cout << "Belgium" << endl;
                    currState = Player2;
                    count = 11;
                    return count;
                }
                
            }



      }
    
    

    
}

void play1::handle_menu()
{
    //object = new DynamicText("./font/RobotoSlab-Bold.ttf" , 24);
    
     player1.SetPosition(0 ,0 , width , height);
     //after_menu.playFrame(0 ,0 , width , height , 0);
    
    player1.Render(renderer);
    //object->DrawText(renderer , "Press w to proceed" , 300 , 500 , 700 , 100);
    SDL_RenderPresent(renderer);
    
}