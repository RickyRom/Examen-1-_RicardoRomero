#ifndef PIEZA_H
#define PIEZA_H

class pieza{
	public:
		int general;
		int marine;
		int size;
		int** tablero;
		int x;
		int y;

	private:
		pieza();
		pieza(int);
		void createTablero(int);
		void freeTablero();
		~pieza();
		
};

#endif
