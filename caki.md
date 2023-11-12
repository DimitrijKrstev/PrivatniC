## Chas 1
vo scanf("%c") noviot red "\n" pri vnesuvanje se rachuna kako znak, isto i prazno mesto " ", za da se izbegne toa vo navodnicite pred procentot da se stavi prazno mesto, pr: scanf(" %c")

shiftanje << i >> binarno gi pomestuva cifrite za tolku polinja (vsushnost go mnozi brojot so 2<sup>N</sup>)
<br>pr: brojot 3 << 2
<br>00000011 dekadno 3
<br>00001100 dekadno 12 (3 * 4)

## Chas 2
deklaracija na niza\[redici]\[koloni]

int x = 3;
int *pointer = &x;
    printf("x: %d\nadresata kade shto pokazhuva pointerot: %d\nvrednosta kade shto pokazhuva pointerot: %d", x, pointer, *pointer);

int niza[3];
printf("\nadresa na prv: %d\nadresa na vtor: %d\nadresa na tret: %d", niza, niza + 1, niza +2);

edinechni navodnici ('') se za karakteri, dupli za stringovi ("")

samoto ime na nizata e pointer kon prviot element na nizata

za stringovi (nizi od znaci) treba +1 mesto za celiot string za da se akomadira mesto za nultiot("\0") znak shto doagja na kraj
na zborot"

koga vnesuvame nizi vo scanf, nema potreba od &, samite nizi se pointeri kon prviot element vo nizata (array decay)

c = 00000101
XOR
k = 00000011
=
00000110
XOR
00000011
=
00000101