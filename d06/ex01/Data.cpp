#include "Data.hpp"

void	*serialize()
{
	char *data;
	std::string randoms("abcdefghijklmnopqrstuvwxyz0123456789");

	srand(clock());
	data = new char[52];
	for (int i = 0; i < 8; i++)
		data[i] = randoms[rand() % 36];
	*reinterpret_cast<int*>(data + 24) = rand() % 1000;
	for (int i = 0; i < 8; i++)
		data[i + 28] = randoms[rand() % 36];
	return data;
}

Data	*deserialize(void *raw)
{
	Data *d = new Data;

	d->s1 = std::string(static_cast<char *>(raw), 8);
	d->s2 = std::string(static_cast<char *>(raw) + 28, 8);
	d->n = *reinterpret_cast<int*>(static_cast<char *>(raw) + 24);
	return d;
}
