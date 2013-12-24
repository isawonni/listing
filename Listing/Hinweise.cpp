HINWEIS:Um f�r mehr �bersichtlichkeit zu sorgen, werden die einzelnen 
Programmzeilen mit Zeilennummern versehen. Diese d�rfen nicht mit 
abgetippt werden, da es sonst zu Fehlern bei der sp�teren Kompilierung 
kommt. Nat�rlich d�rfen die Doppelpunkte direkt nach den Zeilennummern 
auch nicht mit eingegeben werden.

HINWEIS:Verwende Kommentare gro�z�gig. Sie zu schreiben ist nicht halb 
so viel Arbeit, wie einen unkommentierten Quelltext m�hsam zu entziffern. 
Versuche dabei jedoch, Dich auf sinnvolle Kommentare zu beschr�nken und 
diese aussagekr�ftig zu halten.

HINWEIS:Alle Dateien, die mit #includeeingebunden werden und nicht 
von uns selbst stammen oder separat installiert wurden, m�ssen in spitzen 
Klammern (<>) stehen.

HINWEIS:Bei C++ kannst Du so viele Leerzeichen und Leerzeilen verwenden, 
wie Du m�chtest. Dadurch hast Du die M�glichkeit, deinen Code lesbar zu 
gestalten. Das gilt nat�rlich nicht innerhalb von Befehlen. Schau Dir andere 
Quelltexte an, und such Dir einen Aufbau heraus, der f�r Dich am besten 
lesbar ist.

HINWEIS:Jede Befehlszeile muss mit einem Semikolon abgeschlossen werden. 
Dies gilt jedoch nicht f�r Pr�prozessor-Direktiven und Funktionsk�pfe.

HINWEIS:Wie der Name schon sagt, bewirkt Erstellen > Projektmappe neu 
erstellen, dass s�mtliche Quelltextdateien neu kompiliert werden, selbst wenn 
keine �nderungen darin vorgenommen wurden. Das mag bei unserem ersten 
Beispiel noch nicht dramatisch sein, jedoch wird es bei gro�en Projekten sehr 
lange dauern und unn�tig Zeit rauben. Deshalb sollte man nur die Dateien 
kompilieren lassen, die man auch tats�chlich ver�ndert hat. Dies geschieht 
�ber den Men�punkt Erstellen > Projektmappe erstellen. Eine komplette 
Neuerstellung ist in der Regel nur selten n�tig � etwa dann, wenn beim 
Kompiliervorgang etwas schief ging.

HINWEIS:Es ist sehr wichtig, immer mit den Beispielen zu experimentieren. 
Einfach nur die Listings zu kompilieren und sich das Resultat anzuschauen, 
gen�gt eben nicht. Versuche den Quelltext etwas abzu�ndern, ohne jedoch da 
bei dem Thema vorzugreifen. Dadurch wird man schneller mit den erkl�rten 
Themen vertraut, und der Lerneffekt ist gr��er.

HINWEIS:Klickt man erneut auf Product > Build, so wird nur dann neu 
kompiliert und gelinkt, wenn es auch �nderungen am Quellcode gab. Ansonsten
wird die ausf�hrbare Datei nicht erneut erstellt. Generell ist es so, dass immer 
nur die Quellcode-Dateien kompiliert werden, die seit dem letzten Build-Prozess
eine �nderung erfahren haben. Das gilt dann nat�rlich auch f�r alle daraus 
entstehenden Abh�ngigkeiten.
Durch einen Klick auf Product > Cleanwerden s�mtliche erzeugen Objektdateien gel�scht. Das f�hrt dazu, dass das Projekt komplett neu gebaut werden
muss, wenn man erneut auf Product > Buildklickt. Das mag bei unserem 
ersten Beispiel noch nicht dramatisch sein, jedoch wird es bei gro�en Projekten
sehr lange dauern und unn�tig Zeit rauben. Ein �Clean� ist in der Regel nur 
dann n�tig, wenn beim Kompiliervorgang etwas schief ging.

HINWEIS:Verwendet man f�r einen Variablennamen versehentlich ein 
reserviertes Schl�sselwort, so f�rbt sich dieses ein. In diesem Fall muss 
man auf einen anderen Namen zur�ckgreifen.

