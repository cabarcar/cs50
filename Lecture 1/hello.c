/*
#include <stdio.h>

int main(void){
    // Print a greeting message to the console
    printf("hello, world\n");
}
*/

#include <cs50.h>
#include <stdio.h>

int main(void){
    // Prompt the user for their name
    string answer = get_string("What's your name? ");

    // Print a personalized greeting
    printf("hello, %s!\n", answer); // ".., %s\n" for concatenation
}
