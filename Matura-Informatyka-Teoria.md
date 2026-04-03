## 3.1 Jednostki w informatyce

- **bit (b)** – najmniejsza jednostka informacji, 0 lub 1.
- **bajt (B)** – 8 bitów.

### Przeliczenia (potęgi 2):

- **1 kB = 2¹⁰ = 1024 B**
- **1 MB = 2²⁰ = 1 048 576 B**
- **1 GB = 2³⁰ = 1 073 741 824 B**
- **1 TB = 2⁴⁰ = 1 099 511 627 776 B**

## 3.2 Budowa komputera

### Procesor (CPU)

- „Mózg komputera”.
- O wydajności decydują:
  - liczba rdzeni i wątków,
  - częstotliwość taktowania,
  - pamięć podręczna,
  - cykl rozkazów procesora.

### Pamięć RAM

- Ulotna pamięć operacyjna.
- Przechowuje dane aktualnie używanych programów.

### Dysk twardy

- Przechowuje system, programy i pliki.
- Parametry: pojemność, interfejs, protokół, (dla HDD) RPM.

### Rodzaje dysków:

- **HDD** – talerze magnetyczne, wolniejszy, podatny na awarie mechaniczne.
- **SSD** – brak ruchomych części, dużo szybszy.

### Zagrożenia danych na dysku:

- wirusy z załączników,
- instalacja z niepewnych źródeł,
- brak kopii zapasowych,
- awarie sprzętowe,
- ransomware.

## 3.3 Rodzaje pamięci komputerowej

### Pamięć wewnętrzna (dostępna dla CPU)

- **Rejestry** – najszybsze, 32/64 bity.
- **Pamięć podręczna (cache)** – szybka, ale większa niż rejestry.
- **RAM** – ulotna pamięć operacyjna.
- **ROM** – nieulotna, zawiera np. BIOS.

### Pamięć zewnętrzna

- Niedostępna bezpośrednio dla CPU.
- Przechowuje dane długoterminowo.
- Przykłady: dyski twarde, pendrive’y, płyty.

## 3.4 Urządzenia peryferyjne

### Urządzenia wejścia

- mysz, klawiatura, skaner, kamera, mikrofon, tablet graficzny.

### Urządzenia wyjścia

- drukarka, monitor, głośniki, słuchawki, projektor.

### Urządzenia wejścia/wyjścia

- modemy, nośniki danych, moduły łączności (Bluetooth), ekrany dotykowe.

### Ploter

- urządzenie do dużych formatów. Rodzaje:
- drukujące (mapy, plakaty),
- tnące (folie, winyl),
- grawerujące (drewno, metal, szkło).

## 3.5 Popularne złącza komputerowe

- **USB** – uniwersalne złącze do podłączania urządzeń.
- **HDMI** – przesył obrazu i dźwięku.
- **Jack** – złącze audio.

## 3.6 Systemy operacyjne i oprogramowanie

### System operacyjny (OS)

- Zarządza komputerem i umożliwia uruchamianie programów.

### Przykłady:

- Windows
- macOS
- Linux (otwartoźródłowy)

### Oprogramowanie

- Zbiór programów i instrukcji sterujących komputerem.

### Rodzaje oprogramowania:

### Systemowe

- system operacyjny,
- sterowniki.

### Narzędziowe

- diagnostyczne (testy sprzętu, monitory systemu),
- optymalizacyjne (defragmentacja, czyszczenie),
- naprawcze (odzyskiwanie danych, naprawa dysków),
- zarządzania (menedżery plików, kopie zapasowe).

### Użytkowe

- pakiety biurowe,
- programy graficzne,
- przeglądarki internetowe,
- odtwarzacze multimedialne.

## 3.6.3 Przetwarzanie danych w systemach

### OCR

- Rozpoznawanie tekstu ze skanów/obrazów.

**Zastosowania:** digitalizacja książek, faktury, tablice rejestracyjne, tłumaczenia, konwersja notatek.

### Unicode

- Standard kodowania znaków.
- Obsługuje ponad 140 tys. znaków, różne alfabety, emoji.

## 3.7 Bezpieczeństwo systemów informatycznych

### Złośliwe oprogramowanie (malware)

### Rodzaje:

- **Wirus** – dołącza się do plików.
- **Robak** – rozprzestrzenia się samodzielnie w sieci.
- **Trojan** – udaje przydatny program, działa szkodliwie.
- **Ransomware** – szyfruje pliki i żąda okupu.
- **Spyware** – szpieguje użytkownika.
- **Keylogger** – zapisuje naciśnięcia klawiszy.

### Ochrona

- **Antywirus** – skanowanie, monitorowanie, aktualizacje, kwarantanna.
- **Firewall** – kontrola ruchu sieciowego.

