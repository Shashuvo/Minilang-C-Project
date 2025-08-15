all:
	gcc -o minilang main.c lexer.c parser.c semantic.c ir.c optimizer.c codegen.c symbol_table.c -Iheaders