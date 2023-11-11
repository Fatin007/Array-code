#include <stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int ar[n];
   for(int i=0;i<n;i++){
      scanf("%d",&ar[i]);
   }
   int sum=0;
   for(int i=0;i<n;i++){
      sum=sum+ar[i];
   }
   float avg=(float)sum/n;
   printf("Sum = %d\n",sum);
   printf("Avg = %.2f",avg);
}