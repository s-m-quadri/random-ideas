// By 5MQuadr! (s-m-quadri@github , 26107@diems2020-24)
// Last Updated on : 11th December 2021

class Main{
	public static void main(String args[]){
		if(args.length == 0) {
			System.out.println("No arguments");
			return;
		}
		for (int i = 0 ; i < args.length ; i++){
			if (args[i].matches("-e")) Secure.lock(args[i+1]);
			if (args[i].matches("-d")) Secure.unlock(args[i+1]);
		}
	}

};

class Secure{
	private static String getEncryptKey(String str){
		String key = "";
		for (int i = 0 ; i < str.length() ; i++) key += (char)(str.charAt(i) + 3);
		return key;
	}
	
	private static String getDecryptKey(String str){
		String key = "";
		for (int i = 0 ; i < str.length() ; i++) key += (char)(str.charAt(i) - 3);
		return key;
	}
	
	public static void lock(String str){
		System.out.println("------------------------------");
		System.out.println("🔹️ Getting Encrypted key ... ");
		System.out.println("------------------------------");
		System.out.println();
		System.out.println(getEncryptKey(str));
		System.out.println();
		System.out.println("------------------------------");
	}
	
	public static void unlock(String str){
		System.out.println("------------------------------");
		System.out.println("🔹️ Getting Actual Massage ... ");
		System.out.println("------------------------------");
		System.out.println();
		System.out.println(getDecryptKey(str));
		System.out.println();
		System.out.println("------------------------------");
	}
	
}
