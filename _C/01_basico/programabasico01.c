#include 
 
int main ()
{
   float fAltura, fPeso;
   char cSexo;
 
   printf ("Qual sua altura?\n");
   scanf ("%f",&fAltura);
   printf ("Qual o sexo da pessoa?\n");
   printf ("Digite 'm' para Masculino e 'f' para Feminino \n");
   scanf ("%c",&cSexo);
 
   if ( cSexo == 'm' )
   {
      fPeso = ( 72.7 * fAltura ) - 58;
      printf ("Seu peso ideal e %f\n",fPeso);
   }
   else
      if ( cSexo == 'f' )
      {
         fPeso = ( 62.1 * fAltura ) - 44.7;
         printf ("Seu peso ideal e %f\n",fPeso);
      }
      else
         {
            printf ("Sexo Invalido!\n");
         }
 
      system ("pause");
      return (0);
}