#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	int N; // pokemons capturados
	char nome [50]; // nome dos pokemons
	int pokebolas; // quantidade de pokebolas usadas
	int forca; // forca de cada pokemon
	int somap, somaf; // somap -> soma de pokebolas, somaf -> soma de forcas
	double media; // media de forcas
	int i; // contador
	
	
	cin >> N; // lendo a quantidade de pokemons capturados
	
	
	somaf = 0; // dando valor a variavel somaf para ela nao pegar lixo eletronico
	somap = 0; // dando valor a variavel somap para ela nao pegar lixo eletronico
	
	for (i = 1; i <= N; i++) // quantidade começa com 1, pokemons capturados tem que ser menor ou igual a 1
	{
		cin.ignore (); // para o cin.getline não pular os outros cins
		cin.getline(nome,50); // lendo o nome do pokemon
		cin >> pokebolas; // lendo quantidade de pokemon
		somap = somap + pokebolas; // somando as quantidades de pokebolas usadas ´para pegar os pokemons
		cin >> forca; // forca de cada pokemon
		somaf = somaf + forca; // soma da forcas de cada pokemon capturado
	}

	
	if (N == 0) // se a quantidade de pokemons capturados for igual a zero
	{
		cout << "Total de Pokebolas = " << somap << endl; // mostrando total de pokebolas usadas
		cout << "Media de forca = 0" << endl; // a media das forcas vai ser zero, porque nao tem pokemon capturado
	}
	else // senao for zero a quantidade de pokemons capturados
	{
		media = 1.0 * somaf / N; // media da soma das forcas dividido por quantidade de pokemons capturados
		
		cout << "Total de Pokebolas = " << somap << endl; // mostrando total de pokebolas usadas
		cout << fixed << setprecision(2) << endl; // mostrando media com duas casas decimais 
		cout << "Media de forca = " << media << endl; // mostrando media das forcas
	}
		
    return 0; // fechando o codigo/ retornando a zero
		
}