package abc066;
import java.util.Scanner;

public class MainC3 {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int length = sc.nextInt();

    String str[] = new String[length];

    for (int i = 0; i < str.length; i++) {
      str[i] = sc.next();
    }

    if ((str.length % 2) == 0) {
      for (int j = 0; j < str.length; j += 2) {
        System.out.println(str[length - (j * 2)] + " ");
      }
      for (int j = 0; j < str.length; j += 2) {
        System.out.println(str[(j * 2) - 1] + " ");
      }
      
    } else {
      for (int j = 0; j < str.length; j += 2) {
        System.out.println(str[(j*2)-1] + " ");
      }
      for (int j = 0; j < str.length; j += 2) {
        System.out.println(str[length - (j*2)] + " ");
      }

    }

    System.out.println();

  }

}
