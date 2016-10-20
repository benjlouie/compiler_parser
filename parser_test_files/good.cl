class E {
	a : Int <- b;
	b : Int <- a;
	foo() : SELF_TYPE {self};
	bar(s : String) : SELF_TYPE {foo()};
	baz(a : Int, b : Int, c : Int, d : Int, e : Int, f : Int, g : Int, h : Int, j : Int, k : Int) : String {"0 1 or many lol"};
	c : Int <- 5;
	main() : SELF_TYPE {
		bar(baz(1, 2, 3, 4, 5, 6, 7, 8, 9, 10))
	};
	d : SELF_TYPE <- main();
	e : E;
};
class Main inherits IO{
	main() : SELF_TYPE {
		out_string("Hello world!\n")
	};
};
class A {
	a : Int;
	b : Int;
	c : Int;
	test1() : Int {{
		1 + 1 * 1 + 1;
		(1 + 1) * (1 + 1);
	}};
	test2() : Int { {
		isvoid 1 + 1;
		1 + isvoid 1;
		1 + 2 * 3 / 4 - 1;
		1 - 2 / 3 * 4 + 1;
		1 < 0;
		1 <=  5;
		1 = 6;
		5 <= 3;
		not 1 < 4;
		isvoid 0 = true;
		a <- b <- c <- 4;
		a <- 1 + b <- c <- 4 * 2;
	}};
	foo() : Int {
		3
	};
};

class B inherits A {
	foo() : Int {
		5
	};
};

class C inherits B {
	bar : B <- new B;

	test3() : Int { {
		~b.foo() + b.foo() * ~b@A.foo() / b@B.foo();
	}};

