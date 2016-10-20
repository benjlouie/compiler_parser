class A {
	foo() : Object {{
	{
		err1
	};
	{
		err  2;
	};
	}};
	bar(a : Int) : Object {{
		let a : Int <- 5 in
			1 > 0;
		let b : Int <- 5 in
			2 >= 3;
	}};
	baz(a : Int, b : Int, c : Int) : Object {
		let a : Int <- isvoid , b : Int <- a.a, c : Int in 
			+
	};
};

class Main inherits IO {
	main() : SELF_TYPE {
		out_string("Hello world!\n")
	};
};
