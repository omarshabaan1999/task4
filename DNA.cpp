#include "DNA.h"
#include<cmath>
DNA::DNA()
{
    //ctor
}

DNA::DNA(char * seq, DNA_Type atype){
    this->seq=new char[strlen(seq)];
    type=atype;

}
DNA::DNA(DNA& rhs){
    seq=new char [strlen(rhs.seq)];
    for(int i=0;i<strlen(rhs.seq);i++){
        seq[i]=rhs.seq[i];
    }
    type=rhs.type;
}
DNA::~DNA(){
    delete [] seq;

}

void DNA::Print(){
    cout<<"the DNA is : ";
    for(int i=0 ; i<strlen(seq) ; i++){
        cout<<seq[i];
    }
    cout<<endl<<endl;
    cout<<type<<endl;

}
void DNA:: setstartindex(int startIndex){
    this->startIndex=startIndex;

}
void DNA:: setendIndex(int endIndex){
    this->endIndex=endIndex;

}
int DNA:: getstartindex(){
return startIndex;
}
int DNA :: getendindex(){
return endIndex;
}

RNA DNA::ConvertToRNA()
{

    char *arr;
    arr=new char[strlen(seq)];
    for(int i=getstartindex() ; i<getendindex() ; i++){
        if(complementary_strand->seq[i]=='T'){
            arr[i]='U';
        }
    }
    RNA obj(arr,mRNA);
    return obj;
}
void DNA::BuildComplementaryStrand(){
    //complementary_strand = new DNA;
    int c=0;
for(int i=endIndex-1  ; i<startIndex-1; i--){
    if (seq[i]='A'){
        complementary_strand->seq[c]='T';
        c++;}
    else if (seq[i]='T'){
        complementary_strand->seq[c]='A';
        c++;}
    else if (seq[i]='G'){
        complementary_strand->seq[c]='C';
        c++;}
    else if (seq[i]='C'){
        complementary_strand->seq[c]='G';
        c++;
    }
}

}
