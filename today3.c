#include <stdio.h>
struct Book
{
    int bookCode;
    char bookTitle[400];
    char writerName[40];
    float cost;
};
void show(struct Book b)
{
    printf("about book\n");
    printf("book ID: %d\n", b.bookCode);
    printf("title: %s\n", b.bookTitle);
    printf("author: %s\n", b.writerName);
    printf("price: %.2f\n", b.cost);
}
int main()
{
    struct Book myBook;
    printf("enter Book ID: ");
    scanf("%d", &myBook.bookCode);
    printf("enter Book Title: ");
    scanf("%s", myBook.bookTitle);
    printf("enter Author Name: ");
    scanf("%s", myBook.writerName);
    printf("enter Price: ");
    scanf("%f", &myBook.cost);
    show(myBook);
    return 0;
}
