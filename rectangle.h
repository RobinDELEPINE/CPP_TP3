#include <iostream>
#include "point.h"

template <typename T>

class rectangle: private point<T>{
   private:
      T largeur;
      T longeur;
   public:
      rectangle(point<T> p,T largeur, T longeur);
      void translater(T a, T b);
      bool contient(point<T>  p1);
      void affiche(void);

};

template<typename T>
rectangle<T> :: rectangle(point<T> p, T largeur, T longeur) : point<T>(p.getX(), p.getY()){
   this->largeur = largeur;
   this->longeur = longeur;
}