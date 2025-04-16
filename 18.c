/*
Write a program that can load information about 100 persons (previously
declared structure) from a file
*/



#include <stdio.h>

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


void print_person(Person person);


int main() {
    FILE *input;
    Person people[MAX_PERSONS];
    int count;


    /*
        Loaded the whole damn Person Array from the File
    */
   
    input = fopen("G:\\CodeWorks\\c_stuffs\\data\\persons.bin", "rb");
    if (input == NULL) {
        printf("Error: Could not open persons.bin\n");
        return 1;
    }

    count = fread(people, sizeof(Person), MAX_PERSONS, input);
    fclose(input);

    printf("Loaded %d people from binary file:\n\n", count);
    for (int i = 0; i < count; i++) {
        
        printf("Person %d:\n", i + 1);
        print_person(people[i]);
    }

    return 0;
}


void print_person(Person person){
    printf("  Name: %s\n", person.name);
    printf("  Age: %d\n", person.age);
    printf("  Address:\n");
    printf("        Road No: %d\n", person.address.road_no);
    printf("        House No: %d\n", person.address.house_no);
    printf("        District: %s\n", person.address.district);
    printf("        Post Code: %d\n", person.address.post_code);
    printf("\n");
}

