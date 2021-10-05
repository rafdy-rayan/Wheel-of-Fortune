//
//  main.c
//  Wheel of Fortune
//
//  Created by Fabio Di Biase on 15/04/2020.
//  Copyright © 2020 group5. All rights reserved.
//
// commentaire de rayan
#include <stdio.h>
#include <string.h>
#include "player.h"
#include "secret_phrase.h"
#include "bankrupt.h"
#include "wheel.h"
#include "extra_turn.h"
#include "guess_letter.h"
#include "random_number_generator.h"





int main(int argc, const char * argv[]) {
    
    int start_money = 0;
//    int nbr_of_players;
//
//        printf("WELCOME TO THE WHEEL OF FORTUNE \n\n\n");
//    do {
//        printf("Please select if you want to play with 2 or 3 players: \n\n\n");
//        scanf("%d",&nbr_of_players);
//    } while ((nbr_of_players > 3) || (nbr_of_players < 2));
//
//
    struct Player Fabio = {start_money};
    strcpy(Fabio.Name, "Fabio");
    print_balance(Fabio);
    add_money(&Fabio,50);
    subs_money(&Fabio,20);
    print_balance(Fabio);
    lose_everything(&Fabio);
    print_balance(Fabio);
    
    
    secret_phrase("Hello There");
    return 0;
}



