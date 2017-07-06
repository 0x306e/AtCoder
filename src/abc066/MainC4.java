package abc066;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class MainC4 {

  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    String str1 = br.readLine();
    String str2 = br.readLine();

    int length = Integer.parseInt(str1);
    StringTokenizer st = new StringTokenizer(str2);

    String num[] = new String[length];
    for (int i = 0; i < num.length; i++) {
      num[i] = st.nextToken();
    }

    if (length == 1) {
      System.out.println(num[0]);
    } else {
      
    }
  }

  /**
   * 上から下
   * 
   * @param str
   */
  public static String[] substUp(String str[]) {
    int strlen;
    if (str.length % 2 == 0) {
      strlen = str.length / 2;
    } else {
      strlen = str.length / 2 + 1;
    }

    String sub[] = new String[strlen];

    for (int i = 0; i < strlen / 2; i++) {
      sub[i] = str[str.length - 1 - (i * 2)];
    }
    
    return sub;
  }

  /**
   * 下から上
   * 
   * @param str
   */
  public static String[] substLow(String str[]) {
    String sub[] = new String[str.length];

    for (int i = 0; i < str.length / 2; i++) {
      sub[i] = str[i*2];
    }
    
    return sub;

  }

}
