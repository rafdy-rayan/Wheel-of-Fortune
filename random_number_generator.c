//
//  random_number_generator.c
//  Wheel of Fortune
//
//  Created by Rayan Rafdy on 01/05/2020.
//  Copyright © 2020 group5. All rights reserved.
//

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "random_number_generator.h"

int RandomNumberGenerator(const int Min, const int Max)
{   
    srand(time(NULL));
    int RandomNumber = 0;
    RandomNumber = rand()%(Max-Min) + Min;
    return RandomNumber;
}

/*int main(){
    
    RandomNumberGenerator(0,23);
    return 0;

}*/
