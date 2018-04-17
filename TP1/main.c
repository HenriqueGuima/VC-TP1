#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "vc.h"

int main()
{
	//Segmentar a imagem
	IVC *image;

	image = vc_read_image("Imagens/Dados.ppm");

	vc_rgb_to_hsv(image);

	vc_write_image("vc_tp_dados.ppm", image);

	//DADOS
	system("cmd /c start FilterGear Imagens/Dados.ppm");
	system("FilterGear vc_tp_dados.ppm");

	printf("Press any key to exit...\n");
	getchar();
	return 0;

}