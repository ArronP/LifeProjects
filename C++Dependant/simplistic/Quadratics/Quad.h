//Arron Pontbriand
//4.23.18
//Quadratic Functions
class Quad {
public:
	//Creates a Quadratic with A,b,&c set to 1.
	//q1
	Quad();

	//creates a Quadratic with a=0, b=0, c=value.
	//q2
	Quad(int value);

	//creates a quadratic with specified values as coeffecients.
	//q3
	Quad(int newa, int newb, int newc);

	//Evaluates quadratic for X=value.
	//condition: Quad unchanged
	//Returns answer.
	int eval(int value) const;

	//condition: This and qu are unchanged.
	//adds original Quad and this one
	//q4
	Quad operator+(const Quad& qu) const; //I removed const as Quad& qu are already consts

	//compares this quad to another quad.
	//this quad remains the same.
	//true means same coeeffecient.
	bool operator==(const Quad& p) const;

	//compares quad to another quad.
	//remains unchanged.
	//true means they are not the same.
	bool operator!=(const Quad& q) const;

	//creates a quad from the multiples of the integer.
	//q4
	Quad multiple(int value) ;

	void printQuad() const;

private:
	int newa, newb, newc;
	int value;
};
