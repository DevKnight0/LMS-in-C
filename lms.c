#include<stdio.h>
#include"conio2.h"
#include "lms.h"
#include<stdlib.h>
#include<string.h>
void addUser(){
                    FILE *fp=fopen("User.bin","rb"); //will return address if file is present//
                    if(fp==NULL)
                    {

                        fp=fopen("User.bin","wb");
                          User u={"admin","abc"};
                       fwrite(&u,sizeof(u),1,fp);
                        fclose(fp);

                    }
                     else
                        fclose(fp);
                    }

void addStudent(){

               FILE *fp=fopen("student.bin","rb");
               if(fp==NULL)
               {
                   fp=fopen("student.bin","wb");
                   Student stu[10]={{101,"Ajay"},
                                     {102,"Ajit Kumar"},
                                     {103,"Dinesh Raj"},
                                     {104,"Mayank Rathor"},
                                     {105,"Rashmi Sharma"},
                                     {106,"Ram Kumar"},
                                     {107,"Raj"},
                                     {108,"Arpit"},
                                     {109,"Sapna Choudhary"},
                                     {110,"Amrita Singh"}
                                     };
                                     fwrite(stu,10*sizeof(Student),1,fp);
                                     fclose(fp);

               }

               else{
                printf("Exists");
                fclose(fp);
               }





               }









void input()
                /* {   User u;
                     int i;
                 char ch;

                 do{  clrscr();
                      gotoxy(39,5);
                      textcolor(RED);
                      printf("ENTER CREDENTIALS");
                      gotoxy(30,10);
                     textcolor(GREEN);
                     printf("UserId:");
                     textcolor(WHITE);
                     gets(u.userid);//for adding \0 in end//
                     fgets(u.userid,'\n')     //use this
                     char *pos;
                     pos=strchr(u.userid,'\n');
                     *pos='\0';

                    gotoxy(30,11);
                     textcolor(GREEN);
                     printf("Password:");
                     textcolor(WHITE);

                for(i=0;i<19;i++)
                  {   ch=getch();
                     if(ch=='\n' || ch=='\r')
                     break;

                     printf("*");
                     u.pwd[i]=ch;

                  }u.pwd[i]='\0';

                     int j;
                     j=isUserPresent(&u.userid,&u.pwd);
                     if(j!=0)

                    {  clrscr();
                       gotoxy(37,14);
                       textcolor(YELLOW);
                       printf("Welcome Admin :)");
                       getch();
                       clrscr();
                        return 1;
                    }

                  }

                    while(1);
                    return 0;


                }*/




                                     {clrscr();
                        int i,k=0;
                        char uid[20];
                        char pwd[20];

                        textcolor(YELLOW);
                        gotoxy(28,1);
                        printf("LIBRARY MANAGEMENT SYSTEM\n");
                        for(i=1;i<=100;i++)
                        printf("%c",247);
                        gotoxy(32,5);
                        textcolor(YELLOW);
                        printf("LOGIN PANEL");
                        gotoxy(1,7);
                        textcolor(LIGHTGREEN);

                        for(i=1;i<100;i++)
                        printf("%c",247);

                        gotoxy(25,10);
                        textcolor(LIGHTCYAN);
                        printf("ENTER USERID");
                        gotoxy(25,11);
                        textcolor(LIGHTCYAN);
                        printf("ENTER PASSWORD");
                        gotoxy(40,11);
                        textcolor(WHITE);
                        int x=0;

                        do{x++;
                        gotoxy(39,10);
                        fgets(uid,20,stdin);
                        char *pos;
                        pos=strchr(uid,'\n');
                        *pos='\0';
                        i=0;
                        gotoxy(40,11);
                        for(;;)
                        {
                        pwd[i]=getch();
                        if(pwd[i]==13)
                        {
                        break;}

                        printf("*");

                        i++;
                        }

                        pwd[i]='\0';
                        k=isUserPresent(uid,pwd);}

                        while(k==0);
}







int isUserPresent(char *u,char *p)
                 {
                  if(*(u)==0 || *(p)==0)
                  {
                      gotoxy(28,20);
                      textcolor(RED);
                      printf("BOTH FIELDS ARE MANDATORY");
                      getch();
                      gotoxy(28,20);
                      printf("\t\t\t\t\t\t\t");
                      gotoxy(39,10);
                      printf("\t\t\t\t\t\t");
                      gotoxy(40,11);
                      printf("\t\t\t\t\t\t\t");
                      textcolor(WHITE);
                      return 0;

                 }
                      FILE *fp=fopen("User.bin","rb");
                      User user;
                      fread(&user,sizeof(User),1,fp);
                      if(strcmp(u,user.userid) || strcmp(p,user.pwd))
                      {

                          gotoxy(28,20);
                          textcolor(LIGHTRED);
                          printf("INVALID USERNAME OR PASSWORD");
                          getch();
                          gotoxy(27,20);
                          printf("\t\t\t\t\t\t\t");
                          gotoxy(39,10);
                          printf("\t\t\t\t\t\t\t");
                          gotoxy(40,11);
                          printf("\t\t\t\t\t\t\t");
                          textcolor(WHITE);
                          fclose(fp);
                          return 0;
                        }
                        fclose(fp);
                        return 1;
                     }



 void addCategory()
{


     FILE *fp=fopen("category.bin","rb");
     if(fp==NULL)
     {

         fp=fopen("category.bin","wb");
         Category cat[6]={
                      {1,"CSE"},
                      {2,"EC"},
                      {3,"EX"},
                      {4,"IT"},
                      {5,"ME"},
                      {6,"CIVIL"}
                      };
        fwrite(cat,6*sizeof(Category),1,fp);
        fclose(fp);
     }
     else{
        fclose(fp);
     }
}

int enterchoice()
                { int choice,i;
                clrscr();
                textcolor(YELLOW);
                gotoxy(28,1);
                printf("LIBRARY MANAGEMENT SYSTEM\n");

                for(i=0;i<=99;i++)
                    printf("%c",247);
                gotoxy(32,5);
                textcolor(LIGHTGREEN);
                printf("Admin Panel\n");
                gotoxy(1,6);
                for(i=0;i<200;i++)
                printf("%c",176);//five line border
                gotoxy(32,9);
                textcolor(YELLOW);
                printf("1- Add Books");
                gotoxy(32,10);
                printf("2- View All Books");
                gotoxy(32,11);
                printf("3- Search Book");
                gotoxy(32,12);
                printf("4- Issue Book");
                gotoxy(32,13);
                printf("5- Update Book");
                gotoxy(32,14);
                printf("6- Delete Book");
                gotoxy(32,15);
                printf("7- Quit");
                gotoxy(1,17);
                textcolor(LIGHTGREEN);

                for(i=0;i<200;i++)
                    printf("%c",176);

                gotoxy(32,20);
                textcolor(YELLOW);
                printf("Enter Choice:");
                textcolor(WHITE);
                scanf("%d",&choice);
                 return choice;


                }



