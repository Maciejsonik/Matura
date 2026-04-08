# Krótkie wprowadzenie do STL

**XIV LO im. S. Staszica, K06 D**  
Arkadiusz Betkier, Wojciech Sirko  
30 marca 2010

## Spis treści

1. [Wstęp](#1-wstęp)
2. [Podstawowe struktury danych](#2-podstawowe-struktury-danych)
   - [2.1 `pair`](#21-pair)
   - [2.2 `stack`](#22-stack)
   - [2.3 `queue`](#23-queue)
   - [2.4 `list`](#24-list)
   - [2.5 `vector`](#25-vector)
   - [2.6 `deque`](#26-deque)
   - [2.7 `priority_queue`](#27-priority_queue)
   - [2.8 `set`](#28-set)
   - [2.9 `map`](#29-map)
3. [Podstawowe algorytmy](#3-podstawowe-algorytmy)
   - [3.1 `swap`](#31-swap)
   - [3.2 `min`](#32-min)
   - [3.3 `max`](#33-max)
   - [3.4 `sort`](#34-sort)
   - [3.5 `stable_sort`](#35-stable_sort)
   - [3.6 `nth_element`](#36-nth_element)
   - [3.7 `reverse`](#37-reverse)
   - [3.8 `next_permutation`](#38-next_permutation)
   - [3.9 `random_shuffle`](#39-random_shuffle)

## 1. Wstęp

STL (Standard Template Library) jest biblioteką języka C++ zawierającą implementacje przydatnych algorytmów i struktur danych. Niniejszy dokument to krótkie, uproszczone wprowadzenie. Pełniejsza dokumentacja znajduje się na stronie SGI:

- http://www.sgi.com/tech/stl/

STL zawdzięcza swoją użyteczność m.in. zastosowaniu szablonów. Są one uogólnieniem klas lub funkcji, których właściwy kod powstaje w czasie kompilacji, po podaniu przez programistę parametrów (typów, klas, stałych liczbowych).

Mimo licznych zalet STL, jego nadużywanie może prowadzić do niepotrzebnie skomplikowanych lub niewydajnych rozwiązań. Zalecany jest umiar i rozwaga.

### Przykład: szablony

```cpp
// Szablon klasy AB.
template <class T>
class AB {
public:
	AB(T a, T b) : a(a), b(b) {}
	T sum() { return a + b; }

private:
	T a, b;
};

// Szablon funkcji abs.
template <class T>
T abs(T x) {
	if (x < 0)
		return -x;
	else
		return x;
}

// Dla szablonów klas parametry podajemy jawnie.
AB<int> abi(1, 3);
abi.sum(); // -> 4

AB<float> abf(1.4f, 2.5f);
abf.sum(); // -> 3.9f

// Dla szablonów funkcji parametry zwykle wyznaczane są z argumentów.
abs(-4);    // -> 4
abs(-3.9f); // -> 3.9f
```

## 2. Podstawowe struktury danych

Poniższe opisy struktur składają się z tekstu, tabelek z kluczowymi (nie wszystkimi) operacjami i przykładowych kodów. Tabelki zawierają nazwy operacji, skrótowe opisy i złożoność obliczeniową. Typu wartości operacji nietrudno się domyślić, natomiast w kwestii argumentów przyjęta jest taka konwencja:

- `v`: wartość typu takiego, jaki jest trzymany w strukturze,
- `k`: indeks - można przyjąć, że jest to `int`,
- `i`: iterator (więcej o tym przy listach).

Pomijając `pair` - przypadek zdegenerowany - wszystkie wymienione niżej struktury udostępniają dodatkowo operację `clear()`, która odpowiada za usunięcie wszystkich elementów ze struktury (czas liniowy), oraz operację `empty()`, która określa w czasie stałym, czy struktura jest pusta. Oczywiście wszystkie złożoności obliczeniowe podawane są względem liczby elementów w strukturze.

Ku przejrzystości przykładowego kodu (i aby zniechęcić do metody copy-paste bez pełnego zrozumienia) nie pojawiają się tu instrukcje wypisywania na wyjście. Zamiast nich użyte są wyrażenia zakończone średnikiem i opatrzone komentarzami określającymi ich wartości.

Ponadto zakładamy, że przed miejscem użycia kodu wpisano:

```cpp
using namespace std;
```

### 2.1 `pair`

Obiekt `pair` przechowuje dwa elementy - `first` i `second` (dostępne wprost). Funkcja `make_pair` tworzy odpowiednią parę. Oczywiście można też skorzystać ze standardowego konstruktora.

```cpp
#include <utility>
#include <cmath>

pair<float, int> para(0.1f, 9);
para.first;  // -> 0.1f
para.second; // -> 9

para.first = 0.5f;
para.second = 3;
pow(para.first, para.second); // -> 0.125f

para = make_pair(2.0f, 10);
pow(para.first, para.second); // -> 1024.0f
```

### 2.2 `stack`

Struktura `stack` to STL-owy stos. Można dokładać elementy na wierzch, oglądać wierzch i z niego zdejmować, ale żeby nagle dostać się gdzieś do środka, trzeba się na ogół nieźle napracować.

| Operacja | Opis | Złożoność |
|---|---|---|
| `size()` | rozmiar stosu | `O(1)` |
| `push(v)` | dodanie na wierzch | `O(1)` |
| `pop()` | zdjęcie z wierzchu | `O(1)` |
| `top()` | element na wierzchu | `O(1)` |

```cpp
#include <stack>

stack<int> stos;
stos.push(123);
stos.push(456);
stos.push(789);

stos.size(); // -> 3

while (!stos.empty()) {
	stos.top(); // -> {789, 456, 123}
	stos.pop();
}
```

### 2.3 `queue`

Struktura `queue` odpowiada kolejce (takiej typowej, jak w sklepiku po pączki). Można więc wstawić element na koniec, zrzucić z początku i obejrzeć ten na początku i ten na końcu. Jednak, tak jak poprzednio, nie tak łatwo dostać się do środka.

| Operacja | Opis | Złożoność |
|---|---|---|
| `size()` | rozmiar kolejki | `O(1)` |
| `push(v)` | dodanie na koniec | `O(1)` |
| `pop()` | zdjęcie z początku | `O(1)` |
| `front()` | element na początku | `O(1)` |
| `back()` | element na końcu | `O(1)` |

```cpp
#include <queue>

queue<int> kolejka;
kolejka.push(123);
kolejka.push(456);
kolejka.push(789);

kolejka.size(); // -> 3

while (!kolejka.empty()) {
	kolejka.front(); // -> {123, 456, 789}
	kolejka.pop();
}
```

### 2.4 `list`

Więcej operacji udostępnia `list` - lista dwukierunkowa. Można wstawiać, oglądać i usuwać elementy z końców. Ponadto można listę przeglądać, zarówno od początku do końca, jak i przeciwnie. Co więcej (i to jest kluczowa własność listy), można usunąć element z dowolnego miejsca, jak również wstawić element w dowolne miejsce, pod warunkiem posiadania pod ręką odpowiedniego wskaźnika.

Taki wskaźnik w STL nazywa się iteratorem i jest dodatkowo wyposażony w instrukcję zwiększania (oraz zmniejszania) odpowiednią dla konkretnej struktury danych. W przypadku listy zwiększenie oznacza przeskok do następnego elementu na liście. Iterator na pierwszy element uzyskuje się wywołując `begin()`, a iterator za ostatni element - wywołując `end()`.

| Operacja | Opis | Złożoność |
|---|---|---|
| `size()` | rozmiar listy | `O(?)`* |
| `push_back(v)` | dodanie na koniec | `O(1)` |
| `pop_back()` | zdjęcie z końca | `O(1)` |
| `back()` | element na końcu | `O(1)` |
| `push_front(v)` | dodanie na początek | `O(1)` |
| `pop_front()` | zdjęcie z początku | `O(1)` |
| `front()` | element na początku | `O(1)` |
| `erase(i)` | usunięcie wskazanego elementu | `O(1)` |
| `insert(i, v)` | wstawienie przed wskazany element | `O(1)` |

\* Nie ma gwarancji, że jest to `O(1)` - równie dobrze może być `O(n)`. Zależy to od konkretnej implementacji STL, dlatego lepiej nie zakładać tu stałego czasu.

```cpp
#include <list>

list<int> lista;
list<int>::iterator it, cit;

for (int x = 0; x < 5; x++) {
	lista.push_back(x + 5);
	lista.push_front(-x * 2);
}
// lista: {-8, -6, -4, -2, 0, 5, 6, 7, 8, 9}

lista.size(); // -> 10

for (it = lista.begin(); it != lista.end(); it++)
	*it; // -> {-8, -6, -4, -2, 0, 5, 6, 7, 8, 9}

lista.pop_front();
lista.pop_back();

lista.front(); // -> -6
lista.back();  // -> 8

for (it = lista.begin(); it != lista.end(); it++) {
	if (*it % 2 == 1) {
		cit = it;
		break;
	}
}

lista.erase(++it);

for (it = lista.begin(); it != lista.end(); it++)
	*it; // -> {-6, -4, -2, 0, 5, 7, 8}

lista.insert(cit, 6);

for (it = lista.begin(); it != lista.end(); it++)
	*it; // -> {-6, -4, -2, 0, 6, 5, 7, 8}
```

### 2.5 `vector`

Twór o nazwie `vector` łączy zalety stosu i tablicy. Odpowiada `stack` w sensie dodawania i usuwania elementów, ale pozwala na bezpośrednie odwoływanie się do każdego z nich - tak jak w zwykłej tablicy. Idea implementacyjna jest prosta: tworzymy tablicę, a gdy miejsce się kończy, tworzymy większą i przekopiowujemy elementy.

| Operacja | Opis | Złożoność |
|---|---|---|
| `size()` | rozmiar | `O(1)` |
| `push_back(v)` | dodanie na koniec | amortyzowane `O(1)` |
| `pop_back()` | zdjęcie z końca | `O(1)` |
| `back()` | element na końcu | `O(1)` |
| `[k]` | referencja do `k`-tego elementu | `O(1)` |

```cpp
#include <vector>

vector<int> vec;
vec.push_back(123);
vec.push_back(456);
vec.push_back(789);

for (int i = 0; i < (int)vec.size(); i++)
	vec[i]; // -> {123, 456, 789}

vec[1] = 666;

while (!vec.empty()) {
	vec.back(); // -> {789, 666, 123}
	vec.pop_back();
}
```

### 2.6 `deque`

Bardziej wyrafinowaną strukturą jest `deque`, która z zewnątrz zachowuje się podobnie jak `vector`, ale pozwala wstawiać i usuwać elementy z obu stron - z końca i z początku. Innymi słowy, jest to kolejka dwustronna, która dodatkowo umożliwia bezpośrednie odwoływanie się do każdego elementu.

| Operacja | Opis | Złożoność |
|---|---|---|
| `size()` | rozmiar | `O(1)` |
| `push_back(v)` | dodanie na koniec | `O(1)` |
| `pop_back()` | zdjęcie z końca | `O(1)` |
| `back()` | element na końcu | `O(1)` |
| `push_front(v)` | dodanie na początek | `O(1)` |
| `pop_front()` | zdjęcie z początku | `O(1)` |
| `front()` | element na początku | `O(1)` |
| `[k]` | referencja do `k`-tego elementu | `O(1)` |

```cpp
#include <deque>

deque<int> deq;
deq.push_back(123);
deq.push_back(456);
deq.pop_front();
deq.push_front(789);
deq.push_back(111);

for (int i = 0; i < (int)deq.size(); i++)
	deq[i]; // -> {789, 456, 111}

deq[1] = 666;

while (!deq.empty()) {
	deq.back(); // -> {111, 666, 789}
	deq.pop_back();
}
```

### 2.7 `priority_queue`

Czasem przydaje się też `priority_queue` - kolejka priorytetowa. Wstawia się do niej elementy, a ona zawsze daje szybki dostęp do elementu największego i umożliwia jego usunięcie.

Możliwe jest także użycie własnego kryterium porównywania (podobnie jak przy sortowaniu), choć wymaga to nieco sprytniejszego opakowania w strukturę. Szczegóły znajdują się w dokumentacji STL.

| Operacja | Opis | Złożoność |
|---|---|---|
| `size()` | rozmiar | `O(1)` |
| `push(v)` | dodawanie | `O(log n)` |
| `pop()` | usunięcie największego | `O(log n)` |
| `top()` | największy element | `O(1)` |

```cpp
#include <queue>

priority_queue<int> pq;
pq.push(5);
pq.top(); // -> 5

pq.push(8);
pq.top(); // -> 8

pq.push(3);
pq.top(); // -> 8

pq.pop();
pq.top(); // -> 5

pq.pop();
pq.top(); // -> 3
```

### 2.8 `set`

Struktura `set` służy do reprezentacji zbioru (powtórzenia elementów redukują się). Elementy można dodawać, usuwać i wyszukiwać. Ponadto można wyszukać pierwszy element o wartości niemniejszej (większej) od podanej. Można też przeglądać `set` w kolejności od najmniejszej wartości do największej.

Dla bardziej dociekliwych: `set` jest zwykle zaimplementowany przy użyciu drzew czerwono-czarnych.

| Operacja | Opis | Złożoność |
|---|---|---|
| `size()` | rozmiar | `O(1)` |
| `insert(v)` | dodanie | `O(log n)` |
| `find(v)` | wyszukiwanie | `O(log n)` |
| `erase(v)` | usunięcie po wartości | `O(log n)` |
| `erase(i)` | usunięcie po iteratorze | `O(log n)` |
| `lower_bound(v)` | pierwszy element niemniejszy | `O(log n)` |
| `upper_bound(v)` | pierwszy element większy | `O(log n)` |

Jeżeli element nie występuje w zbiorze, `find(v)` zwróci iterator `s.end()`. W przeciwnym przypadku będzie to iterator na znaleziony element.

```cpp
#include <set>

set<int> s;
set<int>::iterator it;

s.insert(123);
s.insert(456);
s.insert(789);
s.insert(111);
s.insert(999);

s.erase(456);

for (it = s.begin(); it != s.end(); it++)
	*it; // -> {111, 123, 789, 999}

it = s.lower_bound(500);
*it; // -> 789

s.erase(it);

for (it = s.begin(); it != s.end(); it++)
	*it; // -> {111, 123, 999}

*s.begin(); // -> 111

it = s.find(1000);
(it != s.end()); // -> false

it = s.find(111);
(it != s.end()); // -> true
```

### 2.9 `map`

Struktura `map` służy do reprezentacji przyporządkowania.

Działa prawie jak `set<pair<x, y>>` z tą różnicą, że elementy porównywane są tylko względem pierwszej wartości (klucza) z pary. Dodatkowo elementy można wstawiać i odwoływać się do nich przy użyciu operatora `[]`. Tu wyjątkowo `k` oznacza klucz, a `v` wartość przyporządkowaną.

| Operacja | Opis | Złożoność |
|---|---|---|
| `size()` | rozmiar | `O(1)` |
| `[k] = v` | dodanie / zmiana wartości | `O(log n)` |
| `[k]` | odwołanie do wartości pod kluczem | `O(log n)` |
| `find(k)` | wyszukiwanie po kluczu | `O(log n)` |
| `erase(k)` | usunięcie po kluczu | `O(log n)` |
| `erase(i)` | usunięcie po iteratorze | `O(log n)` |
| `lower_bound(k)` | pierwszy klucz niemniejszy | `O(log n)` |
| `upper_bound(k)` | pierwszy klucz większy | `O(log n)` |

```cpp
#include <map>

map<int, float> m;
map<int, float>::iterator it;

m[0] = 1.0f;
m[256] = 3.14f;
m[42] = 4.2f;
m[1000 * 1000 * 1000] = 1.618f;
m[0] = 1.1f;

m.size(); // -> 4
m[256];   // -> 3.14f

for (it = m.begin(); it != m.end(); it++)
	(*it).first; // -> {0, 42, 256, 1000000000}

for (it = m.begin(); it != m.end(); it++)
	(*it).second; // -> {1.1f, 4.2f, 3.14f, 1.618f}

m.erase(256);
m.size(); // -> 3

it = m.find(256);
(it != m.end()); // -> false

it = m.find(42);
(it != m.end()); // -> true

m.erase(it);
m.size(); // -> 2

m[0] += 1.1f;
m[0]; // -> 2.2f
```

## 3. Podstawowe algorytmy

Przez „ciąg” rozumiemy strukturę umożliwiającą bezpośredni dostęp do elementów (np. tablica, `vector`).  
W złożonościach litera `n` oznacza długość ciągu.

Poniższe opisy mają charakter wprowadzający i są świadomie skrócone względem pełnej dokumentacji STL. Warto pamiętać, że część funkcji przyjmuje opcjonalnie własne kryteria porównywania, które muszą być poprawnie zdefiniowane (tj. opisywać sensowny porządek).

### 3.1 `swap` (złożoność: `O(1)`)

Funkcja `swap` powoduje, że dwie zmienne wymieniają się wartościami. W praktyce to wygodniejsza i czytelniejsza alternatywa dla ręcznego „przekładania” przez zmienną pomocniczą.

```cpp
#include <algorithm>

int a = 123, b = 321;
swap(a, b);

a; // -> 321
b; // -> 123
```

### 3.2 `min` (złożoność: `O(1)`)

Funkcja `min` zwraca mniejszą (dokładniej: niewiększą) z dwóch wartości. Co istotne, zwracana jest referencja do wybranej wartości, co bywa bardzo wygodne przy dalszych modyfikacjach.

```cpp
#include <algorithm>

int a = 26, b = 12;
min(a, b); // -> 12

min(a, b)++;
a; // -> 26
b; // -> 13
```

### 3.3 `max` (złożoność: `O(1)`)

Funkcja `max` zwraca większą (dokładniej: niemniejszą) z dwóch wartości.  
Podobnie jak przy `min`, operacja jest stałoczasowa i opiera się na porównaniu dwóch argumentów.

### 3.4 `sort` (złożoność: `O(n log n)`)

Funkcja `sort` sortuje ciąg w porządku niemalejącym, a po podaniu własnej funkcji porównującej - według zadanego kryterium. To jedna z najczęściej używanych funkcji STL i warto pamiętać, że działa na zakresach wskazanych przez iteratory.

```cpp
#include <algorithm>
#include <vector>

bool cmp_parz(const int& a, const int& b) {
	if (a % 2 == b % 2)
		return a <= b;
	else
		return (a % 2 == 1);
}

int liczby[] = {5, 8, 3, 6, 1, 2, 7};

sort(liczby, liczby + 7, cmp_parz);
for (int i = 0; i < 7; i++)
	liczby[i]; // -> {1, 3, 5, 7, 2, 6, 8}

sort(liczby, liczby + 7);
for (int i = 0; i < 7; i++)
	liczby[i]; // -> {1, 2, 3, 5, 6, 7, 8}

vector<int> vec;
for (int i = 0; i < 7; i++)
	vec.push_back(7 - i);
// vec: {7, 6, 5, 4, 3, 2, 1}

sort(vec.begin(), vec.end());
for (int i = 0; i < (int)vec.size(); i++)
	vec[i]; // -> {1, 2, 3, 4, 5, 6, 7}
```

Uwaga: funkcja porównująca nie może być zupełnie dowolna - powinna odpowiadać poprawnemu porządkowi. W przeciwnym razie wynik sortowania może być niepoprawny.

### 3.5 `stable_sort` (złożoność: `O(n log n)`)

`stable_sort` działa podobnie do `sort`, ale jest sortowaniem stabilnym - zachowuje wzajemną kolejność elementów równych względem kryterium porównywania. Ma to znaczenie zwłaszcza przy sortowaniu wielokryterialnym (np. najpierw po jednej cesze, potem po drugiej).

### 3.6 `nth_element` (złożoność: `O(n)`)

`nth_element` przestawia elementy ciągu tak, by na wskazanej pozycji znalazł się dokładnie taki element, jaki stałby tam po pełnym sortowaniu.  
Dodatkowo każdy element po lewej stronie tej pozycji jest nie większy od elementu wybranego, a każdy po prawej - nie mniejszy. Dzięki temu można np. efektywnie wyznaczać medianę bez pełnego sortowania całego ciągu.

```cpp
#include <algorithm>

int liczby[] = {10, 1, 2, 7, 2, 5, 9};
int n = 7;

nth_element(liczby, liczby + (n - 1) / 2, liczby + n);
liczby[(n - 1) / 2]; // -> 5
```

### 3.7 `reverse` (złożoność: `O(n)`)

`reverse` odwraca kolejność elementów ciągu, czyli zamienia pierwszy z ostatnim, drugi z przedostatnim itd. Funkcja działa w miejscu, bez potrzeby tworzenia dodatkowej kopii danych.

```cpp
#include <algorithm>
#include <vector>

vector<int> vec;
for (int i = 0; i < 7; i++)
	vec.push_back(i);
// {0, 1, 2, 3, 4, 5, 6}

reverse(vec.begin(), vec.end());
// {6, 5, 4, 3, 2, 1, 0}
```

### 3.8 `next_permutation` (złożoność: `O(n)`)

`next_permutation` przekształca ciąg w jego następną leksykograficznie permutację i zwraca `true`, jeśli taka permutacja istnieje. Gdy funkcja zwraca `false`, oznacza to, że osiągnięto największą leksykograficznie permutację (ciąg nierosnący). Z tego wynika, że przegląd wszystkich permutacji warto zaczynać od ciągu posortowanego niemalejąco.

```cpp
#include <algorithm>
#include <vector>

vector<int> vec;
vec.push_back(3);
vec.push_back(5);
vec.push_back(7);

do {
	for (int i = 0; i < (int)vec.size(); i++)
		vec[i];
} while (next_permutation(vec.begin(), vec.end()));

// Wyniki:
// {3, 5, 7}
// {3, 7, 5}
// {5, 3, 7}
// {5, 7, 3}
// {7, 3, 5}
// {7, 5, 3}
```

### 3.9 `random_shuffle` (złożoność: `O(n)`)

`random_shuffle` ustawia elementy ciągu w losowej kolejności. To wygodny sposób na szybkie „przetasowanie” danych, np. przed losowym testowaniem algorytmu.

```cpp
#include <algorithm>

int liczby[] = {1, 2, 3, 4, 5, 6, 7};
int n = sizeof(liczby) / sizeof(*liczby);

n; // -> 7

random_shuffle(liczby, liczby + n);
// np. {5, 3, 2, 4, 6, 1, 7}
```

Uwaga: w nowszym C++ (`C++14+`) `random_shuffle` jest przestarzałe/usunięte.  
Współcześnie używa się `shuffle` z generatorem losowym.
