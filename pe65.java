
public class mian {


	public static void main(String[] args){
	double x = 0;
	double y = 0;
	double count = 0;
	double best = 0;

	for(x = 0; x<10000; x++){
		for(y = 0; y<10000; y++){
			count = ((x*(x+1))*(y*(y+1)))/4;

			if (Math.abs(2000000 - count) < Math.abs(2000000 - best)){
				System.out.println("count:"+count+" x:"+x+" y:"+y+" ans:"+(x*y));
				best = count;

			}
		}
	}


	}
}