/*int showCategory()
{
                  int i,b;
                clrscr();
                textcolor(YELLOW);
                gotoxy(28,1);
                printf("LIBRARY MANAGEMENT SYSTEM\n");
                for(i=0;i<=99;i++)
                    printf("%c",247);
                gotoxy(32,5);
                textcolor(LIGHTGREEN);
                printf("* CATEGORIES *");
                gotoxy(1,6);
                for(i=0;i<=200;i++)
                    printf("%c",176);
                gotoxy(36,8);
                textcolor(YELLOW);

                Category cat[6];
                FILE* fp=fopen("category.bin","rb");
                fread(cat,6*sizeof(cat),1,fp);
                for(i=0;i<6;i++)
                {
                    gotoxy(36,10+i);
                printf("%d- %s\n",cat[i].id,cat[i].cat_name);
                }
                 gotoxy(1,18);
                textcolor(LIGHTGREEN);
                for(i=0;i<=200;i++)
                    printf("%c",176);

                fclose(fp);
                    return 1;z

                          gotoxy(28,20);
                          printf("Enter choice:");
                          scanf("%d",&b);
                          return b;

}*/

int showCategory()
{
      int i;
      int choice;
    clrscr();
    textcolor(YELLOW);
    gotoxy(28,1);
    printf("LIBRARY MANAGEMENT SYSTEM\n");
    for(i=1;i<=100;i++)
        printf("%c",247);
    gotoxy(32,5);
    textcolor(LIGHTGREEN);
    printf("* CATEGORIES *");
    gotoxy(1,6);
    for(i=1;i<=200;i++)
        printf("%c",176);
    gotoxy(36,8);
    textcolor(YELLOW);
    Category cat[6];
    FILE* fp=fopen("category.bin","rb");
    fread(cat,6*sizeof(cat),1,fp);
    for(i=0;i<6;i++)
    {
        gotoxy(36,10+i);
        printf("%d- %s\n",cat[i].id,cat[i].cat_name);
    }
     gotoxy(1,18);
    textcolor(LIGHTGREEN);
    for(i=1;i<=200;i++)
        printf("%c",176);
        gotoxy(34,21);
    printf("Enter the choice:");
    textcolor(WHITE);
    scanf("%d",&choice);
    fclose(fp);
    for(;choice<1||choice>6;)
        {
             gotoxy(29,23);
            textcolor(LIGHTRED);
            printf("INVALID CHOICE,TRY AGAIN");
            getch();
            gotoxy(53,21);
            printf("\t\t\t\t\t\t");
            gotoxy(29,23);
            printf("\t\t\t\t\t\t");
            textcolor(WHITE);
            gotoxy(51,21);
            scanf("%d",&choice);
        }
  // if(choice>=1&&choice<=6)
        return choice;
}


int getBookId()
{ int choice=100;
    FILE *fp=fopen("book.bin","rb");
    if(fp==NULL)
        return choice+1;

        //fseek(fp,0L,SEEK_END);
        //int t=ftell(fp)/sizeof(book);
        //fclose(fp);
        //choice=choice + ++t;
        //return choice;
int bid;
    if(fread(&bid,sizeof(bid),1,fp)!=1)
    {
        fclose(fp);
        return choice+1;
    }
fseek(fp,-1L*sizeof(book),SEEK_END); //login for deleted book
fread(&bid,sizeof(bid),1,fp);
fclose(fp);
return bid+1;

}


/*book * getBookDetails()
{
    static book b;
    int i;
    textcolor(YELLOW);
    gotoxy(28,1);
    printf("LIBRARY MANAGEMENT SYSTEM\n");
    for(i=1;i<=100;i++)
        printf("%c",247);
    gotoxy(29,5);
    tetcolor(LIGHTGREEN);
    printf("*ADD BOOK PANEL*");
    gotoxy(1,6);
    for(i=1;i<=200;i++)
        printf("%c",176);

    gotoxy(1,15);
    for(i=1;i<=200;i++)
        printf("%c",176);
    textcolor(YELLOW);

    //GENERATE BOOK ID
     int id_b=getBookId();
   b.bookId=id_b;
   gotoxy(10,9);
   char *pos;
   int valid;
   printf("Book_Id:");
   textcolor(WHITE);
   printf("%d",b.bookId);
   gotoxy(10,10);
   textcolor(YELLOW);
   printf("ENTER BOOK NAME:");
   textcolor(WHITE);

   do{
    valid=1;
    fflush(stdin);
    fgets(b.bookName,50,stdin);
    pos=strchr(b.bookName,'\n');//take string and character and find that character in string and return address of character

    *pos='\0';
    if(strlen(b.bookName)==0)
    {

        valid=0;
        gotoxy(26,22);
        textcolor(LIGHTRED);
        printf("BOOK NAEM IS MANDATORY FIELD");
        getch();
        gotoxy(26,22);
        textcolor(WHITE);
        printf("\t\t\t\t\t\t");
        gotoxy(26,9);
        printf("\t\t\t\t\t\t");
        gotoxy(26,9);
    }

            }while(valid==0);

            gotoxy(10,11);
            textcolor(YELLOW);
            printf("ENTER BOOK AUTHOR");

            do{
                textcolor(WHITE);
                valid=1;
                fflush(stdin);
                fgets(b.authorName,50,stdin);
                pos=strchr(b.authorName,'\n');
                *pos='\0';
                int i=0;
                if(strlen(b.authorName)==0)
                {
                    valid=0;
                    gotoxy(26,22);
                    textcolor(LIGHTRED);
                    printf("AUTHOR NAME IS MANDATORY FIELD");
                    getch();
                    gotoxy(26,22);
                    printf("\t\t\t\t\t\t");
                    gotoxy(28,11);
                    printf("\t\t\t\t\t\t");
                    gotoxy(28,11);

                }

                while(i<strlen(b.authorName))
                {

                    if(!(isalpha(b.authorName[i])))


{


                        valid=0;
                    gotoxy(26,22);
                    textcolor(LIGHTRED);
                    printf("AUTHOR NAME SHOULD CONTAIN ONLY ALPHABETS!");
                    getch();
                    gotoxy(26,22);
                    printf("\t\t\t\t\t\t");
                    gotoxy(28,11);
                    printf("\t\t\t\t\t\t");
                    gotoxy(28,11);
                    break;
                }

            }

         }while(valid=0);

              gotoxy(10,13);
              textcolor(YELLOW);
              printf("ENTER BOOK QUALITY");

        do{
                textcolor(WHITE);
                valid=1;
                fflush(stdin);
            int check=scanf("%d",&b.quantity);
            if(check==0||b.quantity<=0)
            {
                valid=0;
                gotox(30,22);
                textcolor(LIGHTRED);
                printf("QUANTITY SHOULD BE VALID");
                getch();
                gotoxy(25,33);
            }
              }

}*/

