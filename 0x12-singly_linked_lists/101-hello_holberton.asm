
section .data
    str: db "Hello, Holberton",0

section .text
    global print_string

print_string:
    push rbp
    mov rbp, rsp

    ; call printf to print the string
    mov rax, 0
    lea rdi, [rel str]
    call printf

    ; restore the stack and return
    mov rsp, rbp
    pop rbp
    ret
