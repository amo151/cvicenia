//
// Created by Johny on 9. 3. 2017.
//

#ifndef HW01_OBJEKT_H
#define HW01_OBJEKT_H


class Objekt {
public:
	virtual double vypocitajPlochu() = 0;

	virtual double vypocitajObvod() = 0;
};

class Trojuholnik : public Objekt {
private:
	double a, b, c;

public:
	Trojuholnik(double stranaA, double stranaB,
	            double stranaC);//musi zabezpecit aj to ci je ten trojuholnik zostrojitelny

	Trojuholnik();

	double getA() const;

	void setA(double a);

	double getB() const;

	void setB(double b);

	double getC() const;

	void setC(double c);

	bool isValid();

	double vypocitajObvod();

	double vypocitajPlochu();

};

class Obdlznik : public Objekt {
public:
	Obdlznik(double stranaA, double stranaB);

	Obdlznik();

	double getB() const;

	void setB(double b);

	double getA() const;

	void setA(double a);

	double vypocitajObvod();

	double vypocitajPlochu();

protected:
	double a, b;
};

class Stvorec : public Obdlznik {
public:
	Stvorec(double a);

	Stvorec();

};

class Kruh : public Objekt {
public:
	Kruh(int r = 1);

	Kruh();

	double getR() const;

	void setR(double r);

	double vypocitajObvod();

	double vypocitajPlochu();

private:
	double r;

};

void menu()
{

}

#endif //HW01_OBJEKT_H
