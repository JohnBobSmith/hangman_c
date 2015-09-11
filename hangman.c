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
char get_input()
{
    char prompt[] = ">>";
    
    printf("Enter a character\n%s", prompt);
    char input = getchar();
    printf("You entered: %c\n", input);
    
    return input;
}

//Grab long user input IE solving the puzzle
char get_long_input();

//Ensure entered character matches chosen word
int verify_character(char character[]);

//Ensure the long input matches too
int verify_long_character(char character[]);

//Pick a random word from a wordlist, chosen from
//A file call hangman_wordlist.txt.
char get_random_word(char pathToWordlist[]);

//Load any generic file. Returns -1 on failure
int load_file(char path[]);

//Global struct for the hangman graphics
struct hangman_ascii_art {
    char splash[100];
    char new_game[100];
    char hangman_clean[100];
    char hangman_bloody_01[100];
    char hangman_bloody_02[100];
    char hangman_bloody_03[100];
    char hangman_bloody_04[100];
    char hangman_bloody_05[100];
    char game_over[];
};

int main()
{
    get_input();
}

//End of file on September 9th, 2015
//TODO:
//Start fleshing in the hangman template.
//Do this by getting correct user and file
//IO working.

