//codigo hecho por: william alfredo vasquez flores
//carnet:VF18003
//Docente:ING. Ligia Astrid Hernandez Bonilla 
//codigo ingresar datos de pacientes
#include <iostream>//libreria ob ligatoria
#include <string>//para funciones contates y algunas operaciones
#include <queue>//libreria de plantillas esztandar
#include <conio.h>//para archivos de cabecera
#include <windows.h>//contiene los macros utilizadosa en la programacion

using namespace std;//cuerpo del programa

class Paciente{//declaramos la clase
	private://la ponemos de tipo privada para que los datos pertenezcan unicamente a ella
	class Nodo{//declaramos la clase nodo
	public://la ponemos de tipo publica
    	    int cor;//se declaran las variables
    	    char nombre[30];
    	    char apellido[30];
			int edad;
			char sexo[2]; 
			int peso;
			char enfer[50];
			 Nodo *sig;
		
	};
    
 Nodo *raiz;
 
    public:
    	  Paciente();
    	  ~Paciente();
    	  void Agregar();
    	  void Mostrar();
    	  void Buscar();
    	  
    	
};

Paciente::Paciente()
{
    raiz = NULL;
}
Paciente::~Paciente()
{

}

void Paciente::Mostrar(){//utilizamos la funcion void nombrandola como paciente
    Nodo *reco = raiz;
    cout << "HISTORIAL CLINICO\n";
    while (reco != NULL){//utilizamos un while
        cout <<" NUMERO DE CORRELATIVO: " <<reco->cor<<endl;
        cout <<" NOMBRER: "<< reco->nombre <<endl;
        cout <<"APELLIDO: "<< reco->apellido << endl;
        cout <<"EDAD: "<< reco->edad << endl;
        cout <<"SEXO: "<< reco->sexo << endl;
        cout <<"PESO: "<< reco->peso << endl;
        cout <<"EMFERMEDAD: "<< reco->enfer << endl;
        reco = reco->sig;
    }
    cout << "\n";
}


void Paciente::Agregar()
{
	
	 Nodo *nuevo;
    nuevo = new Nodo();
    cout<<"ingrese correlativo:";
    cin>>nuevo->cor;
    cout<<"ingrese nombre:";
    cin>>nuevo->nombre;
    cout<<"ingrese apellido:";
    cin>>nuevo->apellido;
    cout<<"ingrese edad:";
    cin>>nuevo->edad;
    cout<<"ingrese sexo:";
    cin>>nuevo->sexo;
    cout<<"ingrese peso en numeros:";
    cin>>nuevo->peso;
    cout<<"ingrese enfermedad:";
    cin>>nuevo->enfer;
    
    if (raiz == NULL){
        raiz = nuevo;
        nuevo->sig = NULL;
    }
    else{
        nuevo->sig = raiz;
        raiz = nuevo;
    }

}

void Paciente::Buscar(){
	
	
	if (raiz != NULL){
	
		int buscardatos;
	    cout<<"Ingrese numero de correlativo"<<endl;//si el usuario quiere buscar un paciente por el numero correlativo
	    cin>>buscardatos;
	    
	    if(buscardatos == raiz->cor){ 
	    	
            cout<<"Encontrado, el elemento es: "<<raiz->cor<<endl;
		}
		else{
		
			cout<<"El elemento ingresado no se encuentra en la cola"<<endl;
		}
	}
	else{
	
		cout<<"La cola se encuentra vacia...."<<endl;
	}
}

int main() {//funcion principal
	
	Paciente *consulta;
    consulta= new Paciente();
    int opc;
    
    do{//utilizamos un do while para que el menu se repita cuantas veces el usuario quiera 
	    cout<<"\t\t\tCONSULTORIO "<<endl;
	    cout<<"Ingrese una opcion."<<endl;
       	cout<<" "<<endl;
	
        cout<<"1 - Agregar nuevo cliente."<<endl;
        cout<<"2 - Mostrar datos del cliente"<<endl;
        cout<<"3 - Buscar un cliente"<<endl;
        cout<<"4 - Salir"<<endl;
	    cin>>opc;
	    
	    switch(opc){
	    	
	    	case 1:
        	     consulta->Agregar(); 
	       	break;
	    	
	    	case 2:
         	     	consulta->Mostrar();
	    	break;
	    	
	    	case 3:
	    		 consulta->Buscar();
	    	break;
	    	
	    	case 4:
	    	break;
		}
		system("pause");
		system("cls");//ionfuncion para que la pantalla quede limpia cada vez que se realiza una acc
    }while(opc!=4);
	
	getch();
	return 0;
}
