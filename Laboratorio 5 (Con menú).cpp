#include <iostream>

using namespace std;

// Funci�n para verificar si un n�mero es par o impar
bool esPar(int num) {
    return num % 2 == 0; // Retorna verdadero si el n�mero es par o falso si es impar
}

// Funci�n para sumar n�meros pares o impares
int sumaNumeros(int num, bool sumarPares) {
    int suma = 0; // Inicializa la variable suma en 0
    for (int i = 1; i <= num; ++i) { // Bucle que recorre desde 1 hasta el n�mero ingresado
        if ((sumarPares && esPar(i)) || (!sumarPares && !esPar(i))) { // Si sumarPares es verdadero y el n�mero es par, o si sumarPares es falso y el n�mero es impar
            suma += i; // Suma el n�mero al total
        }
    }
    return suma; // Retorna la suma total
}

// Funci�n para calcular el factorial de un n�mero
int factorial(int num) {
    int resultado = 1; // Inicializa el resultado en 1
    while (num > 1) { // Mientras num sea mayor que 1
        resultado *= num; // Multiplica el resultado por num
        num--; // Decrementa (disminuci�n) num
    }
    return resultado; // Retorna el resultado
}

// Funci�n para contar la cantidad de d�gitos en un n�mero
int contarDigitos(int num) {
    int contador = 0; // Inicializa el contador en 0
    do { // Bucle do while
        contador++; // Incrementa el contador
        num /= 10; // Divide num por 10 para eliminar el �ltimo d�gito
    } while (num != 0); // Contin�a mientras num no sea 0
    return contador; // Retorna el contador
}

// Funci�n para ordenar tres n�meros en orden ascendente
void ordenarNumeros(int &a, int &b, int &c) {
    if (a > b) { // Si a es mayor que b
        int temp = a; // Guarda el valor de a en temp
        a = b; // Asigna el valor de b a a
        b = temp; // Asigna el valor guardado en temp a b
    }
    if (b > c) { // Si b es mayor que c
        int temp = b; // Guarda el valor de b en temp
        b = c; // Asigna el valor de c a b
        c = temp; // Asigna el valor guardado en temp a c
    }
    if (a > b) { // Si a es mayor que b despu�s de la primera comparaci�n
        int temp = a; // Guarda el valor de a en temp
        a = b; // Asigna el valor de b a a
        b = temp; // Asigna el valor guardado en temp a b
    }
}

// Funci�n para sumar los d�gitos de un n�mero
int sumaDigitos(int num) {
    int suma = 0; // Inicializa la suma en 0
    while (num != 0) { // Mientras num no sea 0
        suma += num % 10; // Suma el �ltimo d�gito de num a la suma
        num /= 10; // Elimina el �ltimo d�gito de num
    }
    return suma; // Retorna la suma de los d�gitos
}

int main() { // Funci�n principal del programa
	system("color  8e"); 
    char respuesta;
    do { // Bucle do while para repetir el programa
		system("cls");
		int opcion;
        cout << "Menu:" << endl;
        cout << "1. Suma de numeros pares" << endl;
        cout << "2. Suma de numeros impares" << endl;
		cout << "3. Factorial de un numero" << endl;
        cout << "4. Contar digitos de un numero" << endl;
        cout << "5. Ordenar tres numeros" << endl;
        cout << "6. Suma de los digitos de un numero" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        system("cls");

        switch (opcion) {
            case 1: {
                int num;
                cout << "---Suma de numeros pares---" << endl;
                cout << "Ingrese un numero: "; // Pide al usuario el valor
                cin >> num;
                cout << "Suma de numeros pares hasta " << num << ": " << sumaNumeros(num, true) << endl; // Imprime la suma de los n�meros pares hasta num
                system("pause"); 
				break;
            }
            case 2: {
            	int num;
            	cout << "---Suma de numeros impares---" << endl;
            	cout << "Ingrese un numero: "; // Pide al usuario el valor
            	cin >> num;
            	cout << "Suma de numeros impares hasta " << num << ": " << sumaNumeros(num, false) << endl; // Imprime la suma de los n�meros impares hasta num
				system("pause"); 
				break;
			}
            case 3: {
                int num;
                cout << "---Factorial de un numero---" << endl;
                cout << "Ingrese un numero: "; // Pide al usuario el valor
                cin >> num;
                cout << "Factorial de " << num << ": " << factorial(num) << endl; // Imprime el factorial de num
                system("pause"); 
                break;
            }
            case 4: {
                int num;
                cout << "---Contar digitos de un numero---" << endl;
                cout << "Ingrese un numero: "; // Pide al usuario el valor
                cin >> num;
                cout << "Cantidad de digitos en " << num << ": " << contarDigitos(num) << endl; // Imprime la cantidad de d�gitos en num
                system("pause"); 
				break;
            }
            case 5: {
                int num1, num2, num3;
                cout << "---Ordenar tres numeros---" << endl;
                cout << "Ingrese tres numeros: "; // Pide al usuario los valores
                cin >> num1 >> num2 >> num3;
                ordenarNumeros(num1, num2, num3); // Ordena los n�meros num1, num2 y num3 en orden ascendente
                cout << "Numeros ordenados: " << num1 << ", " << num2 << ", " << num3 << endl; // Imprime los n�meros num1, num2 y num3 en orden ascendente
                system("pause"); 
				break;
            }
            case 6: {
                int num;
                cout << "---Suma de los digitos de un numero---" << endl;
                cout << "Ingrese un numero: "; // Pide al usuario el valor
                cin >> num;
                cout << "Suma de digitos de " << num << ": " << sumaDigitos(num) << endl; // Imprime la suma de los d�gitos de num
                system("pause"); 
				break;
            }
            default:
                cout << "Opcion invalida" << endl;    
        }
		
		system("cls");
        cout << "Desea volver a iniciar el programa? (s/n): "; // Pregunta al usuario si desea volver a usar el programa
        cin >> respuesta;
    } while (respuesta == 's' || respuesta == 'S');
    	cout << "Saliendo del programa" << endl;

    return 0;
}
