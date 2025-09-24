GCC = gcc
BIBLIOTECAS = -lm

PROGRAMAS = mod_diazfinal

$(PROGRAMAS): mod_diazfinal.c modulo.c
	$(GCC) mod_diazfinal.c modulo.c -o $(PROGRAMAS) $(BIBLIOTECAS)

clean:
	rm -f $(PROGRAMAS)
