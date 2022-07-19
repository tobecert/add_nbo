#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <netinet/in.h>


int main(int argc, char **argv)
{

	uint32_t var1, var2, sum;

	FILE *fp1 = fopen(argv[1], "r");
      	FILE *fp2 = fopen(argv[2], "r");

	fread(&var1, 4, 1, fp1);
	fread(&var2, 4, 1, fp2);

	var1 = ntohl(var1);
	var2 = ntohl(var2);

	sum = var1 + var2;
	
	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", var1, var1, var2, var2, sum, sum);	

	fclose(fp1);
	fclose(fp2);



}