book * getBookDetails()
{
    static book b;
    int i;
    textcolor(YELLOW);
    gotoxy(28,1);
    printf("LIBRARY MANAGEMENT SYSTEM\n");
    for(i=1;i<=100;i++)
    {
        printf("%c",247);
    }
    gotoxy(29,5);
    textcolor(LIGHTGREEN);
    printf("* ADD BOOK PANEL *");
    gotoxy(1,6);
    for(i=1;i<=200;i++)
        printf("%c",176);
    gotoxy(1,15);
    for(i=1;i<=200;i++)
        printf("%c",176);
    textcolor(YELLOW);
    int id_b=getBookId();
    b.bookId=id_b;
    gotoxy(10,9);
    char *pos;
    int valid;
    printf("Book Id:");
    textcolor(WHITE);
    printf("%d",b.bookId);
    gotoxy(10,10);
    textcolor(YELLOW);
    printf("Enter Book Name:");
    textcolor(WHITE);
    do{
        valid=1;
        fflush(stdin);
        fgets(b.bookName,50,stdin);
        pos=strchr(b.bookName,'\n');
        *pos='\0';
        if(strlen(b.bookName)==0)
        {
            valid=0;
            gotoxy(26,22);
            textcolor(LIGHTRED);
            printf("BOOK NAME IS A MANDATORY FIELD");
            getch();
            gotoxy(26,22);
            textcolor(WHITE);
            printf("\t\t\t\t\t");
            gotoxy(26,9);
            printf("\t\t\t\t\t");
            gotoxy(26,9);
        }
    }while(valid==0);
    gotoxy(10,11);
    textcolor(YELLOW);
    printf("Enter Book Author:");
        do
        {
            textcolor(WHITE);
            valid=1;
            fflush(stdin);
            fgets(b.authorName,50,stdin);
            pos=strchr(b.authorName,'\n');
            *pos='\0';
            int i=0;
            if(strlen(b.authorName)==0)
            {
                valid=0;
                gotoxy(26,22);
                textcolor(LIGHTRED);
                printf("Author Name Is A Mandatory Field");
                getch();
                gotoxy(26,22);
                printf("\t\t\t\t\t\t");
                gotoxy(28,11);
                printf("\t\t\t\t\t\t");
                gotoxy(28,11);
            }
            while(i<strlen(b.authorName))
            {
                if(!isalpha(b.authorName[i]))
                {
                    valid=0;
                    gotoxy(26,22);
                    textcolor(LIGHTRED);
                    printf("Author Name Should Contains Only Alphabets!");
                    getch();
                    gotoxy(28,11);
                    printf("\t\t\t\t\t");
                    gotoxy(28,11);
                    break;
                }
                i++;
            }
        }while(valid==0);
        gotoxy(10,13);
        textcolor(YELLOW);
        printf("Enter Book Quantity:");

        do
        {
         textcolor(WHITE);
         valid=1;
         fflush(stdin);
         int check=scanf("%d",&b.quantity);
         if(check==0||b.quantity<=0)
         {
             valid=0;
             gotoxy(30,22);
             textcolor(LIGHTRED);
             printf("Quantity Should Be Valid");
             getch();
             gotoxy(25,22);
             printf("\t\t\t\t\t\t");
             gotoxy(30,13);
             printf("\t\t\t\t\t\t");
             gotoxy(30,13);
         }
        }while(valid==0);
        return (&b);
}



void addbooks(book b,int i)
{
    FILE *fp=fopen("Book.bin","ab");
    if(fp==NULL)
    {
        printf("Sorry! File not found");
        exit(1);
    }

    b.categoryId=i;
    fwrite(&b,sizeof(book),1,fp);
    fclose(fp);


}
void show_books()
{
    book b;
    int i;
    textcolor(YELLOW);
    gotoxy(30,1);
    printf("LIBRARY MANAGEMENT SYSTEM\n");
    for(i=0;i<100;i++)
        printf("%c",247);
    gotoxy(34,5);
    textcolor(LIGHTGREEN);
    printf("* BOOK DETAILS *\n");
    for(i=0;i<200;i++)
        printf("%c",176);
    textcolor(YELLOW);
    printf("Book ID \t Book Name \t\t Author Name \t Quantity\tCategory\n");

i=0;
      FILE* fp=fopen("Book.bin","rb");
    if(fp!=NULL)
    {
        while(fread(&b,sizeof(b),1,fp)!=0)
        {
            gotoxy(1,i+10);
            printf("%d",b.bookId);
            gotoxy(18,i+10);
            printf("%s",b.bookName);
             gotoxy(42,i+10);
             printf("%s",b.authorName);
            gotoxy(60,i+10);
            printf("%d",b.quantity);
            gotoxy(76,i+10);
            //printf("%d",b.categoryId);
            printf("%s",getcategoryname(b.categoryId));
            i++;
        }
   }
   printf("\n");
    textcolor(LIGHTGREEN);

    for(i=0;i<200;i++)
           printf("%c",176);


}



char* getcategoryname(int i)
{
    static char name[8];
    FILE* fp=fopen("category.bin","rb");
     Category cat[6];
       if(fp!=NULL)
    {
     fread(cat,6*sizeof(cat),1,fp);

    strcpy(name,cat[i-1].cat_name);

    }
    fclose(fp);
    return name;


}


int searchmenu()
{

    int i;
    textcolor(YELLOW);
    gotoxy(28,1);
    printf("Library Management System\n");

     for(i=1;i<=100;i++)
    {
        printf("%c",247);
    }
    gotoxy(29,5);
    textcolor(LIGHTGREEN);
    printf("*  Search Panel *");
    gotoxy(1,6);
    for(i=1;i<=200;i++)
        printf("%c",176);

         //FOR uppe border
         gotoxy(1,6);
         for(i=1;i<=200;i++)
            printf("%c",176);

         //for lower border
         gotoxy(1,16);
         for(i=1;i<=200;i++)
            printf("%c",176);
         int ch;
         gotoxy(30,10);

         textcolor(YELLOW);
         printf("1. Search Book By ID : ");
         gotoxy(30,11);
         printf("2. Search Book By Name : ");
         gotoxy(30,13);
         textcolor(LIGHTGREEN);
         printf("Enter Your Choice:");
         textcolor(WHITE);

         while(1)
         {
             scanf("%d",&ch);

             if(ch<1||ch>2)

             {
              gotoxy(33,18);
              textcolor(LIGHTRED);
              printf("Incorrect Choice");
              getch();
              gotoxy(30,18);

              printf("\t\t\t\t");
              gotoxy(48,13);

              printf("\t");
              textcolor(WHITE);
             }

              else
                return ch;
            }


    }




