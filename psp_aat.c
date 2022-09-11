#include<stdio.h>

double acc = 1e-7;
double multiply(double mid, int n){
    int i;
    double ans = 1;
    for(int i = 0; i < n; i++)
     ans = ans * mid;
  return ans; 

}


int main(){
double x;
printf("Enter a number : \n");

scanf("%lf",&x);
printf("Enter the nth root you want to calculate\n");
int n;
scanf("%d",&n);
double low = 1, high = x, mid;

while(high - low > acc){
    mid = (low+high)/2;
    if(multiply(mid,n) < x){
    low = mid;
}
    else high = mid;
}

printf("%dth root of %lf is: %lf ",n,x,high);

}
