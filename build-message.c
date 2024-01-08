/*
 * Build message using safe string functions. 
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("What is your first name?");

    char firstName[40];
    scanf("%39s", firstName); // the last character is reserved for the null terminator

    printf("What is your last name?");
    char lastName[40];
    scanf("%39s", lastName);

    /*
     * Build a message to be printed out to the user.
     */

    char message[100]; // message can be 99 characters long, plus the null terminator
    
    strcpy_s(message, sizeof(message), firstName);
    strcat_s(message, sizeof(message), " ");
    strcat_s(message, sizeof(message), lastName);
    strcat_s(message, sizeof(message), " is learning C!"); // should be no more than 94 characters long

    puts(message);
    return 0;
}
