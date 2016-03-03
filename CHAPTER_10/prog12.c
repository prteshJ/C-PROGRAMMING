  #include <stdio.h>
  #include <stdbool.h>
  #include <math.h>
  
  float strToFloat (const char string[])
  {
      bool decFound = false;
      bool minusFound = false;
      float result = 0.0F, decimal = 0.0F;
      int i = 0, a = 0;
  
      for (i = 0; (string[i] == '-') || (string[i] == '.') || (string[i] == ',') || (string[i] >= '0' && string[i] <= '9'); i++)
      {
          if ((string[i] == '.') || (string[i] == ','))
              {decFound = true; a = i; continue;}
          if (string[i] == '-')
              {minusFound = true; continue;}
  
          if (decFound)
              decimal = decimal + (string[i] - '0') / pow(10, i - a);
          else
              result = result * 10 + (string[i] - '0');
      }
  
      result += decimal;
      result = minusFound ? -result : result;
  
      return (result);
  }
  
  int main (void)
  {
  
      printf("Number %s is %.4f.\n", "1827.4214", strToFloat("1827.4214"));
      printf("Number %s is %.4f.\n", "3812,0024", strToFloat("3812,0024"));
      printf("Number %s is %.4f.\n", "0.4214", strToFloat("0.4214"));
      printf("Number %s is %.4f.\n", "-2783.3911", strToFloat("-2783.3911"));
  
      return 0;
  }
