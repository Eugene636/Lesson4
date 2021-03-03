#include <iostream>


int main (void)
{
{//Task1
   unsigned int x, y;
   std::cout << "Please, enter 2 integer variables:" <<std::endl;
   std::cin >> x;
   std::cin >> y;
   if (((x + y) >= 10)&&((x + y) <= 20)) std::cout << "true" << std::endl;
     else std::cout << "false" << std::endl;
}	

{//Task2
   unsigned int x, i;
   std::cout << "Please, enter 1 natural variable:" <<std::endl;
   std::cin >> x;
   for ( i = 2; (i < x) && (x%i); i++) ;
	   if (i == x) std::cout << "This is a simple number" <<std::endl;
       else std::cout << "Is not a simple number" <<std::endl;
}
{//Task3
   unsigned int x, y;
   std::cout << "Please, enter 2 integer variables:" <<std::endl;
   std::cin >> x;
   std::cin >> y;
   if (((x == 10)&&(y == 10))||((x + y) == 10)) std::cout << "true" << std::endl;
     else std::cout << "false" << std::endl;
}

{//Task4
	unsigned int year;
	std::cout << "Please, enter a number of a year from Christ birth:" <<std::endl;
    std::cin >> year;
	bool Y = true;
	if ((year%4)) Y = false;
    else if ((!(year%100))&&(year%400)) Y = false;
	else if (!(year%400)) Y = true;
	else Y = 1;
    if (Y) std::cout << "This is a leap year"<<std::endl;
	else   std::cout << "This is not a leap year"<<std::endl;
}

	return 0;
}