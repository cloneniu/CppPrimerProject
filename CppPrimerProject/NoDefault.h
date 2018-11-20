#ifndef NODEFAULT_H
#define NODEFAULT_H
class NoDefault {
private:
	int intI;
public:
	NoDefault(int i): intI(i) { }
	// NoDefault(): NoDefault(0) { }
};

class CCCC {
private:
	NoDefault nod;
public:
	CCCC():nod(0) {}
};
#endif


