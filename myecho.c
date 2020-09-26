#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int main (int argc, char* argv[])
{
	int keys = 0;
	bool nle = true;
	bool sse = true;

	for (int meter = 1; meter < argc; meter++)
	{
			if (argv[meter][0] == '-' && strchr("ns", argv[meter][1]))
			{
				if (strchr(argv[meter], 'n'))
					nle = false;

				if (strchr(argv[meter], 's'))
					sse = false;

				keys += 1;
			}

			else 
				break;
	}

	int meter = 1 + keys;

	while (meter < argc)
	{
		printf("%s", argv[meter]);


		if (sse == true && meter != argc - 1)
		       printf(" ");
		meter++;
	}
	if (nle == true)
		printf("\n");
	return 0;

}
