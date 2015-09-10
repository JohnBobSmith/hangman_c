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
char get_input();

//Grab long user input IE solving the puzzle
char[] get_long_input();

//Ensure entered character matches chosen word
int verify_character(char character);

//Ensure the long input matches too
int verify_long_character(char[] character);

//Pick a random word from a wordlist, chosen from
//A file call hangman_wordlist.txt.
char[] get_random_word(char[] pathToWordlist);

//Load any generic file. Returns -1 on failure
int load_file(char[] path);

//Global struct for the hangman graphics
struct hangman_ascii_art {
    char[] newgame; //Blank array is path to text based art file
    char[] bleeding01;
    char[] bleeding02;
    char[] bleeding03;
    char[] bleeding04;
    char[] dead;
    
    char[] splash; 
    char[] gameover;
};

int main()
{
    //Main is where our game loop shall be.
}

//End of file on September 9th, 2015
//TODO:
//Start fleshing in the hangman template.
//Do this by getting correct user and file
//IO working.