HINWEIS:Verwechsle nicht �Vergleich� mit �Zuweisung�. Ein einfaches 
Gleichheitszeichen (=) bedeutet bei C++ immereine Zuweisung. Bei einem 
Vergleich werden generell zwei Gleichheitszeichen ben�tigt (==).

HINWEIS:Beachte, dass eine if-Bedingung niemals mit einem Semikolon 
enden darf. Setzt man dennoch ein Semikolon, funktioniert die Bedingung 
nicht, und es kommt zu Fehlern

HINWEIS:Variablen sind immer nur in dem Codeblock, in dem sie erstellt 
wurden, und den dort enthaltenen Codebl�cken g�ltig. Au�erhalb dieses 
Blockes verliert die Variable ihre G�ltigkeit und kann nicht verwendet werden. 
Es handelt sich um eine lokale Variable.

HINWEIS:Achte unbedingt darauf, dass Du die Parameter beim Aufrufen einer 
Funktion genau in der gleichen Reihenfolge angibst, wie sie im Funktionsprototyp/Funktionskopf aufgef�hrt sind. Der Compiler unterscheidet hier nicht von 
selbst nach Namen oder Typ, sondern allein anhand der Reihenfolge.

HINWEIS:Wenn ein gewisser Codeteil h�ufig wiederholt wird, ohne dass 
wesentliche �nderungen auftreten, und dieser Codeteil aus mehreren Zeilen 
besteht, dann ist er ein potenzieller Kandidat f�r eine Funktion

HINWEIS:Wenn eine Funktion nur aus wenigen kurzen Zeilen besteht und 
nicht an �berm��ig vielen Stellen im Programm aufgerufen wird, dann riecht 
es verd�chtig nach inline. Wenn diese Funktion nun auch noch sehr h�ufig 
pro Programmdurchlauf aufgerufen wird, dann macht inlinein der Regel 
Sinn.

HINWEIS:Funktionen k�nnen nur �berladen werden, wenn sich die Parameterlisten anhand der Datentypen oder der Anzahl an Parametern unterscheiden. 
M�glich ist dabei auch, dass sich der R�ckgabetyp unterscheidet. Verboten ist, 
eine Funktion nur anhand des R�ckgabewertes zu �berladen.

HINWEIS:Es ist wichtig, dass .cpp-Dateien immerzum Projekt hinzugef�gt 
werden, da sie sonst nicht kompiliert werden. Verwendest Du also eine fertige 
.cpp-Datei, die aus einem anderen Projekt stammt, so muss diese dem Projekt 
auch hinzugef�gt werden. Es gen�gt nicht, wenn sich diese Datei nur im 
Projektordner befindet.

HINWEIS:Achte darauf, dass Du bei der Deklaration eines Zeigers den gleichen 
Datentyp verwendest, den auch die Variable besitzt, deren Adresse Du in diesem 
Zeiger speichern willst.

HINWEIS:Wenn Du einen Zeiger deklarierst, vergiss nicht, ihn sicherheitshalber 
noch in der gleichen Zeile mit NULLoder 0zu initialisieren, um Programmabst�rze zu vermeiden. Wird das vergessen, so k�nnen sich ziemlich gemeine 
Fehler einschleichen, deren Ursache nicht immer sofort ersichtlich ist. Wenn, 
wie in diesem Beispiel, von Anfang an bekannt ist, welche Adresse der Zeiger 
erhalten soll, so kann auf diese NULL-Initialisierung verzichtet werden, wenn die 
Adresse sofort zugewiesen wird.

HINWEIS:Wenn man gro�e Objekte oder Instanzen an eine Funktion �bergibt, 
dann sollte das nach M�glichkeit nichtper Call by Value geschehen, da der 
daf�r n�tige, interne Aufwand einfach zu hoch ist. Stattdessen sollte man Zeiger 
oder Referenzen (wird in diesem Kapitel noch erkl�rt) verwenden. Anfangs mag 
es zwar einfacher erscheinen, Objekte und Instanzen direkt zu �bergeben, 
jedoch zahlt man daf�r einen unverh�ltnism��ig hohen Preis.

HINWEIS:Man kann einer Referenz kein neues Ziel zuweisen. Wenn man 
diese Tatsache vergisst, erh�lt man mit sehr hoher Wahrscheinlichkeit recht 
unangenehme Fehler, die alles andere als leicht zu finden sind.