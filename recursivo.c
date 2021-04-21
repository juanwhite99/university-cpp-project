/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

                https://www.onlinegdb.com/online_c++_compiler
*******************************************************************************/

#include <iostream>
#include <stdio.h>
using namespace std;

int fact(int); 
int sum (int numbersS[], int n);
int mult (int numbersM[], int m);

int main()
{
    int num, result, size, sumResult, multResult, j, valor;


    /////////FACTORIAL////////////////
    printf("Introduce un numero para obtener su factorial: \n");
    scanf("%i", &num);
    result = fact(num);
    printf ("\n El factorial de %i es %i \n", num, result);
    
    ///////////////////////////////////
    printf("Introduce la cantidad de números que vas a sumar y multiplicar: \n");
    scanf("%i", &size);
    int numbers[size];  //Declaración del arreglo 

    //Asignación de valores en el arreglo
    for (j = 0; j < size; j++){
     printf("Introduce %i valores para sumar y multiplicar (%i/%i): \n", size, j+1, size );
     scanf("%i", &valor);
     numbers[j] = valor;
    }

    sumResult = sum(numbers,size-1);
    multResult = mult(numbers,size-1);

    /////////////////////////////////////Resultados
	printf("\nLa suma de los numeros es: %i \n", sumResult);
	printf("\nLa multiplicación de los numeros es: %i \n", multResult); 

    return 0;
}

//Factorial recursivo
int fact(int num){
 int result;
 if (num <= 1){
 	num = 1;
 } 
 else{
  return(num * fact(num-1));
 }  
}

//Suma recursiva
int sum (int numbersS[],int n){
	if(n == 0){
		return numbersS[0];
	}
	else {
		return numbersS[n] + sum (numbersS,n-1);
	}
}	
	
//Multiplicación recursiva
int mult (int numbersM[],int m){
	if(m == 0){
		return numbersM[0];
	}
	else {
		return numbersM[m] * mult (numbersM,m-1);
	}	
}
