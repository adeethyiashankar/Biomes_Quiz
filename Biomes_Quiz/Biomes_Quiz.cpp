// APES_Biomes_Quiz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <time.h>

int main()
{
	int score = 0;
	std::string result = "";
	std::string biome[] = {
		"Tropical Rainforest",
		"Northern Coniferous Forest",
		"Arctic Tundra",
		"High Mountain",
		"Temperate Deciduous Forest",
		"Tropical Dry Forest",
		"Temperate Grassland",
		"Chaparral",
		"Savanna",
		"Polar Ice",
		"Desert",
	};
	std::string definition[] = {
		"Poor soil, very high precipitation, high temperature, very high productivity, high biodiversity",
		"Fertile soil, low-medium precipitation, warm and cold season, medium productivity, low biodiversity",
		"Soil is low in nutrients, low precipitation, very cold, low productivity, not a lot of biodiversity",
		"Poor soil, low precipitation, cool summer and well below freezing winter, low productivity, high biodiversity",
		"Soil is rich in nutrients, medium precipitation, moderate temperature, very high productivity, rich biodiversity",
		"Soil ideal for deciduous plants, but not fertile enough to grow lush vegetation like a rain forest, low-medium precipitation, medium-high temperature, high productivity, high biodiversity but lower than the rain forest",
		"Soil is rich in nutrients, medium precipitation, Winter: bitterly cold Summer: hot dry, high productivity, high biodiversity",
		"Nutrient poor soil susceptible to erosion, low precipitation, hot and dry temperature, low productivity, low biodiversity",
		"Porous soil with rapid drainage of water, Winter: very low precipitation Summer: very high precipitation, warm temperature, high productivity, high biodiversity",
		"Soil is poor quality and frozen (low in nutrients), very cold, low productivity, low biodiversity",
		"Soil is low in nutrients, low precipitation, high temperature, low productivity, very low biodiversity",
	};
	int order[11] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	srand(unsigned(time(NULL)));
	std::random_shuffle(order, order + 11);
	for (int i = 0; i < 11; i++)
	{
		std::cout << "\n" << definition[order[i]] << ":\n";
		std::string input = "";
		std::getline(std::cin, input);
		if (input == biome[order[i]])
		{
			score++;
			result += "1\n";
		}
		else
		{
			result += "0 The correct answer is ";
			result += biome[order[i]];
			result += "\n";
		}
	}
	std::cout << "\n" << score << "/11\n";
	printf("%.1f%%", 100.0 * score / 11.0);
	std::cout << "\n\n" << result << "\n";
	std::cout << "Again: ";
	std::string yn = "";
	std::getline(std::cin, yn);
	if (tolower(yn[0]) == 'y')
	{
		main();
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
