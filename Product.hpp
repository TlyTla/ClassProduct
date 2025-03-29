#ifndef _PRODUCT_HPP_
#define _PRODUCT_HPP_

#include<iostream>
#include<Windows.h>
#include<format>
#include<string_view>
#include<vector>
#include<string>



class Product
{
public:
	Product() {}
	Product(std::string_view name, double weight, double price) : name(name), weight(weight), price(price) {}
	~Product() {}

	std::string_view GetName() { return name; }
	double GetWeight() { return weight; }
	double GetPrice() { return price; }

private:
	std::string_view name;
	double weight;
	double price;
};

#endif // !_PRODUCT_HPP_