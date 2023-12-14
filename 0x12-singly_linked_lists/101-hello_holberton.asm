section .data
    hello db "Hello, Holberton", 0

section .text
    global main

    extern printf
    main:
        sub rsp, 8      ; align the stack on a 16-byte boundary
        mov rdi, hello  ; format string
        call printf     ; call printf function
        add rsp, 8      ; restore the stack pointer
        mov eax, 0      ; return 0 from main
        ret
