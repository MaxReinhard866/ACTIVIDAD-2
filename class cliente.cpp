#include <iostream>
using namespace std;

class cliente{
   // atributos de cliente = nit
   protected :	string nt;

   // metodos
      cliente (){

   }

   cliente (string nit){
         nit = nit;
         
   }
   // metodos crud = crear,leer,actualizar,borrar
   void crear ();
   void leer ();
   void actualizar ();
   void borrar ();

};
