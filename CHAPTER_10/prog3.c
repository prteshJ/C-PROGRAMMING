#include <stdio.h>
#include <stdbool.h>

// Function to determine if a character is part of a word 

bool wordchar (const char  c)
{
    if  ( (c >= 'a'  &&  c <= 'z') || (c >= 'A'  &&  c <= 'Z') || c == '\'' )
        return true;
    else
        return false;
}

// Function to determine if a character is part of a number 

bool  numchar (const char  c)
{

    if ( (c >= '0' && c <= '9') || c == '.' || c == ',' || c == '-' )
       return  true;
    else
       return  false;
}

// Function to count the number of words in a string 

int  countWords (const char  string[])
{
    int  i,  wordCount = 0;
    bool lookingForWord = true, wordchar (const char c), numchar (const char c);

    for ( i = 0;  string[i] != '\0';  ++i )
        if ( wordchar (string[i])  || numchar (string[i]) ) {
            if ( lookingForWord ) {
                 ++wordCount;
                 lookingForWord = false;
            }
        }
        else
            lookingForWord = true;

    return wordCount;
}

// Here's a sample main routine and associated output:

int main (void)
{
    char  text1[] = "The sum of $552,227 and $-1,204.50 is $551,002.50";
    char  text2[] = "It isn't that I don't understand you.";
    int   countWords (const char  string[]);

    printf ("%s -- words = %i\n", text1, countWords (text1));
    printf ("%s -- words = %i\n", text2, countWords (text2));

	return 0;
}

/* The sum of $552,227 and $-1,204.50 is $551,002.50 -- words = 8 
   It isn't that I don't understand you. -- words = 7 */