### Autentykacja i autoryzacja

- **Autentykacja** – potwierdzenie tożsamości („kim jesteś”).
- **Autoryzacja** – nadanie uprawnień („co możesz robić”).

### Techniki uwierzytelniania

- **Coś, co wiesz** – hasło, PIN, pytania kontrolne.
- **Coś, co masz** – karta, token, smartfon.
- **Coś, czym jesteś** – biometria (odcisk, twarz, tęczówka, głos).

### 2FA – uwierzytelnianie dwuskładnikowe

- Wymaga dwóch różnych metod.
- Przykłady: hasło + SMS, hasło + aplikacja, PIN + odcisk, karta + PIN.

## 4.0 Wprowadzenie

- System liczbowy = sposób zapisu liczb za pomocą cyfr i reguł.
- **Systemy addytywne** – np. rzymski (III = 3).
- **Systemy pozycyjne** – wartość cyfry zależy od jej miejsca.
- Każdy system ma **podstawę** (base).

### Najpopularniejsze systemy pozycyjne:

- **Dziesiętny (10)** – cyfry 0–9
- **Binarny (2)** – cyfry 0, 1
- **Oktalny (8)** – cyfry 0–7
- **Heksadecymalny (16)** – cyfry 0–9, A–F (A=10, F=15)

## 4.1 Zamiana z systemu dziesiętnego na dowolny

### Metoda dzielenia przez podstawę

1. Dzielisz liczbę przez podstawę.
2. Zapisujesz reszty.
3. Wynik czytasz **od końca**.

### Przykład: 270₁₀ → system 16

- 270 / 16 = 16 r. 14 → E
- 16 / 16 = 1 r. 0
- 1 / 16 = 0 r. 1 **Wynik: 10E₁₆**

## 4.2 Zamiana z dowolnego systemu na dziesiętny

### Metoda wagowa

Każda cyfra × podstawa^pozycja.

### Przykład: 1101₂

- 1×2³ + 1×2² + 0×2¹ + 1×2⁰ = 8 + 4 + 0 + 1 = **13₁₀**

## 4.3 Zamiana z dowolnego systemu na dowolny

Najprościej:

1. Zamień na dziesiętny.
2. Zamień z dziesiętnego na docelowy.

### Przykład: 21023₄ → ?

- 3×4⁰ + 2×4¹ + 0×4² + 1×4³ + 2×4⁴ = 3 + 8 + 0 + 64 + 512 = **587₁₀**

587₁₀ → system 4:

- 587 / 4 = 146 r. 3
- 146 / 4 = 36 r. 2
- 36 / 4 = 9 r. 0
- 9 / 4 = 2 r. 1
- 2 / 4 = 0 r. 2 **Wynik: 21023₄ = 21023₄ (spójny przykład z książki)**

## 4.4 Operacje arytmetyczne w systemach pozycyjnych

## 4.4.1 Dodawanie

### System binarny (podstawa 2)

Przeniesienie przy sumie ≥ 2.

Reguły:

- 0+0=0
- 0+1=1
- 1+1=10 (0, przeniesienie 1)

### Przykład:

100101

+100111

--------

1001100

### System ósemkowy (podstawa 8)

Przeniesienie przy sumie ≥ 8.

Przykłady:

- 4₈ + 6₈ = 12₈
- 7₈ + 5₈ = 14₈

### System szesnastkowy (podstawa 16)

Przeniesienie przy sumie ≥ 16.

Przykłady:

- 7₁₆ + 9₁₆ = 10₁₆
- A₁₆ + 8₁₆ = 12₁₆
- F₁₆ + 7₁₆ = 16₁₆

## 4.4.2 Odejmowanie

Pożyczka = podstawa systemu.

### System binarny

Pożyczka = 2.

Reguły:

- 1−0=1
- 1−1=0
- 0−1 = 1 (po pożyczce)

### System ósemkowy

Pożyczka = 8.

Przykład:

- 2₈ − 5₈ = 1₈ (po pożyczce)

### System szesnastkowy

Pożyczka = 16.

Przykład:

- C₁₆ − 5₁₆ = 7₁₆
- 3₁₆ − A₁₆ = 9₁₆ (po pożyczce)

## 4.4.3 Mnożenie

Zasada jak w dziesiętnym: mnożenie + przesunięcia.

### System binarny

Reguły:

- 1×1=1
- 1×0=0
- 0×1=0

### Przykład:

110

×101

------

110

000

110

------

1110

### System ósemkowy

Przykłady:

- 3₈×5₈ = 14₈
- 7₈×5₈ = 43₈

### System szesnastkowy

Przykłady:

- 5₁₆×3₁₆ = F₁₆
- A₁₆×4₁₆ = 28₁₆
- C₁₆×B₁₆ = 84₁₆

