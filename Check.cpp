#include "Check.hpp"




void Check::PrintMenu()
{


	Check a("��������", 1.0, 999.99, 6);
	Check b("����������� �����", 3.5, 100000.99, 8);
	Check c("������ �������", 0.5, 499.99, 7);
	Check z("������ ����������", 4.5, 52000.00, 10);

	std::vector<Check> vec{ a,b,c,z };



	std::cout << "\t\t\t������� �������:\n\n\n";
	std::cout << "�����������\n\n";

	for (int i = 0; i < size(vec); ++i)
	{
		std::cout << "�����: " << vec[i].GetName() << std::endl;
		std::cout << "���� �� �������: " << vec[i].GetPrice() << " ���." << std::endl;
		std::cout << "����������: " << vec[i].GetQuantityBuyProduct() << " ��." << std::endl;
		std::cout << "���: " << vec[i].GetWeight() << " ��." << "\n\n";
	}

	std::cout << "\n������� �������� ������ ������� ������ �����: ";
	std::string name;
	std::getline(std::cin, name);

	std::vector<Check> tempVec;
	int quantityBuyProduct;

	for (int i = 0; i < size(vec); ++i)
	{
		if (vec[i].GetName() == name)
		{
			tempVec.push_back(vec[i]);

			std::cout << "\n�������� ���������� ������� ������ �����: ";
			std::cin >> quantityBuyProduct;

			if (quantityBuyProduct > vec[i].GetQuantityBuyProduct())
			{
				std::cout << "\n������ ���������� ������ ��� � ��������!!!\n";
				continue;
			}
		}
	}
	if (size(tempVec) == 0)
	{
		std::cout << "\n������ ��������!!!!\n";
		system("pause");
		system("cls");
		Check::PrintMenu();
	}
	PrintCheck(tempVec, quantityBuyProduct);
}

void Check::PrintCheck(std::vector<Check> tempVec�, int quantity)
{
	system("cls");
	std::cout << "��� ���: \n\n";

	for (int i = 0; i < size(tempVec�); ++i)
	{
		tempVec�[i].SetQuantityBuyProduct(quantity);
		tempVec�[i].CalculationOfPurchases(quantity);
		std::cout << "�����: " << tempVec�[i].GetName() << std::endl;
		std::cout << "���� �� �������: " << tempVec�[i].GetPrice() << " ���." << std::endl;
		std::cout << "����������: " << tempVec�[i].GetQuantityBuyProduct() << " ��." << std::endl;
		std::cout << "����� ����: " << tempVec�[i].GetPriceBuyProduct() << " ���." << std::endl;
		std::cout << "����� ���: " << tempVec�[i].GetWeightBuyProduct() << " ��." << "\n\n";
	}
}
