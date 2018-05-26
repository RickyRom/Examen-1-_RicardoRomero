#include <iostream>

using namespace std;

void  createTablero(char**,int);
void printTablero(char**, int);

int main() {
	char** matriz;
	int size = 8;
			
	matriz = new char*[size];

	for(int i = 0; i < size; i++) {
		matriz[i] = new char[size];
	}

	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			matriz[i][j] = ' ';
		matriz[0][1] = 'N';
		matriz[0][3] = 'N';
		matriz[0][5] = 'N';
		matriz[0][7] = 'N';
		matriz[1][0] = 'N';
		matriz[1][2] = 'N';
		matriz[1][4] = 'N';
		matriz[1][6] = 'N';
		matriz[2][1] = 'N';
		matriz[2][3] = 'N';
		matriz[2][5] = 'N';
		matriz[2][7] = 'N';

		matriz[5][0] = 'B';
		matriz[5][2] = 'B';
		matriz[5][4] = 'B';
		matriz[5][6] = 'B';
		matriz[6][1] = 'B';
		matriz[6][3] = 'B';
		matriz[6][5] = 'B';
		matriz[6][7] = 'B';
		matriz[7][0] = 'B';
		matriz[7][2] = 'B';
		matriz[7][4] = 'B';
		matriz[7][6] = 'B';
		}
	}
	printTablero(matriz, size);
	

	return 0;
}


void printTablero(char** matriz, int size) {
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			cout<<"["<<matriz[i][j]<<"]";
		}
		cout<<endl;
	}
}


