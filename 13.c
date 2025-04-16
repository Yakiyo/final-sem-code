/*
Write a function that receives an address of a person structure and reads all the
information from the user and saves into the structure
*/


#include <stdio.h>
#include <string.h>

#define SIZE 100

typedef struct {
    int road_no;
    int house_no;
    char district[SIZE];
    int post_code;
} Address;

typedef struct {
    char name[SIZE];
    int age;
    Address address;
} Person;

void readPersonInfo(Person *p) {
    printf("Enter name: ");
    fgets(p->name, SIZE, stdin);
    p->name[strcspn(p->name, "\n")] = '\0';  

    printf("Enter age: ");
    scanf("%d", &p->age);
    getchar();  

    printf("Enter road number: ");
    scanf("%d", &p->address.road_no);

    printf("Enter house number: ");
    scanf("%d", &p->address.house_no);
    getchar();  

    printf("Enter district: ");
    fgets(p->address.district, SIZE, stdin);
    p->address.district[strcspn(p->address.district, "\n")] = '\0';  

    printf("Enter post code: ");
    scanf("%d", &p->address.post_code);
    getchar(); 
}




// int main() {
//     Person person;
//     readPersonInfo(&person);

//     printf("\nPerson Details:\n");
//     printf("Name: %s\n", person.name);
//     printf("Age: %d\n", person.age);
//     printf("Address: %d, %d, %s, %d\n", person.address.road_no, person.address.house_no, person.address.district, person.address.post_code);

//     return 0;
// }
