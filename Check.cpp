#include "Check.hpp"




void Check::PrintMenu()
{


	Check a("Футболка", 1.0, 999.99, 6);
	Check b("Леопардовые штаны", 3.5, 100000.99, 8);
	Check c("Желтый кепарик", 0.5, 499.99, 7);
	Check z("Черные подкрадули", 4.5, 52000.00, 10);

	std::vector<Check> vec{ a,b,c,z };



	std::cout << "\t\t\tМагазин Комфорт:\n\n\n";
	std::cout << "Ассортимент\n\n";

	for (int i = 0; i < size(vec); ++i)
	{
		std::cout << "Товар: " << vec[i].GetName() << std::endl;
		std::cout << "Цена за единицу: " << vec[i].GetPrice() << " руб." << std::endl;
		std::cout << "Количество: " << vec[i].GetQuantityBuyProduct() << " шт." << std::endl;
		std::cout << "Вес: " << vec[i].GetWeight() << " кг." << "\n\n";
	}

	std::cout << "\nВведите название товара который хотите взять: ";
	std::string name;
	std::getline(std::cin, name);

	std::vector<Check> tempVec;
	int quantityBuyProduct;

	for (int i = 0; i < size(vec); ++i)
	{
		if (vec[i].GetName() == name)
		{
			tempVec.push_back(vec[i]);

			std::cout << "\nНапишите количество которое хотите взять: ";
			std::cin >> quantityBuyProduct;

			if (quantityBuyProduct > vec[i].GetQuantityBuyProduct())
			{
				std::cout << "\nТакого количества товара нет в магазине!!!\n";
				continue;
			}
		}
	}
	if (size(tempVec) == 0)
	{
		std::cout << "\nПлохое название!!!!\n";
		system("pause");
		system("cls");
		Check::PrintMenu();
	}
	PrintCheck(tempVec, quantityBuyProduct);
}

void Check::PrintCheck(std::vector<Check> tempVecс, int quantity)
{
	system("cls");
	std::cout << "Ваш чек: \n\n";

	for (int i = 0; i < size(tempVecс); ++i)
	{
		tempVecс[i].SetQuantityBuyProduct(quantity);
		tempVecс[i].CalculationOfPurchases(quantity);
		std::cout << "Товар: " << tempVecс[i].GetName() << std::endl;
		std::cout << "Цена за единицу: " << tempVecс[i].GetPrice() << " руб." << std::endl;
		std::cout << "Количество: " << tempVecс[i].GetQuantityBuyProduct() << " шт." << std::endl;
		std::cout << "Общая цена: " << tempVecс[i].GetPriceBuyProduct() << " руб." << std::endl;
		std::cout << "Общий вес: " << tempVecс[i].GetWeightBuyProduct() << " кг." << "\n\n";
	}
}
