//  main.c
//  vowelCount
//  Created by Hussein Saleh on 11/11/21.
#include <stdio.h>

// Function prototypes
void countVowels(char message[]);

// Main
int main() {
    
    char message[100];
    
    printf("Enter a message: ");
    fgets(message, 100, stdin);
    countVowels(message);
    
    return 0;
}

// Functions

void countVowels(char message[]){
    int x = 0, aCount = 0, eCount = 0, iCount = 0, oCount = 0, uCount = 0, total = 0;
    
    printf("\nMessage: %s", message);
    
    while (message[x] != '\0'){
        switch(message[x]){
            case'A': case 'a':
                aCount++;
                total++;
                break;
            case'E': case 'e':
                eCount++;
                total++;
                break;
            case'I': case 'i':
                iCount++;
                total++;
                break;
            case'O': case 'o':
                oCount++;
                total++;
                break;
            case'U': case 'u':
                uCount++;
                total++;
                break;
        }
        x++;
    }
    
    printf("\nTotals: ");
    printf("\nA's: %d", aCount);
    printf("\nE's: %d", eCount);
    printf("\nI's: %d", iCount);
    printf("\nO's: %d", oCount);
    printf("\nU's: %d", uCount);
    printf("\nTotal vowels: %d\n\n", total);
}
