//Gred.h
#ifndef GUARD_GEAD_H
#define GUARD_GRAD_H

#include"Student_info.h"
#include "Core.h"
class Grad : public Core {
public:
	// 두 생성자 모두 암묵적으로 Core::Core()를 사용하여
	// 객체가 기본 클래스에서 상속한 부분을 초기화
	Grad() : thesis(0) {};

	Grad(istream& is) {
		read(is);
	};
	double grade() const;
	istream& read(istream&);

protected:
	Grad* clone() const { return new Grad(*this); }
private:
	double thesis; // 논문


};
#endif