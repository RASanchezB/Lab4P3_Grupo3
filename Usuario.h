#ifndef Usuario_H
#define Usuario_H
#include <string>

using namespace std;

class Usuario{

	private:
		
		string nombre;
		string usuario;
		string clave;
		int puntuacion;

	public:

		Usuario(string, string, string, int);
		Usuario();

		string getNombre();
		string getUsuario();
		string getClave();
		int getPuntuacion();

		void setNombre(string);
		void setUsuario(string);
		void setClave(string);
		void setPuntuacion(int);
	
		~Usuario();
};

#endif
