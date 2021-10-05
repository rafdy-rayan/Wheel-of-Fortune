//
//  isvowel.c
//  Wheel of Fortune
//
//  Created by Rayan Rafdy on 30/04/2020.
//  Copyright © 2020 group5. All rights reserved.
//

int isvowel(char guess)
{
    int istrue = 0;
    if (guess == 'a' || guess == 'A' ||
        guess == 'e' || guess == 'E' ||
        guess == 'i' || guess == 'I' ||
        guess == 'o' || guess == 'O' ||
        guess == 'u' || guess == 'U')
    {
    istrue = 1;
    }
return istrue;
}