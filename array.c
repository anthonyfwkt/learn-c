#include <stdio.h>
#include <string.h>


int sum_array(int a[],int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        // sum+=*(a+i);
        sum+=a[i];
    }
    return sum;
    
}



int sum_array_n(int n,int a[]){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        // sum+=*(a+i);
        sum+=a[i];
    }
    return sum;
    
}



int main(void){
    int a[]={1,2,3,4,5};
    int sum=sum_array(a,4);
    printf("%d\n",sum);


    int b[]={1,2,3,4,5,6,7};
    int sum_n=sum_array_n(4,b);
    printf("%d\n",sum_n);


    int c[]={1,2,3,4,5,6,7};
    int sum_n_2=sum_array_n(5,c);
    printf("%d\n",sum_n_2);
}