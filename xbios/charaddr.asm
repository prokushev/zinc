Более быстрый и короткий алгоритм вычисления начала символа.
Поддерживаются символы с кодами до 7F

Вычисление адреса буквы в знакогенератора по адресу 3c00
   Было:             Стало:
     LD L,A            LD L,A
     LD H,0            ADD HL,HL
     ADD HL,HL         LD H,15h
     ADD HL,HL         ADD HL,HL
     ADD HL,HL         ADD HL,HL
     LD BC,3c00h
     ADD HL,BC

Вычисление адреса буквы в знакогенератора по адресу 3000
   Было:             Стало:
     LD L,A            LD L,A
     LD H,0            ADD HL,HL
     ADD HL,HL         LD H,12h
     ADD HL,HL         ADD HL,HL
     ADD HL,HL         ADD HL,HL
     LD BC,3000h
     ADD HL,BC