## 4.4.4 Dzielenie

Zasada jak w dziesiętnym: sprawdzamy, ile razy dzielnik mieści się w części dzielnej.

### System binarny

Dzielnik mieści się **0 lub 1** razy.

### System ósemkowy

Dzielnik mieści się 0–7 razy.

Przykłady:

- 24₈ / 3₈ = 6₈ r. 2₈
- 56₈ / 7₈ = 6₈ r. 4₈

### System szesnastkowy

Dzielnik mieści się 0–F razy.

Przykłady:

- 3₁₆ / 4₁₆ = F₁₆ r. 6₁₆
- F₁₆ / B₁₆ = 17₁₆ r. 2₁₆

## 5.1 Świat jedynek i zer

- Komputery operują na wartościach logicznych:
  - **1** = prawda, obecność, „włączone”
  - **0** = fałsz, brak, „wyłączone”
- Przykład: funkcja sprawdzająca, czy numer telefonu ma 9 cyfr → zwraca 1 lub 0.

## 5.2 Operatory logiczne

### NOT (p / ~p) – negacja

- Jeden argument.
- Odwraca wartość logiczną:
  - 1 → 0
  - 0 → 1
- Przykład: „Użytkownik NIE jest zalogowany”

### Tabela:

| **p** | **~p** |
| --- | --- |
| 0 | 1 |
| 1 | 0 |

### AND (p ∧ q) – koniunkcja

- Dwa argumenty.
- Zwraca 1 tylko gdy **oba** są 1.
- Przykład: „Login poprawny AND hasło poprawne”

### Tabela:

| **p** | **q** | **p ∧ q** |
| --- | --- | --- |
| 1 | 1 | 1 |
| 1 | 0 | 0 |
| 0 | 1 | 0 |
| 0 | 0 | 0 |

### OR (p ∨ q) – alternatywa

- Dwa argumenty.
- Zwraca 1 gdy **przynajmniej jeden** jest 1.
- Przykład: „Administrator OR właściciel pliku”

### Tabela:

| **p** | **q** | **p ∨ q** |
| --- | --- | --- |
| 1 | 1 | 1 |
| 1 | 0 | 1 |
| 0 | 1 | 1 |
| 0 | 0 | 0 |

### NAND (p ↑ q) – negacja AND

- Zwraca 0 tylko gdy **oba** są 1.
- Przykład: „Alarm aktywowany, gdy NIE są spełnione oba warunki”

### Tabela:

| **p** | **q** | **p ↑ q** |
| --- | --- | --- |
| 1 | 1 | 0 |
| 1 | 0 | 1 |
| 0 | 1 | 1 |
| 0 | 0 | 1 |

### NOR (p ↓ q) – negacja OR

- Zwraca 1 tylko gdy **oba** są 0.
- Przykład: „Tryb oszczędzania energii, gdy brak aktywności”

### Tabela:

| **p** | **q** | **p ↓ q** |
| --- | --- | --- |
| 1 | 1 | 0 |
| 1 | 0 | 0 |
| 0 | 1 | 0 |
| 0 | 0 | 1 |

### XOR (p ⊕ q) – różnica symetryczna

- Zwraca 1 gdy **argumenty są różne**.
- Przykład: „Silnik uruchomi się, gdy klucz XOR przycisk”

### Tabela:

| **p** | **q** | **p ⊕ q** |
| --- | --- | --- |
| 1 | 1 | 0 |
| 1 | 0 | 1 |
| 0 | 1 | 1 |
| 0 | 0 | 0 |

### XNOR (p ⇔ q ) – równoważność

- Zwraca 1 gdy **argumenty są identyczne**.
- Przykład: „Synchronizacja poprawna, gdy stan lokalny = stan serwera”

### Tabela:

| **p** | **q** | **p ⇔ q** |
| --- | --- | --- |
| 1 | 1 | 1 |
| 1 | 0 | 0 |
| 0 | 1 | 0 |
| 0 | 0 | 1 |

## 6.1 Grafika rastrowa

- Obraz tworzony z **pikseli** (siatka punktów).
- Każdy piksel ma określony kolor.
- Przy powiększeniu obraz traci ostrość → widać piksele.
- Stosowana w zdjęciach, skanach, grafikach internetowych.

## 6.2 Grafika wektorowa

- Obraz tworzony z **figur matematycznych**: odcinki, okręgi, krzywe, wielokąty.
- Opis za pomocą równań → **nie traci jakości przy powiększeniu**.
- Stosowana w logotypach, ikonach, ilustracjach, grafice webowej.

## 6.3 RGB

- Model barw dla ekranów (światło).
- Kolory mieszają się **do bieli** (model addytywny).
- Każdy kolor opisany jako (R,G,B) w zakresie **0–255**.

