#include <stdio.h>
#include <stdbool.h>

bool alphabetic (const char c) {
        if( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
                return true;
        else
                return false;
}

/* Function to count the number of words in a string */

int countWords (const char string[]) {
        int i, wordCount = 0;
        bool lookingForWord = true, alphabetic(const char c);

        for( i = 0; string[i] != '\0' ; ++i)
                if( alphabetic(string[i]) ) {
                        if( lookingForWord ) {
                                ++wordCount;
                                lookingForWord = false;
                        }
                }
                else {
                                lookingForWord = true;
                }       

        return wordCount;
}

// Function to read a line of text from the terminal

void readLine(char buffer[]) {
        char character;
        int i = 0;

        do {
                character = getchar ();
//		printf("\n{ i is %i while char is '%c'}\n", i, character);
                buffer[i] = character;
                ++i;
        }while(character != '\n');

        buffer[i-1] = '\0';
  //      printf("\n ....    i = %i  now    &&&     buffer[i-1] = %d ..... \n", i, buffer[i-1]);
}

int main(void) {
	char text[286];                                  // PROGRAMMING IN C KOCHAN PG 630 buffer size 81 is too less for example which requires atleast an array of 286 chars
	int totalWords = 0;
	int countWords (const char string[]);
	void readLine(char buffer[]);
	bool endOfText = false;

	printf("Type in your text.\n");
	printf("When you are done, press 'RETURN'.\n\n");

	while( !endOfText ) {
		readLine(text);

		if(text[0] == '\0')
			endOfText = true;
		else
			totalWords += countWords (text);
	}

	printf("\nThere are %i words in the above text.\n", totalWords);

	return 0;
}

/* Wendy glanced up at the ceiling where the mound of lasagna loomed like a mottled mountain range.Within seconds, she was crowned with ricotta ringlets and a tomato sauce tiara. Bits of beef formed 
meaty moles on her forehead. After tge second thud, her culinary coronation was complete.*/

