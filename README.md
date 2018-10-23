# Projekt-Cpp

Planuję napisać program odtwarzający dane mu zdjęcie z losowo wygenerowanych kółek. Będzie wykorzystywać algorytm genetyczny. Użyję do tego bibliotek openFrameworks.

Algorytm wygląda następująco:
1. Wygenerowanie określonej populacji kółek (każde o losowych parametrach takich jak np. rozmiar, położenie) - tak zwana "matka".
2. Sprawdzenie, jak bardzo "matka" przypomina zadane zdjęcie.
3. Dokonanie losowej mutacji - np. zmiana położenia jednego kółka.
4. Sprawdzenie, czy nowa populacja przypomina zadane zdjęcie bardziej niż "matka". Jeżeli tak, populacja staje się nową "matką".
5. Przejście do kroku 3.

Efekt powinien wyglądać orientacyjnie tak:
https://imgur.com/a/uaKmpYQ

Mam zamiar również zrobić GUI, w którym użytkownik będzie mógł wgrać własny obrazek, który ma zostać odwzorowany z kółek.
