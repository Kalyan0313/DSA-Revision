public class IsPrime {

  public static int primeCheck(int num){
    if(num<2) return 0;
    for(int i=2;i*i <= num;i++) {
      if(num % i == 0) {
        return 0;
      }
    }
    return 1;
  }

  public static void main(String[] args) {
    int num=18;
    int result=primeCheck(num);
    if(result == 0) {
      System.out.println(num + " : is not a Prime no");
    }
    else{
      System.out.println(num + " : is a Prime no");
    }
  }
}