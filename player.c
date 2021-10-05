//
//  player.c
//  Wheel of Fortune
//
//  Created by Fabio Di Biase on 20/04/2020.
//  Copyright © 2020 group5. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include "player.h"



void print_balance(struct Player p){
    printf("%s's balance is %d \n",p.Name,p.balance);
}

void add_money(struct Player *pp, int amount){
    (*pp).balance += amount;
}

void subs_money(struct Player *pp, int amount){
    (*pp).balance -= amount;
}




