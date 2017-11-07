#include<stdio.h>
#include<math.h>
int c(int n,int r);
double pow(double n,double r);
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	
int n,k,j;
scanf("%d",&n);
scanf("%d",&k);
float sum1=0, sum2=0;
    for( j=1;j<=n;j++){
        sum1=sum1+2*j*c(n-1,j-1)*k*pow(k-1,j-1);
        sum2=sum2+c(n-1,j-1)*k*pow(k-1,j-1);
        
        
        }
        printf("%f\n",sum1/sum2);}
        return 0;
        
}
int fact(int n);
int c(int n,int r){

return fact(n) / (fact(r) * fact(n - r));


}
int fact(int z)

{

    int f = 1, i;

    if (z == 0)

    {

        return f;

    }

    else

    {

        for (i = 1; i <= z; i++)

	{

            f = f * i;

	}

    }

    return f;

}



