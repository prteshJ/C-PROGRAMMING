  #include <stdio.h>
  
  void intToStr (int number, char str[])
  {
      int exp = 1, i = 0;
      char num = '0';
  
      if (number < 0)
      {
          str[i++] = '-';
          number = -number;
      }
  
      while ((exp * 10) < number)
          exp = exp * 10;
  
      do {
          num = (number / exp) + '0';
          str[i++] = num;
          number = number % exp;
          exp = exp / 10;
      } while (exp > 0);
  
      str[i] = '\0';
  }
  
  int main (void)
  {
      char str[20] = {0};
      int a = -32381;
  
      intToStr(a, str);
      printf("Number %i is \"%s\".\n", a, str);
  
      return 0;
  }
