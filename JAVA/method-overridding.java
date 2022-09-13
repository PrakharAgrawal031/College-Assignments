class Bank
{
  int printroi ()
  {
    return 0;
  }
}
class UCO extends Bank
 {
     int printroi()
     {
         return 8;
     }
 }
class BOI extends Bank
 {
     int printroi()
     {
         return 6;
     }
 }
class SBI extends Bank
 {
     int printroi()
     {
         return 4;
     }
 }
 class Main
 {
     public static void main(String args[])
    { 
     UCO uco = new UCO();
     BOI boi = new BOI();
     SBI sbi = new SBI();
     System.out.println("Rate of interest of SBI bank is : " + sbi.printroi());
     System.out.println("Rate of interest of BOI bank is : " + boi.printroi());
     System.out.println("Rate of interest of UCO bank is : " + uco.printroi());
    } 
 }
