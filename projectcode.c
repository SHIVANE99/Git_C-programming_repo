#include <stdio.h>
#include <string.h>

// Define the structure for a student
struct student {
    char name[50];
    char address[100];
    char phoneNumber[15]; 
    char email[50];
    int rollNumber;
    float cProgMarks;
    float mathsMarks;
    float physicsMarks;
    float chemistryMarks;
    int rank;
    float basefee;
};

int main() {
    int n;

    printf("Number of students you want to enter: ");
    scanf("%d", &n);

    struct student s[n]; // Declare an array of student structures

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        
        // Input name
        printf("Enter your name: ");
        scanf(" %[^\n]s", s[i].name);  // Using %[^\n] to read a line with spaces

       
        printf("Enter your address: ");
        scanf(" %[^\n]s", s[i].address);

       
        printf("Enter your phone number: ");
        scanf(" %[^\n]s", s[i].phoneNumber);

       
        printf("Enter your email: ");
        scanf(" %[^\n]s", s[i].email);

        printf("Enter your roll number: ");
        scanf("%d", &s[i].rollNumber);

        
        printf("Enter C Programming marks: ");
        scanf("%f", &s[i].cProgMarks);

        printf("Enter Maths marks: ");
        scanf("%f", &s[i].mathsMarks);

        printf("Enter Physics marks: ");
        scanf("%f", &s[i].physicsMarks);

        printf("Enter Chemistry marks: ");
        scanf("%f", &s[i].chemistryMarks);

     
        printf("Enter your rank: ");
        scanf("%d", &s[i].rank);

        
        printf("Enter your base fee: ");
        scanf("%f", &s[i].basefee);

        printf("\n");  // Just to add some spacing between student inputs
    }

    // Optionally, print all student data
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nDetails for student %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Address: %s\n", s[i].address);
        printf("Phone Number: %s\n", s[i].phoneNumber);
        printf("Email: %s\n", s[i].email);
        printf("Roll Number: %d\n", s[i].rollNumber);
        printf("C Programming Marks: %.2f\n", s[i].cProgMarks);
        printf("Maths Marks: %.2f\n", s[i].mathsMarks);
        printf("Physics Marks: %.2f\n", s[i].physicsMarks);
        printf("Chemistry Marks: %.2f\n", s[i].chemistryMarks);
        printf("Rank: %d\n", s[i].rank);
        printf("Base Fee: %.2f\n", s[i].basefee);
    }

    return 0;
}
