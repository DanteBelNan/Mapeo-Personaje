#include <iostream>

using namespace std;
int main() {

    //Datos Pj y Mapa
    int pj = 1; //Forma del Pj
    int posx = 2; //Cordenada X del Pj
    int posy = 2; //Coordenada Y del Pj
    int vacio = 0;//Valor de los campos vacios
    int mapax = 5; //Dimensiones X del mapa
    int mapay = 5; //Dimensiones Y del Mapa
    int mapa [mapax][mapay];
    //Vaciar bien el mapa
    for(int y = 0; y<=mapay-1; y++){
        for (int x = 0; x<=mapax-1; x++){
            mapa[x][y] = vacio;
        }
    }
    //Fin Vaciar Mapa

    //Movimiento Pj
    int move = 0;
    cout<<"Muevase con las teclas del pad numerico (incluye diagonales)"<<endl;
    while(pj == pj){
    cout<<"Movimiento: ";
    cin>>move;

    system("cls");

    switch(move){
        case 8: //Moverse para arriba
        if(posy-1 >=0){
        mapa[posx][posy] = vacio;
        posy -=1;
        }
        break;

        case 6: //Moverse para la derecha
        if(posx+1 <= mapax-1){
        mapa[posx][posy] = vacio;
        posx ++;
        }
        break;

        case 2: //Moverse para abajo
        if(posy+1 <= mapay-1){
        mapa[posx][posy] = vacio;
        posy ++;
        }
        break;

        case 4: //Moverse para la izquierda
        if(posx-1 >=0){
        mapa[posx][posy] = vacio;
        posx -=1;
        }
        break;

        case 7: //Moverse Arriba-Izquierda
        if(posx-1 >= 0 && posy-1 >= 0){
        mapa[posx][posy] = vacio;
        posx-=1;
        posy-=1;
        }
        break;

        case 9: //Moverse Arriba-Derecha
        if(posx+1 <=mapax-1 && posy-1 >= 0){
        mapa[posx][posy] = vacio;
        posx++;
        posy-=1;
        }
        break;

        case 3: //Moverse Abajo-Derecha
        if(posx+1 <=mapax-1 && posy+1 <= mapay-1){
        mapa[posx][posy] = vacio;
        posx++;
        posy++;
        }
        break;

        case 1: //Moverse Abajo-Izquierda
        if(posx-1 <=0 && posy+1 >=mapay-1)
        mapa[posx][posy] = vacio;
        posx-=1;
        posy++;
        break;

        default:
        cout<<"Ese movimiento invalido, ingrese otro"<<endl;
        break;
    }
     mapa[posx][posy] = pj; //Localizacion del Pj

    //Inicio impresion del Mapeo
    cout<<":-";
    for (int bordesup = 0; bordesup<mapay-1 ; bordesup++){
        cout<<" -";
    }
    cout<<":";
    cout<<endl;
    for(int y = 0; y<mapay; y++){
        for (int x = 0; x<mapax; x++){
            if(x==0){
                cout<<"|";
            }
            if(x!=mapax-1){
            cout<<mapa[x][y]<<" ";
            }
            if(x==mapax-1){
                cout<<mapa[x][y]<<"|";
                cout<<endl;
            }
        }
    }
    cout<<":-";
    for (int bordeinf = 0; bordeinf<mapay-1 ; bordeinf++){
        cout<<" -";
    }
    cout<<":";
    cout<<endl;
    //Fin impresion del Mapeo.

}
}
