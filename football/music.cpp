
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>
#include "game.hpp"
#include "music.h"

// extern state currState ;
extern Gamestate currState;

extern Mix_Music *starting;
extern Mix_Chunk *gMusic;
extern Mix_Chunk *hardCollisionSound;
extern Mix_Chunk *Crowd;
extern Mix_Chunk *selectionSound;
extern Mix_Music *collisionSound;

void playStartMusic()
{
    if (Mix_PlayingMusic() == 0)
    {
        Mix_HaltMusic();
        Mix_PlayMusic(starting, -1);
    }
    // Mix_HaltMusic();
    // Mix_PlayMusic(starting, -1);
}

void playBackgroundMusic()
{
    if (Mix_PlayingMusic() != 0)
    {
        Mix_HaltMusic();
        if (Mix_HaltMusic() == -1) {
        printf("Error halting music: %s\n", Mix_GetError());
        // Handle the error condition here, if needed
    }
        //Mix_HaltChannel(-1);
       
    }
    //   if (Mix_PlayChannel(-1,gMusic, -1) == -1) {
    //     printf("Error playing sound: %s\n", Mix_GetError());
    //     // Handle the error condition here, if needed
    // }//Mix_PlayMusic(gMusic, -1);
}

// if in Game we have to use mix_haltMusic() to stop all the background musics

void playHardCollision()
{
    // Mix_HaltMusic();
    Mix_HaltChannel(-1);
    Mix_PlayChannel(-1, hardCollisionSound, 0);
}

void playSelectSound()
{
    /*if(currState!=main_menu)
    //if(currState == twoPlayerMode ||  currState == fourPlayerMode || currState == singlePlayerMode )
    {
        Mix_HaltMusic();
    }*/
//     Mix_HaltChannel(-1);
//     int channel = -1;
// for (int i = 0; i < 100; ++i) { // Replace NUM_CHANNELS with your desired number of channels
//     if (!Mix_Playing(i)) {
//         channel = i;
//         break;
//     }
// }
//Mix_HaltMusic();
    Mix_PlayChannel(-1, selectionSound, 0);
}

void playCollisionSound()
{
    // Mix_HaltMusic();
    // Mix_PlayMusic(collisionSound , 0 );
    /*Mix_HaltChannel(-1);
     int channel = -1;
for (int i = 0; i < 100; ++i) { // Replace NUM_CHANNELS with your desired number of channels
    if (!Mix_Playing(i)) {
        channel = i;
        break;
    }
}*/
    Mix_HaltMusic();
    Mix_PlayChannel(-1, hardCollisionSound, 0);
}
void playGoalSound()
{
    /*Mix_HaltChannel(-1);
     int channel = -1;
for (int i = 0; i < 100; ++i) { // Replace NUM_CHANNELS with your desired number of channels
    if (!Mix_Playing(i)) {
        channel = i;
        break;
    }
}*/ Mix_HaltMusic();
    Mix_PlayChannel(-1, Crowd, 0);
}