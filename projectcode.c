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
    float percentage;
    int rank;
    float basefee;
};

// Function used from pratanjays code :)
void sortStudentsByPercentage(struct student s[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s[i].percentage < s[j].percentage) {
                struct student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    // Assigning ranks based on sorted percentages
    for (int i = 0; i < n; i++) {
        s[i].rank = i + 1;  
    }
    //new loop for updating fee based on rank
    for (int i = 0; i < n; i++) {
        if (s[i].rank == 1) {
            s[i].basefee = 0.0;  // 1st rank fee is 0
        } else if (s[i].rank == 2) {
            s[i].basefee = 5000.0 * 0.25;  // 2nd rank gets 75% scholarship
        } else if (s[i].rank == 3) {
            s[i].basefee = 5000.0 * 0.50;  // 3rd rank gets 50% scholarship
        } else {
            s[i].basefee = 5000.0 * 1.25;  // All others get 1.25 times the base fee
        }
    } 
}



int main() {
    int n;

    printf("Number of students you want to enter: ");
    scanf("%d", &n);

    struct student s[n]; // Declare an array of student structures

    // Input student data
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        
        // Input name
        printf("Enter your name: ");
        scanf(" %[^\n]s", s[i].name);  // Using %[^\n] to read a line with spaces for entering string values

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

        // Calculating percentage
        s[i].percentage = (s[i].cProgMarks + s[i].mathsMarks + s[i].physicsMarks + s[i].chemistryMarks) / 400 * 100;

        // Initializing base fee 
        s[i].basefee = 5000.0; 

        printf("\n");  // Just to add some spacing between student inputs
    }

    // Sort students by percentage and assign their ranks
    sortStudentsByPercentage(s, n);

    // Printing all students data
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
        printf("Percentage: %.2f%%\n", s[i].percentage);
        printf("Base Fee: %.2f\n", s[i].basefee);
        printf("Rank: %d\n", s[i].rank);
    }

    return 0;
}
