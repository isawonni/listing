HINWEIS:Um für mehr Übersichtlichkeit zu sorgen, werden die einzelnen 
Programmzeilen mit Zeilennummern versehen. Diese dürfen nicht mit 
abgetippt werden, da es sonst zu Fehlern bei der späteren Kompilierung 
kommt. Natürlich dürfen die Doppelpunkte direkt nach den Zeilennummern 
auch nicht mit eingegeben werden.

HINWEIS:Verwende Kommentare großzügig. Sie zu schreiben ist nicht halb 
so viel Arbeit, wie einen unkommentierten Quelltext mühsam zu entziffern. 
Versuche dabei jedoch, Dich auf sinnvolle Kommentare zu beschränken und 
diese aussagekräftig zu halten.

HINWEIS:Alle Dateien, die mit #includeeingebunden werden und nicht 
von uns selbst stammen oder separat installiert wurden, müssen in spitzen 
Klammern (<>) stehen.

HINWEIS:Bei C++ kannst Du so viele Leerzeichen und Leerzeilen verwenden, 
wie Du möchtest. Dadurch hast Du die Möglichkeit, deinen Code lesbar zu 
gestalten. Das gilt natürlich nicht innerhalb von Befehlen. Schau Dir andere 
Quelltexte an, und such Dir einen Aufbau heraus, der für Dich am besten 
lesbar ist.

HINWEIS:Jede Befehlszeile muss mit einem Semikolon abgeschlossen werden. 
Dies gilt jedoch nicht für Präprozessor-Direktiven und Funktionsköpfe.

HINWEIS:Wie der Name schon sagt, bewirkt Erstellen > Projektmappe neu 
erstellen, dass sämtliche Quelltextdateien neu kompiliert werden, selbst wenn 
keine Änderungen darin vorgenommen wurden. Das mag bei unserem ersten 
Beispiel noch nicht dramatisch sein, jedoch wird es bei großen Projekten sehr 
lange dauern und unnötig Zeit rauben. Deshalb sollte man nur die Dateien 
kompilieren lassen, die man auch tatsächlich verändert hat. Dies geschieht 
über den Menüpunkt Erstellen > Projektmappe erstellen. Eine komplette 
Neuerstellung ist in der Regel nur selten nötig – etwa dann, wenn beim 
Kompiliervorgang etwas schief ging.

HINWEIS:Es ist sehr wichtig, immer mit den Beispielen zu experimentieren. 
Einfach nur die Listings zu kompilieren und sich das Resultat anzuschauen, 
genügt eben nicht. Versuche den Quelltext etwas abzuändern, ohne jedoch da 
bei dem Thema vorzugreifen. Dadurch wird man schneller mit den erklärten 
Themen vertraut, und der Lerneffekt ist größer.

HINWEIS:Klickt man erneut auf Product > Build, so wird nur dann neu 
kompiliert und gelinkt, wenn es auch Änderungen am Quellcode gab. Ansonsten
wird die ausführbare Datei nicht erneut erstellt. Generell ist es so, dass immer 
nur die Quellcode-Dateien kompiliert werden, die seit dem letzten Build-Prozess
eine Änderung erfahren haben. Das gilt dann natürlich auch für alle daraus 
entstehenden Abhängigkeiten.
Durch einen Klick auf Product > Cleanwerden sämtliche erzeugen Objektdateien gelöscht. Das führt dazu, dass das Projekt komplett neu gebaut werden
muss, wenn man erneut auf Product > Buildklickt. Das mag bei unserem 
ersten Beispiel noch nicht dramatisch sein, jedoch wird es bei großen Projekten
sehr lange dauern und unnötig Zeit rauben. Ein „Clean“ ist in der Regel nur 
dann nötig, wenn beim Kompiliervorgang etwas schief ging.

HINWEIS:Verwendet man für einen Variablennamen versehentlich ein 
reserviertes Schlüsselwort, so färbt sich dieses ein. In diesem Fall muss 
man auf einen anderen Namen zurückgreifen.

