#include <stdio.h>
#include <iostream>

using namespace std;

class troad
	{
	public:
	float length;
	int width;
	troad();
	};
	
troad::troad()
{
	length = 2.0;
	width = 0;
}

int main()
{
	troad road;
std::cout<<"road.width="
<<road.width<<std::endl;
std::cout<<"road.length="
<<road.length<<std::endl;

	road.length = 40.0;

std::cout<<"road.width="
<<road.width<<std::endl;
std::cout<<"road.length="
<<road.length<<std::endl;

return 0;
}
	
