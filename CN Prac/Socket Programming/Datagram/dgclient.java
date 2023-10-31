import java.net.*;
import java.io.*;
public class dgclient {
    public static void main (String args[]) throws Exception{
       byte buf[] = new byte[5]; 
       DatagramSocket ds = new DatagramSocket(3000);
       InetAddress ip;
       DatagramPacket dp = new DatagramPacket(buf, 5);
       ds.receive(dp);
       buf = dp.getData();
       for(int i =0; i<5; i++)
             System.out.println(buf[i]);
       System.out.println(dp.getAddress().toString());
       System.out.println(dp.getPort());
    }
}
