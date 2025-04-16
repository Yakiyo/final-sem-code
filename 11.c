/*
Declare the structure to store the following information of a person:
    a. Name
    b. Age
    c. Address (it is a structure)
The Address structure will have this information:
    a. Road number
    b. House number
    c. District
    d. Post Code
Write a function that, receives an array of person structure, and sort them
based on post code in ascending order


let name & district be 100 char long 

*/


#include <stdio.h>
#include <string.h>

#define SIZE 100
#define MAX_PERSONS 100

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



void sort(Person persons[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (persons[i].address.post_code > persons[j].address.post_code) {
                Person temp = persons[i];
                persons[i] = persons[j];
                persons[j] = temp;
            }
        }
    }
}











// void printPersons(Person persons[], int n) {
//     for (int i = 0; i < n; ++i) {
//         printf("Name: %s\n", persons[i].name);
//         printf("Age: %d\n", persons[i].age);
//         printf("Address: Road %d, House %d, %s, Post Code %d\n",
//                persons[i].address.road_no,
//                persons[i].address.house_no,
//                persons[i].address.district,
//                persons[i].address.post_code);
//         printf("\n");
//     }
// }


// int main() {
//     int n;
//     printf("Enter number of persons: ");
//     scanf("%d", &n);
//     getchar(); // consume newline

//     Person persons[MAX_PERSONS];

//     for (int i = 0; i < n; ++i) {
//         printf("\nEnter info for person %d:\n", i + 1);

//         printf("Name: ");
//         fgets(persons[i].name, SIZE, stdin);
//         persons[i].name[strcspn(persons[i].name, "\n")] = '\0'; // remove newline

//         printf("Age: ");
//         scanf("%d", &persons[i].age);

//         printf("Road no: ");
//         scanf("%d", &persons[i].address.road_no);

//         printf("House no: ");
//         scanf("%d", &persons[i].address.house_no);

//         getchar(); // consume newline
//         printf("District: ");
//         fgets(persons[i].address.district, SIZE, stdin);
//         persons[i].address.district[strcspn(persons[i].address.district, "\n")] = '\0';

//         printf("Post code: ");
//         scanf("%d", &persons[i].address.post_code);

//         getchar(); // consume newline
//     }

//     sort(persons, n);

//     printf("\n--- Sorted Persons by Post Code ---\n");
//     printPersons(persons, n);

//     return 0;
// }
