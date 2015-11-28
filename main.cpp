#include"Historicos.h"
#include "graphics.h"
using namespace std;

int main(){
string editt,edittt,editttt,edittttt,editttttt, fut, futt, futtt, futttt,arte,artee,arteee, hist, histt, histtt, compararMain;
int tamArray, futNum, artNum, hisNum, random, selJugador,selRandom, whileIniciar, contF, contH,contA;
char iniciar, menu;
Persona Funciones; //Funciones generales//
Artista personajesA;
Futbolista personajesF;
Historico personajesH;
hisNum = 0;
futNum =0;
artNum =0;

cout <<  "            ]:... B I E N V E N I D O ...:[\n";

//Entramos al menú//
while(hisNum == 0 || futNum == 0 || artNum == 0){
cout << "¿Qué tipo de personajes quiere crear? \n" << "Futbolistas	[1]\n" << "Artistas	[2]\n" << "Históricos	[3]\n";
cin >> tamArray; 
switch (tamArray){
	case 1:
cout << "Usted eligió Futbolistas" << endl;
cout << "¿Cuántos Futbolistas desea agregar? ";
cin >> futNum; //Número de personajes futbolistas//
/*while(futNum==15-...){
cout<< "Su opción es inválida, intente otra: ";
cin >> futNum;}*/

for(int k=0; k<futNum; k++){


cout << "¿Qué nombre desea ponerle a su personaje? ";
cin.ignore();
getline(cin, editt);
//cin >> editt;
cout << "¿Qué apodo desea ponerle a su personaje? ";
cin >> edittt;
cout << "¿De qué nacionalidad es su personaje? ";
cin >> editttt;
cout << "¿Qué sexo es su personaje? ";
cin >> edittttt;
cout << "¿Qué edad tiene es su personaje? ";
cin >> editttttt;
cout << "¿Cuántos goles ha metido? ";
cin >> fut;
cout << "¿A qué equipo pertenece? ";
cin >> futt;
cout << "¿Qué copa ha sido representativa en su carrera? "; 
cin >> futtt;
personajesF.caracteristasGenerales(k,editt,edittt,editttt,edittttt, editttttt);
personajesF.caracteristasParticulares(k, fut, futt, futtt);
personajesF.tipoArreglo(k);
cout << "\nSe guardó su personaje número " << k+1 << endl << endl;
}

for(int i=0; i<futNum; i++)
cout << personajesF.nombreRegreso(i) << " | " << personajesF.apodoRegreso(i)<< " | " <<personajesF.nacionalidadRegreso(i) << " | " << personajesF.sexoRegreso(i) << " | " << personajesF.edadRegreso(i) << " Años" <<endl;
cout << "\n[.......¡Sus Personajes están listos!.......]\n\n";
	break; 


	case 2: //Artistas
cout << "Usted eligió Artistas" << endl;
cout << "¿Cuántos Artistas desea agregar? ";
cin >> artNum; //Número de personajes Artistas//
while(artNum!=1||artNum!=2||artNum!=3||artNum!=4||artNum!=5||artNum!=6||artNum!=7||artNum!=8||artNum!=9||artNum!=10||artNum!=11||artNum!=12||artNum!=13||artNum!=14||artNum!=15){
cout<< "Su opción es inválida, intente otra: ";
cin >> artNum;}

for(int k=0; k<artNum; k++){
cout << "¿Qué nombre desea ponerle a su personaje? ";
cin.ignore();
getline(cin, editt);
//cin >> editt;
cout << "¿Qué apodo desea ponerle a su personaje? ";
cin >> edittt;
cout << "¿De qué nacionalidad es su personaje? ";
cin >> editttt;
cout << "¿Qué sexo es su personaje? ";
cin >> edittttt;
cout << "¿Qué edad tiene es su personaje? ";
cin >> editttttt;
cout <<"¿Cuál ha sido su obra más importante? ";
cin >> arte;
cout <<"¿Es actor/actriz o cantante? ";
cin >> artee;
cout <<"¿Cuál ha sido el premio más importante que ha recibido? ";
cin >> arteee;
personajesA.caracteristasGenerales(k,editt,edittt,editttt,edittttt,editttttt);
personajesA.caracteristasParticulares(k,arte,artee,arteee);
personajesA.tipoArreglo(k);
cout << "\nSe guardó su personaje número " << k+1 << endl << endl;
}

for(int i=0; i<artNum; i++){
cout << personajesA.nombreRegreso(i) << " | " << personajesA.apodoRegreso(i)<< " | " <<personajesA.nacionalidadRegreso(i) << " | " << personajesA.sexoRegreso(i) << " | "  <<  personajesA.edadRegreso(i) << " Años" <<endl;
}
cout << "\n[.......¡Sus Personajes están listos!.......]\n\n";
	break;

	case 3:

cout << "Usted eligió Personajes Históricos" << endl;
cout << "¿Cuántos personajes históricos desea agregar? ";
cin >> hisNum; //Número de personajes Históricos//
while(hisNum!=1||hisNum!=2||hisNum!=3||hisNum!=4||hisNum!=5||hisNum!=6||hisNum!=7||hisNum!=8||hisNum!=9||hisNum!=10||hisNum!=11||hisNum!=12||hisNum!=13||hisNum!=14||hisNum!=15){
cout<< "Su opción es inválida, intente otra: ";
cin >> hisNum;}

for(int k=0; k<hisNum; k++){
cout << "¿Qué nombre desea ponerle a su personaje? ";
cin.ignore();
getline(cin, editt);
//cin >> editt;
cout << "¿Qué apodo desea ponerle a su personaje? ";
cin >> edittt;
cout << "¿De qué nacionalidad es su personaje? ";
cin >> editttt;
cout << "¿Qué sexo es su personaje? ";
cin >> edittttt;
cout << "¿Qué edad tenía su personaje cuando murió? ";
cin >> editttttt;
cout << "¿En qué año nació? ";
cin >> hist;
cout << "¿En qué año murió? ";
cin >> histt;
cout << "¿En qué trabajó? ";
cin >> histtt;
personajesH.caracteristasGenerales(k,editt,edittt,editttt,edittttt,editttttt);
personajesH.caracteristasParticulares(k,hist,histt,histtt);
personajesH.tipoArreglo(k);
cout << "\nSe guardó su personaje número " << k+1 << endl << endl;
}

for(int i=0; i<hisNum; i++){
cout << personajesH.nombreRegreso(i) << " | " << personajesH.apodoRegreso(i)<< " | " <<personajesH.nacionalidadRegreso(i) << " | " << personajesH.sexoRegreso(i) << " | "  <<  personajesH.edadRegreso(i) << " Años" <<endl;
}

cout << "\n[.......¡Sus Personajes están listos!.......]\n\n";

break;
}}

cout << "¿Está listo para jugar el contrincante? [S/N]";
cin >> iniciar; 

while(iniciar=='n'||iniciar=='N'){
cout << "¿Salir?	[1]\n" << "¿Jugar?	[2]\n";
cin >> whileIniciar; 

if(whileIniciar==1)
exit(0);

}
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////

cout << system("clear");

//////////////////////////////////////////////////////
//                INTERFAZ DE JUGADOR               //
//////////////////////////////////////////////////////

cout << "               ¿LISTO? \n" << "               ¡Vamos!\n";
contA = 0;
contH = 0;
contF = 0;
do{
cout << "¿De qué categoría quiere su personaje?\n" << "Futbolistas	[1]\n" << "Artistas	[2]\n" << "Históricos	[3]\n";
cin >> selJugador; 


while(selJugador !=1 && selJugador !=2 && selJugador !=3){
cout << "Esa opción no existe, intente otra vez" << endl;
cin >> selJugador;
} 

bool categoriaRecargada;
do{
categoriaRecargada =false;

if(selJugador == 1){
	selRandom = futNum;
if(contF>=futNum)
categoriaRecargada = true;}

if(selJugador == 2){
	selRandom = artNum;
if(contA>=artNum)
categoriaRecargada = true;}

if(selJugador == 3){
	selRandom = hisNum;
if(contH>=hisNum)
categoriaRecargada = true;}

if(categoriaRecargada == true){
cout <<" Ya no hay más personajes en esa categoría, intente otra...\n";
cin >> selJugador;
}
}while(categoriaRecargada == true);


//Random//
Funciones.seleccionarNumeroPersonajes(selRandom);
Funciones.generarNumerosDatos();


switch(selJugador){
case 1: //Futbolistas
for(int f=0; f<7; f++){
if(Funciones.regresarNumerosDatos(f)==2)
cout << "Su personaje tiene la nacionalidad "<< personajesF.seleccionarInfoFutbolistas(Funciones.regresarNumerosDatos(f), Funciones.regresarNumerosPersonajes(contF)) << endl;
if(Funciones.regresarNumerosDatos(f)==3 || Funciones.regresarNumerosDatos(f)==5)
cout << "Su personaje es " << personajesF.seleccionarInfoFutbolistas(Funciones.regresarNumerosDatos(f), Funciones.regresarNumerosPersonajes(contF)) << endl;
if(Funciones.regresarNumerosDatos(f)==4)
cout << "Su personaje tiene la edad de "<< personajesF.seleccionarInfoFutbolistas(Funciones.regresarNumerosDatos(f), Funciones.regresarNumerosPersonajes(contF)) << " años" << endl;
if(Funciones.regresarNumerosDatos(f)==6)
cout << "Su personaje metió  " << personajesF.seleccionarInfoFutbolistas(Funciones.regresarNumerosDatos(f), Funciones.regresarNumerosPersonajes(contF)) << " goles" << endl;
if(Funciones.regresarNumerosDatos(f)==7)
cout << "Su personaje pertenecía al equipo de " << personajesF.seleccionarInfoFutbolistas(Funciones.regresarNumerosDatos(f), Funciones.regresarNumerosPersonajes(contF)) << endl;
if(Funciones.regresarNumerosDatos(f)==8)
cout << "Su personaje ganó la copa " << personajesF.seleccionarInfoFutbolistas(Funciones.regresarNumerosDatos(f), Funciones.regresarNumerosPersonajes(contF)) << endl;

cout << "\nIntente introducir su apodo: ";
cin >> compararMain;
if(compararMain == personajesF.apodoRegreso(0)){
cout << "¡¡Es correcto, ha ganado!!\n";
break;
}
else
cout << "Intente otra vez \n";
}

break;

case 2://Artistas
for(int f=0; f<7; f++){


if(Funciones.regresarNumerosDatos(f)==2)
cout << "Su personaje tiene la nacionalidad "<< personajesA.seleccionarInfoArtisticos(Funciones.regresarNumerosDatos(f), Funciones.regresarNumerosPersonajes(contA)) << endl;
if(Funciones.regresarNumerosDatos(f)==3 || Funciones.regresarNumerosDatos(f)==5||Funciones.regresarNumerosDatos(f)==7)
cout << "Su personaje es " << personajesA.seleccionarInfoArtisticos(Funciones.regresarNumerosDatos(f), Funciones.regresarNumerosPersonajes(contA)) << endl;
if(Funciones.regresarNumerosDatos(f)==4)
cout << "Su personaje tiene la edad de "<< personajesA.seleccionarInfoArtisticos(Funciones.regresarNumerosDatos(f), Funciones.regresarNumerosPersonajes(contA)) << " años" << endl;
if(Funciones.regresarNumerosDatos(f)==6)
cout << "Su personaje hizo la famosa obra de " << personajesA.seleccionarInfoArtisticos(Funciones.regresarNumerosDatos(f), Funciones.regresarNumerosPersonajes(contA)) << endl;
if(Funciones.regresarNumerosDatos(f)==8)
cout << "Su personaje ganó el premio " << personajesA.seleccionarInfoArtisticos(Funciones.regresarNumerosDatos(f), Funciones.regresarNumerosPersonajes(contA)) << endl;

cout << "\nIntente introducir su apodo: ";
cin >> compararMain;
if(compararMain == personajesA.apodoRegreso(0)){
cout << "¡¡Es correcto, ha ganado!!\n";
break;
}
else
cout << "Intente otra vez \n";
}
break;

case 3://Históricos
for(int f=0; f<7; f++){


if(Funciones.regresarNumerosDatos(f)==2)
cout << "Su personaje tiene la nacionalidad "<< personajesH.seleccionarInfoHistoricos(Funciones.regresarNumerosDatos(f), Funciones.regresarNumerosPersonajes(contH)) << endl;
if(Funciones.regresarNumerosDatos(f)==3 || Funciones.regresarNumerosDatos(f)==5)
cout << "Su personaje es " << personajesH.seleccionarInfoHistoricos(Funciones.regresarNumerosDatos(f), Funciones.regresarNumerosPersonajes(contH)) << endl;
if(Funciones.regresarNumerosDatos(f)==4)
cout << "Su personaje tenía la edad de "<< personajesH.seleccionarInfoHistoricos(Funciones.regresarNumerosDatos(f), Funciones.regresarNumerosPersonajes(contH)) << " años, cuando murió" << endl;
if(Funciones.regresarNumerosDatos(f)==6)
cout << "Su personaje nació en el año de " << personajesH.seleccionarInfoHistoricos(Funciones.regresarNumerosDatos(f), Funciones.regresarNumerosPersonajes(contH)) << endl;
if(Funciones.regresarNumerosDatos(f)==7)
cout << "Su personaje se se murió en el año de " << personajesH.seleccionarInfoHistoricos(Funciones.regresarNumerosDatos(f), Funciones.regresarNumerosPersonajes(contH)) << endl;
if(Funciones.regresarNumerosDatos(f)==8)
cout << "Su personaje se dedicó a " << personajesH.seleccionarInfoHistoricos(Funciones.regresarNumerosDatos(f), Funciones.regresarNumerosPersonajes(contH)) << endl;

cout << "\nIntente introducir su apodo: ";
cin >> compararMain;
if(compararMain == personajesH.apodoRegreso(0)){
cout << "¡¡Es correcto, ha ganado!!\n";
break;
}
else
cout << "Intente otra vez \n";
}
break;



default: 
cout << "Esa opción es inválidad, intente otra...\n";
}

//Menú 
cout << "\n\n¿Desea jugar otra vez? [S][N]" << endl;
cin >> menu;
if(selJugador == 1)
	++contF;
if(selJugador == 2)
	++contA;
if(selJugador == 3)
	++contH;
}while (menu=='s'||menu=='S');
return 0;
}
