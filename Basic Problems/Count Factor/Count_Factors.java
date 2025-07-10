public class Count_Factors {

  public static int countFactor(int n) {
    int count=0;
    for(int i=1;i*i<=n;i++) {
      if(n % i == 0) {
        if(n/i == i) {
          count++;
        }
        else {
          count+=2;
        }
      }
    }
    return count;
  }

  public static void main(String args[]) {
    int n=5;
    int result=countFactor(n);
    System.out.println("Number of factors: " + result);
  }
}