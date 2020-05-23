
public class a {
	public static void main(String[] args){
        int[] passwd = { 28, 57, 86, 19, 47, 76, 9, 38, 66, 95, 28, 57, 86, 18,
                47, 76 };
        String mi ="Lq(Ga%";   //加密字符串
        String ming = "";
        for (int i = 0; i < mi.length(); i++) {
            int a = mi.charAt(i) - passwd[i];
            if (a < 32) {
                a += 95;
            }
            ming += (char) a;
        }
        System.out.println(ming);
    }

}

