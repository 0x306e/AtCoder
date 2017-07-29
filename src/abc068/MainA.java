package abc068;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class MainA {

  public static void main(String[] args) throws NumberFormatException, IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    
    System.out.println("ABC" + Integer.parseInt(br.readLine()));
  }

}
