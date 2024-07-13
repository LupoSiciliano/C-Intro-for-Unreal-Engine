#include <iostream> //direttore preprocessore, i sta per input e o output, stream e flusso, è gia' incluisa in c++ la libreria iostream

int main() // la funzione main serve come primo passo per il
// programma su c++, quindi se avessimo cinque file partirebbe sempre da ''main()''
//  main è una funzione, () sono le funzioni che deve fare,
// ad esempio (2+2), int vuol dire  che deve restituire un risultato intero e le {} indicano un blocco

{
    // inizializzazione di variabile

    int eta = 31; // ha bisogno di int una variabile, senno' da errore
    std::cout << "Funzionaaa";
    // std::cout << "seconda stampa prova";
    // std standard si trova dentro iostream, cout significa console out,
    // mostra a console,conviene leggerlo da destra verso sinistra
    return 0; // return zero porta fuori dalla fgunzione, come se fosse un OK puoi uscire! m a deve essere intero in questo caso
}