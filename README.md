# 🐱 term-cat

A simple and colorful version of the `cat` command, with optional line numbering.

---

## 💻 Usage

```bash
./term-cat [-n] <file>

    -n: display line numbers

🧪 Example

./term-cat -n example.txt

🔧 Compilation

Use make to compile the project:

make

This will create the term-cat executable.
📁 Project Structure

term-cat/
├── Makefile        # Build system
├── README.md       # Project documentation
├── src/            # Source code
│   └── term_cat.c
└── include/        # Header files
    └── term_cat.h
