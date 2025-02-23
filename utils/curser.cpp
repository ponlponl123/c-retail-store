#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "curser.h"

// Import Utils Functions
#include "./gotoxy.cpp"
#include "./highlight.cpp"

// Import Functions
#include "../functions/bill.cpp"
#include "../functions/add.cpp"
#include "../functions/edit.cpp"
#include "../functions/del.cpp"

// Import Display Functions
#include "../display/all.cpp"
#include "../display/code.cpp"
#include "../display/rate.cpp"
#include "../display/quan.cpp"
#include "../display/search.cpp"
#include "../display/mainmenu.cpp"

void curser(int);

void curser(int no)
{
      int count = 1;
      char ch = '0';
      gotoxy(30, 23);
      while (1)
      {
            switch (ch)
            {
            case 80:
                  count++;
                  if (count == no + 1)
                        count = 1;
                  break;
            case 72:
                  count--;
                  if (count == 0)
                        count = no;
                  break;
            }
            highlight(no, count);
            ch = getch();
            if (ch == '\r')
            {
                  if (no == 7)
                  {
                        if (count == 1)
                              bill();
                        else if (count == 2)
                              add();
                        else if (count == 3)
                              edit();
                        else if (count == 4)
                              d_all();
                        else if (count == 5)
                              d_search();
                        else if (count == 6)
                              del();
                        else
                              exit(0);
                  }
                  if (no == 4)
                  {
                        if (count == 1)
                              d_code();
                        else if (count == 2)
                              d_rate();
                        else if (count == 3)
                              d_quan();
                        else
                              d_mainmenu();
                  }
            }
      }
}