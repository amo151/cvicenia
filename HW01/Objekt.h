//
// Created by Johny on 9. 3. 2017.
//

#ifndef HW01_OBJEKT_H
#define HW01_OBJEKT_H


class Objekt {
public:
	virtual double vypocitajPlochu() = 0;

	virtual double vypocitajObvod() = 0;

	virtual void nastav() = 0;

};

class Trojuholnik : public Objekt {
private:
	double a, b, c;

public:
	Trojuholnik(double stranaA = 3, double stranaB = 4,
	            double stranaC = 5);//musi zabezpecit aj to ci je ten trojuholnik zostrojitelny

	double getA() const;

	void setA(double a);

	double getB() const;

	void setB(double b);

	double getC() const;

	void setC(double c);

	bool isValid();

	void nastav();

	double vypocitajObvod();

	double vypocitajPlochu();

};

class Obdlznik : public Objekt {
public:
	Obdlznik(double stranaA = 15, double stranaB = 5);

	double getB() const;

	void setB(double b);

	double getA() const;

	void setA(double a);

	virtual void nastav();

	double vypocitajObvod();

	double vypocitajPlochu();

protected:
	double a, b;
};

class Stvorec : public Obdlznik {
public:
	Stvorec(double a=15);

	void nastav();

};

class Kruh : public Objekt {
public:
	Kruh(int r=1);

	void nastav();

	double getR() const;

	void setR(double r);

	double vypocitajObvod();

	double vypocitajPlochu();

private:
	double r;

};

int menu1();
bool hodnotyUser();
#endif //HW01_OBJEKT_H
