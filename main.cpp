#include <iostream>
#include "Sequence.h"
#include "DNA.h"
#include "CodonsTable.h"
#include "Protein.h"
#include "RNA.h"

using namespace std;

int main()
{

    CodonsTable ca1;
    string x = "RNA_codon_table.txt";
    ca1.LoadCodonsFromFile(x);
        return 0;
}
