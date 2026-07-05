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

