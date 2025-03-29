#ifndef _BUY_HPP_
#define _BUY_HPP_
#include"Product.hpp"

class Buy : public Product
{
public:
	Buy(std::string_view name, double weight, double price, int quantityBuyProduct)
		: Product(name, weight, price), quantityBuyProduct(quantityBuyProduct) {
	}
	Buy() {}


	void SetQuantityBuyProduct(int quantityBuyProduct) { this->quantityBuyProduct = quantityBuyProduct; }

	void CalculationOfPurchases(const int& quantity)
	{
		priceBuyProduct = GetPrice() * quantity;
		weightBuyProduct = GetWeight() * quantity;
	}


	int GetQuantityBuyProduct() { return quantityBuyProduct; }
	double GetPriceBuyProduct() { return priceBuyProduct; }
	double GetWeightBuyProduct() { return weightBuyProduct; }

private:
	int quantityBuyProduct;
	double priceBuyProduct;
	double weightBuyProduct;
};

#endif // !_BUY_HPP_