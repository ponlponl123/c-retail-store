#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int check(char x[ANS]);

int check(char x[ANS])
{
      FILE *file;
      int flag = 1;
      file = fopen("record.txt", "rb");
      rewind(file);
      while (fread(&item, sizeof(item), 1, file))
      {
            if (strcmp(item.code, x) == 0)
            {
                  flag = 0;
                  break;
            }
      }
      fclose(file);
      return flag;
}