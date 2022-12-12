public class string_methods {

    public static void main(String[] args) {
        String S1 = "Hello";
        String S2  = " World!";
        StringBuffer sb1 = new StringBuffer("Valar");
        StringBuffer sb2 = new StringBuffer(" Morghulis");
        System.out.println(sb1);
        System.out.println(S1+S2);
        System.out.println(S1.compareTo(S2));
        System.out.println(sb1.substring(1,3));
        System.out.println(sb1.append(sb2));
        
    }
    
}
