public class alphabet_pattern
{public static void main(String[] args)
{
for (int i = 5; i >= 0; i--)
{
   int alpha = 65;
   for (int j = 0; j <= i; j++)
   {
       System.out.print((char) (alpha + j) + " ");
   }
   System.out.println();
}
for (int i = 0; i<= 5; i++)
{
   int alpha = 65;
   for (int j = 0; j <= i; j++)
   {
       System.out.print((char) (alpha + j) + " ");
   }
   System.out.println();
}
}
}
