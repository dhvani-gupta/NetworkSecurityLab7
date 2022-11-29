
#include<stdio.h>
#include<math.h>

 int power(int a, int b, int P)
{
	if (b == 1)
		return a;

	else
		return (((int)pow(a, b)) % P);
}

int main()
{
int P, G, x, a, y, b, ka, kb;

	printf("Enter prime P :");
	scanf("%d",&P);
	printf("The value of P : %d\n", P);

    printf("Enter prime G :");
	scanf("%d",&G);
	printf("The value of G : %d\n\n", G);
    printf("Enter  private key a for Alice :");
	scanf("%d",&a);
	printf("The private key a for Alice : %d\n", a);
	x = power(G, a, P);
	printf("Enter private key b for Bob :");
	scanf("%d",&b);
	printf("The private key b for Bob : %lld\n\n", b);
	y = power(G, b, P); 
	ka = power(y, a, P); 
	kb = power(x, b, P);
	printf("Secret key for the Alice is : %lld\n", ka);
	printf("Secret Key for the Bob is : %lld\n", kb);
	
	return 0;
}
