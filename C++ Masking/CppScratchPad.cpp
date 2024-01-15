#include <iostream>
using std::cout;
using std::endl;

// --------------------- C++ Masking ---------------------------------------------------
//ref link:https://www.youtube.com/watch?v=vf0n7te3_Vc&list=PLRwVmtr-pp043Ah3GxAqNyoMGyo3_LDNh&index=3

void main()
{
	short mysteriousValue = 0;
	short mask = 1;
	// 0000 0000 0000 0001
	// ???? ???? ???? ????
	// 0000 0000 0000 0000
	//

	if ((mask & mysteriousValue) != 0)
	//if ((1) != 0)
		cout << 1 << endl;
	else
		cout << 0 << endl;
}



































// ------------------------- C++ Bitwise AND and OR ---------------------------------------------------
//ref link:https://www.youtube.com/watch?v=qTFUnp_KwHg&list=PLRwVmtr-pp043Ah3GxAqNyoMGyo3_LDNh&index=2

//void main()
//{
//	// 0000 0000 0000 0001
//	//short myValue = 1;
//	// 0000 0000 0000 0100
//	//short yourValue = 4;
//
//	//bool b = true && false;		// AND
//	//bool b = true || false;		// OR
//
//	//short result = myValue & yourValue;
//	// 0000 0000 0000 0001		1
//	// 0000 0000 0000 0100		4
//	// 0000 0000 0000 0000		0
//	//short result = myValue | yourValue;
//	// 0000 0000 0000 0001		1
//	// 0000 0000 0000 0100		4
//	// 0000 0000 0000 0101		5	
//	short myValue = 3;
//	short yourValue = 6;
//	short result = myValue & yourValue;
//	// 0000 0000 0000 0011		3
//	// 0000 0000 0000 0110		6
//	// 0000 0000 0000 0010		2
//
//	//cout << myValue << endl;
//	cout << result << endl;
//}






























// --------------------- C++ Hexadecimal Numbers (0x) ----------------------------------------
//ref link:https://www.youtube.com/watch?v=XcGIE3LOwLY&list=PLRwVmtr-pp043Ah3GxAqNyoMGyo3_LDNh

//void main()
//{
//	//int value = 195;	// decimal - compiler does extrawork for binary convertion
//	//cout << value << endl;
//	//cout << std::hex << value << endl;		// output: C3
//	
//	int value = 0xC3;	// hexadecimal	- you can use hexadecimal value into code
//	cout << value << endl;		//output: 195
//	cout << std::hex << value << endl;		// output: C3
//}