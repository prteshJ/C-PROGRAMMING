// char * const p; pointer address cannot be changed

// const char * const p; both cannot be changed.

#include<stdio.h>

/*int main()
{
    const char * p ; // value cannot be changed
    char z;
  //  *p = 'c'; // this will not work!
    p = &z;
//   z = 'k'; This will work!
    printf(" %c\n",*p);
    return 0;
}*/

 int main()
{
    char * const p; // address cannot be changed
    char z;
    *p = 'c'; 
//    p = &z;   // this will not work
    printf(" %c\n",*p);
    return 0;
}



/*int main()
{
    const char * const p; // both address and value cannot be changed
    char z;
    *p = 'c'; // this will not work
    p = &z; // this will not work
    printf(" %c\n",*p);
    return 0;
}*/
