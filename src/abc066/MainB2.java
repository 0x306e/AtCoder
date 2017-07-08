package abc066;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class MainB2 {

  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    String str = br.readLine();

    for (int i = 0; i < str.length(); i++) {
      String s = str.substring(0, str.length() - (1 + i));

      System.out.println(s);
      if (str.indexOf(s) != str.lastIndexOf(s)) {
        System.out.println(s.length() + 1);
        break;
      }

    }

  }

}
