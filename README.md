# otsuCppOpencv
Método de Otsu de un corte de umbral usando opencv en su versión 3.0.0

La entrada del programa es una imágen a color y realiza el corte usando uno de los 3 canales (B G R)

No funciona si la imágen en en escala de grises por la manera en que opencv accesa a la información de los pixeles
pero en el archivo fuente se indica que lineas se deberían cambiar

El programa pide un umbral inicial para comenzar el método el cual se recomienda ser 128

Se puede usar en otros espacios de color siempre que la manera de accesar a la información de los pixeles sea dela forma Vec3b pero
se debe tener cuidado con los histogramas (el umbral inicial debe estar dentro de la "distribución" del histograma)
