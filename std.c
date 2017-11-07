#include<stdio.h>
#include<math.h>
float std(int data[],int n);
int main(){int t;
scanf("%d",&t);
while(t--){
int s,i;
int n ;//s=standard deviation
float b;
scanf("%d",&n);
int  a[n];
scanf("%d",&s);
for(i=0;i<n;i++){

    a[i]=i+1;
}
b=s/std(a,n);
for(i=0;i<n;i++)
a[i]=b*(i+1);
for(i=0;i<n;i++)
  printf("%d ",a[i]);  
}
return 0;
}

float std(int data[],int n)
{
    float sum = 0.0, mean, std = 0.0;

    int i;

    for(i=0; i<n; ++i)
    {
        sum += data[i];
    }

    mean = sum/n;

    for(i=0; i<n; ++i)
        std += pow(data[i] - mean, 2);

    return sqrt(std/n);
}
