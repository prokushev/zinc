����� ������� � �������� �������� ���������� ������ �������.
�������������� ������� � ������ �� 7F

���������� ������ ����� � ��������������� �� ������ 3c00
   ����:             �����:
     LD L,A            LD L,A
     LD H,0            ADD HL,HL
     ADD HL,HL         LD H,15h
     ADD HL,HL         ADD HL,HL
     ADD HL,HL         ADD HL,HL
     LD BC,3c00h
     ADD HL,BC

���������� ������ ����� � ��������������� �� ������ 3000
   ����:             �����:
     LD L,A            LD L,A
     LD H,0            ADD HL,HL
     ADD HL,HL         LD H,12h
     ADD HL,HL         ADD HL,HL
     ADD HL,HL         ADD HL,HL
     LD BC,3000h
     ADD HL,BC