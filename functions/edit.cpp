#include <stdio.h>

void edit()
{
    int flag = 0, choice;
    char x[ACS], y[ACS];
    FILE *file;
    int size;
    system("cls");
        // textcolor(0);
        // textbackground(11);
    window(20, 63, 20, 46);
    gotoxy(35, 18);
    printf("EDIT RECORDS");
    gotoxy(35, 18);
    printf("EDIT RECORDS");
    gotoxy(25, 23);
    printf("enter item code: ");
    scanf("%s", x);
    flag = check(x);
    if (flag == 0) {
        file = fopen("record.txt", "r+b");
        rewind(file);
        while (fread(&item, sizeof(item), 1, file)) {
            if (strcmp(item.code, x) == 0) {
                gotoxy(25, 27);
                printf("name\t= %s", item.name);
                gotoxy(25, 28);
                printf("code\t= %s", item.code);
                gotoxy(25, 29);
                printf("rate\t= %g", item.rate);
                gotoxy(25, 30);
                printf("quantity\t= %d", item.quantity);
                gotoxy(25, 32);
                printf("Do you want to edit this record?(y/n): ");
                flush(file);
                if ( toupper(getche()) == 'Y' )
                {
                    //textcolor(0);
                    gotoxy(25, 34);
                    printf("1. Edit name");
                    gotoxy(25, 35);
                    printf("2. Edit code");
                    gotoxy(25, 36);
                    printf("3. Edit rate");
                    gotoxy(25, 37);
                    printf("4. Edit quantity");
                    gotoxy(25, 39);
                    printf("Enter your choice (1, 2, 3, 4): ");
                    scanf("%d", &choice);
                    switch (choice) {
                        case 1:
                            system("cls");
                            window(20, 48, 20, 40);
                            gotoxy(35, 18);
                            printf("EDIT RECORD");
                            gotoxy(25, 24);
                            printf("Enter new name: ");
                            scanf("%s", item.name);
                            size = sizeof(item);
                            fseek(file, -size, SEEK_CUR);
                            fwrite(&item, sizeof(item), 1, file);
                            break;
                        case 2:
                            system("cls");
                            window(23, 65, 20, 40);
                            gotoxy(35, 18);
                            printf("EDIT RECORD");
                            gotoxy(25, 24);
                            c_code(y);
                            strcpy(item.code, y);
                            size = sizeof(item);
                            fseek(file, -size, SEEK_CUR);
                            fwrite(&item, sizeof(item), 1, file);
                            break;
                        case 3:
                            system("cls");
                            window(23, 65, 20, 40);
                            gotoxy(35, 18);
                            break;
                        case 4:
                            gotoxy(25, 41);
                            printf("Enter new quantity: ");
                            scanf("%d", &item.quantity);
                            break;
                        default:
                            gotoxy(25, 41);
                            printf("Invalid choice!");
                            break;
                    }
                    gotoxy(27, 30);
                    printf("Record updated successfully!");
                    break;
                }
            }
        }
    }
    else if ( flag == 1 )
    {
        gotoxy(25, 27);
        printf("Record not found!");
    }
    getch();
    fclose(file);
    d_mainmenu();
}