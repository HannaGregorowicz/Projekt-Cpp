**Raport IV** 23.11.2018

Udało mi się wykonać wszystkie zadania, które zadałam sobie na ten tydzień. Udało mi się rozbić wygenerowany obrazek na piksele oraz porównać go z oryginałem, dzięki czemu mogłam napisać proste działanie, które liczy różnicę między obrazkami (jest ona zapisana w nowej zmiennej o nazwie fitness1). Po drodze jednak napotkałam się z wieloma problemami, między innymi z:
- zapisywaniem obrazka (był on zapisany jako cały czarny kwadrat, okazało się że rozmiar musi być liczbą podzielną przez 4, choć w internecie nie ma żadnej informacji na ten temat)
- rozbiciem obrazków na piksele (ciągle były błędy, było to spowodowane faktem, że openframeworks zapisuje obrazek w formacie .jpg, a oryginalny był w .png, przez co funkcja getPixels() zwracała tablice o różnych wymiarach)
- strukturalnością kodu - jak zrobić, by jakaś czynność wykonała się przed inną, w jaki sposób w ogóle openframeworks "przemieszcza się" po programie
Są to powody, przez które powstało jednodniowe opóźnienie w powstaniu tego raportu.

W najbliższym tygodniu planuję zająć się tworzeniem losowej mutacji losowego elementu populacji.
