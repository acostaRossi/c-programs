/* inclusione della libreria stdio
 * stdio.h, che sta per "standard input-output header",
 * è l'header file della libreria standard del C
 * che contiene definizioni di macro, costanti
 * e dichiarazioni di funzioni e tipi usati per le varie
 * operazioni di input/output.
 */
#include <stdio.h>

/*
 * La funzione main di un programma C è uguale a
 * tutte le altre funzioni, tranne che:
 * – ha un nome convenzionale, fissato (main)
 * – è la funzione invocata per far partire il programma -- deve esserci sempre !
*/
int main(){
	// Printf in C è una funzione di output.
	// Serve a visualizzare semplicemente un messaggio a video.
	printf("Hello World");

	// Dato che la funzione main prevede un tipo di dato di ritorno int,
	// si deve tornare un valore numerico interno.
	// Buona prassi prevedere che si ritorna 0 se il programma termina correttamente,
	// -1 se il programma termina con errori
	return 0;
}
