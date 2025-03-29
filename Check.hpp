#ifndef _CHECK_HPP_
#define _CHECK_HPP_
#include"Buy.hpp"
class Check : public Buy
{
public:
	Check(std::string_view name, double weight, double price, int quantityBuyProduct) : Buy(name, weight, price, quantityBuyProduct) {}
	Check() {}
	void PrintMenu();
	void PrintCheck(std::vector<Check>tempVec, int quantity);
};

#endif // !_CHECK_HPP_
