//
//  bankrupt.c
//  Wheel of Fortune
//
//  Created by Rayan Rafdy on 23/04/2020.
//  Copyright © 2020 group5. All rights reserved.
//

#include <stdio.h>
#include "bankrupt.h"
#include "player.h"

void lose_everything(struct Player *pp){
    (*pp).balance = 0;
    printf("You lost all your money \n");
}
