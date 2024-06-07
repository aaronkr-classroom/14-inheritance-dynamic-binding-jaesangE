//Gred.h
#ifndef GUARD_GEAD_H
#define GUARD_GRAD_H

#include"Student_info.h"
#include "Core.h"
class Grad : public Core {
public:
	// �� ������ ��� �Ϲ������� Core::Core()�� ����Ͽ�
	// ��ü�� �⺻ Ŭ�������� ����� �κ��� �ʱ�ȭ
	Grad() : thesis(0) {};

	Grad(istream& is) {
		read(is);
	};
	double grade() const;
	istream& read(istream&);

protected:
	Grad* clone() const { return new Grad(*this); }
private:
	double thesis; // ��


};
#endif