/*
    Write a program that can save information about 100 persons (previously
    declared structure) into a file
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




int main() {
    Person people[MAX_PERSONS];


    //Loaded the data from a textfile instead of taking manual inputs 
    FILE *input_file = fopen("G:\\CodeWorks\\c_stuffs\\data\\data.txt", "r");
    if (input_file == NULL) {
        printf("Error: Could not open data.txt\n");
        return 1;
    }

    int i = 0;

    while (i < MAX_PERSONS && fscanf(input_file, "%s %d %d %d %s %d",
        people[i].name,
        &people[i].age,
        &people[i].address.road_no,
        &people[i].address.house_no,
        people[i].address.district,
        &people[i].address.post_code) == 6) {

        i++;
    }

    fclose(input_file);




    //HERES THE MAIN CODE RELATED TO THE PROBLEM

    /*
        this Part is to write as a Binary file .
        Here we are literaly saving the People Array in Binary.
        Which can be loaded in another Person Array (shown in 18.c)
    */

    FILE *output = fopen("G:\\CodeWorks\\c_stuffs\\data\\persons.bin", "wb");
    if (output== NULL) {
        printf("Error opening the file\n");
        return 1;
    }

    fwrite(people,sizeof(Person),MAX_PERSONS,output );
    fclose(output);













    /*
        this Part is to write as a text file 
    */


    // FILE *textOutput = fopen("G:\\CodeWorks\\c_stuffs\\data\\persons.txt", "w");
    // if (textOutput == NULL) {
    //     printf("Error: Could not create persons.txt\n");
    //     return 1;
    // }

    // for (int j = 0; j < i; j++) {
    //     fprintf(textOutput, "%s %d %d %d %s %d\n",
    //         people[j].name,
    //         people[j].age,
    //         people[j].address.road_no,
    //         people[j].address.house_no,
    //         people[j].address.district,
    //         people[j].address.post_code
    //     );
    // }

    // fclose(textOutput);




    return 0;
}


