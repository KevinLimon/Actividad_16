#include<iostream>
#include"laboratorio.h"
using namespace std;

int main(){
    Laboratorio k;
    string opcion;

    while (true)
    {
        cout<<"1) Agregar computadora"<<endl;
        cout<<"2) Mostrar computadoras"<<endl;
        cout<<"3) Respaldar"<<endl;
        cout<<"4) Recuperar"<<endl;
        cout<<"5) Insertar computadora"<<endl;
        cout<<"6) Inicializar"<<endl;
        cout<<"7) Eliminar"<<endl;
        cout<<"8) Ordenar"<<endl;
        cout<<"9) Borrar ultimo"<<endl;
        cout<<"10) Buscar Computadora"<<endl;
        cout<<"0) Salir"<<endl;
        getline(cin, opcion);

        if(opcion=="1"){
            Computadora c;
            cin>>c;
            k.agregarFinal(c);
            cin.ignore();
        }
        else if(opcion=="2"){
            k.mostrar();
        }
        else if(opcion=="3"){
            k.respaldar();
        }
        else if(opcion=="4"){
            k.recuperar();
        }
        else if(opcion=="5"){
            Computadora c;
            cin>>c;

            size_t ps;
            cout<<"Posicion: ";
            cin>>ps;
            cin.ignore();

            if(ps>=k.size()){
                cout<<"Posicion no valida"<<endl;
            }
            else{
                k.insertar(c, ps);
            }
        }
        else if(opcion=="6"){
            Computadora c;
            cin>>c;

            size_t n;
            cout<<"Veces: ";
            cin>>n;
            cin.ignore();

            k.inicializar(c, n);
        }
        else if(opcion=="7"){
            size_t ps;
            cout<<"Posicion: ";
            cin>>ps;
            cin.ignore();

            if(ps>=k.size()){
                cout<<"Posicion no valida"<<endl;
            }
            else{
                k.eliminar(ps);
            }
        }
        else if(opcion=="8"){
            k.ordenar();
        }
        else if(opcion=="9"){
            if(k.size()==0){
                cout<<"Arreglo vacio"<<endl;
            }
            else{
                k.eliminar_ultimo();
            }
        }
        else if(opcion=="10"){ //Para buscar tienen que coincidir el nombre y el color
            Computadora c;
            cin>>c;
            cin.ignore();
            Computadora *ptr = k.buscar(c);

            if(ptr == nullptr){
                cout<<"No encontrado"<<endl;
            }
            else{
                cout<<*ptr<<endl;
            }


        }
        else if(opcion=="0"){
            break;
        }
    }
    
    return 0;
}