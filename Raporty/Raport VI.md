**Raport VI** 07.12.2018

W ostatnim tygodniu zrobiłam wszystkie wyznaczone sobie cele. 

Przerobiłam kod (umieściłam mierzenie podobieństwa w osobnej funkcji), dodałam kod odpowiadający za odpowiednią kolejność wykonywania się funkcji draw i update - najpierw wykona się draw, później update, następnie na przemian, aż do określonej liczby występujących mutacji, po której funkcja update nie wykona się więcej i zostanie jedynie rysowanie.

Napisałam funkcję odpowiedzialną za mutację. Wybiera ona losowo jedno koło z populacji oraz wybiera losowo jeden z jego parametrów i ustawia mu nową (losowo zresztą wybraną) wartość.

Oprócz tgo napisałam jeszcze ogólny schemat działania programu, zgodny z algorytmem genetycznym, w związku z czym mój program:
1. Generuje losową populację.
2. Mierzy podobieństwo z oryginałem.
3. Dokonuje losowej mutacji.
4. Mierzy podobieństwo z oryginałem po mutacji.
5. Sprawdza, który obrazek jest bliższy oryginałowi, jeżeli ten po mutacji, to jest on nową podstawową populacją.
6. Przechodzi do kroku 3.

Mógłby to być już niemal skończony projekt zgodnie z początkowymi jego założeniami, niemniej jednak zauważyłam, że niestety moja metoda z jakiegoś powodu nie działa. Podejrzewam, że może to być problem z mierzeniem podobieństwa i/lub z kopiowaniem wektorów.

W najbliższym tygodniu postaram się wyeliminować błędy w działaniu programu.
