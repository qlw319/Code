#include <assert.h>
#include <iostream>
using namespace std;

template<typename _DataType> void swap(_DataType& v1, _DataType& v2)
{
	_DataType t = v1;
	v1 = v2;
	v2 = t;
}

template<typename _DataType> void inverse(_DataType pBegin, _DataType pEnd)
{
	assert(pBegin != NULL);
	assert(pEnd != NULL);
	assert(pBegin <= pEnd);
	while(pBegin <= pEnd)
	{
		swap(*pBegin, *pEnd);
		++pBegin;
		--pEnd;
	}
}

int main()
{
	cout << "Hello world!" << endl;
	return 0;
}