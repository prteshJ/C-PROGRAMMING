// Because one of the necessary conditions is that both characters are equal, so there is no need to check if both are equal to "\0". For example the following statement fulfills the same purpose:

// s1[i] == s2[i] && s2[i] != \0

#include <stdio.h>
#include <stdbool.h>

bool equalStrings (const char s1[], const char s2[]) {
        int i = 0;
        bool areEqual;

        while( s1[i] == s2[i] && s1[i] != '\0')// && s2[i]!= '\0' )
                ++i;

        if( s1[i] == '\0' && s2[i] == '\0')
                areEqual = true;
        else
                areEqual = false;

        return areEqual;
}

int main(void) {
        bool equalStrings (const char s1[], const char s2[]);
        const char stra[] = "string compare test";
        const char strb[] = "string" ;

        printf("%i\n", equalStrings(stra, strb));
        printf("%i\n", equalStrings(stra, stra));
        printf("%i\n", equalStrings(strb, "string"));

        return 0;
}



/*      I could have replaced as asked in Question 2 of Chapter 10 (Programming in C Kochan) because if I am checking for equality of strings ,
        the most important condition is if both have same characters in same sequence and if I know that they are identical then that 
        implicitly means they have same lengths so I don't need to check lengths of both strings together and also if they are not equal 
        then their lengths hardly matter                                                                                                         */