void searchBook(int ch)
{

    int result;
    int i;
    clrscr();
    textcolor(YELLOW);
    gotoxy(28,1);
    printf("Library Management System\n");
         for(i=1;i<=100;i++)
    {
        printf("%c",247);
    }
    gotoxy(29,5);
    textcolor(LIGHTGREEN);
    printf("*  Search Panel *");
    gotoxy(1,6);
    for(i=1;i<=200;i++)
        printf("%c",176);

         //FOR uppe border
         gotoxy(1,6);
         for(i=1;i<=200;i++)
            printf("%c",176);

         //for lower border
         gotoxy(1,20);
         for(i=1;i<=200;i++)
            printf("%c",176);



        int id,f=0;
        book b;
        char bName[50];
        FILE *fp=fopen("Book.bin","rb");
        if(ch==1)
        {
            gotoxy(30,10);
            textcolor(YELLOW);
            printf("Enter Book Id: ");
            scanf("%d",&id);

        }

        else if(ch==2)
        {


            gotoxy(20,10);
            textcolor(YELLOW);
            printf(" Enter Book Name You Want To Search: ");
            fflush(stdin);
            gets(bName);

        }
        while(fread(&b,sizeof(book),1,fp)==1)
        {


            result=(ch==1)?(id==b.bookId) : (strcmpi(bName,b.bookName)==0);
            if(result==1)
            {
                gotoxy(30,12);
                textcolor(LIGHTGREEN);
                printf("Book is Available");
                textcolor(LIGHTCYAN);
                gotoxy(30,14);
                printf("Book Id : %d",b.bookId);
                gotoxy(30,15);
                printf("Book Name is: %s",b.bookName);
                gotoxy(30,16);
                printf("Quantity : %d",b.quantity);
                gotoxy(30,17);
                printf("Author Name: %s",b.authorName);
                f=1;
                getch();


            }


        }

               if(f==0)
               {
                   gotoxy(33,15);
                   textcolor(LIGHTRED);
                   printf("No Book Found");
               }
        fclose(fp);

}



int IssueMenu()
{

    int i,choice;
    while(1)
    {


        gotoxy(28,1);
        textcolor(YELLOW);
        printf("Library Management System \n");
        for(i=0;i<100;i++)
            printf("%c",247);

            gotoxy(29,5);
    textcolor(LIGHTGREEN);
    printf("*  Issue Panel *");
    gotoxy(1,6);
    for(i=1;i<=200;i++)
        printf("%c",176);

         //FOR uppe border
         gotoxy(1,6);
         for(i=1;i<=200;i++)
            printf("%c",176);

         //for lower border
         gotoxy(1,20);
         for(i=1;i<=200;i++)
            printf("%c",176);

            textcolor(YELLOW);
            gotoxy(32,9);
            printf("1- Issue a Book");
            gotoxy(32,10);
            printf("2- View Issued Books");
            gotoxy(32,11);
            printf("3- Search Issued Book");
            gotoxy(32,12);
            printf("4- Remove Issued Book");
            gotoxy(32,13);
            printf("5- Quit");
            textcolor(LIGHTGREEN);


            gotoxy(32,18);
            printf("Enter choice: ");

            textcolor(WHITE);
            scanf("%d",&choice);
            if(choice<1||choice>5)
            {

                gotoxy(32,23);
                textcolor(RED);
                printf("Incorrect Choice");
                getch();
                gotoxy(32,23);
                printf("\t\t\t\t\t");
                gotoxy(45,18);
                printf("\t\t\t\t\t\t");

            }
            else break;
            }
            return choice;
}



