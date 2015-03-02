# include <cs50.h>
# include <stdio.h>
# include <math.h>
int main(void)
{
    float n;
    do
    {
        printf("How much change is owed?");
        n = round(GetFloat()*100);
    }
    while (n<0);
    {
        int q=floor(n/25);
        int qr=n - (q*25);
        int d=floor(qr/10);
        int dr=qr -(d*10);
        int nic=floor(dr/5);
        int p=dr - (5*nic);
        {
        printf("%d\n",q+d+nic+p);
        
        }
    };
}
