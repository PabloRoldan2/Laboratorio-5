#include <iostream> 

using namespace std; 

// Función para verificar si un número es par o impar
bool esPar(int num) {
    return num %  2 ==  0; // Retorna verdadero si el número es par o falso si es impar
}

// Función para sumar números pares o impares
int sumaNumeros(int num, bool sumarPares) {
    int suma =  0; // Inicializa la variable suma en  0
    for (int i =  1; i <= num; ++i) { // Bucle que recorre desde  1 hasta el número ingresado
        if ((sumarPares && esPar(i)) || (!sumarPares && !esPar(i))) { // Si sumarPares es verdadero y el número es par, o si sumarPares es falso y el número es impar
            suma += i; // Suma el número al total
        }
    }
    return suma; // Retorna la suma total
}

// Función para calcular el factorial de un número
int factorial(int num) {
    int resultado =  1; // Inicializa el resultado en  1
    while (num >  1) { // Mientras num sea mayor que  1
        resultado *= num; // Multiplica el resultado por num
        num--; // Decrementa (disminución) num
    }
    return resultado; // Retorna el resultado
}

// Función para contar la cantidad de dígitos en un número
int contarDigitos(int num) {
    int contador =  0; // Inicializa el contador en  0
    do { // Bucle do while
        contador++; // Incrementa el contador
        num /=  10; // Divide num por  10 para eliminar el último dígito
    } while (num !=  0); // Continúa mientras num no sea  0
    return contador; // Retorna el contador
}

// Función para ordenar tres números en orden ascendente
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
    if (a > b) { // Si a es mayor que b después de la primera comparación
        int temp = a; // Guarda el valor de a en temp
        a = b; // Asigna el valor de b a a
        b = temp; // Asigna el valor guardado en temp a b
    }
}

// Función para sumar los dígitos de un número
int sumaDigitos(int num) {
    int suma =  0; // Inicializa la suma en  0
    while (num !=  0) { // Mientras num no sea  0
        suma += num %  10; // Suma el último dígito de num a la suma
        num /=  10; // Elimina el último dígito de num
    }
    return suma; // Retorna la suma de los dígitos
}

int main() { // Función principal del programa
    system("color  8e"); 
    char respuesta; 
    do { // Bucle do while para repetir el programa
        int num1, num2, num3; // Variables para almacenar los números ingresados 
        cout << "Ingrese el primer numero: ";
        cin >> num1;
        cout << "Ingrese el segundo numero: ";
        cin >> num2;
        cout << "Ingrese el tercer numero: ";
        cin >> num3;
        
        system("cls"); // Limpia la pantalla
        cout << "Suma de numeros pares hasta " << num1 << ": " << sumaNumeros(num1, true) << endl; // Imprime la suma de los números pares hasta num1
        cout << "Suma de numeros impares hasta " << num3 << ": " << sumaNumeros(num3, false) << endl; // Imprime la suma de los números impares hasta num3
        cout << "Factorial de " << num2 << ": " << factorial(num2) << endl; // Imprime el factorial de num2
        cout << "Cantidad de digitos en " << num1 << ": " << contarDigitos(num1) << endl; // Imprime la cantidad de dígitos en num1
        
        ordenarNumeros(num1, num2, num3); // Ordena los números num1, num2 y num3 en orden ascendente
        cout << "Numeros ordenados: " << num1 << ", " << num2 << ", " << num3 << endl; // Imprime los números ordenados
        
        cout << "Suma de digitos de " << num3 << ": " << sumaDigitos(num3) << endl; // Imprime la suma de los dígitos de num3
        
        system("pause"); 
        system("cls");
        cout << "Desea volver a iniciar el programa? (s/n): " << endl; // Pregunta al usuario si desea volver a iniciar el programa
        cin >> respuesta; 
    } while (respuesta == 's' || respuesta == 'S'); 

    return  0; 
}