/*int issueBook(){
       int bookid,i;
       book b;
       int bookfound=0,bookq=0;
       Student stu;
       int roll;
       FILE *fpi=fopen("issuebook.bin","ab");
       FILE *fp=fopen("Book.bin","rb+");
       FILE *fps=fopen("student.bin","rb");

       if(fpi==NULL||fp==NULL || fps==NULL)
       {
           return 0;
       }

       textcolor(YELLOW);
       gotoxy(28,1);
       printf("Library Management System \n");
       for(i=0;i<100;i++)
            printf("%c",247);
            gotoxy(32,5);
            textcolor(LIGHTGREEN);
            printf("Book Issue Panel");



         //FOR uppe border
         gotoxy(1,6);
         for(i=1;i<=200;i++)
            printf("%c",176);

         //for lower border
         gotoxy(1,16);
         for(i=1;i<=200;i++)
            {printf("%c",176);

            gotoxy(25,8);

            printf("Enter Book Id to be Issued: ");
            textcolor(WHITE);
            scanf("%d",&bookid);

            while(fread(&b,sizeof(book),1,fp)==1)
            {
                if(b.bookId==bookid)
               {
                   bookfound=1;

                if(b.quantity>0)
                {
                    bookq=1;
                }
                break;
            }
            }

}


            if(bookfound==0)
            {
                gotoxy(25,17);
                printf("No Book found with the id %d",bookid);
                getch();
                fclose(fp);
                fclose(fpi);
                fclose(fps);
                return 0;
            }

            if(bookq==0)
            {

                gotoxy(25,17);
                printf("Out of Stock");
                getch();
                 fclose(fp);
                fclose(fpi);
                fclose(fps);
                return 0;


            }
            int stufound=0;
            gotoxy(25,9);
            textcolor(LIGHTGREEN);
            printf("Enter Student Roll No: ");
            textcolor(WHITE);
            scanf("%d",&roll);

            while(fread(&stu,sizeof(Student),1,fps)==1)
            {
                if(stu.roll==roll)
                {
                    stufound=1;
                    break;

                }
            }

       if(stufound==0)
       {
           gotoxy(25,17);
           printf("Incorrect Roll no ");
           getch();
           fclose(fp);
                fclose(fpi);
                fclose(fps);
                return 0;

       }
       IssueBook ib;
       ib.roll=roll;
       ib.bookId=bookid;

       fwrite(&ib,sizeof(ib),1,fp);
       //update book quantity

       fseek(fp,-sizeof(int),SEEK_CUR);
       int quant=b.quantity-1;
       fwrite(&quant,sizeof(quant),1,fp);
       fclose(fp);
       fclose(fpi);
                fclose(fps);
                return 1;
       }



char * get_book_name(int bid){
            static char bname[50];
            FILE *fp=fopen("book.bin","rb");
            book b;
            while(fread(&b,sizeof(book),1,fp)==1)
            {

                if(b.bookId==bid)
                {
                    strcpy(bname,b.bookName);
                    fclose(fp);
                    return bname;
                }
            }
            fclose(fp);
            return NULL;

}


void show_issued_book(){

            IssueBook t;
            int i;
            textcolor(YELLOW);
            gotoxy(28,1);
            printf("Library Manage System");
             for(i=0;i<100;i++)
            printf("%c",247);
            gotoxy(31,5);
            textcolor(LIGHTGREEN);
            printf("* Issued Books Details *");
            gotoxy(1,6);
            for(i=1;i<=200;i++)
                printf("%c",176);
            printf("Roll No\t Book");
            FILE *fp=fopen("issuebook.bin","rb");
            int y=10;

            while(fread(&t,sizeof(IssueBook),1,fp)==1)
            {

                gotoxy(1,y);
                textcolor(YELLOW);
                printf("%d",t.roll);
                gotoxy(22,y);

                printf("%s",get_book_name(t.bookId));
                y++;

            }
            textcolor(LIGHTGREEN);
            printf("\n");

            for(i=1;i<=200;i++)
                printf("%c",176);
                fclose(fp);

}*/
int issueBook()
    {
        int bookId,i;
        book b;
        int bookfound=0,bookq=0;
        Student stu;
        int roll;
        FILE *fpi=fopen("Issuebook.bin","ab");
        FILE *fp=fopen("Book.bin","rb+");
        FILE *fps=fopen("student.bin","rb");
        if(fpi==NULL||fp==NULL||fps==NULL)
        {
            return 0;
        }
        textcolor(YELLOW);
        gotoxy(20,1);
        printf("LIBRARY MANAGEMENT SYSTEM\n");
        for(i=0;i<100;i++)
            printf("%c",247);
        gotoxy(32,5);
        textcolor(LIGHTGREEN);
        printf("* BOOK ISSUE PANEL *");
        //for upper border
        gotoxy(1,4);
        for(i=0;i<200;i++)
            printf("%c",176);
        //for lower boreder
        gotoxy(1,12);
        for(i=0;i<200;i++)
            printf("%c",176);
        gotoxy(25,8);
        printf("Enter book id to be issued:");
        textcolor(WHITE);
        scanf("%d",&bookId);
        while(fread(&b,sizeof(b),1,fp)==1)
        {
            if(b.bookId==bookId)
            {
                bookfound=1;
                if(b.quantity>0)
                    bookq=1;
                break;
            }
        }
        if(bookfound==0)
        {
            gotoxy(25,17);
            printf("No Book found with the id %d",bookId);
            getch();
            fclose(fp);
            fclose(fpi);
            fclose(fps);
            return 0;
        }
        if(bookq==0)
        {
            gotoxy(25,17);
            printf("Out Of Stock");
            getch();
                fclose(fp);
                fclose(fpi);
                fclose(fps);
                return 0;
        }
        int stufound=0;
        gotoxy(25,9);
        textcolor(LIGHTGREEN);
        printf("Enter student roll no.:");
        textcolor(WHITE);
        scanf("%d",&roll);
        while(fread(&stu,sizeof(stu),1,fps)==1)
        {
            if(stu.roll==roll)
            {
                stufound=1;
                break;
            }
        }
        if(stufound==0)
        {
            gotoxy(25,17);
            printf("Incorrect Roll number");
            getch();
            fclose(fp);
            fclose(fps);
            fclose(fpi);
            return 0;
        }
        IssueBook ib;
        ib.roll=roll;
        ib.bookId=bookId;
        fwrite(&ib,sizeof(ib),1,fpi);
        //update book quantity
        fseek(fp,-sizeof(int),SEEK_CUR);
        int quant=b.quantity-1;
        fwrite(&quant,sizeof(quant),1,fp);
        fclose(fp);
        fclose(fpi);
        fclose(fps);
        return 1;
    }



char* get_book_name(int bid)
    {
        static char bname[50];
        FILE* fp=fopen("Book.bin","rb");
        book b;
        while(fread(&b,sizeof(b),1,fp)==1)
        {
            if(b.bookId==bid)
            {
                strcpy(bname,b.bookName);
                fclose(fp);
                return bname;
            }
        }
        fclose(fp);
        return NULL;
    }




void show_issued_book()
{
    IssueBook t;
    int i;
    textcolor(YELLOW);
    gotoxy(21,1);
    printf("LIBRARY MANAGEMENT SYSTEM\n");
    for(i=0;i<100;i++)
        printf("%c",247);
    gotoxy(31,5);
    textcolor(LIGHTGREEN);
    printf("* ISSUED BOOKS DETAILS *");
    gotoxy(1,6);
    for(i=0;i<200;i++)
        printf("%c",176);
    textcolor(YELLOW);
    printf("Roll Number\t Book Name");
    FILE* fp=fopen("Issuebook.bin","rb");
    int y=10;
    while(fread(&t,sizeof(t),1,fp)==1)
    {
        gotoxy(1,y);
        textcolor(YELLOW);
        printf("%d",t.roll);
        gotoxy(22,y);
        //Get book name
        printf("%s",get_book_name(t.bookId));
        y++;
    }
    textcolor(LIGHTGREEN);
    printf("\n");
    for(i=0;i<200;i++)
        printf("%c",176);
    fclose(fp);
}





void search_issued_book()
{
    int i;
    int id,f=0;
    IssueBook ib;
    clrscr();
    textcolor(YELLOW);
    gotoxy(28,1);
    printf("Library Management System \n");

    for(i=1;i<=100;i++)
          printf("%c",247);

            gotoxy(32,5);
            textcolor(LIGHTGREEN);
            printf("Search Panel");



         //FOR uppe border
         gotoxy(1,6);
         for(i=1;i<=200;i++)
            printf("%c",176);

         //for lower border
         gotoxy(1,20);
         for(i=1;i<=200;i++)
            printf("%c",176);



    FILE *fp=fopen("Issuebook.bin","rb");
    gotoxy(30,10);
    textcolor(YELLOW);
    printf("Enter Book Id:");
    scanf("%d",&id);

    while(fread(&ib,sizeof(IssueBook),1,fp)==1)
    {

        if(id==ib.bookId)
        {

            gotoxy(30,12);
            textcolor(LIGHTGREEN);
            printf("Issued Book Details: ");
            textcolor(LIGHTCYAN);
            gotoxy(30,14);
            printf("Roll No: %d",ib.roll);
            gotoxy(30,15);
            printf("Student Name: %s",get_student_name(ib.roll));
            gotoxy(30,16);
            printf("Book Id: %d",ib.bookId);
            gotoxy(30,17);
            printf("Book Name: %s", get_book_name(ib.bookId));
            f=1;
            getch();
        }

    }
    if(f==0)
    {
        gotoxy(31,15);
        textcolor(LIGHTRED);
        printf("No details of book %d found in issued book",id);

    }
    fclose(fp);



}

