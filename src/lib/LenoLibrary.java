package lib;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class LenoLibrary {
  
  public String FastScanner() throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    return br.readLine();
  }
  
  
}
