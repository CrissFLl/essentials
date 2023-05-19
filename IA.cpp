#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Definición de la estructura VehicleClass para almacenar información sobre cada clase de vehículo
struct VehicleClass {
    int classNumber; // Número de clase
    int quantity; // Cantidad de vehículos en esta clase
    vector<int> options; // Opciones requeridas por esta clase (1 si se requiere, 0 si no)
};

// Función para calcular el número total de faltas en una secuencia de vehículos
int calculateFails(const vector<int>& sequence, const vector<VehicleClass>& classes,
                   const vector<int>& stationCapacity, const vector<int>& stationInterval) {
    int totalFails = 0;
    int numOptions = stationCapacity.size();
    for (int i = 0; i < numOptions; i++) {
        int count = 0;
        for (int j = 0; j < stationInterval[i]; j++) {
            if (classes[sequence[j]].options[i] == 1) {
                count++;
            }
        }
        if (count > stationCapacity[i]) {
            totalFails++;
        }
        for (int j = stationInterval[i]; j < sequence.size(); j++) {
            if (classes[sequence[j]].options[i] == 1) {
                count++;
            }
            if (classes[sequence[j - stationInterval[i]]].options[i] == 1) {
                count--;
            }
            if (count > stationCapacity[i]) {
                totalFails++;
                break;
            }
        }
    }
    return totalFails;
}

// Función para imprimir una solución
void printSolution(const vector<int>& sequence, const vector<VehicleClass>& classes,
                   const vector<int>& stationCapacity, const vector<int>& stationInterval) {
    // Mostrar secuencia
    cout << "Secuencia: ";
    for (int vehicle : sequence) {
        cout << vehicle << ' ';
    }
    cout << endl;

    // Verificar restricciones
    int totalFails = calculateFails(sequence, classes, stationCapacity, stationInterval);

    // Mostrar faltas totales
    cout << "Faltas totales: " << totalFails << endl;

    // Mostrar faltas por opción
    for (int i = 0; i < stationCapacity.size(); i++) {
        int count = 0;
        for (int j = 0; j < stationInterval[i]; j++) {
            if (classes[sequence[j]].options[i] == 1) {
                count++;
            }
        }
        if (count > stationCapacity[i]) {
            cout << "Opcion_" << i << " Faltas_" << count - stationCapacity[i] << endl;
        }
        for (int j = stationInterval[i]; j < sequence.size(); j++) {
            if (classes[sequence[j]].options[i] == 1) {
                count++;
            }
            if (classes[sequence[j - stationInterval[i]]].options[i] == 1) {
                count--;
            }
            if (count > stationCapacity[i]) {
                cout << "Opcion_" << i << " Faltas_" << count - stationCapacity[i] << endl;
                break;
            }
        }
    }

}

int main() {
    string fileName;
    cout << "Ingrese el nombre del archivo: ";
    cin >> fileName;

    ifstream file(fileName);
    if (!file.is_open()) {
        cerr << "No se pudo abrir el archivo." << endl;
        return 1;
    }

     // Leer información del archivo
     int numVehicles, numOptions, numClasses;
     file >> numVehicles >> numOptions >> numClasses;

     vector<int> stationCapacity(numOptions);
     for (int i = 0; i < numOptions; i++) {
         file >> stationCapacity[i];
     }

     vector<int> stationInterval(numOptions);
     for (int i = 0; i < numOptions; i++) {
         file >> stationInterval[i];
     }

     vector<VehicleClass> classes(numClasses);
     for (int i = 0; i < numClasses; i++) {
         file >> classes[i].classNumber >> classes[i].quantity;
         classes[i].options.resize(numOptions);
         for (int j = 0; j < numOptions; j++) {
             file >> classes[i].options[j];
         }
     }

     file.close();

     // Solución greedy
     vector<int> sequence;
     vector<int> remainingVehicles(numClasses);
     for (int i = 0; i < numClasses; i++) {
         remainingVehicles[i] = classes[i].quantity;
     }

     while (sequence.size() < numVehicles) {
         for (int i = 0; i < numClasses; i++) {
             if (remainingVehicles[i] > 0) {
                 sequence.push_back(classes[i].classNumber);
                 remainingVehicles[i]--;
             }
         }
     }

     cout << "Solución Greedy:" << endl;
     printSolution(sequence, classes, stationCapacity, stationInterval);

     // Hill Climbing First-Improvement
     int currentFails = calculateFails(sequence, classes, stationCapacity, stationInterval);
     bool improved = true;
     while (improved) {
         improved = false;
         for (int i = 0; i < sequence.size() && !improved; i++) {
             for (int j = i + 1; j < sequence.size() && !improved; j++) {
                 swap(sequence[i], sequence[j]);
                 int newFails = calculateFails(sequence, classes, stationCapacity, stationInterval);
                 if (newFails < currentFails) {
                     currentFails = newFails;
                     improved = true;
                 } else {
                     swap(sequence[i], sequence[j]);
                 }
             }
         }
     }

     cout << "Solución Hill Climbing First-Improvement:" << endl;
     printSolution(sequence, classes, stationCapacity, stationInterval);

     return 0;
}