char * get_student_name(int roll)
{
     static char bname[50];
        FILE* fp=fopen("student.bin","rb");
        Student b;
        while(fread(&b,sizeof(b),1,fp)==1)
        {
            if(b.roll==roll)
            {
                strcpy(bname,b.name);
                fclose(fp);
                return bname;
            }
        }
        fclose(fp);
        return NULL;

}

/*void delete_book()
{

    int i;
    int result;
    int id,f=0;
    book b;

    clrscr();
    textcolor(YELLOW);
    gotoxy(28,1);
    printf("Library Management System \n");

    for(i=1;i<=100;i++)
          printf("%c",247);

            gotoxy(32,5);
            textcolor(LIGHTGREEN);
            printf("Search Panel");



         //FOR uppe border
         gotoxy(1,6);
         for(i=1;i<=200;i++)
            printf("%c",176);

         //for lower border
         gotoxy(1,20);
         for(i=1;i<=200;i++)
            printf("%c",176);


            FILE *fp=fopen("book.bin","rb");
            gotoxy(30,10);
            textcolor(YELLOW);
            printf("Enter Book Id: ");
            scanf("%d",&id);
            fseek(fp,0L,SEEK_END);


            long rec_count=ftell(fp)/sizeof(struct book);
            rewind(fp);

        book *p=(book *)malloc((rec_count)*sizeof(struct book));
        i=0;

        while(fread(&b,sizeof(book),1,fp)==1)
        {

            if(id!=b.bookId)
            {
                *(p+i)=b;
                i++;
            }
            else f=1;

        }
        if(f==0){
            gotoxy(33,15);
            textcolor(LIGHTRED);
            printf("No Book Found Of Id %d",id);
            fclose(fp);
            free(p);
            return;
        }

            if(fopen("book.bin","wb");
            getch();

            fwrite(p,i*sizeof(struct book),1,fp);
            fclose(fp);
            free(p);
            gotoxy(33,15);
            textcolor(LIGHTRED);
            printf("Book of Id %d deleted successful!",id);
            return;
            }
*/
void delete_book()
{
int i,id,f=0,c=0;
book b;
clrscr();
textcolor(YELLOW);
gotoxy(28,1);
printf("LIBRARY MANAGEMENT SYSTEM\n");
for(i=0;i<100;i++)
    printf("%c",247);
gotoxy(32,5);
textcolor(LIGHTGREEN);
printf("* DELETE PANEL *");
//for upper border
gotoxy(1,6);
for(i=0;i<200;i++)
    printf("%c",176);
//for lower border
gotoxy(1,19);
for(i=0;i<200;i++)
    printf("%c",176);

    FILE* fp=fopen("Book.bin","rb");
    gotoxy(30,10);
    textcolor(YELLOW);
    printf("Enter the Book ID:");
    scanf("%d",&id);
    fseek(fp,0L,SEEK_END);
    long rec_count=(ftell(fp)/sizeof(book));
    rewind(fp);
    book* p=(book*)malloc(rec_count*sizeof(book));
    i=0;
    while(fread(&b,sizeof(b),1,fp)==1)
    {
        if(id!=b.bookId)
        {
            *(p+i)=b;
            i++;
        }
        else
        {
            f=1;
            if(rec_count==1)
                c=1;
        }
    }
    if(f==0)
    {
        gotoxy(29,15);
        textcolor(LIGHTRED);
        printf("No Book Found Of ID %d",id);
        getch();
        fclose(fp);
        free(p);
        return;
    }
    fp=fopen("Book.bin","wb");
    if(c!=1)
    fwrite(p,i*sizeof(book),1,fp);
    fclose(fp);
    free(p);
    gotoxy(26,15);
    textcolor(LIGHTGREEN);
    printf("Book of Id %d deleted successfully!",id);
    getch();
    return;
}


