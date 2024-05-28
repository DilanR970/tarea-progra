#include <iostream>
#include <string>
using namespace std;

int main(){ 
	int contadortipo1=0, contadortipo2=0, contadortipo3 =0;
	double totaltipo1=0, totaltipo2=0, totaltipo3=0;
	while(true){
		
		string celula,nombre;
		int tipoEmpleado;
		double horasLaborada, precioHora, salario, aumento, salarioNeto, salarioBruto, deduccion;
		cout<<"--Sistema--\n";
		cout<<"Ingrese el numero de la cedula del empleado: ";
		cin>>celula;
		cout<<"Ingrese el nombre del empleado: ";
		cin>>nombre;
		cout<<"Ingrese el tipo de empleado: ";
		cin>>tipoEmpleado;
		cout<<"Ingrese las horas laboradas: ";
		cin>>horasLaborada;
		cout<<"Ingrese el precio por hora";
		cin>>precioHora;
		
		salario = horasLaborada * precioHora;
		
		if(tipoEmpleado = 1){
				aumento = salario * 0.15;
                contadortipo1++;
                totaltipo1 += salario + aumento;
		}else if(tipoEmpleado=2) {
				aumento = salario * 0.10;
                contadortipo2++;
                totaltipo2 += salario + aumento;
		}else if(tipoEmpleado =3){
				aumento = salario * 0.05;
                contadortipo3++;
                totaltipo3 += salario + aumento;
		}
		
		 salarioBruto = salario + aumento;

        // Calcular deducción por CCSS
        deduccion = salarioBruto * 0.0917;

        // Calcular salario neto
        salarioNeto = salarioBruto - deduccion;

        // Mostrar los resultados
        cout << "\n--- Información del Empleado ---\n";
        cout << "Cedula: " << celula << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Tipo Empleado: " << tipoEmpleado << endl;
        cout << "Salario por Hora: " << precioHora << endl;
        cout << "Cantidad de Horas: " << horasLaborada << endl;
        cout << "Salario Ordinario: " << salario << endl;
        cout << "Aumento: " << aumento << endl;
        cout << "Salario Bruto: " << salarioBruto << endl;
        cout << "Deducción CCSS: " << deduccion << endl;
        cout << "Salario Neto: " << salarioNeto << endl;
        
        // Preguntar si desea continuar
        char continuar;
        cout << "\n¿Desea ingresar otro empleado? (s/n): ";
        cin >> continuar;
        if (continuar != 's' && continuar != 'S') {
            break;
        }
	}
	
       // Calcular promedios
    double promediotipo1 = contadortipo1 > 0 ? totaltipo1 / contadortipo1 : 0;
    double promediotipo2 = contadortipo2 > 0 ? totaltipo2 / contadortipo2 : 0;
    double promediotipo3 = contadortipo3 > 0 ? totaltipo3 / contadortipo3 : 0;

    // Mostrar estadísticas
    cout << "\n--- Estadísticas ---\n";
    cout << "Cantidad Empleados Tipo Operarios: " << contadortipo1 << endl;
    cout << "Acumulado Salario Neto para Operarios: " << totaltipo1 << endl;
    cout << "Promedio Salario Neto para Operarios: " << promediotipo1 << endl;
    cout << "Cantidad Empleados Tipo Técnicos: " << contadortipo2 << endl;
    cout << "Acumulado Salario Neto para Técnicos: " << totaltipo2 << endl;
    cout << "Promedio Salario Neto para Técnicos: " << promediotipo2 << endl;
    cout << "Cantidad Empleados Tipo Profesionales: " << contadortipo3 << endl;
    cout << "Acumulado Salario Neto para Profesionales: " << totaltipo3 << endl;
    cout << "Promedio Salario Neto para Profesionales: " << promediotipo3 << endl;

	return 0;
}
