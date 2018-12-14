#include "Protein.h"

Protein::Protein()
{
    //ctor
}
Protein::Protein(char*p){
    p=new char;
}
Protein::~Protein(){}
DNA* Protein::GetDNAStrandsEncodingMe(const DNA & bigDNA){}
void Protein::Print(){}