/*
void update_book()
{
    int i,id,f=0;
    book b;
    FILE* fp=fopen("Book.bin","rb+");
    clrscr();
    textcolor(YELLOW);
    gotoxy(28,1);
    printf("LIBRARY MANAGEMENT SYSTEM\n");
    for(i=0;i<100;i++)
    printf("%c",247);
    gotoxy(32,5);
    textcolor(LIGHTGREEN);
    printf("* UPDATE PANEL *");
    //for upper border
    gotoxy(1,6);
    for(i=0;i<200;i++)
    printf("%c",176);
    //for lower border
    gotoxy(1,20);
    for(i=0;i<200;i++)
        printf("%c",176);

    gotoxy(20,9);
    printf("Enter Book ID:");
    textcolor(WHITE);
    scanf("%d",&id);
    while(fread(&b,sizeof(b),1,fp)==1)
    {
        if(id==b.bookId)
        {
            f=1;
            gotoxy(17,11);
            textcolor(LIGHTCYAN);
            printf("Book name is : %s",b.bookName);
            gotoxy(17,12);
            printf("Author Name  : %s",b.authorName);
            gotoxy(17,13);
            printf("Quantity     : %d",b.quantity);
            gotoxy(17,14);
            printf("Category     : %s",getcategoryname(b.categoryId));

    textcolor(WHITE);
    char arr[20],c;
    gotoxy(32,11);
    fflush(stdin);
    c=getch();
    if(c==13)
    {
        gotoxy(32,12);
        arr[0]='\0';
    }
    else
    {
        printf("\t\t\t\t\t\t");
        gotoxy(32,11);
        arr[0]=c;
        printf("%c",c);
        fgets(&arr[1],19,stdin);
        char *p=strchr(arr,'\n');
        *p='\0';
        strcpy(b.bookName,arr);
        gotoxy(32,12);
    }
textcolor(WHITE);
    fflush(stdin);
    c=getch();
    if(c==13)
    {
        gotoxy(32,13);
        arr[0]='\0';
    }
    else
    {
        printf("\t\t\t\t\t\t");
        gotoxy(32,12);
        arr[0]=c;
        printf("%c",c);
        fgets(&arr[1],19,stdin);
        char *p=strchr(arr,'\n');
        *p='\0';
        strcpy(b.authorName,arr);
        gotoxy(32,13);
    }

    c=getch();
    int quant=0,a;
    if(c==13)
    {
        gotoxy(32,14);
        arr[0]='\0';
        quant=b.quantity;
    }
    else
    {
        gotoxy(32,13);
        printf("\t\t\t\t\t\t");
        gotoxy(32,13);
        arr[0]=c;
        printf("%c",c);
        fgets(&arr[1],19,stdin);
        char* p=strchr(arr,'\n');
        *p='\0';
        int j=strlen(arr);
        for(i=0;arr[i]!='\0';i++)
        {
            a=arr[i]-48;
            quant+=a*pow(10,j-i-1);

        }
    }
    b.quantity=quant;

do{
   gotoxy(32,14);
    fflush(stdin);
    textcolor(WHITE);
    c=getch();
    if(c==13)
    {
        gotoxy(32,15);
        arr[0]='\0';
    }
    else
    {
        printf("\t\t\t\t\t\t");
        gotoxy(32,14);
        arr[0]=c;
        printf("%c",c);
        fgets(&arr[1],19,stdin);
        char* p=strchr(arr,'\n');
        *p='\0';
        i=getcategoryid(arr);
        if(i==0)
        {
            gotoxy(29,23);
            textcolor(LIGHTRED);
            printf("Sorry no such category exist");
            getch();
            gotoxy(29,23);
            printf("\t\t\t\t\t\t");
            gotoxy(32,14);
        }
        else
        {
        b.categoryId=i;
        }
    }

    }while(i==0);
 fseek(fp,-1L*sizeof(book),SEEK_CUR);
fwrite(&b,sizeof(b),1,fp);
rewind(fp);
break;
    }
    }

if(f==0)
{
    gotoxy(29,23);
    textcolor(LIGHTRED);
    printf("NO SUCH ID EXIST");
}
else
{
    gotoxy(29,23);
    textcolor(LIGHTGREEN);
    printf("Book Updated Successfully");
}

    fclose(fp);
    getch();

}
*/
void update_book()
{
    int i,id,f=0;
    book b;
    FILE* fp=fopen("Book.bin","rb+");
    clrscr();
    textcolor(YELLOW);
    gotoxy(28,1);
    printf("LIBRARY MANAGEMENT SYSTEM\n");
    for(i=0;i<100;i++)
    printf("%c",247);
    gotoxy(32,5);
    textcolor(LIGHTGREEN);
    printf("* UPDATE PANEL *");
    //for upper border
    gotoxy(1,6);
    for(i=0;i<200;i++)
    printf("%c",176);
    //for lower border
    gotoxy(1,20);
    for(i=0;i<200;i++)
        printf("%c",176);

    gotoxy(20,9);
    printf("Enter Book ID:");
    textcolor(WHITE);
    scanf("%d",&id);
    while(fread(&b,sizeof(b),1,fp)==1)
    {
        if(id==b.bookId)
        {
            f=1;
            gotoxy(17,11);
            textcolor(LIGHTCYAN);
            printf("Book name is : %s",b.bookName);
            gotoxy(18,12);
            printf("Author Name : %s",b.authorName);
            gotoxy(21,13);
            printf("Quantity : %d",b.quantity);
            gotoxy(21,14);
            printf("Category : %s",getcategoryname(b.categoryId));

    textcolor(WHITE);
    char arr[20],c;
    gotoxy(32,11);
    fflush(stdin);
    /*c=getch();
    if(c==13)
    {
        gotoxy(32,12);
        arr[0]='\0';
    }
    else
    {
        printf("\t\t\t\t\t");
        gotoxy(32,11);
        arr[0]=c;
        printf("%c",c);
        fgets(&arr[1],19,stdin);
        char *p=strchr(arr,'\n');
        *p='\0';
        strcpy(b.bookName,arr);
        gotoxy(32,12);
    }*/
    for(i=0;c!=13;)
    {
        c=getch();
        if(c==13)
        {
            gotoxy(32,12);
            arr[i]='\0';
        }
        else if(c==8)
        {
            if(i>0)
            {
            printf("\b \b");
            i--;
            }
            if(i==0)
            {
                textcolor(LIGHTCYAN);
                printf("%s",b.bookName);
                gotoxy(32,11);
            }
        }
        else
        {
            if(i==0)
            {
            printf("\t\t\t\t");
            gotoxy(32,11);
            }
            arr[i]=c;
            textcolor(WHITE);
            printf("%c",c);
            i++;
        }
    }
    if(i>0)
         strcpy(b.bookName,arr);
   /* c=getch();
    if(c==13)
    {
        gotoxy(32,13);
        arr[0]='\0';
    }
    else
    {
        printf("\t\t\t\t\t");
        gotoxy(32,12);
        arr[0]=c;
        printf("%c",c);
        fgets(&arr[1],19,stdin);
        char *p=strchr(arr,'\n');
        *p='\0';
        strcpy(b.authorName,arr);
        gotoxy(32,13);
    }*/
    c=0;
    for(i=0;c!=13;)
    {
        c=getch();
        if(c==13)
        {
            arr[i]='\0';
            gotoxy(32,13);
        }
        else if(c==8)
        {
            if(i>0)
            {
                printf("\b \b");
                i--;
            }
            if(i==0)
            {
                textcolor(LIGHTCYAN);
                printf("%s",b.authorName);
                gotoxy(32,12);
            }
        }
            else
            {
                if(i==0)
                {
                    printf("\t\t\t\t");
                    gotoxy(32,12);
                }
                arr[i]=c;
                textcolor(WHITE);
                printf("%c",c);
                i++;

            }
        }
if(i>0)
    strcpy(b.authorName,arr);

c=0;
    int quant=0,a;
    /*if(c==13)
    {
        gotoxy(32,14);
        arr[0]='\0';
        quant=b.quantity;
    }
    else
    {
        gotoxy(32,13);
        printf("\t\t\t\t\t");
        gotoxy(32,13);
        arr[0]=c;
        printf("%c",c);
        fgets(&arr[1],19,stdin);
        char* p=strchr(arr,'\n');
        *p='\0';
        int j=strlen(arr);
        for(i=0;arr[i]!='\0';i++)
        {
            a=arr[i]-48;
            quant+=a*pow(10,j-i-1);

        }
    }*/
   for(i=0;c!=13;)
    {
        c=getch();
        if(c==13)
        {
            arr[i]='\0';
            gotoxy(32,13);
        }
        else if(c==8)
        {
            if(i>0)
            {
                printf("\b \b");
                i--;
            }
            if(i==0)
            {
                textcolor(LIGHTCYAN);
                printf("%d",b.quantity);
                gotoxy(32,13);
            }
        }
        else
        {
           if(i==0)
                {
                    printf("\t\t\t\t");
                    gotoxy(32,13);
                }
            if(c>=48&&c<=57)
               {
                arr[i]=c;
                textcolor(WHITE);
                printf("%c",c);
                i++;
                }
                else
                {
                    textcolor(LIGHTRED);
                    gotoxy(28,18);
                    printf("PLEASE ENTER THE NUMERICAL VALUE");
                    getch();
                    gotoxy(28,18);
                    printf("\t\t\t\t\t\t");
                    gotoxy(32,13);
                    printf("\t\t\t");
                    gotoxy(32,13);
                    i=0;
                }
        }
    }
     if(i>0)
    {
         int j=strlen(arr);
        for(i=0;arr[i]!='\0';i++)
        {
            a=arr[i]-48;
            quant+=a*pow(10,j-i-1);
        }
         b.quantity=quant;
     }


int j;
do{
    gotoxy(32,14);
    fflush(stdin);
    textcolor(WHITE);
    /*c=getch();
    if(c==13)
    {
        gotoxy(32,15);
        arr[0]='\0';
    }
    else
    {
        printf("\t\t\t\t\t");
        gotoxy(32,14);
        arr[0]=c;
        printf("%c",c);
        fgets(&arr[1],19,stdin);
        char* p=strchr(arr,'\n');
        *p='\0';
        i=getcategoryid(arr);
        if(i==0)
        {
            gotoxy(29,23);
            textcolor(LIGHTRED);
            printf("Sorry no such category exist");
            getch();
            gotoxy(29,23);
            printf("\t\t\t\t\t\t");
            gotoxy(32,14);
        }
        else
        {
        b.categoryId=i;
        }
    }*/
  c=0;
    for(i=0;c!=13;)
    {
        c=getch();
        if(c==13)
        {
            arr[i]='\0';

        }
        else if(c==8)
        {
            if(i>0)
            {
                printf("\b \b");
                i--;
            }
            if(i==0)
            {
                textcolor(LIGHTCYAN);
                printf("%s",getcategoryname(b.categoryId));
                gotoxy(32,14);
            }
        }
          else
            {
                if(i==0)
                {
                    printf("\t\t\t\t");
                    gotoxy(32,14);
                }
                arr[i]=c;
                textcolor(WHITE);
                printf("%c",c);
                i++;
            }
    }
    if(i==0)
    {
        break;
    }
    else
    {
         j=getcategoryid(arr);
        if(j==0)
        {
            gotoxy(29,23);
            textcolor(LIGHTRED);
            printf("Sorry no such category exist");
            getch();
            gotoxy(29,23);
            printf("\t\t\t\t\t\t");
            gotoxy(32,14);
        }
        else
        {
        b.categoryId=j;
        }
    }
    }while(j==0);
 fseek(fp,-1L*sizeof(book),SEEK_CUR);
fwrite(&b,sizeof(b),1,fp);
rewind(fp);
break;
    }
}

if(f==0)
{
    gotoxy(29,23);
    textcolor(LIGHTRED);
    printf("NO SUCH ID EXIST");
}
else
{
    gotoxy(29,23);
    textcolor(LIGHTGREEN);
    printf("Book Updated Successfully");
}

    fclose(fp);
    getch();

}


