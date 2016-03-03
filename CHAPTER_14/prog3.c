#include <stdio.h>

int main(void) {
	float      f = 1.00;
    short int i = 100;
    long int   l = 500L;
	double     d = 15.00;
	
	printf("(f+i) = %f   [f => %f   i=> %i]\n", (f + i), f, i);
    printf("( l / d) = %f [l => %li   d=> %f] \n", (l / d), l, d);
 	printf("(i / l + f) = %f [i => %i   l=> %li  f=>%f] \n", (i / l + f), i, l, f);
 	printf("(l * i) = %li [l => %li   i=> %i] \n", (l * i) , l, i);    
 	printf("(f / 2) = %f [f => %f] \n", (f / 2), f); 
 	printf("(i / (d + f)) = %f [i => %i   d=> %f  f=>%f] \n", (i / (d + f)) , i, d, f);
 	printf("(l / (i * 2.0)) = %f [l => %li   i=> %i] \n", (l / (i * 2.0)) , l, i);
 	printf("(l + i / (double) l) = %f [l => %li   i=> %i (double)l=> %f] \n", (l + i / (double) l) , l, i, (double)l);
 	
	return 0;
}

/************************************************************************************************
// COMPILER HELPS ME SOLVE PRECEDENCE ISSUES //
prog3.c:9:46: warning: format specifies type 'int' but the argument has type
      'float' [-Wformat]
        printf("(f+i) = %i   [f => %i   i=> %i]\n", (f + i), f, i);
                        ~~                          ^~~~~~~
                        %f
prog3.c:9:55: warning: format specifies type 'int' but the argument has type
      'float' [-Wformat]
        printf("(f+i) = %i   [f => %i   i=> %i]\n", (f + i), f, i);
                                   ~~                        ^
                                   %f
prog3.c:10:51: warning: format specifies type 'int' but the argument has type
      'double' [-Wformat]
    printf("( l / d) = %i [l => %i   d=> %i] \n", (l / d), l, d);
                       ~~                         ^~~~~~~
                       %f
prog3.c:10:60: warning: format specifies type 'int' but the argument has type
      'long' [-Wformat]
    printf("( l / d) = %i [l => %i   d=> %i] \n", (l / d), l, d);
                                ~~                         ^
                                %li
prog3.c:10:63: warning: format specifies type 'int' but the argument has type
      'double' [-Wformat]
    printf("( l / d) = %i [l => %i   d=> %i] \n", (l / d), l, d);
                                         ~~                   ^
                                         %f
prog3.c:11:59: warning: format specifies type 'int' but the argument has type
      'float' [-Wformat]
  .../ l + f) = %i [i => %i   l=> %i  f=>%i] \n", (i / l + f), i, l, f);
                ~~                                ^~~~~~~~~~~
                %f
prog3.c:11:75: warning: format specifies type 'int' but the argument has type
      'long' [-Wformat]
  .../ l + f) = %i [i => %i   l=> %i  f=>%i] \n", (i / l + f), i, l, f);
                                  ~~                              ^
                                  %li
prog3.c:11:78: warning: format specifies type 'int' but the argument has type
      'float' [-Wformat]
  .../ l + f) = %i [i => %i   l=> %i  f=>%i] \n", (i / l + f), i, l, f);
                                         ~~                          ^
                                         %f
prog3.c:12:48: warning: format specifies type 'int' but the argument has type
      'long' [-Wformat]
        printf("(l * i) = %i [l => %i   i=> %i] \n", (l * i) , l, i);    
                          ~~                         ^~~~~~~
                          %li
prog3.c:12:58: warning: format specifies type 'int' but the argument has type
      'long' [-Wformat]
        printf("(l * i) = %i [l => %i   i=> %i] \n", (l * i) , l, i);    
                                   ~~                          ^
                                   %li
prog3.c:13:39: warning: format specifies type 'int' but the argument has type
      'float' [-Wformat]
        printf("(f / 2) = %i [f => %i] \n", (f / 2), f); 
                          ~~                ^~~~~~~
                          %f
prog3.c:13:48: warning: format specifies type 'int' but the argument has type
      'float' [-Wformat]
        printf("(f / 2) = %i [f => %i] \n", (f / 2), f); 
                                   ~~                ^
                                   %f
prog3.c:14:61: warning: format specifies type 'int' but the argument has type
      'double' [-Wformat]
  .../ (d + f)) = %i [i => %i   d=> %i  f=>%i] \n", (i / (d + f)) , i, d, f);
                  ~~                                ^~~~~~~~~~~~~
                  %f
prog3.c:14:80: warning: format specifies type 'int' but the argument has type
      'double' [-Wformat]
  .../ (d + f)) = %i [i => %i   d=> %i  f=>%i] \n", (i / (d + f)) , i, d, f);
                                    ~~                                 ^
                                    %f
prog3.c:14:83: warning: format specifies type 'int' but the argument has type
      'float' [-Wformat]
  .../ (d + f)) = %i [i => %i   d=> %i  f=>%i] \n", (i / (d + f)) , i, d, f);
                                           ~~                             ^
                                           %f
prog3.c:15:56: warning: format specifies type 'int' but the argument has type
      'double' [-Wformat]
  .../ (i * 2.0)) = %i [l => %i   i=> %i] \n", (l / (i * 2.0)) , l, i);
                    ~~                         ^~~~~~~~~~~~~~~
                    %f
prog3.c:15:74: warning: format specifies type 'int' but the argument has type
      'long' [-Wformat]
  .../ (i * 2.0)) = %i [l => %i   i=> %i] \n", (l / (i * 2.0)) , l, i);
                             ~~                                  ^
                             %li
prog3.c:16:76: warning: format specifies type 'int' but the argument has type
      'double' [-Wformat]
  ...l) = %i [l => %i   i=> %i (double)l=> %i] \n", (l + i / (double) l) , l...
          ~~                                        ^~~~~~~~~~~~~~~~~~~~
          %f
prog3.c:16:99: warning: format specifies type 'int' but the argument has type
      'long' [-Wformat]
  ...%i [l => %i   i=> %i (double)l=> %i] \n", (l + i / (double) l) , l, i, (...
              ~~                                                      ^
              %li
prog3.c:16:105: warning: format specifies type 'int' but the argument has type
      'double' [-Wformat]
  ...i=> %i (double)l=> %i] \n", (l + i / (double) l) , l, i, (double)l);
************************************************************************************************/
  