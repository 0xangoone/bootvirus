[bits 16]
_start:
xor si,si
print:
    mov al,[0x7c00+msg+si]
    mov ah,0x0e
    int 10h
    cmp al ,00
    je end
    inc si
    jmp print
end:
    jmp $

msg: 
    db "your pc was hacked hihihih",13,10,00

times 510 - ($-$$) db 0
dw 0xAA55