int getcategoryid(char arr[20])
{
   Category cat;
   int f=0;
    FILE* fp=fopen("category.bin","rb");
    while(fread(&cat,sizeof(cat),1,fp)==1)
    {
        if(strcmp(arr,cat.cat_name)==0)
        {
           f=cat.id;
           fclose(fp);
           break;
        }
    }
    return f;
}





void remove_Issued_book()
{
     int i,g,roll;
    FILE *fp=fopen("Book.bin","rb+");
     clrscr();
    textcolor(YELLOW);
    gotoxy(28,1);
    printf("LIBRARY MANAGEMENT SYSTEM\n");
    for(i=0;i<100;i++)
    printf("%c",247);
    gotoxy(32,5);
    textcolor(LIGHTGREEN);
    printf("* DELETE PANEL *");
    //for upper border
    gotoxy(1,6);
    for(i=0;i<200;i++)
    printf("%c",176);
    //for lower border
    gotoxy(1,20);
    for(i=0;i<200;i++)
        printf("%c",176);
    gotoxy(30,9);
    printf("Enter Student roll number:");
    textcolor(WHITE);
    scanf("%d",&roll);



    FILE* fpi=fopen("Issuebook.bin","rb+");
    fseek(fpi,0L,SEEK_END);
    int t=ftell(fpi)/sizeof(IssueBook);
    rewind(fpi);
    IssueBook ib;
    int f=0,c=0;
    IssueBook *p=(IssueBook*)malloc(t*sizeof(IssueBook));
    i=g=0;

     int quant;
    book b;

    while(fread(&ib,sizeof(ib),1,fpi)==1)
    {
        if(roll!=ib.roll)
        {
            *(p+i)=ib;
            i++;
        }
        else
        {
            f=1;
            if(t==1)
                c=1;

         while(fread(&b,sizeof(b),1,fp)==1)
            {
                if(ib.bookId==b.bookId)
                {
                     fseek(fp,-sizeof(int),SEEK_CUR);
                    quant=b.quantity+1;
                    fwrite(&quant,sizeof(quant),1,fp);
                    fclose(fp);
                    g=1;
                }
            }

        }
        if(g!=1)
        fclose(fp);

    }
    if(f==0)
    {
        gotoxy(30,20);
        textcolor(LIGHTRED);
        printf("No Issued Book for roll number %d found",roll);
        getch();
        fclose(fpi);
        free(p);
        return;
    }
      fpi=fopen("Issuebook.bin","wb");
    if(c!=1)
    fwrite(p,i*sizeof(IssueBook),1,fpi);
    fclose(fpi);
    free(p);
    gotoxy(26,15);
    textcolor(LIGHTGREEN);
    printf("Book issued to roll number %d removed successfully!",roll);

   /*  while(fread(&b,sizeof(b),1,fp)==1)
        {
            if(b.bookId==bookId)
            {
                bookfound=1;
                if(b.quantity>0)
                    bookq=1;
                break;
            }
        }
        if(bookfound==0)
        {
            gotoxy(25,17);
            printf("No Book found with the id %d",bookId);
            getch();
            fclose(fp);
            fclose(fpi);
            fclose(fps);
            return 0;
        }
        if(bookq==0)
        {
            gotoxy(25,17);
            printf("Out Of Stock");
            getch();
                fclose(fp);
                fclose(fpi);
                fclose(fps);
                return 0;
        }

    fseek(fp,-sizeof(int),SEEK_CUR);
        int quant=b.quantity-1;
        fwrite(&quant,sizeof(quant),1,fp);
        */
        getch();
    return;



}




void update()
{
    FILE* fpi=fopen("Issuebook.bin","rb+");
    FILE* fp=fopen("Book.bin","rb");
    int i=0;
    fseek(fpi,0L,SEEK_END);
    int t=ftell(fp)/sizeof(IssueBook);//no of records
    IssueBook *p=(IssueBook*)malloc(t*sizeof(IssueBook));
    rewind(fpi);
    IssueBook ib;
    book b;
    while(fread(&b,sizeof(b),1,fp)==1)
    {
        while(fread(&ib,sizeof(ib),1,fpi)==1)
        {
            if(ib.bookId==b.bookId)
            {
                *(p+i)=ib;
                i++;
                printf("YES");
            }
        }
        rewind(fpi);
    }
    fclose(fpi);
    fclose(fp);
    fpi=fopen("Issuebook.bin","wb");
     fwrite(p,i*sizeof(IssueBook),1,fpi);
     free(p);
     fclose(fpi);
}
