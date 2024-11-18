#include <stdio.h>
#include <string.h>

// Define the structure for a student
struct student {
    char name[50];
    char address[100];
    char phoneNumber[15];  // Changed to char array to store phone numbers as strings
    char email[50];
    int rollNumber;
    float cProgMarks;
    float mathsMarks;
    float physicsMarks;
    float chemistryMarks;
    int rank;
    float basefee;
};

// Function declarations
void displayStudentInfo(struct student s);

int main() {
    int n;
    char req;
    struct student students[3];  // Array of students

    // Initializing student data
    struct student s1 = {"ROHAN", "bakshinagar", "941913323", "rohan@gmail.com", 101, 90, 95, 90, 85, 1, 1000};
    struct student s2 = {"SOHAN", "janipur", "941933323", "sohan@gmail.com", 102, 85, 86, 90, 89, 2, 1000};
    struct student s3 = {"MOHAN", "Talab Tillo", "923193323", "mohan@gmail.com", 103, 82, 85, 80, 75, 3, 1000};
    
    students[0] = s1;
    students[1] = s2;
    students[2] = s3;

    while (1) {
        printf("Which student information you want to access (1, 2, 3)? : ");
        scanf("%d", &n);

        if (n >= 1 && n <= 3) {
            displayStudentInfo(students[n - 1]);
        } else {
            printf("Invalid choice.\n");
        }

        // To consume any leftover newline character from previous scanf
       getchar();

        printf("Want to access further (y/n)? ");
        scanf("%c", &req);

        if (req != 'y' && req != 'Y') {
            break;
        }
    }

    return 0;
}

// Function to display student info
void displayStudentInfo(struct student s) {
    printf("Name of student: %s\n", s.name);
    printf("Roll number of student: %d\n", s.rollNumber);
    printf("Address of student: %s\n", s.address);
    printf("Phone number of student: %s\n", s.phoneNumber);
    printf("Email of student: %s\n", s.email);
    printf("C Programming marks of student: %.2f\n", s.cProgMarks);
    printf("Maths marks of student: %.2f\n", s.mathsMarks);
    printf("Physics marks of student: %.2f\n", s.physicsMarks);
    printf("Chemistry marks of student: %.2f\n", s.chemistryMarks);
    printf("Rank of student: %d\n", s.rank);

    // Displaying fee waiver based on the rank
    float feeWaiver = 0.0;
    if (s.rank == 1) {
        feeWaiver = s.basefee -(100.0 / 100.0) * s.basefee;
    } else if (s.rank == 2) {
        feeWaiver =s.basefee - (75.0 / 100.0) * s.basefee;
    } else if (s.rank == 3) {
        feeWaiver = s.basefee -(50.0 / 100.0) * s.basefee;
    }
    printf("Updated Fee  for student: %.2f\n", feeWaiver);
}
