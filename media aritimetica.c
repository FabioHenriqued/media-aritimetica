#include<stdio.h>
#include<locale.h>

float calculomedia(float n1, float n2, float n3){
    float media = ((n1 + n2 + n3) / 3);
    return(media);
}

void nota(float m){
    if (m >= 9){
        printf("Você tirou o conceito A.");
    }else if(m >= 7 && m < 9){
        printf("Você tirou o conceito B.");
    }else if(m >= 6 && m < 7){
        printf("Você tirou o conceito C.");
    }else if (m >= 4 && m < 6){
        printf("Você tirou o conceito D.");
    }else{
        printf("Você tirou o conceito E.");
    }
    
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    float mf, nt1, nt2, nt3;
    printf("Informe a primeira nota: ");
    scanf("%f", &nt1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nt2);
    printf("Informe a terceira nota: ");
    scanf("%f", &nt3);
    mf = calculomedia(nt1, nt2, nt3);
    nota(mf);
}