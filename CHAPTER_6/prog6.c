#include <stdio.h>

int main (void)
{
   int number, flipper, left_digit, pointer;
   
   printf("Number to Word Generator\n\n");
   printf("Enter a number (8-length max) and I will speak it for you!\n\n"); 
   printf ("Enter your number.\n\n");
   
   scanf ("%i", &number);
   printf ("\n");
   
   if ( number == 0)
               printf ("Zero");  
  
  											  // Set Specific Loop Maximum Limit at 8 digits
   if ( number <=99999999 && number >= -99999999 ) {
   											// Set negative entries to absolute value
   if ( number < 0) {
              number = -number;
              printf ("Negative ");
   }

										      //Pointer Doubles as Loop counter and digit identifier 
										     //Locates digits by using remainder calculation        
   	for ( pointer=100000000 ; pointer !=1 ; pointer = pointer / 10) {
     
         									   //Starting with max possible (8th) character, 
									          //If statement focuses the pointer onto the proper digit length.
									         //If 'number' variable length is less than required pointer
         									//value, pointer is divided by 10 to check 7th digit, then
         								       //6th, and so on until proper length is found.  
         	if (pointer <= (number*10)) {
                							      //the remainder must be reduced to a single digit
                 left_digit = (number % pointer)/(pointer/10);    
                 
              
                 switch (left_digit) {
                        	case 1:
                             		printf ("One ");
                             		break;
                        	case 2:
                             		printf ("Two ");
                             		break;
                        	case 3:
                             		printf ("Three ");
                             		break;          
                        	case 4:
                             		printf ("Four ");
                             		break;
                        	case 5:
                             		printf ("Five ");
                             		break;                            
                        	case 6:
                             		printf ("Six ");
                             		break;
                        	case 7:
                             		printf ("Seven ");
                             		break;
                        	case 8:
                             		printf ("Eight ");
                             		break;
                                case 9:
                           	        printf ("Nine ");
                	                break;
           	                case 0:
	                                printf ("Zero ");
                        		break;
                                                    
                	        default:
		                        printf ("Unknown operator.\n");
                        		break;
                	} 
         	    }
   		}
   	}
   		else
        	printf ("Number is not within range!!!\n");

	printf("\n");
        
   return 0;
}

