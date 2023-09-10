#ifndef LMS_H_INCLUDED
#define LMS_H_INCLUDED

struct User
{
    char userid[20];
    char pwd[20];
};

struct Category
{
    int id;
    char cat_name[20];
};

struct book
{
    int bookId;
    char bookName[50];
    char authorName[50];
    int categoryId;
    int quantity;
};

struct Student
{
    int roll;
    char name[30];
};

struct IssueBook
{
    int roll;
    int bookId;
};

typedef struct IssueBook IssueBook;
typedef struct Student Student;
typedef struct book book;
typedef struct Category Category;
typedef struct User User;

int enterchoice();
void addUser(); //will make fill to save admin details//
void addCategory(); //take one category and  write in file//
void input(); //will take userid pwd //
int isUserPresent(char *,char *); //will return 0 or 1 upon user input userid and pwd//
int showCategory(); //return book category as selected by user//
book * getBookDetails(); //for check book details i.e no of books available of same author//
void addbooks(book,int); //will add book details//
void show_books(); //show books//
int getBookId();
char * getcategoryname();
int searchmenu();
void searchBook(int);
int  IssueMenu();
int issueBook();

void show_issued_book();
void search_issued_book();
void remove_Issued_book();
void addStudent();
char * get_book_name(int);
char * get_student_name(int);

void delete_book();
int getcategoryid(char *);
void update();
void update_book();
#endif // LMS_H_INCLUDED
