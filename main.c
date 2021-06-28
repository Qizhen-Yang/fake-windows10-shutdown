#include <stdio.h>
#include <stdlib.h>

int main(int argv, char *argc[])
{
	printf("Fake Windows 10 Shutdown v0.1.0\n");
	system("pause");
	system("start .\\`ui\\ui.exe");
	system("timeout 10");
	system("shutdown /h");
	return 0;
}