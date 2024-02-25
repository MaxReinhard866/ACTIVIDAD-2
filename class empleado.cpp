#include <iostream>
using namespace std;

class empleado{
   // atributos de empleado = codigo_empleado, puesto
   protected :	string codigo_empleado, puesto;

   // metodos
      empleado (){

   }

   empleado (string codemp, string pt){
         codigo_empleado = codemp;
         puesto = pt;
      
   }
   // metodos crud = crear,leer,actualizar,borrar
   void crear ();
   void leer ();
   void actualizar ();
   void borrar ();

};
