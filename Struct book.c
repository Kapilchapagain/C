#include <stdio.h>
#include <string.h>
struct BOOK 
{
    int book_id;
    char book_name[50];
    float price;
};
int main()
 {
    int N, i;
    float max_price = 0.0;
    int max_index = 0;
    struct BOOK books[50];
    printf("Enter the number of books: ");
    scanf("%d", &N);
    for (i = 0; i < N; i++)
	 {
        printf("Enter the book ID: ");
        scanf("%d", &books[i].book_id);
        printf("Enter the book name: ");
        scanf("%s", books[i].book_name);
        printf("Enter the book price: ");
        scanf("%f", &books[i].price);
        
        if (books[i].price > max_price)
		 {
            max_price = books[i].price;
            max_index = i;
        }
    }
    printf("\nThe details of the most expensive book are:\n");
    printf("Book ID: %d\n", books[max_index].book_id);
    printf("Book Name: %s\n", books[max_index].book_name);
    printf("Price: %0.2f\n", books[max_index].price);
    return 0;
}
