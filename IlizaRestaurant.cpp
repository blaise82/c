#include<stdio.h>

int main()

{
    int items;
    float total;
    int response;

    printf(" *********************************************\n");
    printf("			  Iliza's Restaurant		  \n ");
    printf("*********************************************\n\n");
    printf("Make your selection from the menu below:\n\n");
    printf("	 1. Beef pilawu			               RF 5,500\n");
    printf("	 2. French fries with salade		   RF 3,500\n");
    printf("	 3. Nyamacoma                          RF 7,000\n");
    printf(" *********************************************\n\n");
    printf("Select 1, 2, or 3 ---> \n\n");
    scanf("%d", &response);
    printf("How many orders of item number %d would you like?\n", response);
    scanf("%d", &items);

    switch (response)
    {
    case 1:
        printf("You have ordered %d order(s) of Beef pilawu	\n", items);
        total=items * 5500;
        printf("your total is RF%.2f\n\n", total);
        break;

    case 2:
        printf("You have ordered %d order(s) of French fries with salade\n", items);
        total=items*3500;
        printf("Your total is RF %.2f\n\n", total);
        break;

    case 3:
        printf("You have ordered %d order(s) of Nyamacoma \n", items);
        total=items*7000;
        printf("Your total is RF%.2f\n\n", total);
        break;

    default:
        break;

    }

    printf("Thank you for eating at Iliza's!\n\n");
}
