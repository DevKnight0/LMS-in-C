#include <stdio.h>
#include <stdlib.h>
#include "lms.h"
#include "conio2.h"

int main()
{ gotoxy(30,10);
textcolor(YELLOW);
printf("WELCOME TO LIBRARY MANAGEMENT SYSTEM");
gotoxy(22,13);
textcolor(LIGHTGREEN);
printf("*Having Fun Is Hard. When You Have A Library Card :)*");
getch();
textcolor(YELLOW);
addUser();
addStudent();
addCategory();

int choice;
input();
while(1){
        clrscr();
   choice=enterchoice();
if(choice==7)
    {
       exit(0);
    }

    switch(choice)
    {
case 1:
        clrscr();
        book *b;
        char bchoice;
        int  i;
        //to add multiple books
        do{
        clrscr();
        i=showCategory();
        clrscr();
        b=getBookDetails();
        addbooks(*b,i);
        gotoxy(25,20);
        textcolor(LIGHTGREEN);
        printf("Do you want to add more books? (Y/N): ");
        fflush(stdin);
        textcolor(WHITE);
        scanf("%c",&bchoice);
        }
        while(bchoice=='Y'|| bchoice=='y');

        break;

case 2:
    clrscr();
        show_books();
        getch();
        break;

case 3:
    clrscr();
    int ch=searchmenu();
    searchBook(ch);
    getch();
    clrscr();

        break;


case 4:
    clrscr();
    int m;

    m=IssueMenu();
    switch(m)
    {
    case 1:
        clrscr();
        int i=issueBook();
        if(i==0)
        {

            gotoxy(25,18);
            printf("Booking Failed");

        }

        else{
            gotoxy(25,18);
            printf("Booking Successful");

        }
        break;

    case 2:
        clrscr();
        show_issued_book();
        getch();
        break;

    case 3:
        clrscr();
       search_issued_book();
        getch();
        break;

    case 4:
        clrscr();
        printf("Remove Issue Book Function Call");
        remove_Issued_book();
        getch();
        break;
    }
           getch();
        break;
    case 5:
        update_book();
        break;
    case 6:
        delete_book();
        update();
        break;
    default:
        printf("Wrong input");
    }
   }
    return 0;


}
