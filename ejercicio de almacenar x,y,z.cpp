//codigo hecho por: william alfredo vasquez flores
//carnet:VF18003
//Docente:ING. Ligia Astrid Hernandez Bonilla 
//progra para almacenar datos 
#include <iostream>//libreria ob ligatoria
#include <string>//para funciones contates y algunas operaciones
#include <queue>//libreria de plantillas esztandar
#include <conio.h>//para archivos de cabecera
#include <windows.h>//contiene los macros utilizadosa en la programacion

using namespace std;//cuerpo del programa

struct coor{//creacion de estructura
        int x;//declaracion de variables
        int y;
        int z;
    };
    
    
void c(){
	system("cls");//funcion para limpiar la pantalla al momento de compilar
}

void p(){
	system("pause");
}


int main()//funcion principal
{
    system ("color 67"); 
	queue<coor> cola;		//creacion de cola
	coor *ptr;		//creacion de puntero
	int op;		
	int cc;
	do{						//menu para repetir hasta que el usuario quiera
	
	cout<<"					"<<"elija una opcion"<<endl;
	cout<<"					"<<"1. Agregar coordenadas"<<endl;
	cout<<"					"<<"2. Mostrar coordenadas"<<endl;
	cout<<"					"<<"3. Mostrar promedio de coordenadas"<<endl;
	cout<<"					"<<"4. Salir"<<endl;
	cout<<"					";cin>>op;
	
	switch (op){
				case 1: c();
						coor aux;		
		            	cout<<"				"<<"Ingrese valor de x: ";
						cin>>aux.x;
		            	cout<<"				"<<"Ingrese valor de y: ";
						cin>>aux.y;
						cout<<"				"<<"Ingrese valor de z: ";
		            	cin>>aux.z;
				        cola.push(aux);		
				        c();
				        cout<<"				"<<endl;
				        p();
		        		c();
		        		break;
		        case 2: c();
		                ptr=&cola.front();
						for(int i=0; i<cola.size(); i++){//ciclo mientras la cola tenga datos
						coor auxi;			
        		 		auxi=*ptr;
		        		cout<<"			"<<"x: "<<auxi.x <<endl;
		        		cout<<"			"<<"y: "<<auxi.y <<" ";
		        		cout<<"         "<<"z: "<<auxi.z <<" "<<endl;
		        		ptr++;				
        				}
        				p();
		        		c();
						break;
                case 3: c();ptr=&cola.front();
        				float xx;
        				float ys;
        				int zz;
        				coor auxi;
        				ptr = &cola.front();
						for(cc=0; cc<cola.size(); cc++){			//CICLO MIENTRAS LA COLA TENGA DATOS
									
        		 		auxi=*ptr;
		        		xx=xx+auxi.x;
		        		ys=ys+auxi.y;
		        		zz=zz+auxi.z;
		        		ptr++;					
        				}
        				cout<<"					"<<"x promedio: "<<(xx/cc) <<endl;
        				cout<<"					"<<"y promedio: "<<(ys/cc) <<endl;
        				cout<<"					"<<"z promedio: "<<(zz/cc) <<endl;
        				p();
		        		c();
				case 4: break;
					}
	} while (op != 4);
	return 0;
}
