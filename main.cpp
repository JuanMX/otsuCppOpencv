/* Compilar: g++ main.cpp otsu.h otsu.cpp -o main `pkg-config --cflags --libs opencv` */
/* Ejecutar: ./main imagenDePrueba.jpg */
#include "otsu.h"

int main(int argc, char** argv){
	Mat imagen1;
	Mat binVerde;

	if ( argc != 2 ){
    	cout<<"No se definió la imagen"<< endl;
    	return -1;
  	}
  	
  	imagen1 = imread( argv[1], 1 );
  	
  	if( !imagen1.data ){
    	cout<<"No hay datos en la imagen"<<endl;
    	return -1;
  	}
  	 
  	binVerde = imagen1;
  	
  	metodoOtsu1Umbral(binVerde, 1);

 	imwrite("imagenBinarizadaCanalVerde.jpg", binVerde);
	return 1;
}
