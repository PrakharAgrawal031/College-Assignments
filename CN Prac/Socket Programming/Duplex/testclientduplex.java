import java.net.*;
import java.io.*;
public class testclientduplex {   
    public static void main(String args[])throws Exception{   
        Socket cs = new Socket("10.10.109.184", 5000);       
        InputStream in = cs.getInputStream();        
        OutputStream out = cs.getOutputStream();
        
        out.write(69);       
        out.write(70);
        out.write(71);
        out.write(72);  

        
        int x = in.read();
        while(x!=-1){
            char ch = (char)x;
            System.out.println(ch);
            x = in.read();
        }
        cs.close();
    }
}