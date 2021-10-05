//
//  wheel.c
//  Wheel of Fortune
//
//  Created by Rayan Rafdy on 23/04/2020.
//  Copyright © 2020 group5. All rights reserved.
//

#define BANKRUPT 0
#define LOSE_TURN -1
#define EXTRA_TURN 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "wheel.h"
#include "random_number_generator.h"
#include "bankrupt.h"
#include "player.h"


int wheel(){

    srand(time(NULL));  
    int wheel[] = {2500, 800, 600, 700, 600, 650, 500, 700, 600,
    550, 500, 600, 650, 700, 800, 500, 650, 500, 900, 1000, 
    BANKRUPT, BANKRUPT, EXTRA_TURN, LOSE_TURN};
    return wheel[RandomNumberGenerator(0,23)];
}

/*void spin_wheel(struct Player *pp){

    int your_spin = wheel();
    switch(your_spin){
        case 0: printf("You hit a BANKRUPT field. :( \n ");
                lose_everything(*pp);
                break;
        case -1: printf("You hit a LOSE_TURN field. :( \n"); 
                break;
        case 1: printf("You hit a EXTRA_TURN field, spin the wheel again! \n"); 
                break;
        default: printf("You hit a %d$ field! \n", your_spin); 
                break;
    }
*/
void spin_wheel(){

    int your_spin = wheel();
    switch(your_spin){
        case 0: printf("You hit a BANKRUPT field. :( \n ");
                break;
        case -1: printf("You hit a LOSE_TURN field. :( \n"); 
                break;
        case 1: printf("You hit a EXTRA_TURN field, spin the wheel again! \n"); 
                break;
        default: printf("You hit a %d$ field! \n", your_spin); 
                break;
    }

}
