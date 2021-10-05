//
//  player.h
//  Wheel of Fortune
//
//  Created by Fabio Di Biase on 29/04/2020.
//  Copyright © 2020 group5. All rights reserved.
//

#ifndef player_h
#define player_h

struct Player{
    
    char Name[32];
    int balance;
};

void print_balance(struct Player p);

void add_money(struct Player *pp, int amount);

void subs_money(struct Player *pp, int amount);


#endif /* player_h */
