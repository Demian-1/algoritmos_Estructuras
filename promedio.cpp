#include <iostream>
#include <vector>

using namespace std;

int promedio(vector<int> calificaciones){
    int acum=0, prom;
    for(int i=0; i<calificaciones.size(); i++){
        acum=acum+calificaciones[i];
    }
    prom=acum/calificaciones.size();
    return prom;
}

void calcularProm(){
    vector<int> calificaciones={};
    cout<<"Cuantas calificaciones tienes? ";
    int n, calificacion, prom;
    cin>>n;
    for(int i = 0; i<n; i++){
        cout<<"Ingresa la calificacion "<<i+1<<": ";
        cin>>calificacion;
        cout<<"\n";
        calificaciones.push_back(calificacion);
    }
    prom = promedio(calificaciones);
    if(prom>=8){
        cout<<"\nExcelencia\n";
    } else if(prom<6){
        cout<<"\nReprobado\n";
    } else{
        cout<<"\nRegular\n";
    }
}

int main(int argc, char const *argv[])
{
    char opc='s';
    while(opc=='s'){
        calcularProm();
        cout<<"Volver a calcular? [s/n]\n";
        cin>>opc;
    }
    return 0;
}
