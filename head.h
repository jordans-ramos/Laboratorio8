//head
//EJERCICIO1
//media aritmética
double calcularMedia(const double datos[], int n);
//varianza  
double calcularVarianza(const double datos[], int n, double media);
//desviación estándar
double calcularDesviacionEstandar(double varianza);
//curtosis
double calcularCurtosis(const double datos[], int n, double media, double desviacion);
//máximo y mínimo
void buscarMaxMin(const double datos[], int n, double& maximo, double& minimo);
//mostrar resultados
void mostrarResultados(double media, double varianza, double desviacion, double curtosis, double maximo, double minimo);

//EJERCICIO2

void prueba();

void Maximo(int arr[10][10], int n);

void ejercicio2();

void mostrarMatriz(int arr[10][10], int n);

void Minimo(int arr[10][10], int n);

void trazaMatriz(int arr[10][10], int n);

void transpuesta(int arr[10][10], int n);

void Transpuesta(int arr[10][10], int n);

void simetrica(int arr[10][10], int n);


//EJERCICIO 3

#include <string>
std::string obtenerSiglas(const std::string& texto);
int stringAEntero(const std::string& texto);




void caracterFrecuente();
