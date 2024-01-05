#include<stdio.h>
int main(){
int n;
scanf("%d",&n);

for(int i=1;i<=n;i++){
   if(i==n){
        for(int j=1;j<=n;j++)
           printf("%d",i);
   }
   else if (i==1){
     for(int j=1;j<=n;j++){

        printf("%d",j);

    }
   }
   else{
    for(int j=1;j<=n;j++){
        if(j>1&&j<n)
        printf(" ");
        else if(j==n)
            printf("%d",n);
        else
        printf("%d",i);

    }
   }
    printf("\n");
}
}

