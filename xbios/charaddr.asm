Вычисление адреса буквы в знакогенератора по адресу 3c00
   Было:             Стало:
     LD L,A            LD L,A
     LD H,0            ADD HL,HL
     ADD HL,HL         LD H,15
     ADD HL,HL         ADD HL,HL
     ADD HL,HL         ADD HL,HL
     LD BC,3c00
     ADD HL,BC

Вычисление адреса буквы в знакогенератора по адресу 3000
   Было:             Стало:
     LD L,A            LD L,A
     LD H,0            ADD HL,HL
     ADD HL,HL         LD H,12
     ADD HL,HL         ADD HL,HL
     ADD HL,HL         ADD HL,HL
     LD BC,3000
     ADD HL,BC