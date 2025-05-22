# Vectoriaus metodai

## push_back()

push_back funkcija įdeda elementą į masyvo galą

```c++
Vector<int> my_vector;

my_vector.push_back(20);

std::cout << my_vector.at(0) << std::endl;
// Išveda 20
```

## pop_back()

pop_back funkcija išėma elementą iš masyvo galo ir gražino jo vertę

```c++
Vector<int> my_vector;

my_vector.push_back(20);
my_vector.push_back(5);

std::cout << my_vector.pop_back() << std::endl;
// Išveda 20
std::cout << my_vector.pop_back() << std::endl;
// Išveda 5
```

## at()

Gražina nuorodą (refrence) į masyvo elementą nurodytame indekse. Jei indeksas už masyvo ribų iššaukiamas erroras

```c++
Vector<int> my_vector;

my_vector.push_back(20);

std::cout << my_vector.at(0) << std::endl;
// Išveda 20

std::cout << my_vector.at(1) << std::endl;
// std::out_of_range
// at() index out of range
```

## size()

Gražina masyvo elementų kiekį

```c++
Vector<int> my_vector;

my_vector.push_back(20);
my_vector.push_back(5);
my_vector.push_back(-7);

std::cout << my_vector.size() << std::endl;
// Išveda 3
```

## capacity()

Gražina reservuotą elementų skaičių

```c++
Vector<int> my_vector;

my_vector.push_back(20);
my_vector.push_back(5);
my_vector.push_back(-7);

std::cout << my_vector.capacity() << std::endl;
// Išveda 4
```
