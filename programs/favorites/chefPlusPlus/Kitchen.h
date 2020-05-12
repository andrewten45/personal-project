#ifndef KITCHEN_H
#define KITCHEN_H

class Kitchen {
public:
	void SetNumCooking();
	void SetNumCooks();
	void SetOvenStatus();
	void SetOvenTemp();
	void GetNumCooking();
	void GetNumCooks();
	void GetOvenStatus();
	void GetOvenTemp();
	void SafetyCheck();

private:
	int cooking = 0;
	int cooks = 0;
	int status = 0;
	int ovenTemp = 0;
};

#endif
