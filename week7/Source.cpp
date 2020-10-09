#include <stdio.h>
int main()
{
	char name [100];
	scanf("%s", &name);
	int j=0;
	
	for (int i = 0; i < 100; i++)
	{
		
		if (name[i] == 'a' || name[i] == 'A') {
			j++;
		}
		else if (name[i] == 'e' || name[i] == 'E') {
			j++;
		}
		else if (name[i] == 'i' || name[i] == 'I') {
			j++;
		}
		else if (name[i] == 'o' || name[i] == 'O') {
			j++;
		}
		else if (name[i] == 'u' || name[i] == 'U') {
			j++;
		}
		
	}
	if (j > 0) {
		printf("There is vowel");
	}
	else {
		printf("There is not vowel");
	}
}