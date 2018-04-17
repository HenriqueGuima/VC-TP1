#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "vc.h"

int main()
{

	
	//DADOS
	system("cmd /c start FilterGear Images/Dados.ppm");
	system("FilterGear vc_tp_dados.ppm");

	printf("Press any key to exit...\n");
	getchar();
	return 0;

}