/*
                * * * * * * * * * * *
                * HANGMAN! *
                * * * * * * * * * * * 
Written by David "JohnBobSmith" Bogner.
Copyright (c) 2015 David Bogner. 

Permission for you to use this code is granted
under the terms and conditions of the MIT License.
THE SOFTWARE IS PROVIDED WITHOUT ANY
WARRANTY OF ANY KIND, however I the authour 
hope that you will find the software entertaining or useful. 
Use it as you see fit, subject to the MIT license. 

Enough politics, let's code!
*/


#include <stdio.h>

//Display stuff. ASCII art, text, or otherwise.
int Update();

//Grab a single characer of user input,
//like when we are playing the game.
char* get_input()
{
    char prompt[] = ">>";
    static char input[50];
    
    printf("Enter a value\n%s", prompt); 
    if(fgets(input, 50, stdin) != NULL) {
        printf("You entered: %s\n", input);
    } else {
        printf("Failed to get input...");
    }
    
    return input;
}
//Pick a random word from a wordlist, chosen from
//A file call hangman_wordlist.txt.
char get_random_word(char pathToWordlist[]);

//Load any generic file. Returns -1 on failure
int load_file(char path[]);

//Global struct for the hangman graphics
struct hangman_ascii_art {
    char splash[255];
    char new_game[255];
    char hangman_clean[255];
    char hangman_bloody_01[255];
    char hangman_bloody_02[255];
    char hangman_bloody_03[255];
    char hangman_bloody_04[255];
    char hangman_bloody_05[255];
    char game_over[255];
};

int main()
{
    char* answer = get_input();
    printf("As seen from main, you entered: %s\n", answer);
}

//End of file on September 15th 2015
//TODO: just keep plugging away slowly...

