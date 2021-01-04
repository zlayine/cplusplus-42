#include "Data.hpp"

void	*serialize()
{
	char *data;

	srand(clock());
	data = new char[20];
	for (int i = 0; i < 8; i++)
		data[i] = 'a' + rand() % 26;
	*reinterpret_cast<int*>(data + 8) = rand() % 1000;
	for (int i = 0; i < 8; i++)
		data[i + 12] = 'A' + rand() % 26;
	return data;
}

Data	*deserialize(void *raw)
{
	Data *d = new Data;

	d->s1 = std::string(static_cast<char *>(raw), 8);
	d->s2 = std::string(static_cast<char *>(raw) + 12, 8);
	d->n = *reinterpret_cast<int*>(static_cast<char *>(raw) + 8);
	return d;
}
