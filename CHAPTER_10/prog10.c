  #include <stdio.h>
  #include <stdbool.h>
  
  struct entry
  {
      char word[15];
      char definition[50];    //Not needed.
  };
  
  struct dictionary
  {
      struct entry entries[7];
  };
  
  char toLowerCase(char c)
  {
      if (c >= 'A' && c <= 'Z')
          c += 0x20;
      return c;
  }
  
  int compareStrings(char s1[], char s2[])
  {
      int i = 0;
  
      do {
          if (toLowerCase(s1[i]) > toLowerCase(s2[i]))
              return 1;
          else if (toLowerCase(s1[i]) < toLowerCase(s2[i]))
              return -1;
          i++;
      } while (s1[i] != '\0' || s2[i] != '\0');
  
      return 0;
  }
  
  struct dictionary swapEntries(struct dictionary dic, int index1, int index2)
  {
      struct entry temp;
      int i;
  
      for (i = 0; dic.entries[index1].word[i] != '\0'; i++)
          temp.word[i] = dic.entries[index1].word[i];
      temp.word[i] = '\0';
  
      for (i = 0; dic.entries[index2].word[i] != '\0'; i++)
          dic.entries[index1].word[i] = dic.entries[index2].word[i];
      dic.entries[index1].word[i] = '\0';
  
      for (i = 0; temp.word[i] != '\0'; i++)
          dic.entries[index2].word[i] = temp.word[i];
      dic.entries[index2].word[i] = '\0';
  
      return dic;
  }
  
  struct dictionary sortDictionary (struct dictionary dic, int numEntries)
  {
      //Bubble sort method.
      bool swapped = false;
      int i;
  
      do {
          swapped = false;
          for (i = 1; i <= (numEntries - 1); i++)
          {
              if (compareStrings(dic.entries[i-1].word, dic.entries[i].word) == 1)
              {
                  dic = swapEntries(dic, i-1, i);
                  swapped = true;
              }
          }
      } while (swapped);
  
      return dic;
  }
  
  int main (void)
  {
      struct dictionary dicc = {.entries[0].word = "heap",
                                .entries[1].word = "stack",
                                .entries[2].word = "queue",
                                .entries[3].word = "object",
                                .entries[4].word = "class",
                                .entries[5].word = "program",
                                .entries[6].word = "project"};
      int i;
  
      printf("\n\nUnsorted words: \n\n");
      for (i = 0; i <= 6; i++)
          printf("%s\n", dicc.entries[i].word);
  
      dicc = sortDictionary(dicc, 7);
  
      printf("\n\nSorted words: \n\n");
      for (i = 0; i <= 6; i++)
          printf("%s\n", dicc.entries[i].word);
  
      return 0;
  }
