#pragma once
//-----------------------------------------
// declaration de la classe
//-----------------------------------------

template<typename T>
class point
{
protected:
	int x = 0;
	int y = 0;
public :
	point(T x, T y);
	void translater(T a, T b);
	point(point const & pt);
	T getX();
	T getY();
	void setX(T a);
	void setY(T b);
};

//-----------------------------------------
// declaration des fonctions de la classe
//-----------------------------------------

template<typename T>
inline point<T>::point(T x, T y)
{
	this->x = x;
	this->y = y;
}

template<typename T>
inline void point<T>::translater(T a, T b)
{
	this->x += a;
	this->y += b;
}

template<typename T>
inline point<T>::point(point const & pt)
{
	//this = pt;
	this->x = pt.x;
	this->y = pt.y;
}

template<typename T>
inline T point<T>::getX()
{
	return T(this->x);
}

template<typename T>
inline T point<T>::getY()
{
	return T(this->y);
}

template<typename T>
inline void point<T>::setX(T a)
{
	this->x = a;
}

template<typename T>
inline void point<T>::setY(T b)
{
	this->y = b;
}
//bonjour