//
//  secret_phrase.c
//  Wheel of Fortune
//
//  Created by Fabio Di Biase on 20/04/2020.
//  Copyright © 2020 group5. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include "secret_phrase.h"


void secret_phrase(char secretPhrase[200]){

    
    int count = 0, i, j, k, l;
   
      printf("Enter the string:\n");
      for (i = 0;secretPhrase[i] != '\0';i++)
      {
          count++;
          if (secretPhrase[i] == ' ')
              count--;
      }
      printf("Number of words in given string are: %d\n", count);
    
    char hiddenPhrase[count +1];
    
//passing secretPhrase[] int hiddenPhrase[]
    for (j=0;secretPhrase[j] != '\0'; j++){
        hiddenPhrase[j] = secretPhrase[j];
    }

//masking the phrase in hiddenPhrase[]
    for (k=0; hiddenPhrase[k] != '\0'; k++){
        if (hiddenPhrase[k] == ' '){
        hiddenPhrase[k] = ' ';
    }
        else if(hiddenPhrase[k] != ' '){
        hiddenPhrase[k] = '-' ;
    }
}
    
//printing hiddenPhrase[]
    for(l=0; hiddenPhrase[l] != '\0'; l++){
        printf("%c", hiddenPhrase[l]);
    }
}


