#include "Sequence.h"

Sequence::Sequence()
{
    //ctor
}

Sequence::Sequence(int length){
    seq=new char[length];
}
Sequence::Sequence(Sequence& rhs){
    seq=new char [strlen(rhs.seq)];
    for(int i=0;i<strlen(rhs.seq);i++){
        seq[i]=rhs.seq[i];
    }
}
Sequence::~Sequence(){
delete []seq;
}
void Sequence::Print(){}

char* Align(Sequence * s1, Sequence * s2){

}