### Przykłady:

- Czarny → (0,0,0)
- Biały → (255,255,255)

### HEX

- Zapis: **#RRGGBB** (wartości szesnastkowe).
- Czarny → #000000
- Biały → #FFFFFF

### Mieszanie kolorów w RGB:

- R + G = Żółty (255,255,0)
- R + B = Magenta (255,0,255)
- G + B = Cyjan (0,255,255)
- R + G + B = Biały

## 6.4 CMYK

- Model barw dla druku (pigmenty).
- Kolory mieszają się **do czerni** (model subtraktywny).
- Każdy kolor opisany procentowo: (C,M,Y,K) w zakresie **0–100**.

### Przykłady:

- Biały → (0,0,0,0)
- Czarny → (0,0,0,100)
- C + M = Niebieski
- C + Y = Zielony
- M + Y = Czerwony

## 6.5 Różnice między RGB a CMYK

### Mieszanie kolorów

- **RGB** – addytywny → więcej światła = jaśniej → biel.
- **CMYK** – subtraktywny → więcej farby = ciemniej → czerń.

### Zastosowania

- **RGB** – ekrany (telefony, monitory, TV, strony WWW).
- **CMYK** – druk (ulotki, plakaty, gazety, zdjęcia).

## 6.6 Jednostki rozdzielczości

- **ppi** – pixels per inch → rozdzielczość ekranów.
- **dpi** – dots per inch → rozdzielczość druku.

## 6.7 Obliczanie rozmiaru pliku graficznego

### Wzór:

**Przykład:** 1920 × 1080 × 24 b = 49 766 400 bitów

## 6.8 Kompresja

### Kompresja bezstratna

- Nie traci jakości.
- Odtwarzanie 1:1.
- Wyszukiwanie powtarzających się wzorców.

### Kompresja stratna

- Traci część informacji.
- Mniejszy rozmiar kosztem jakości.

## 6.9 Rozszerzenia plików graficznych

### Grafika rastrowa

- **JPEG** – stratna, małe pliki, zdjęcia.
- **PNG** – bezstratna, obsługuje przezroczystość.
- **GIF** – animacje, mała paleta kolorów, bezstratny.
- **BMP/DIB** – brak kompresji, ogromne pliki.
- **TIFF** – profesjonalny, stratny/bezstratny.

### Grafika wektorowa

- **SVG** – XML, strony WWW, skalowalny.
- **WMF** – Windows, rzadko używany.
- **EPS** – druk wysokiej jakości (plakaty, billboardy).

## 6.10 Rozszerzenia plików wideo

- **MP4** – najpopularniejszy, małe pliki, dobra jakość, stratny.
- **MOV** – Apple, wysoka jakość, duże pliki, stratny.
- **AVI** – dobra jakość, duże pliki, stratny/bezstratny.
- **WMV** – mniejsze niż MP4, Microsoft, stratny.

## 6.11 Rozszerzenia plików audio

- **MP3** – stratny, małe pliki.
- **WMA** – stratny, Microsoft.
- **WAV** – brak kompresji, pełna jakość.
- **OGG** – stratny/bezstratny, open source.
- **MIDI** – zapis nut, nie dźwięku.

### Wprowadzenie

- Każdy program ma **licencję**, która określa:
  - zasady instalacji,
  - zasady użytkowania,
  - możliwość rozpowszechniania,
  - dostęp do kodu źródłowego (lub jego brak).
- Licencja = zgoda twórcy na korzystanie z programu w określony sposób.

## 7.1 Rodzaje licencji

## 7.1.1 GNU GPL

- Darmowa i **otwartoźródłowa** licencja.
- Użytkownik może:
  - używać programu w dowolnym celu,
  - analizować kod (bo jest dostępny),
  - rozpowszechniać kopie,
  - modyfikować i udostępniać ulepszenia.
- Przykłady: Linux, GIMP, Inkscape, Audacity.

## 7.1.2 Freeware

- Program darmowy, często tylko do użytku domowego.
- Brak dostępu do kodu źródłowego.
- Można rozpowszechniać kopie.
- Przykłady: Microsoft Teams, Google Chrome, Zoom, WhatsApp.

## 7.1.3 Shareware

- Darmowe korzystanie przez określony czas (wersja próbna).
- Po czasie: blokada lub ograniczenie funkcji.
- Brak dostępu do kodu źródłowego.
- Przykłady: WinRAR, CCleaner, Avast, Kaspersky.

## 7.1.4 Adware

- Program darmowy, ale zawiera reklamy.
- Możliwość wykupienia wersji bez reklam.
- Najczęściej w aplikacjach mobilnych.
- Przykłady: Spotify (free), YouTube (z reklamami), darmowe gry mobilne.

## 7.1.5 Licencja komercyjna

