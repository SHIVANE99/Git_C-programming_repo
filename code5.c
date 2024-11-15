//finding roots of the equation
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,dis,root1,root2;
    printf("Enter the 3 coefficients:");
    scanf("%d%d%d",&a,&b,&c);
    dis=b*b-4*a*c;
    if(dis>0){
        root1=(-b+sqrt(dis))/(2*a);
        root2=(-b-sqrt(dis))/(2*a);
        printf("the roots are real and distinct :%d\n%d",root1,root2);
    }
    else if(dis==0){
        root1=root2=-b/(2*a);
        printf("roots are real and equal :%d",root1);
    }
    else{
        printf("roots are imaginary");
    }
    

    
} 