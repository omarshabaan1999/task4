#include "CodonsTable.h"
#include <fstream>
#include <iostream>
using namespace std;

CodonsTable::CodonsTable()
{
    //ctor
}
CodonsTable::~CodonsTable(){
}
void CodonsTable::LoadCodonsFromFile(string codonsFileName){
    ifstream text(codonsFileName.c_str());
    int c=0;
   char arr1[4]="UAA";
    char arr2[4]="UAG";
    char arr3[4]="UGA";
    while(text>>codons[c].value,text>>codons[c].AminoAcid){
            if(codons[c].value==arr1||codons[c].value==arr2||codons[c].value==arr3){
                    cout<<"hello";
                codons[c].AminoAcid='x';
            }
            c++;
            cout<<codons[c].value<<" "<<codons[c].AminoAcid<<endl;
    }
}
Codon CodonsTable::getAminoAcid(char * value){}
void CodonsTable::setCodon(char * value, char AminoAcid, int index){}