- Pozwala na **zarobkowe** wykorzystanie programu.
- Często istnieją wersje niekomercyjne — do celów zarobkowych trzeba kupić licencję.
- Przykłady: Microsoft Office, Adobe Photoshop/Illustrator/Premiere Pro.

## 7.1.6 MOLP (Microsoft Open License Program)

- Licencja dla firm i instytucji kupujących większe ilości oprogramowania Microsoft.
- Oferuje korzystniejsze warunki zakupu.

## 7.1.7 Creative Commons (CC)

- System licencji dla dzieł (zdjęcia, muzyka, filmy).
- Autor pozwala korzystać z utworu pod określonymi warunkami (np. podanie autora).
- Nie dotyczy oprogramowania.

## 7.1.8 Creative Commons Zero (CC0)

- Twórca zrzeka się praw autorskich → dzieło trafia do **domeny publicznej**.
- Można używać bez ograniczeń, także komercyjnie.
- Nie wymaga podawania autora.

## 7.2 Prawo autorskie

- Chroni twórcę przed nielegalnym kopiowaniem i rozpowszechnianiem.
- Ochronie podlegają m.in.:
  - teksty,
  - zdjęcia,
  - muzyka,
  - filmy,
  - grafiki,
  - utwory audiowizualne.
- Ochrona działa **od momentu stworzenia**.
- Wygasa **70 lat po śmierci autora** (lub ostatniego współautora).

### Wprowadzenie

- **Protokół sieciowy** = zbiór zasad określających sposób komunikacji między urządzeniami.
- Określa m.in.:
  - jak nawiązać połączenie,
  - jak przesyłać dane,
  - jak zakończyć komunikację.

## 8.1 SMTP – wysyłanie e‑maili

- **SMTP (Simple Mail Transfer Protocol)** – protokół do **wysyłania** wiadomości e‑mail.
- Działa w modelu **klient–serwer**.

### Uproszczony proces:

1. Nadawca tworzy wiadomość.
2. Wiadomość trafia na serwer SMTP nadawcy.
3. Serwer SMTP kontaktuje się z serwerem odbiorcy.
4. Po nawiązaniu połączenia wiadomość jest przekazywana.
5. Serwer odbiorcy zapisuje wiadomość w skrzynce odbiorczej.

## 8.2 POP3 – pobieranie e‑maili

- **POP3 (Post Office Protocol v3)** – służy do **pobierania** wiadomości z serwera.
- Działa klient–serwer.

### Działanie:

1. Uruchamiasz program pocztowy.
2. Logujesz się (login + hasło).
3. Klient pobiera wiadomości z serwera.
4. Wiadomości zapisują się lokalnie.
5. Zazwyczaj są **usuwane z serwera** (chyba że ustawiono inaczej).

## 8.3 IMAP – nowocześniejszy odbiór poczty

- **IMAP** pozwala na dostęp do wiadomości **bez pobierania ich na komputer**.
- Wszystkie operacje (usuwanie, przenoszenie, oznaczanie) wykonywane są **na serwerze**.
- Zmiany widoczne na każdym urządzeniu.

### Działanie:

1. Klient IMAP łączy się z serwerem.
2. Logowanie.
3. Pobieranie listy wiadomości i ich treści.
4. Synchronizacja zmian.
5. Zakończenie połączenia.

## 8.4 SSL – bezpieczne połączenia

- **SSL (Secure Socket Layer)** – szyfrowanie komunikacji w Internecie.
- Działa w warstwie transportowej.
- Używa **certyfikatów SSL** i kluczy (publiczny + sesyjny).
- Zapewnia:
  - poufność,
  - integralność,
  - uwierzytelnienie serwera.

### Uproszczone działanie:

1. Klient prosi o połączenie SSL.
2. Serwer wysyła certyfikat i klucz publiczny.
3. Klient weryfikuje certyfikat.
4. Klient wysyła zaszyfrowany klucz sesji.
5. Komunikacja odbywa się szyfrowana.
6. Po zakończeniu klucz sesji jest usuwany.

## 8.5 HTTP / HTTPS

- **HTTP** – protokół przesyłania stron WWW (port 80).
- **HTTPS** = HTTP + SSL (port 443).

### Działanie HTTP:

1. Przeglądarka wysyła żądanie.
2. Serwer odpowiada plikiem.
3. Przeglądarka odbiera dane.
4. Renderuje stronę.

## 8.6 DNS – zamiana nazw na IP

- **DNS (Domain Name System)** – zamienia domeny na adresy IP.

### Działanie:

1. Wpisujesz adres strony.
2. Przeglądarka pyta serwer DNS.
3. Serwer DNS znajduje IP.
4. Odsyła IP do klienta.
5. Przeglądarka łączy się z serwerem docelowym.

