/*
Given an array of person structures containing information about 10 peoples,
write a function to find how many people live in a specific district.
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



int count_dwlr(Person persons[],int n,char *dis){
    
    int count =0;
    for(int i=0;i<n;++i){
        if(!strcmp(persons[i].address.district,dis)) count++;
    }    
    return count;
}   



int main() {
    int n;
    scanf("%d", &n);

    /*
        When we press ENTER after taking the  input it add a new line character \n
        getchar() consumes that  and does not let it get added  to the next string 
        its only needed for the strings as it will accept that as a character .
        if there is other variable then we dont need to clear the \n 
    */
   
    getchar();


    Person persons[MAX_PERSONS];

    for (int i = 0; i < n; ++i) {

        /*
            1. Use fgets() to read a line of input (including spaces) into the name field.
            2. Since fgets() also captures the newline character when Enter is pressed,
            use strcspn() to find the index of the newline character ('\n').
            3. Replace the newline character at that position with the null terminator ('\0'),
            effectively removing it from the string.
        */

        fgets(persons[i].name, SIZE, stdin);
        persons[i].name[strcspn(persons[i].name, "\n")] = '\0';

        scanf("%d %d %d", 
            &persons[i].age,
            &persons[i].address.road_no,
            &persons[i].address.house_no
        );

        getchar();

        fgets(persons[i].address.district, SIZE, stdin);
        persons[i].address.district[strcspn(persons[i].address.district, "\n")] = '\0';

        scanf("%d", &persons[i].address.post_code);

        getchar();
    }



    printf("%d",count_dwlr(persons,n,"Bogura"));
    return 0;
}

