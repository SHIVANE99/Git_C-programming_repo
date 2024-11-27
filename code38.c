#include <stdio.h>
int main(){
// printing febonacii series 
int n,a=0,b=1,c;
printf("enter the number upto which you want your series :");
scanf("%d",&n);
printf("febonacii series");
  for(int i=1;i<=n;i++){
  printf(" %d",a);
  c=a+b;
  a=b;
  b=c;
  }


  return 0;
}
