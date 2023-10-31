import java.net.*;
import java.io.*;
public class testClient {   
    public static void main(String args[])throws Exception{   
        Socket cs = new Socket("192.168.137.1", 5000);
        InputStream is = cs.getInputStream();
        int x = is.read();
        while(x!=-1){
            char ch = (char)x;
            System.out.println(ch);
            x = is.read();
        }
        cs.close();
    }
}