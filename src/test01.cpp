#include<stdio.h>
#include<string.h>
#include"test01.h"

struct Book
{
    char title[50];
    char author[50];
    char subject[100];
    int bookId;
    /* data */
};
struct Answer
{
		char ecno[20];
		char answer_start_time[20];
		char answer_end_time[20];
		char classroom_id[10];
};
int main(int argc, char const *argv[])
{
    struct Book book = {"piao","ii","ll",1};
    printBook(book);


    struct Book book1;
    strcpy(book1.title,"book1 title");
    strcpy(book1.author,"book1 author");
    strcpy(book1.subject,"book1 subject");
    book1.bookId = 2;
    printBook(book1);

    struct Book * book2;
    book2 = &book1;
    printBook(book2);

    /* code */
    return 0;
}

void printAnswer()
{





}
void printBook(struct Book book)
{
    printf(
    " this book's title is %s, \n\
      this book's author is %s, \n\
      this book's subject is %s \n\
      this book's id is %d \n",
    book.title,
    book.author,
    book.subject,
    book.bookId
    );
}
void printBook(struct Book * book)
{
    printf(
    " this book's title is %s, \n\
      this book's author is %s, \n\
      this book's subject is %s \n\
      this book's id is %d \n",
    book->title,
    book->author,
    book->subject,
    book->bookId
    );
}
