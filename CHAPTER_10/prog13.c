#include <stdio.h>

void  uppercase ( char str[] )
{
    int  i;

    for ( i = 0;  str[i] != '\0';  ++i )
       if ( str[i] >= 'a'  &&  str[i]  <= 'z' )
           str[i] = str[i] - 'a' + 'A';
}

int main(void) {
	void uppercase ( char str[] );
	char str1[] = "it is a wonderful day ...";
	char str2[] = "a nice weather";

	printf("\n Uppercase of {%s} is ", str2 );
	uppercase(str2);
	printf(" {%s}\n", str2);	

	printf("\nUppercase of {%s} is ", str1);
	uppercase(str1);
	printf(" {%s}\n", str1);

	return 0;
}
