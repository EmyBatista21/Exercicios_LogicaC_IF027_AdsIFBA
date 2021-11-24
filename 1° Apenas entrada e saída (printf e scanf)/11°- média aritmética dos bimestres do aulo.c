#include <stdio.h>

//Calcular a média de dois bimestres da nota de um aluno

int main()
{
      float p11, p12, p21, p22;
      float notabimestre1, notabimestre2, notadosemestre; 
      
      printf("Digite a nota das duas provas do 1 bimestre:");
      scanf("%f", &p11);
      scanf("%f", &p12);
      printf("Digite a nota das duas provas do 2 bimestre:");
      scanf("%f", &p21);
      scanf("%f", &p22);
     
      notabimestre1 = (p11 + p12) / 2;
      notabimestre2 = (p21 + p22) / 2;
      notadosemestre = (notabimestre1 + notabimestre2) / 2;
  
      printf("NOTA DO SEMESTRE: %.2f", notadosemestre);
      
    
    return 0;
}