## 8.7 IP – adresowanie i routowanie

- **IP (Internet Protocol)** – odpowiada za przesyłanie pakietów między urządzeniami.
- Dane są dzielone na **pakiety**, które mogą iść różnymi drogami.
- Komputer odbiorcy składa pakiety w całość.
- IP wykonuje **routowanie** – wybór trasy.

## 8.8 DHCP – automatyczne przydzielanie IP

- **DHCP** – automatycznie przydziela adresy IP i konfigurację sieciową.
- Działa klient–serwer.

### Działanie:

1. Urządzenie wysyła zapytanie.
2. Serwer DHCP przydziela IP + konfigurację.
3. Adres jest ważny przez określony czas (dzierżawa).
4. Po wyłączeniu urządzenia adres wraca do puli.

## 8.9 FTP – przesyłanie plików

- **FTP (File Transfer Protocol)** – przesyłanie plików między urządzeniami.
- Działa klient–serwer.

### Działanie:

1. Klient łączy się z serwerem FTP.
2. Logowanie.
3. Wysyłanie polecenia (np. pobierz plik).
4. Serwer przygotowuje plik.
5. Serwer wysyła pakiety.
6. Klient zapisuje plik.
7. Połączenie zamykane.

## 8.10 TCP – stabilne połączenie

- **TCP (Transmission Control Protocol)** – połączeniowy, niezawodny.
- Używany m.in. w WWW, e‑mailach, przesyłaniu plików.

### 3‑way handshake:

1. SYN →
2. SYN‑ACK ←
3. ACK →

### Działanie:

- Pakiety wysyłane w kolejności.
- Odbiorca potwierdza odbiór (ACK).
- Brak ACK → retransmisja.
- Zamykanie: FIN → ACK.

## 8.11 UDP – szybkie, ale bez potwierdzeń

- **UDP (User Datagram Protocol)** – bezpołączeniowy, szybki, bez kontroli błędów.
- Nadawca nie wie, czy pakiety dotarły.
- Stosowany tam, gdzie liczy się szybkość:
  - wideokonferencje,
  - gry online,
  - komunikatory.

## 8.12 TELNET – zdalne logowanie (niebezpieczne)

- Umożliwia zdalne logowanie i wykonywanie poleceń.
- Dane przesyłane **jawnym tekstem** → brak bezpieczeństwa.

### Działanie:

1. Klient łączy się z serwerem Telnet.
2. Połączenie nawiązane.
3. Polecenia wysyłane do serwera.
4. Serwer wykonuje polecenia.
5. Wyniki wracają do klienta.
6. Można zakończyć połączenie.

## 8.13 SSH – bezpieczny następca Telnetu

- **SSH (Secure Shell)** – szyfrowany zdalny dostęp.
- Umożliwia:
  - logowanie,
  - wykonywanie poleceń,
  - przesyłanie plików,
  - tunelowanie portów.
- Bezpieczny dzięki silnemu szyfrowaniu.

## 8.14 Porty protokołów

| **Protokół** | **Port** | **Port SSL** |
| --- | --- | --- |
| SMTP | 587 / 25 | 465 |
| POP3 | 110 | 995 |
| IMAP | 143 | 993 |
| HTTP | 80 | 443 |
| DNS | 53 | — |
| DHCP | 67, 68 | — |
| FTP | 20, 21 | — |
| Telnet | 23 | — |
| SSH | 22 | — |

### 9.1. Czym jest sieć komputerowa i Internet

- **Sieć komputerowa** – grupa urządzeń połączonych ze sobą, umożliwiających komunikację (np. w domu, budynku, firmie).
- **Internet** – zbiór wszystkich sieci komputerowych (publicznych i prywatnych).

### 9.2. Rodzaje sieci

### LAN – Local Area Network

- Sieć lokalna, mały obszar (dom, szkoła, firma).
- Najczęściej Ethernet.

### WLAN – Wireless LAN

- Bezprzewodowa wersja LAN (WiFi).

### MAN – Metropolitan Area Network

- Sieć obejmująca miasto lub jego część.
- Łączy np. wydziały uczelni.

### WAN – Wide Area Network

- Sieć rozległa, łączy wiele LAN/MAN na dużych odległościach (kraje, województwa).
- Wykorzystuje m.in. światłowody.

### 9.3. Podstawowe urządzenia sieciowe

### Modem

- Łączy komputer z Internetem.
- Zamienia sygnał analogowy ↔ cyfrowy.

### Hub

- Łączy urządzenia w LAN.
- Wysyła pakiety do **wszystkich** urządzeń.
- Przestarzały.

### Switch

- Ulepszony hub.
- Przesyła pakiety **tylko do właściwego odbiorcy**.

### Router

