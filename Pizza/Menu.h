#pragma once


void Menu()
{

	std::cout << "\n\t\tПиццерия Макарони\t\t\n";

	int ProdCode = 0;
	int CounterPizz = 0;
	int CounterDrink = 0;
	int ProductSelection = 0;
	int PricePizz = 0;
	int PriceDrink = 0;
	int TotalAmount = 0;
	double SalePizz = 0;
	double SaleDrink = 0;
	double SaleTotalAmout = SaleDrink + SalePizz;
	double TotalAnountDiscounted = TotalAmount - SaleTotalAmout;

	while (true)
	{


		std::cout << "\nЧто будете заказывать?\n 1 - Пицца\n 2 - Напитки\n 0 - Перейти к оплате\n Введите номер для выбора: ";
		std::cin >> ProductSelection;

		SelectProduct(ProductSelection);

		if (ProductSelection == 1)
		{
			std::cout << "\nВведите код выбранного товара:";
			std::cin >> ProdCode;
			std::cout << "\nВведите колл-во выбранного товара: ";
			std::cin >> CounterPizz;

			system("cls");

			PricePizz = PricePizz += CalculationsMenuPizz(ProdCode, CounterPizz);
			std::cout << "Стоимость за пиццу: " << PricePizz << "₽\n";
		}
		else if (ProductSelection == 2)
		{
			std::cout << "\nВведите код выбранного товара: ";
			std::cin >> ProdCode;
			std::cout << "\nВведите колл-во выбранного товара: ";
			std::cin >> CounterDrink;

			system("cls");

			PriceDrink = PriceDrink += CalculationsMenuDrink(ProdCode, CounterDrink);
			std::cout << "Стоимость за напитки: " << PriceDrink << "₽\n";
		}
		else if (ProductSelection == 0)
		{
			TotalAmount = PricePizz + PriceDrink;
			std::cout << "\nИтоговая сумма без скидки: " << TotalAmount << "₽\n";
			std::cout << "Скидка составляет: " << SaleTotalAmout << "₽\n";
			std::cout << "Итоговая стоимость заказа:\n";
			break;
		}
	}
}