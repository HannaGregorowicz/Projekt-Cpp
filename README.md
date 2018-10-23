# Projekt-Cpp

Celem moich działań jest napisanie programu, który będzie odtwarzać dane mu zdjęcie z losowo wygenerowanych kół. Do tego celu program będzie wykorzystywać algorytm genetyczny. Użyję bibliotek openFrameworks.

Schemat działania istotnego dla mojego programu algorytmu wygląda następująco:
1. Wygenerowanie określonej populacji kółek (z których każde będzie posiadało losowe parametry – rozmiar, położenie i tym podobne). Na potrzeby opisu będę określać to mianem "matka".
2. Sprawdzenie, jak bardzo "matka" przypomina zadane zdjęcie.
3. Dokonanie losowej mutacji. Rozumiem przez to akcydentalną zmianę parametrów, np. wielkości lub położenia losowo wybranego koła.
4. Sprawdzenie, czy nowa populacja kół przypomina zadane zdjęcie bardziej niż "matka". Jeżeli tak, populacja staje się nową "matką".
5. Przejście do kroku 3. Powtarzanie czynności aż do momentu, w którym obrazek będzie wyraźnie przypominać zadane zdjęcie.

Przewidywane rezultaty działania programu ilustruje grafika zamieszczona w poniższym linku.
https://imgur.com/a/uaKmpYQ

Mam zamiar również zrobić GUI, w którym użytkownik będzie mógł wgrać własny obrazek, który ma zostać odwzorowany z kółek (miał możliwość wstawienia/wgrania własnego dowolnego obrazu, który następnie zostanie odwzorowany przez program przy użyciu wyżej opisanej przeze mnie metody).
