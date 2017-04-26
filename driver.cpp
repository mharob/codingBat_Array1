#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

bool firstLast6(vector<int> vec);
bool sameFirstLast(vector<int> vec);
int makepi();

int main()
{
	vector<int> v1 = {1, 2, 6};
	vector<int> v2 = {6, 1, 2, 3};
	vector<int> v3 = {13, 6, 1, 2, 3};
	vector<int> v4 = {10, 6, 45, 0};
	vector<int> v5 = {7, 8, 9, 10 , 44};
	
	assert(firstLast6(v1) == true);
	assert(firstLast6(v2) == true);
	assert(firstLast6(v3) == false);
	assert(firstLast6(v4) == false);
	assert(firstLast6(v5) == false);
	
	
	v1 = {1, 2, 3};
	v2 = {1, 2, 3,1};
	v3 = {1, 2, 1};
	v4 = {1, 2, 3, 0, 0};
	v5 = {0,0,0,0};
	
	assert(sameFirstLast(v1) == false);
	assert(sameFirstLast(v2) == true);
	assert(sameFirstLast(v3) == true);
	assert(sameFirstLast(v4) == false);
	assert(sameFirstLast(v5) == true);
	
	assert(makepi() == ary[0]);
	assert(makepi() == ary[1]);
	assert(makepi() == ary[2]);
	


	return 0;
}

//*****Functions*****
//*******************
bool firstLast6(vector<int> vec)
{
	bool results = false;
	int numElements = vec.size();
	
	
	for (int ix = 0; ix < numElements; ix++)
	{
		if (vec[0] == 6)
		{
			results = true;
		}
		else if (vec[numElements -1] == 6)
		{
			results = true;	
		}
		
	}// end for()


	return results;
	
}// end firstLast6()






//*********************************
//*****Same first last function****
//*********************************
bool sameFirstLast(vector<int> vec){


	bool results = false;
	int numElements = vec.size();
	
	
	for (int ix = 0; ix < numElements; ix++)
	{
		if (vec[0] == vec[numElements-1])
		{
			results = true;
		}
		
		
	}// end for()


	return results;



}

int makepi()
{
	const int SIZE = 3;
	const int THREE = 3;
	const int ONE = 1;
	const int FOUR= 4;
	int pi[SIZE];
	
	pi[0] = THREE;
	pi[1] = ONE;
	pi[2] = FOUR;

	return pi;
}
