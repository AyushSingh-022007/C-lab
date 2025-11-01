// Create a union containing 6 strings: name, home_address, hostel_address, city, state and zip. Write a C program to display your present address.
#include <stdio.h>
union Add
{
    char name[100];
    char home_address[100];
    char hostel_address[100];
    char city[100];
    char state[100];
    char zip[100];
};
int main()
{
    union Add addr;
    printf("enter name: ");
    scanf("%s", addr.name);
    printf("name: %s\n", addr.name);
    printf("enter home address: ");
    scanf("%s", addr.home_address);
    printf("home address: %s\n", addr.home_address);
    printf("enter hostel address: ");
    scanf("%s", addr.hostel_address);
    printf("hostel address: %s\n", addr.hostel_address);
    printf("Enter City: ");
    scanf("%s", addr.city);
    printf("city: %s\n", addr.city);
    printf("enter state: ");
    scanf("%s", addr.state);
    printf("state: %s\n", addr.state);
    printf("enter zip: ");
    scanf("%s", addr.zip);
    printf("zip: %s\n", addr.zip);
    return 0;
}
