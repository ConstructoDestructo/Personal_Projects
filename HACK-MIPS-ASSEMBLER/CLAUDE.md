# HACK-MIPS-ASSEMBLER — Project Brief for Claude Code

## What This Project Is
A two-phase assembler built in C (then rewritten in C++):
- Phase 1: Hack assembler (translates Hack assembly → binary)
- Phase 2: MIPS assembler extension

## Current Status
- `include/hack_tokenizer.h` — Token struct and TokenType enum defined
- `src/lexer.c` — trim() complete, tokenize() in progress

## Architecture

## Design Decisions
- C first, then C++ rewrite
- trim() modifies line in place, returns pointer to first non-whitespace char
- tokenize() returns a Token struct with type and value fields
- Token types: A_INSTRUCTION, C_INSTRUCTION, LABEL, IGNORE

## My Learning Style — IMPORTANT
- Do NOT write code for me
- Guide me with questions and hints instead
- Explain the WHY behind design decisions
- Use analogies to build intuition
- Point out issues in my code and let me fix them
- I am a computer engineering student, not yet a professional