#include <iostream>
#include <vector>

using namespace std;

float promedio(vector<int> calificaciones){
    int acum=0;
    for(int i=0; i<calificaciones.size(); i++){
        acum=acum+calificaciones[i];
    }

    //cout<<"tamaño : "<<calificaciones.size()<<"\n"<<acum;
    return (float) acum / calificaciones.size();
}

void calcularProm(){
    vector<int> calificaciones={};
    cout<<"Cuantas calificaciones tienes? ";
    int n, calificacion;
    float prom;
    cin>>n;
    for(int i = 0; i<n; i++){
        cout<<"Ingresa la calificacion "<<i+1<<": ";
        cin>>calificacion;
        cout<<"\n";
        calificaciones.push_back(calificacion);
    }
    prom = promedio(calificaciones);
    cout << "\nPromedio : "<< prom;
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
