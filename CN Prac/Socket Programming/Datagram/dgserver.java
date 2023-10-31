//import java.io.*;
import java.net.*;

public class dgserver {
    public static void main (String args[]) throws Exception{
       byte [] buf= new byte[5];
       buf[0] = 10;
       buf[1] = 20;
       buf[2] = 30;
       buf[3] = 40;
       buf[4] = 50;
       DatagramSocket ds = new DatagramSocket(2000);
       InetAddress ip = InetAddress.getByName("localhost");
       DatagramPacket dp = new DatagramPacket(buf, 5);
       dp.setPort(3000);
       dp.setAddress(ip);
       ds.send(dp);
       
    }
}
