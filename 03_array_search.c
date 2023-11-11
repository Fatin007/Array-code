/* without flag */
#include <stdio.h>
int main(){
   int n,flag=0;
   scanf("%d",&n);
   int ar[n];
   for(int i=0;i<n;i++){
      scanf("%d",&ar[i]);
   }
   int to_find;
   scanf("%d",&to_find);
   for(int i=0;i<n;i++){
      if(to_find == ar[i]){
         printf("Found");
         return 0;
      }
   }
   printf("Not Found");
}





/* With flag */
// #include <stdio.h>
// int main(){
//    int n,flag=0;
//    scanf("%d",&n);
//    int ar[n];
//    for(int i=0;i<n;i++){
//       scanf("%d",&ar[i]);
//    }
//    int to_find;
//    scanf("%d",&to_find);
//    for(int i=0;i<n;i++){
//       if(to_find == ar[i]){
//          flag=1;
//       }
//       // printf("Flag = %d\n",flag);
//    }
//    if(flag==0) printf("Not Found");
//    else printf("Found");
// }