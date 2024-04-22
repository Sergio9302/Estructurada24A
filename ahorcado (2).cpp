#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cctype>
using namespace std;

int main() {
    cout << "*****Bienvenido al Juego del Ahorcado*****\n";
    
    string palabras[] = {"Perro", "Lanza", "Gato", "Esternocleidomastoideo", "Comer", "Salchicha", "Hamburguesa", "Falanje", "Femur", "Craneo", "Doctor", "Kangreburguer", "Coxis", "Estomago", "Camioneta", "Parangaricutirimicuaro", "Futbol", "Computadora", "Acatic", "Cargador", "Universidad"};
    int tamano = sizeof(palabras) / sizeof(palabras[0]);
    
    srand(time(NULL));
    int aleatorio = rand() % tamano;
    string palabraSecreta = palabras[aleatorio];
    
    // Inicializar variables de juego
    int vidas = 6;
    string palabraAdivinada;
    for (char c : palabraSecreta) {
        if (c == ' ') {
            palabraAdivinada += " "; // Agregar un espacio si el carácter es un espacio en la palabra secreta
        } else {
            palabraAdivinada += "_ "; // Agregar un guión bajo seguido de un espacio si el carácter no es un espacio
        }
    }
    char letra;
    string intento;

    while (vidas > 0) {
        cout << "Palabra a adivinar: " << palabraAdivinada << endl;
        cout << "Vidas restantes: " << vidas << endl;
        cout << "Ingrese una letra o intente adivinar la palabra completa: ";
        cin >> intento;

        // Si el intento tiene la misma longitud que la palabra secreta, verificamos si es correcta
        if (intento.length() == palabraSecreta.length()) {
            if (intento == palabraSecreta) {
                cout << "¡Felicidades! Has adivinado la palabra." << endl;
                break;
            } else {
                cout << "Incorrecto. La palabra ingresada no es correcta." << endl;
                vidas--;
                continue;
            }
        }

        // Si el intento es solo una letra, verificamos si está en la palabra secreta
        if (intento.length() == 1) {
            letra = intento[0];
            bool acierto = false;
            for (int i = 0; i < palabraSecreta.length(); ++i) {
                if (tolower(palabraSecreta[i]) == tolower(letra)) {
                    palabraAdivinada[i * 2] = palabraSecreta[i]; // Usar i * 2 para saltar sobre los espacios agregados
                    acierto = true;
                }
            }

            // Verificar si se ha adivinado la palabra
            if (palabraAdivinada == palabraSecreta) {
                cout << "¡Felicidades! Has adivinado la palabra." << endl;
                break;
            }

            // Mensaje de error si la letra ingresada no está en la palabra secreta
            if (!acierto) {
                cout << "Incorrecto. La letra '" << letra << "' no está en la palabra secreta." << endl;
                vidas--;
            }
        } else {
            cout << "Entrada no válida. Por favor, ingrese una letra o intente adivinar la palabra completa." << endl;
        }
    }

    if (vidas == 0) {
        cout << "¡Lo siento! Te has quedado sin vidas. La palabra era: " << palabraSecreta << endl;
    }

    return 0;
}
