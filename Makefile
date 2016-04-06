# copilador
CC=gcc
# warnings do copilador
CFLAGS=-W -Wall -pedantic -std=c11
# copilar com stdio
LFLAGS=-lm
# serve para qualquer arquivo C criado
SRC=$(wildcard *.c)
# retira o .c e cria em binário
BIN=$(SRC:.c=)

.PHONY: all clean help

help: 
	@echo "Sintaxe make <opções>"
	@echo "		Opções:"
	@echo "			help  : mostra esta menssagem"
	@echo "			all   : copila todos os fontes da pasta"
	@echo "			clean : apaga todos os binários da criados"
	@echo ""

all: $(BIN)

clean:
	@rm -f $(BIN)

%:%.c
	@echo -n "Gerando executável "
	@$(CC) $< -o $@ $(CFLAGS) $(LFLAGS) && echo " [OK]" 