package lib;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class LenoLibrary {
  
  public static String FastScanner() throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    return br.readLine();
  }
    
  public static String addString(String raw, String ad) {
    StringBuilder sb = new StringBuilder(raw);
    return sb.append(ad).toString();
  }
  
}
