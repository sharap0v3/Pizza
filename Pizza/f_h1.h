#pragma once 

void TextMenuPizz()
{
	std::cout << "\n\tПиццы:\n01 - Пицца Пепперони - 555 ₽\n02 - Пицца Греческая - 625 ₽\n03- Пицца Четыре сыра - 569 ₽\n04 - Пицца Болоньезе - 755 ₽\t";
}
void TextMenuDrinks()
{
	std::cout << "\n\n\tНапитки:\n01 - Coca Cola - 90 ₽\n02 - Молочный коктель - 120 ₽\n03 - Пиво - 300 ₽\n04 - Сок - 80 ₽\t\n";
}

int SelectProduct(int ProductSelection)
{
	if (ProductSelection == 1)
	{
		TextMenuPizz();
	}
	else if (ProductSelection == 2)
	{
		TextMenuDrinks();
	}
	return ProductSelection;
}

int CalculationsMenuPizz(int ProdCode = 0, int CounterPizz = 0)
{
	int PricePizz = 0;

	int const Peperony = 555;
	int const Greek = 625;
	int const FourСheeses = 569;
	int const Bolognese = 755;

	if (ProdCode > 0 && ProdCode <= 4)
	{
		if (ProdCode == 1)
		{
			PricePizz += Peperony * CounterPizz;
		}
		else if (ProdCode == 2)
		{
			PricePizz += Greek * CounterPizz;
		}
		else if (ProdCode == 3)
		{
			PricePizz += FourСheeses * CounterPizz;
		}
		else if (ProdCode == 4)
		{
			PricePizz += Bolognese * CounterPizz;
		}
	}
	else
	{
		std::cout << "Несуществующий код товара для пицц";
		return 0;
	}
	return PricePizz;
}
int CalculationsMenuDrink(int ProdCode = 0, int CounterDrink = 0)
{
	int PriceDrink = 0;

	int const CocaCola = 90;
	int const Milkshake = 120;
	int const Beer = 300;
	int const Juice = 80;

	if (ProdCode > 0 && ProdCode <= 4)
	{
		if (ProdCode == 1)
		{
			PriceDrink += CocaCola * CounterDrink;
		}
		else if (ProdCode == 2)
		{
			PriceDrink += Milkshake * CounterDrink;
		}
		else if (ProdCode == 3)
		{
			PriceDrink += Beer * CounterDrink;
		}
		else if (ProdCode == 4)
		{
			PriceDrink += Juice * CounterDrink;
		}
	}
	else
	{
		std::cout << "Несуществующий код товара для пицц";
		return 0;
	}
	return PriceDrink;
}

double SaleOrderTotal(int TotalAmomut)
{
	double SaleOrderTotal = 0;
	if (TotalAmomut > 4000)
	{
		return SaleOrderTotal = TotalAmomut * 0.2;
	}
	return 0;
}

