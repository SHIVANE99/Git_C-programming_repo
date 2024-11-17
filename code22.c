#include <stdio.h>
#include <string.h>

// Define the structure for a student
struct student {
    char name[50];
    char address[100];
    int phoneNumber;
    char email[50];
    int rollNumber;
    float cProgMarks;
    float mathsMarks;
    float physicsMarks;
    float chemistryMarks;
    int rank;
    float basefee;
   

};
void student1();
void student2();
int main(){
    int n;
    printf("which student information you want to access :");
    scanf("%d",&n);
    if(n==1){
        student1();
    }
    else if(n==2){
        student2();
    }
    

    
        

        

    
}
void student1(){
    struct student s1;
    strcpy(s1.name,"ROHAN");
    strcpy(s1.address,"bakshinagar");
    s1.phoneNumber=941913323;
    strcpy(s1.email,"rohan@gmail.com");
    s1.rollNumber=101;
    s1.cProgMarks=90;
    s1.mathsMarks=95;
    s1.physicsMarks=90;
    s1.chemistryMarks=85;
    s1.rank=1;
    s1.basefee=1000;
    printf("Name of student 1 :%s\n",s1.name);
    printf("Roll number of student 1 :%d\n",s1.rollNumber);
    printf("address of student 1 :%s\n",s1.address);
    printf("phone number of student 1 :%d\n",s1.phoneNumber);
    printf("email of student 1 :%s\n",s1.email);
    printf("c prog marks of student 1 :%f\n",s1.cProgMarks);
    printf("Maths marks of student 1 :%f\n",s1.mathsMarks);
    printf("physics marks of student 1 :%f\n",s1.physicsMarks);
    printf("chemistry marks of student 1 :%f\n",s1.chemistryMarks);
    printf("rank of student 1 :%d\n",s1.rank);
    printf("fee waiver of student 1 :%f\n",s1.basefee-(100.0/100.0*s1.basefee));

}
void student2(){
    struct student s2;
    strcpy(s2.name,"SOHAN");
    strcpy(s2.address,"janipur");
    s2.phoneNumber=941933323;
    strcpy(s2.email,"sohan@gmail.com");
    s2.rollNumber=102;
    s2.cProgMarks=85;
    s2.mathsMarks=86;
    s2.physicsMarks=90;
    s2.chemistryMarks=89;
    s2.rank=2;
    s2.basefee=1000;
     printf("Name of student 2 :%s\n",s2.name);
    printf("Roll number of student 2 :%d\n",s2.rollNumber);
    printf("address of student 2 :%s\n",s2.address);
    printf("phone number of student 2 :%d\n",s2.phoneNumber);
    printf("email of student 2 :%s\n",s2.email);
    printf("c prog marks of student 2 :%f\n",s2.cProgMarks);
    printf("Maths marks of student 2 :%f\n",s2.mathsMarks);
    printf("physics marks of student 2 :%f\n",s2.physicsMarks);
    printf("chemistry marks of student 2 :%f\n",s2.chemistryMarks);
    printf("rank of student 2 :%d\n",s2.rank);
    printf("fee waiver of student 2 :%f\n",s2.basefee-(75.0/100.0*s2.basefee));
}
