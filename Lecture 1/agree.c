#include <cs50.h>
#include <stdio.h>

int main(void){
    // Prompt the user for a yes/no response and store it in the variable 'c'
    char c = get_char("Do you agree? ");

    // Check if the user agrees ('y' or 'Y')
    if (c == 'y' || c == 'Y'){
        printf("Agreed.\n");  // Print if the user agrees
    }
    // Check if the user disagrees ('n' or 'N')
    else if (c == 'n' || c == 'N'){
        printf("Not agreed.\n");  // Print if the user disagrees
    }
}