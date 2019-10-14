#include <iostream>


using namespace std;
//FUNCIONES
void PrintCuteMessage(){
    cout << "Eres increible!" << endl;
}

bool isPlayerDead(int hp){
    if (hp <= 0){
        return true;
        cout <<"Verdadero" << endl;
    }else{
        return false;
    }
    
    
}


int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    cout << 10 << endl; //endl end line
    cout << 3.14 << endl;
    cout << true << endl;
    cout << 'c' << endl;
    cout << "Final de datos" << endl;

    // VARIABLES
    // TIPO DE DATO NOMBRE DE LA VARIABLE Y VALOR
    int Month = 12;
    // int Day = 4;
    bool InGameOver = false;
    // char MyInitial = 'I';
    
    cout << Month << endl ;
    cout << "El jugador ya perdio?" <<endl;
    cout << InGameOver << endl;

    // OPERADORES
    int valorA = 2;
    int valorB = 2;
    cout << valorA + valorB << endl;

    int Direccion = 3509;
    int* ApuntadorADir;
    
    ApuntadorADir = &Direccion; //Direccion de variable
    cout << Direccion << endl;

    

    //CALCULAR AREA
    int Radio = 6;
    int Radio2 = 4;
    float PI = 3.1416;
    cout << "El area del circulo es" << endl;
    cout << (Radio * Radio)* PI << endl;
    cout << "el area de la esfera es" <<endl;
    cout << (4 * PI)*(Radio2 * Radio2) <<endl;


    //Entrada de datos
    
    int Edad = 0;
    
    cout << "Ingrese su edad" << endl;
    cin >> Edad;
    cout << "Su edad es " << Edad << endl;
    
PrintCuteMessage();

isPlayerDead(0);


char Corbata[5];
Corbata[0] = 'V';


string Names[4] = { "Eric", "JuanDc", "Demian", "Mariandrea" };

cout << Names[0] << endl;



return 0;

}
