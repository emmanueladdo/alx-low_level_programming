;File: 101-hello_holberton.asm
;auth: Emmanuel Addo

extern printf
section .data
    msg db "Hello, Holberton", 0
    fmt db "%s", 10, 0

section .text
    global main

main:
    xor rax, rax    ; zero out rax
    mov rdi, fmt    ; set format string to print
    mov rsi, msg    ; set message to print
    call printf     ; call printf function
    xor eax, eax    ; set return value to 0
    ret             ; return from main
