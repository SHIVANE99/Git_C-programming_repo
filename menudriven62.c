#include <stdio.h>
// menu driven program prime or not factorial and armstrong
int prime(int a);
int fact(int b);
int armstrong(int c);
int main()
{

    while (1)
    {
        int num;
        int any;
        printf("-----------------------------MENU DRIVEN PROGRAM--------------------------------\n");
        printf("1) find prime or not\n");
        printf("2) find factorial\n");
        printf("3) check armstrong or not\n");
        printf("4) quit\n");
        printf("enter which operation you want to perform (1,2,3,4) :");
        scanf("%d", &num);
        if (num == 1)
        {
            printf("enter number to check :\n");
            scanf("%d",&any);
            prime(any);


        }
        else if (num == 2)
        {
            printf("enter number to find : \n");
            scanf("%d",&any);
            fact(any);
        }
        else if (num == 3)
        {
            printf("enter number to check if its armstrong :\n");
            scanf("%d",&any);
            armstrong(any);

        }
        else if (num == 4)
        {
            printf("exiting..............................................................");
            break;
        }
    }
}
int prime(int a){
    int count;
    for(int i=2;i<=a;i++){
        if(a % i == 0){
            count++;
        }
    }
    if(count == 2){
        printf("its a prime number\n");
        }
    else{
        printf("not a prime number\n");
        }

    

}
int fact(int b){
    int m=1;
    for(int i=1;i<=b;i++){
        m=m*i;

    }
    printf("factorial of %d is : %d\n",b,m);


}
int armstrong(int c){
    //counting digits in the number 
    int count=0;int q=c;int rem;int mul=1;int value=0;
    while(q!=0){
        q=q/10;
        count++;
    }
    q=c;


    //multiplying each digit count times
    while(q!=0){
        rem=q%10;
        mul=1;
        for(int i=0;i<count;i++){
            mul=mul*rem;
        }
        value=value+mul;
        q=q/10;
        mul=1;
        
    }
    if(value == c){
        printf("its armstrong number\n");
        }
    else{
        printf("not an armstrong number\n");
        }


}