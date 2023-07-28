global main
exter printf

main:
mov edi, format
xor eax, eax
call printf
mov eax, 0
ret
format: db `HEllo, Holberton\n`, 0