HINWEIS:Verwechsle nicht „Vergleich“ mit „Zuweisung“. Ein einfaches 
Gleichheitszeichen (=) bedeutet bei C++ immereine Zuweisung. Bei einem 
Vergleich werden generell zwei Gleichheitszeichen benötigt (==).

HINWEIS:Beachte, dass eine if-Bedingung niemals mit einem Semikolon 
enden darf. Setzt man dennoch ein Semikolon, funktioniert die Bedingung 
nicht, und es kommt zu Fehlern

HINWEIS:Variablen sind immer nur in dem Codeblock, in dem sie erstellt 
wurden, und den dort enthaltenen Codeblöcken gültig. Außerhalb dieses 
Blockes verliert die Variable ihre Gültigkeit und kann nicht verwendet werden. 
Es handelt sich um eine lokale Variable.

HINWEIS:Achte unbedingt darauf, dass Du die Parameter beim Aufrufen einer 
Funktion genau in der gleichen Reihenfolge angibst, wie sie im Funktionsprototyp/Funktionskopf aufgeführt sind. Der Compiler unterscheidet hier nicht von 
selbst nach Namen oder Typ, sondern allein anhand der Reihenfolge.

HINWEIS:Wenn ein gewisser Codeteil häufig wiederholt wird, ohne dass 
wesentliche Änderungen auftreten, und dieser Codeteil aus mehreren Zeilen 
besteht, dann ist er ein potenzieller Kandidat für eine Funktion

HINWEIS:Wenn eine Funktion nur aus wenigen kurzen Zeilen besteht und 
nicht an übermäßig vielen Stellen im Programm aufgerufen wird, dann riecht 
es verdächtig nach inline. Wenn diese Funktion nun auch noch sehr häufig 
pro Programmdurchlauf aufgerufen wird, dann macht inlinein der Regel 
Sinn.

HINWEIS:Funktionen können nur überladen werden, wenn sich die Parameterlisten anhand der Datentypen oder der Anzahl an Parametern unterscheiden. 
Möglich ist dabei auch, dass sich der Rückgabetyp unterscheidet. Verboten ist, 
eine Funktion nur anhand des Rückgabewertes zu überladen.

HINWEIS:Es ist wichtig, dass .cpp-Dateien immerzum Projekt hinzugefügt 
werden, da sie sonst nicht kompiliert werden. Verwendest Du also eine fertige 
.cpp-Datei, die aus einem anderen Projekt stammt, so muss diese dem Projekt 
auch hinzugefügt werden. Es genügt nicht, wenn sich diese Datei nur im 
Projektordner befindet.

HINWEIS:Achte darauf, dass Du bei der Deklaration eines Zeigers den gleichen 
Datentyp verwendest, den auch die Variable besitzt, deren Adresse Du in diesem 
Zeiger speichern willst.

HINWEIS:Wenn Du einen Zeiger deklarierst, vergiss nicht, ihn sicherheitshalber 
noch in der gleichen Zeile mit NULLoder 0zu initialisieren, um Programmabstürze zu vermeiden. Wird das vergessen, so können sich ziemlich gemeine 
Fehler einschleichen, deren Ursache nicht immer sofort ersichtlich ist. Wenn, 
wie in diesem Beispiel, von Anfang an bekannt ist, welche Adresse der Zeiger 
erhalten soll, so kann auf diese NULL-Initialisierung verzichtet werden, wenn die 
Adresse sofort zugewiesen wird.

HINWEIS:Wenn man große Objekte oder Instanzen an eine Funktion übergibt, 
dann sollte das nach Möglichkeit nichtper Call by Value geschehen, da der 
dafür nötige, interne Aufwand einfach zu hoch ist. Stattdessen sollte man Zeiger 
oder Referenzen (wird in diesem Kapitel noch erklärt) verwenden. Anfangs mag 
es zwar einfacher erscheinen, Objekte und Instanzen direkt zu übergeben, 
jedoch zahlt man dafür einen unverhältnismäßig hohen Preis.

HINWEIS:Man kann einer Referenz kein neues Ziel zuweisen. Wenn man 
diese Tatsache vergisst, erhält man mit sehr hoher Wahrscheinlichkeit recht 
unangenehme Fehler, die alles andere als leicht zu finden sind.