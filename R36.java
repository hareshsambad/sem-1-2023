import java.util.*;
public class R36{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		while(true)
		{
			String s=sc.nextLine();
			if(s.equals("quit"))
			{
				break;
			}
			else
			{
				ask b=new ask(s);
				b.vowel();
			}
		}
		System.out.println(ask.vovel1);
		System.out.println(ask.vovel2);
		System.out.println(ask.vovel3);
		System.out.println(ask.vovel4);
		System.out.println(ask.vovel5);

	}

}
class ask{
	String b;
	ask(String b){
		this.b=b;
	}
	static	int vovel1=0;
	static	int vovel2=0;
	static	int vovel3=0;
	static	int vovel4=0;
	static	int vovel5=0;
		
void vowel()
{
	int a=0,e=0,i=0,o=0,u=0;
	
	for(int j=0;j<b.length();j++)
	{ 
		
		
		char c=b.charAt(j);
		if(c=='a'){
			a++;
		}
		if(c=='e'){
			e++;
		}
		if(c=='i'){
			i++;
		}
		if(c=='o'){
			o++;
		}
		if(c=='u'){
			u++;
		}
		if(c=='A'){
			a++;
		}
		if(c=='E'){
			e++;
		}
		if(c=='I'){
			i++;
		}
		if(c=='O'){
			o++;
		}
		if(c=='U'){
			u++;
		}

	
}
	vovel1+=a;
	vovel2+=e;
	vovel3+=i;
	vovel4+=o;
	vovel5+=u;

}
}
