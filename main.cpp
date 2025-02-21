#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>

// Type definitions
#include "types.cpp"

// Utils functions
#include "./utils/cursor.cpp"
#include "./utils/dbill.cpp"
#include "./utils/dis_con.cpp"
#include "./utils/display.cpp"
#include "./utils/highlight.cpp"
#include "./utils/search.cpp"
#include "./utils/window.cpp"

// Panel functions
#include "./functions/add.cpp"
#include "./functions/bill.cpp"
#include "./functions/del.cpp"
#include "./functions/edit.cpp"
#include "./functions/exit.cpp"

using namespace std;

void setCursorPosition(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
rec;
rec item;

void d_mainmenu();
void d_search();

void d_code();
void d_rate();
void d_quan();
void d_all();

int main ()
{
	d_mainmenu();
    return 0;
}