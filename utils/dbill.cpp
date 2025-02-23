#include <stdio.h>
#include <windows.h>

#include "./gotoxy.cpp"

void dbill();

void dbill()
{
      int i;
      gotoxy(20, 10);
      //;
      for (i = 1; i <= 10; i++)
            printf("*");
      printf(" * FASHION WEAR * ");
      for (i = 1; i <= 10; i++)
            printf("*");
      printf("\n\n");
      gotoxy(30, 11);
      printf("Departmental Store");
      // textcolor(1);
      gotoxy(32, 25);
      printf("CUSTOMER'S BILL");
      // textcolor(8);
      gotoxy(13, 27);
      printf("SN.   Item Name     Quantity     Rate          Total");
}