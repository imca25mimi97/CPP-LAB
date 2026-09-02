/*. WAP to define a structure BOOK having members as title, author name, no. of pages, and price. Enter the details of a book and display them. */
#include <stdio.h>

struct BOOK
{
    char title[50];
    char author[50];
    int pages;
    float price;
};

int main()
{
    struct BOOK b;

    printf("Enter book title: ");
    scanf(" %s", b.title);

    printf("Enter author name: ");
    scanf(" %s", b.author);

    printf("Enter number of pages: ");
    scanf("%d", &b.pages);

    printf("Enter price: ");
    scanf("%f", &b.price);

    printf("\n--- Book Details ---\n");
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Pages: %d\n", b.pages);
    printf("Price: %.2f\n", b.price);

    return 0;
}
/*Enter book title: C Programming
Enter author name: Dennis Ritchie
Enter number of pages: 300
Enter price: 450

--- Book Details ---
Title: C Programming
Author: Dennis Ritchie
Pages: 300
Price: 450.008*/