	test4() : Int {
		let a : Int <- let b : Int <- 3 in b in let c : Int <- 4 in 5
	};
};
class D {
	x : Int <- 5;
	a : A <- new A;
	b : B;
	c : C;
	foo() : Object {
		case if isvoid while false loop "" pool then "3 constructs? not enough" else "we need to go deeper" fi of
			(* let's start off simple *)
			o : Object => {{{{(1+({{{5;{1;(true);(false);100;};};};2;}));};};};};
			i : Int => if if false then true else true fi then if true then 1 else 0 fi else if if true then false else true fi then 1 else 2 fi fi;
			s : String => not ~~~~~~~~~~~~~~~~~~~~~~~~~~~~1 = ~~~~~~~~~2;
			b : A => b <- ~b <- b <- b <- b <- 1 + b <- 1 + b <- b <- b <- b <- 1 + b <- b <- ~b <- b <- b <- b <- b <- 101;
			b : B => let a : Int <- let b : Int <- let c : Int <- let d : Int <- 1 in d in c in b in let e : Int <- a in let f : Int in 5;
			(* to understand recursion, you must first understand recursion *)
			c : C => 
			case if isvoid while false loop "" pool then "3 constructs? not enough" else "we need to go deeper" fi of
				(* let's start off simple *)
				o : Object => {{{{(1+({{{5;{1;(true);(false);100;};};};2;}));};};};};
				i : Int => if if false then true else true fi then if true then 1 else 0 fi else if if true then false else true fi then 1 else 2 fi fi;
				s : String => not ~~~~~~~~~~~~~~~~~~~~~~~~~~~~1 = ~~~~~~~~~2;
				b : A => b <- ~b <- b <- b <- b <- 1 + b <- 1 + b <- b <- b <- b <- 1 + b <- b <- ~b <- b <- b <- b <- b <- 101;
				b : B => let a : Int <- let b : Int <- let c : Int <- let d : Int <- 1 in d in c in b in let e : Int <- a in let f : Int in 5;
				(* to understand recursion, you must first understand recursion *)
				c : C => 
				case if isvoid while false loop "" pool then "3 constructs? not enough" else "we need to go deeper" fi of
					(* let's start off simple *)
					o : Object => {{{{(1+({{{5;{1;(true);(false);100;};};};2;}));};};};};
					i : Int => if if false then true else true fi then if true then 1 else 0 fi else if if true then false else true fi then 1 else 2 fi fi;
					s : String => not ~~~~~~~~~~~~~~~~~~~~~~~~~~~~1 = ~~~~~~~~~2;
					b : A => b <- ~b <- b <- b <- b <- 1 + b <- 1 + b <- b <- b <- b <- 1 + b <- b <- ~b <- b <- b <- b <- b <- 101;
					b : B => let a : Int <- let b : Int <- let c : Int <- let d : Int <- 1 in d in c in b in let e : Int <- a in let f : Int in 5;
					(* to understand recursion, you must first understand recursion *)
					c : C =>
					case if isvoid while false loop "" pool then "3 constructs? not enough" else "we need to go deeper" fi of
						(* let's start off simple *)
						o : Object => {{{{(1+({{{5;{1;(true);(false);100;};};};2;}));};};};};
						i : Int => if if false then true else true fi then if true then 1 else 0 fi else if if true then false else true fi then 1 else 2 fi fi;
						s : String => not ~~~~~~~~~~~~~~~~~~~~~~~~~~~~1 = ~~~~~~~~~2;
						b : A => b <- ~b <- b <- b <- b <- 1 + b <- 1 + b <- b <- b <- b <- 1 + b <- b <- ~b <- b <- b <- b <- b <- 101;
						b : B => let a : Int <- let b : Int <- let c : Int <- let d : Int <- 1 in d in c in b in let e : Int <- a in let f : Int in 5;
						(* Base case *)
						c : C => 1;
		esac;
		esac;
		esac;
		esac
	};
	
	x : Int <- 9;
};
(* models one-dimensional cellular automaton on a circle of finite radius
   arrays are faked as Strings,
   X's respresent live cells, dots represent dead cells,
   no error checking is done *)
class CellularAutomaton inherits IO {
    population_map : String;
   
    init(map : String) : SELF_TYPE {
        {
            population_map <- map;
            self;
        }
    };
   
    print() : SELF_TYPE {
        {
            out_string(population_map.concat("\n"));
            self;
        }
    };
   
    num_cells() : Int {
        population_map.length()
    };
   
    cell(position : Int) : String {
        population_map.substr(position, 1)
    };
   
    cell_left_neighbor(position : Int) : String {
        if position = 0 then
            cell(num_cells() - 1)
        else
            cell(position - 1)
        fi
    };
   
    cell_right_neighbor(position : Int) : String {
        if position = num_cells() - 1 then
            cell(0)
        else
            cell(position + 1)
        fi
    };
   
    (* a cell will live if exactly 1 of itself and it's immediate
       neighbors are alive *)
    cell_at_next_evolution(position : Int) : String {
        if (if cell(position) = "X" then 1 else 0 fi
            + if cell_left_neighbor(position) = "X" then 1 else 0 fi
            + if cell_right_neighbor(position) = "X" then 1 else 0 fi
            = 1)
        then
            "X"
        else
            "."
        fi
    };
   
    evolve() : SELF_TYPE {
        (let position : Int in
        (let num : Int <- num_cells() in
        (let temp : String in
            {
                while position < num loop
                    {
                        temp <- temp.concat(cell_at_next_evolution(position));
                        position <- position + 1;
                    }
                pool;
                population_map <- temp;
                self;
            }
        ) ) )
    };
};

class A inherits IO {
	print() : SELF_TYPE {{
		out_string("A method claled\n");
		self;
	}};
};

class B inherits A {
	print() : SELF_TYPE {{
		out_string("B method called\n");
		self;
	}};
};

class C inherits B {
	x : Int <- 5;
	print() : SELF_TYPE {{
		out_string("C method called\n");
		self;
	}};

};

class Main {
    cells : CellularAutomaton;
    foo : C;
    x : Int;
   
    main() : SELF_TYPE {
        {
            cells <- (new CellularAutomaton).init("         X         ");
            cells.print();
            (let countdown : Int <- 20 in
                while 0 < countdown loop
                    {
                        cells.evolve();
                        cells.print();
                        countdown <- countdown - 1;
                    }
                pool
            );  (* end let countdown *)
	    foo <- (new C);
	    foo@A.print();
	    foo@B.print();
	    foo@C.print();
	    case foo of
		a : A => a.print();
		b : B => b.print();
		c : C => c.print();
	    esac;
	    x <- 5;
	    x <= 5;
	    ~x + ~5 - 5 * 5 / 5;
	    not true; false;
	    isvoid(x);
            self;
        }
    };
};