- Łączy różne sieci (np. LAN z Internetem).
- Zarządza ruchem i przekazuje pakiety między sieciami.

### 9.4. Topologie sieciowe

### Topologia fizyczna – układ kabli i urządzeń.

### Topologia logiczna – sposób przesyłania danych.

### Magistrala (bus)

- Wszystkie urządzenia podłączone do jednego kabla.
- Prosta, ale mało wydajna.

### Pierścień (ring)

- Każde urządzenie ma dwóch sąsiadów.
- Awaria jednego urządzenia psuje całą sieć.

### Gwiazda (star)

- Najpopularniejsza.
- Wszystkie urządzenia podłączone do jednego punktu (hub/switch).
- Awaria jednego komputera nie psuje sieci, ale awaria urządzenia centralnego – tak.

### 9.5. Adresacja IP

### IPv4

- 32 bity → ok. 4,3 mld adresów.
- Przykład: 192.168.10.70.

### IPv6

- 128 bitów → 3,4 × 10³⁸ adresów.
- Zapis szesnastkowy.

### Maska podsieci

- Określa podział adresu na część sieciową i hosta.
- Przykład: 255.255.255.0 = /24.

### Rodzaje adresów

- **Network address** – adres sieci (np. 192.168.1.0).
- **Broadcast address** – do wszystkich hostów (np. 192.168.1.255).
- **Host address** – adres urządzenia.
- **Loopback** – 127.0.0.1 (komputer „rozmawia sam ze sobą”).

### 9.6. Obliczenia adresów

Dane: IP + maska.

### a) Adres sieci

Operacja **AND** na IP i masce.

### b) Adres rozgłoszeniowy

NOT maski + adres sieci.

### c) Maksymalna liczba hostów

### d) Pierwszy host

Adres sieci + 1.

### e) Ostatni host

Adres rozgłoszeniowy – 1.

### 9.7. Klasy adresów IP

| **Klasa** | **Pierwszy oktet** | **Maska domyślna** | **Zastosowanie** |
| --- | --- | --- | --- |
| A | 1–126 | 255.0.0.0 | bardzo duże sieci |
| B | 128–191 | 255.255.0.0 | średnie i duże sieci |
| C | 192–223 | 255.255.255.0 | małe sieci |
| D | 224–239 | - | multicast |
| E | 240–255 | - | eksperymentalne |

### 9.8. Szyfrowanie

### Szyfr symetryczny

- Jeden klucz do szyfrowania i deszyfrowania.
- Szybki, prosty.
- Przykład: szyfr Cezara.

### Szyfr asymetryczny

- Dwa klucze: publiczny i prywatny.
- Publiczny szyfruje, prywatny deszyfruje.
- Przykład: RSA.

### 9.9. RSA – zasada działania

1. Nadawca szyfruje wiadomość **kluczem publicznym odbiorcy**.
2. Odbiorca odszyfrowuje ją **kluczem prywatnym**.

### 9.10. Podpisy elektroniczne

### Zwykły podpis elektroniczny

- Najprostszy, niska wartość prawna.
- Np. imię w mailu.

### Zaawansowany podpis elektroniczny

- Przypisany do konkretnej osoby.
- Zmiana dokumentu po podpisaniu jest wykrywalna.

### Kwalifikowany podpis elektroniczny

- Najwyższa forma, równoważny podpisowi odręcznemu.
- Ważny w całej UE.
- Wykorzystuje certyfikat i bezpieczne urządzenie.

### Podpis a szyfrowanie asymetryczne

- Podpisuje się **kluczem prywatnym**.
- Weryfikuje **kluczem publicznym**.

### 9.11. URL – budowa

- **Protokół** – np. http://
- **Domena** – np. strona.pl
- **Ścieżka** – /produkty
- **Zapytanie** – ?filtr=sukienka
- **Fragment** – #197

### 10.1. Tablica (ang. array)

Tablica to uporządkowany zbiór elementów, do których odwołujemy się za pomocą **indeksów** (zwykle od 0). Można ją porównać do szufladek w szafce – każda ma swój numer i przechowuje jedną wartość.

### 10.1**.**Podstawowe operacje na tablicy

- **Wstawienie elementu pod dany indeks** Przykład: ustawienie wartości pod indeksem 1 na 12.
- **Odczyt elementu spod indeksu** Przykład: odczyt spod indeksu 3 → 67.

Tablice mogą przechowywać:

- liczby,
- napisy,
- inne tablice (tablice wielowymiarowe).

### 10.2. Stos (ang. stack)

Stos działa jak układanie kart jedna na drugą. Zawsze pracujemy tylko z **górą stosu**.

### Zasada działania:

**LIFO – Last In, First Out** (Ostatni wchodzi, pierwszy wychodzi)

### 🔧 Operacje na stosie

