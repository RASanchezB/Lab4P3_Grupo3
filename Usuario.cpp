#include "Usuario.h"

#include <iostream>

using namespace std;

Usuario::Usuario(){

	this->nombre = "";
	this->usuario = "";
	this->clave = "";
	this->puntuacion = 0;

}

Usuario::Usuario(string pNombre, string pUsuario, string pClave, int pPuntuacion){

	nombre = pNombre;
	usuario = pUsuario;
	clave = pClave;
	puntuacion = pPuntuacion;

}

string Usuario::getNombre(){
	return nombre;
}

string Usuario::getUsuario(){
	return usuario;
}

string Usuario::getClave(){
	return clave;
}

int Usuario::getPuntuacion(){
	return puntuacion;
}

void Usuario::setNombre(string pNombre){
        nombre = pNombre;
}

void Usuario::setUsuario(string pUsuario){
        usuario = pUsuario;
}

void Usuario::setClave(string pClave){
        clave = pClave;
}

void Usuario::setPuntuacion(int pPuntuacion){
        puntuacion = pPuntuacion;
}

Usuario::~Usuario(){
	cout<<"."<<endl;
}
