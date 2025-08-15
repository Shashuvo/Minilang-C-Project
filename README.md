## ⚙️ How It Works

1. **Lexical Analysis** – Scans the input file and produces tokens.
2. **Syntax Analysis** – Validates the token sequence based on grammar.
3. **Semantic Analysis** – Ensures correct type usage and declarations.
4. **Intermediate Code Generation** – Produces code for further compilation/optimization.

## 🚀 Getting Started

### 1️⃣ Compile the Compiler

	gcc -o minilang main.c lexer.c parser.c semantic.c ir.c optimizer.c codegen.c symbol_table.c -Iheaders

    minilang.exe {for windows}
    ./minilang {for Linux & MacOS}


📌 Limitations

1. No optimization phase implemented.

2. No final machine code generation.

3. Supports only basic constructs and limited error recovery.

🔮 Future Enhancements

1. Add loops, conditionals, and functions with parameters.

2. Implement code optimization techniques.

3. Generate machine code or bytecode.

4. Build an interactive MiniLang IDE.