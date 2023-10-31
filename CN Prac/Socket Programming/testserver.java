import java.net.*;
import java.io.*;
public class testServer {   
    public static void main(String args[])throws Exception{    
        ServerSocket ss = new ServerSocket(5000);       
        Socket s1 = ss.accept();       
        // InputStream is = s1.getInputStream();       
        OutputStream os = s1.getOutputStream();      

        os.write(65);        
        os.write(66);
        // int x1 = is.read();        
        // while( x1 != -1)
        //     {        
        //     char ch2 = (char)x1;            
        //     System.out.println(ch2);           
        //     x1 = is.read();   
        //     }       
        s1.close();       
        ss.close();    
}
}

