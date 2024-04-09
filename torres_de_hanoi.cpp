/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

// Función para imprimir el estado de las torres
void realizarTorre(const vector<vector<int>>& torres) {
    for (int i = torres.size() - 1; i >= 0; --i) {
        for (int j = 0; j < 3; ++j) {
            if (torres[j].size() > i) {
                cout << torres[j][i] << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << "A B C\n" << endl;
}

// Función para validar si un movimiento es válido
bool movimientoValido(const vector<vector<int>>& torres, int desde, int hacia) {
    if (desde < 1 || desde > 3 || hacia < 1 || hacia > 3 || desde == hacia) {
        return false;
    }
    if (torres[desde - 1].empty()) {
        return false;
    }
    if (!torres[hacia - 1].empty() && torres[desde - 1].back() > torres[hacia - 1].back()) {
        return false;
    }
    return true;
}

// Función para realizar un movimiento
void moverDisco(vector<vector<int>>& torres, int desde, int hacia) {
    torres[hacia - 1].push_back(torres[desde - 1].back());
    torres[desde - 1].pop_back();
}

// Función recursiva para mover una torre de un poste a otro
void moverTorre(vector<vector<int>>& torres, int discos, int desde, int hacia, int temporal, int& movimientos) {
    if (discos == 1) {
        if (movimientoValido(torres, desde, hacia)) {
            moverDisco(torres, desde, hacia);
            ++movimientos;
            cout << "Movimiento #" << movimientos << ": Mover disco de torre " << desde << " a torre " << hacia << endl;
            realizarTorre(torres);
        } else {
            cout << "Movimiento inválido. Inténtelo de nuevo." << endl;
        }
        return;
    }
    moverTorre(torres, discos - 1, desde, temporal, hacia, movimientos);
    moverDisco(torres, desde, hacia);
    ++movimientos;
    cout << "Movimiento #" << movimientos << ": Mover disco de torre " << desde << " a torre " << hacia << endl;
    realizarTorre(torres);
    moverTorre(torres, discos - 1, temporal, hacia, desde, movimientos);
}

int main() {
    int discos;
    cout << "Ingrese el número de discos (entre 3 y 8): ";
    cin >> discos;

    if (discos < 3 || discos > 8) {
        cout << "Número de discos inválido." << endl;
        return 1;
    }

    vector<vector<int>> torres(3, vector<int>());
    for (int i = discos; i >= 1; --i) {
        torres[0].push_back(i);
    }

    int movimientos = 0;
    cout << "Estado inicial de las torres:" << endl;
    realizarTorre(torres);

    char jugar = 's';
    while (jugar == 's' || jugar == 'S') {
        int desde, hacia;
        cout << "Ingrese la torre de origen (A=1, B=2, C=3): ";
        cin >> desde;
        cout << "Ingrese la torre de destino (A=1, B=2, C=3): ";
        cin >> hacia;

        if (movimientoValido(torres, desde, hacia)) {
            moverTorre(torres, 1, desde, hacia, 6 - desde - hacia, movimientos);
        } else {
            cout << "Movimiento inválido. Inténtelo de nuevo." << endl;
        }

        cout << "¿Quieres seguir jugando? (s/n): ";
        cin >> jugar;
    }

    cout << "Se han realizado " << movimientos << " movimientos." << endl;

    return 0;
}
