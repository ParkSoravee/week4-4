#include<stdio.h>

int main()
{
	char str[1000];
	scanf_s("%s", str,1000);
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			printf("%c", str[i]);
		}
		i++;
	}

	return 0;
}

