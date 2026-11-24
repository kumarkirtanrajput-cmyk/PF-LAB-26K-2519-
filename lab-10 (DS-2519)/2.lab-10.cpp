#include <stdio.h>

struct Product
{
    int ID;
    char Name[50];
    char Category[30];
    float Price;
    int Stock;
};

void displayProductDetails(struct Product p)
{
    float discount, finalPrice;

    discount = p.Price * 0.05;
    finalPrice = p.Price - discount;

    printf("\n----- Product Details -----\n");
    printf("ID: %d\n", p.ID);
    printf("Name: %s\n", p.Name);
    printf("Category: %s\n", p.Category);
    printf("Original Price: %.2f\n", p.Price);
    printf("Stock: %d\n", p.Stock);
    printf("Discount: %.2f\n", discount);
    printf("Final Price: %.2f\n", finalPrice);
}

int main()
{
    struct Product p1 = {
        101, "Laptop", "Electronics", 100000, 10
    };

    displayProductDetails(p1);

    return 0;
}
