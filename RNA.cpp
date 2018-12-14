#include "RNA.h"

RNA::RNA()
{
    //ctor
}

RNA::RNA(char * seq, RNA_Type atype){
    this->seq=new char[strlen(seq)];
    type=atype;
}
RNA::RNA(RNA& rhs){
    seq=new char [strlen(rhs.seq)];
    for(int i=0;i<strlen(rhs.seq);i++){
        seq[i]=rhs.seq[i];
    }
    type=rhs.type;
}
void RNA::Print(){
    cout<<"the rna is : ";
    for(int i=0 ; i<strlen(seq) ; i++){
    cout<<seq[i];
    }
    cout<<endl<<endl;
    cout<<"RNA type : "<<type<<endl;
}
Protein RNA::ConvertToProtein(const CodonsTable & table){}
DNA RNA::ConvertToDNA(){}
RNA::~RNA(){

}
