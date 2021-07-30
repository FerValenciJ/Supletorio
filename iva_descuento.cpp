#include<iostream>
#include<string.h>

using namespace std;
int main(){
	
	string ar[10];
	float p[10],sb,IVA=0.12,des=0.10,pt;
	cout<<"Ingrese los nombres de 10 articulos :"<<endl<<endl;
	cout<<"Ingrese primer articulo:";cin>>ar[0];
	cout<<"Ingrese segundo articulo:";cin>>ar[1];
	cout<<"Ingrese tercer articulo:";cin>>ar[2];
	cout<<"Ingrese cuarto articulo:";cin>>ar[3];
	cout<<"Ingrese quinto articulo:";cin>>ar[4];
	cout<<"Ingrese sexto articulo:";cin>>ar[5];
	cout<<"Ingrese septimo articulo:";cin>>ar[6];
	cout<<"Ingrese octavo articulo:";cin>>ar[7];
	cout<<"Ingrese noveno articulo:";cin>>ar[8];
	cout<<"Ingrese decimo articulo:";cin>>ar[9];
	cout<<endl<<endl;
	cout<<"Ingrese el precio de los 10 articulos ingresados :"<<endl;
	cout<<"Ingrese el precio del primer articulo:";cin>>p[0];
	cout<<"Ingrese el precio del segundo articulo:";cin>>p[1];
	cout<<"Ingrese el precio del tercer articulo:";cin>>p[2];
	cout<<"Ingrese el precio del cuarto articulo:";cin>>p[3];
	cout<<"Ingrese  el precio del quinto articulo:";cin>>p[4];
	cout<<"Ingrese el precio del sexto articulo:";cin>>p[5];
	cout<<"Ingrese el precio del septimo articulo:";cin>>p[6];
	cout<<"Ingrese el precio del octavo articulo:";cin>>p[7];
	cout<<"Ingrese el precio del noveno articulo:";cin>>p[8];
	cout<<"Ingrese el precio del decimo articulo:";cin>>p[9];
	cout<<endl<<endl;
	cout<<"Articulos  |  Precios "<<endl<<endl;
	cout<<ar[0]<<"                          |   "<<p[0]<<endl;     
	cout<<ar[1]<<"                            |   "<<p[1]<<endl;     
	cout<<ar[2]<<"                          |   "<<p[2]<<endl;     
	cout<<ar[3]<<"                          |   "<<p[3]<<endl;     
	cout<<ar[4]<<"                    |   "<<p[4]<<endl;     
	cout<<ar[5]<<"                           |   "<<p[5]<<endl;     
	cout<<ar[6]<<"                          |   "<<p[6]<<endl;     
	cout<<ar[7]<<"                            |   "<<p[7]<<endl;     
	cout<<ar[8]<<"                            |   "<<p[8]<<endl;     
	cout<<ar[9]<<"                         |   "<<p[9]<<endl;     
	cout<<"*****************************************************************************"<<endl<<endl;
	
    sb=p[0]+p[1]+p[2]+p[3]+p[4]+p[5]+p[6]+p[7]+p[8]+p[9];
	cout<<"Subtotal: "<<sb<<endl<<endl;
	IVA*=sb;
	des*=sb;
	pt=sb+IVA-des;
	//piva=sb+IVA;
	cout<<"Iva: "<<IVA<<endl;
	cout<<"Descuento: "<<des<<endl;
	cout<<"Total: "<<pt<<endl;
	
	
	
	
	return 0;
}


