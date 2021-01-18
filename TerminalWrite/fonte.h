#pragma once

#define LETRA_WIDHT		5
#define LETRA_HEIGHT	7

const char* pos_letra[26];
//void init_fonte();


enum LETRA
{
	A,B,C,D,E,F,G,
	H,I,J,K,L,M,N,
	O,P,Q,R,S,T,U,
	V,W,X,Y,Z
};

const char char_A[LETRA_HEIGHT][LETRA_WIDHT] =
{
													{' ', 'x', 'x', 'x', ' '},
													{'x', ' ', ' ', ' ', 'x'},
													{'x', ' ', ' ', ' ', 'x'},
													{'x', 'x', 'x', 'x', 'x'},
													{'x', ' ', ' ', ' ', 'x'},
													{'x', ' ', ' ', ' ', 'x'},
													{'x', ' ', ' ', ' ', 'x'}
};

const char char_E[LETRA_HEIGHT][LETRA_WIDHT] =
{
													{'x', 'x', 'x', 'x', 'x'},
													{'x', ' ', ' ', ' ', ' '},
													{'x', ' ', ' ', ' ', ' '},
													{'x', 'x', 'x', 'x', 'x'},
													{'x', ' ', ' ', ' ', ' '},
													{'x', ' ', ' ', ' ', ' '},
													{'x', 'x', 'x', 'x', 'x'}
};

const char char_G[LETRA_HEIGHT][LETRA_WIDHT] = 
{
													{'x', 'x', 'x', 'x', 'x'},
													{'x', ' ', ' ', ' ', ' '},
													{'x', ' ', ' ', ' ', ' '},
													{'x', ' ', ' ', 'x', 'x'},
													{'x', ' ', ' ', ' ', 'x'},
													{'x', ' ', ' ', ' ', 'x'},
													{'x', 'x', 'x', 'x', 'x'}
};

const char char_O[LETRA_HEIGHT][LETRA_WIDHT] =
{
													{'x', 'x', 'x', 'x', 'x'},
													{'x', ' ', ' ', ' ', 'x'},
													{'x', ' ', ' ', ' ', 'x'},
													{'x', ' ', ' ', ' ', 'x'},
													{'x', ' ', ' ', ' ', 'x'},
													{'x', ' ', ' ', ' ', 'x'},
													{'x', 'x', 'x', 'x', 'x'}
};


const char char_M[LETRA_HEIGHT][LETRA_WIDHT] =
{
													{'x', ' ', ' ', ' ', 'x'},
													{'x', 'x', ' ', 'x', 'x'},
													{'x', 'x', ' ', 'x', 'x'},
													{'x', ' ', 'x', ' ', 'x'},
													{'x', ' ', ' ', ' ', 'x'},
													{'x', ' ', ' ', ' ', 'x'},
													{'x', ' ', ' ', ' ', 'x'}
};


const char char_S[LETRA_HEIGHT][LETRA_WIDHT] =
{
													{' ', 'x', 'x', 'x', 'x'},
													{'x', ' ', ' ', ' ', ' '},
													{'x', ' ', ' ', ' ', ' '},
													{' ', 'x', 'x', 'x', ' '},
													{' ', ' ', ' ', ' ', 'x'},
													{' ', ' ', ' ', ' ', 'x'},
													{'x', 'x', 'x', 'x', ' '}
};