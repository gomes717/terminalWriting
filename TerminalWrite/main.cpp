// teste2.cpp: define o ponto de entrada para o aplicativo.
//

#include "main.h"

void init_fonte();

char** matriz_aux;

void write(char** matriz, int largura, int altura)
{
	for (int i = 0; i < altura; i++) {
		for (int j = 0; j < largura; j++) {
			printf("%c ", matriz[i][j]);
		}
		printf("\n");
	}
}

int size(char* string)
{
	int i = 0;
	while (string[i] != '\0')
		i++;
	return i;
}

void create_matrix(char* string)
{
	const int size_string = size(string);
	const int widht =  size_string * LETRA_WIDHT + size_string;
	matriz_aux = (char**)calloc(LETRA_HEIGHT, sizeof(char*));
	for (int i = 0; i < LETRA_HEIGHT; i++)
		matriz_aux[i] = (char*)calloc(widht, sizeof(char));
	int i = 0;
	int posx = 0;
	while (i < size_string)
	{
		for (int j = 0; string[j] != '\0'; j++)
		{
			char val = string[i] - 'a';
			for (int k = 0; k < LETRA_HEIGHT; k++) {
				for (int l = 0; l < LETRA_WIDHT; l++) {
					matriz_aux[k][posx + l] = *(pos_letra[val] + k * LETRA_WIDHT + l);
				}
			}
		}
		i++;
		posx = i * 5 + 1;
	}

	write(matriz_aux, widht, LETRA_HEIGHT);

}

char** destroy_matrix(char** matrix)
{
	for (int i = 0; i < LETRA_HEIGHT; i++)
		free(matrix[i]);
	free(matrix);
	return NULL;
}



int main()
{
	init_fonte();

	char* string = "gomes";

	create_matrix(string);
	matriz_aux = destroy_matrix(matriz_aux);

	return 0;
}

void init_fonte()
{
	pos_letra[A] = &(**char_A);
	pos_letra[E] = &(**char_E);
	pos_letra[G] = &(**char_G);
	pos_letra[M] = &(**char_M);
	pos_letra[O] = &(**char_O);
	pos_letra[S] = &(**char_S);
} 