- **PUSH** – dodanie elementu na górę stosu
- **POP** – usunięcie elementu z góry stosu
- **TOP** – odczyt elementu z góry stosu
- **EMPTY** – sprawdzenie, czy stos jest pusty

Stos pojawia się np. w **cofaniu zmian w edytorach tekstu**.

### 10.3. Kolejka (ang. queue)

Kolejka działa jak kolejka w sklepie – elementy wchodzą na koniec, wychodzą z początku.

### Zasada działania:

**FIFO – First In, First Out** (Pierwszy wchodzi, pierwszy wychodzi)

### Operacje na kolejce

- **ENQUEUE** – dodanie elementu na koniec kolejki
- **DEQUEUE** – usunięcie elementu z początku kolejki
- **FRONT** – odczyt pierwszego elementu
- **BACK** – odczyt ostatniego elementu

### 11.1. Czym jest programowanie?

**Programowanie** – proces tworzenia programu komputerowego realizującego określone zadanie. Działanie programu definiuje **kod** napisany w języku programowania.

Programowania nie da się nauczyć wyłącznie z teorii – wymaga praktyki.

### 11.2. Rodzaje programowania

### Programowanie strukturalne

- Program dzielony na **podprogramy i funkcje**.
- Wykorzystuje **pętle**, **instrukcje warunkowe**, **procedury**.
- Kod jest czytelniejszy i łatwiejszy w analizie.

### Programowanie obiektowe

- Program składa się z **obiektów** zawierających dane i metody.
- Ułatwia organizację kodu i ponowne wykorzystanie elementów.

### 11.3. Rodzaje kodu

### Kod maszynowy

- Najniższy poziom, zapis binarny.
- Bezpośrednio wykonywany przez procesor.
- Trudny do czytania przez człowieka.

### Kod źródłowy

- Kod napisany przez programistę w języku programowania.

### Kod pośredni

- Powstaje między kodem źródłowym a maszynowym.
- Ułatwia przenoszenie programów między platformami.

### Kod wykonywalny

- Kod maszynowy lub pośredni gotowy do uruchomienia.
- Efekt kompilacji lub interpretacji.

### 11.4. Kompilator i interpreter

### Kompilator

Tłumaczy **cały kod źródłowy** na kod maszynowy przed uruchomieniem.

### Zalety:

- szybkie działanie programu
- błędy wykrywane przed uruchomieniem
- brak zależności od środowiska po kompilacji
- lepsza ochrona kodu

### Wady:

- konieczność ponownej kompilacji po zmianach
- dłuższy czas przygotowania programu
- kod wykonywalny zależny od platformy

**Przykłady języków:** C, C++, Pascal

### Interpreter

Wykonuje kod **linijka po linijce**, bez wcześniejszej kompilacji.

### Zalety:

- szybkie testowanie
- łatwe debugowanie
- duża przenośność
- możliwość pracy interaktywnej

### Wady:

- wolniejsze działanie
- konieczność posiadania interpretera
- błędy wykrywane dopiero podczas działania
- kod źródłowy musi być dostępny

**Przykłady języków:** JavaScript, PHP

### Podejście mieszane

Kod źródłowy → **kod pośredni** → interpretacja przez maszynę wirtualną.

**Przykłady:** Java, C#, Python

### 11.5. Języki programowania – podział

### Języki niskiego poziomu

- Bliskie kodowi maszynowemu.
- Duża kontrola nad sprzętem.
- Trudne w pisaniu i czytaniu. **Przykłady:** asembler, kod binarny.

### Języki wysokiego poziomu

- Zbliżone do języka naturalnego.
- Łatwiejsze w nauce, mają bogate biblioteki.
- Mniej wydajne niż niskopoziomowe. **Przykłady:** Python, Java, C++.

### Języki średniego poziomu

- Łączą cechy niskiego i wysokiego poziomu. **Przykład:** C, C++.

### 11.6. Popularne języki programowania

- **Python** – czytelny, uniwersalny; AI, analiza danych, backend.
- **Java** – obiektowy; Android, serwery, duże systemy.
- **C** – średni poziom; szybki, blisko sprzętu.
- **C++** – rozszerzenie C; obiektowy, wydajny.
- **C#** – Microsoft; aplikacje Windows, gry (Unity).
- **Pascal** – strukturalny, historyczny.
- **Asembler** – niskopoziomowy, bezpośrednio rozumiany przez komputer.
- **PHP** – backend stron internetowych.
- **HTML** – opis struktury strony.
- **CSS** – opis wyglądu strony.
- **JavaScript** – interaktywne strony, aplikacje webowe i mobilne.

### 11.7. Kody ASCII

### Zakresy:

- **cyfry:** 48–57
- **duże litery:** 65–90
- **małe litery:** 97–122
