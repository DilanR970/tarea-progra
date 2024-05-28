#include <iostream>
#include <string>
using namespace std;

int main(){
	int boletosTotalesL1 = 0, boletosTotalesL2 = 0, boletosTotalesL3 = 0;
	double AcumuladoL1=0, AcumuladoL2=0, AcumuladoL3=0 ;
	
	 while(true){
	 	string cedula, nombre, nombreLocalidad;
	 	int numfactura =0, localidad, boletos;
	 	double precioLocalidad;
	 	
	 	int precioL1 = 10500;
	 	int precioL2 = 20500;
	 	int precioL3 = 25500;
	 	
		
	 	
	 	
	 	
	 	cout<<"Numero de factura: ";
	 	cin>>numfactura;
	 	cout<<"Ingrese su cedula: ";
	 	cin>>cedula;
	 	cout<<"ingrese el nombre: ";
	 	cin>>nombre;
	 while (true) {
            cout << "Ingrese la localidad (1- Sol Norte/Sur, 2- Sombra Este/Oeste, 3- Preferencial): ";
            cin >> localidad;
            if (localidad >= 1 && localidad <= 3) break;
            else cout << "Localidad invalida, por favor ingrese 1, 2 o 3." << endl;
        }
	   while (true) {
            cout << "Ingrese la cantidad de entradas (maximo 4): ";
            cin >> boletos;
            if (boletos >= 1 && boletos <= 4) break;
            else cout << "Cantidad de entradas invalida, por favor ingrese un valor entre 1 y 4." << endl;
        } //Ciclo while para verificar que ingrese el dato correctamente 
	 	
	 	
		 
		if(localidad = 1){
				precioLocalidad = precioL1;
				nombreLocalidad = "Localidad1";
				boletosTotalesL1 += boletos;
				AcumuladoL1 +=boletos * precioL1;
		}else if(localidad = 2) {
				precioLocalidad = precioL2;
				nombreLocalidad = "Localidad2";
				boletosTotalesL2 += boletos;
				AcumuladoL2 += boletos * precioL2;
		}else if(localidad =3){
				precioLocalidad = precioL3;
				nombreLocalidad = "Localidad3";
				boletosTotalesL3 += boletos;
				AcumuladoL3 += boletos * precioL3;
		}
	 	
	 	   int subtotal = boletos * precioLocalidad;
           int cargosServicios = boletos * 1000;
           int totalPagar = subtotal + cargosServicios;	
	 		
	 		cout << "\nFactura #" << numfactura << endl;
        	cout << "Cédula: " << cedula << endl;
        	cout << "Nombre comprador: " << nombre << endl;
        	cout << "Localidad: " << nombreLocalidad << endl;
        	cout << "Cantidad de Entradas: " << boletos << endl;
        	cout << "Subtotal  $: " << subtotal << endl;
        	cout << "Cargos por Servicios $: " << cargosServicios << endl;
        	cout << "Total a pagar $: " << totalPagar << endl;
        
        char continuar;
        cout << "\n¿Desea ingresar otra venta? (s/n): ";
        cin >> continuar;
        if (continuar == 'n' || continuar == 'N') break;
	 }
	 
	  cout << "\n--- Estadisticas ---" << endl;
    cout << "Cantidad Entradas Localidad Sol Norte/Sur: " << boletosTotalesL1 << endl;
    cout << "Acumulado Dinero Localidad Sol Norte/Sur: " << AcumuladoL1 << endl;
    cout << "Cantidad Entradas Localidad Sombra Este/Oeste: " << boletosTotalesL2 << endl;
    cout << "Acumulado Dinero Localidad Sombra Este/Oeste: " << AcumuladoL2 << endl;
    cout << "Cantidad Entradas Localidad Preferencial: " << boletosTotalesL3 << endl;
    cout << "Acumulado Dinero Localidad Preferencial: " << AcumuladoL3 << endl;
	 return 0;
}
