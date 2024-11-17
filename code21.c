#include <stdio.h>
#include <string.h>

// Define the structure for a student
struct Student {
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
    float fee;
};

// Function to calculate the total marks and rank
void calculateMarks(struct Student *student) {
    student->cProgMarks += student->mathsMarks + student->physicsMarks + student->chemistryMarks;
}

// Function to calculate the fee discount based on rank
void calculateFee(struct Student *student) {
    if (student->rank == 1) {
        student->fee = 0;  // 100% discount for 1st rank
    } else if (student->rank == 2) {
        student->fee = 0.25 * 10000;  // 75% discount for 2nd rank
    } else if (student->rank == 3) {
        student->fee = 0.50 * 10000;  // 50% discount for 3rd rank
    } else {
        student->fee = 1.5 * 10000;  // All other students pay 1.5x fee
    }
}

// Function to input student details
void inputStudentDetails(struct Student *student) {
    printf("Enter Name: ");
    fgets(student->name, sizeof(student->name), stdin);
    student->name[strcspn(student->name, "\n")] = '\0';  // Remove the newline character

    printf("Enter Address: ");
    fgets(student->address, sizeof(student->address), stdin);
    student->address[strcspn(student->address, "\n")] = '\0';

    printf("Enter Phone Number: ");
    fgets(student->phoneNumber, sizeof(student->phoneNumber), stdin);
    student->phoneNumber[strcspn(student->phoneNumber, "\n")] = '\0';

    printf("Enter Email: ");
    fgets(student->email, sizeof(student->email), stdin);
    student->email[strcspn(student->email, "\n")] = '\0';

    printf("Enter Roll Number: ");
    scanf("%d", &student->rollNumber);

    printf("Enter C Programming Marks: ");
    scanf("%f", &student->cProgMarks);

    printf("Enter Maths Marks: ");
    scanf("%f", &student->mathsMarks);

    printf("Enter Physics Marks: ");
    scanf("%f", &student->physicsMarks);

    printf("Enter Chemistry Marks: ");
    scanf("%f", &student->chemistryMarks);

    printf("Enter Rank: ");
    scanf("%d", &student->rank);
}

// Function to display student details
void displayStudentDetails(struct Student student) {
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student.name);
    printf("Address: %s\n", student.address);
    printf("Phone Number: %s\n", student.phoneNumber);
    printf("Email: %s\n", student.email);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("C Programming Marks: %.2f\n", student.cProgMarks);
    printf("Maths Marks: %.2f\n", student.mathsMarks);
    printf("Physics Marks: %.2f\n", student.physicsMarks);
    printf("Chemistry Marks: %.2f\n", student.chemistryMarks);
    printf("Total Marks: %.2f\n", student.cProgMarks);
    printf("Rank: %d\n", student.rank);
    printf("Fee: %.2f\n", student.fee);
}

int main() {
    struct Student student;
    
    // Input student details
    inputStudentDetails(&student);
    
    // Calculate total marks
    calculateMarks(&student);

    // Calculate fee based on rank
    calculateFee(&student);

    // Display student details
    displayStudentDetails(student);

    return 0;
}
