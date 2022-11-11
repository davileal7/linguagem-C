#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LOGIN_SIS	64
#define SENHA_SIS	32

struct usuario_t {
	char login[64];
	char senha[32];
};

void cadastrar()
{
	FILE *fp;
	struct usuario_t usuario;
	memset(&usuario, 0, sizeof(struct usuario_t));

	printf("Cadastro de usuario: \n");
	printf("\nDigite seu login> ");
	scanf("%s", &usuario.login);
	printf("\nDigite sua senha> ");
	scanf("%s", &usuario.senha);

	fp = fopen("login", "wb");
	if (!fp) {
		printf("Não foi possível criar o arquivo de login");
		return;
	}
	fwrite(&usuario, sizeof(struct usuario_t), 1, fp);
	fclose(fp);
}

int login()
{
    FILE *fp;
	struct usuario_t usuario;
	fp = fopen("login", "rb");
	if (!fp) {
		cadastrar();
		fp = fopen("login", "rb");
		if (!fp) {
		    printf("Não foi possivel encontrar o arquivo de login\n");
		    return 0;
		}
	}
	memset(&usuario, 0, sizeof(struct usuario_t));

	fread(&usuario, sizeof(struct usuario_t), 1, fp);
	fclose(fp);
	if (!strcmp("", usuario.login)) {
		printf("Nenhum usuario encontrado, abrindo cadastro!\n");
		cadastrar();
	} else {
	    int tentativas = 0;
		do {
			char login[LOGIN_SIS];
			char senha[SENHA_SIS];
            printf("\n\t\t=============SISTEMA DE SAUDE=============\n\n");
			printf("\n\nDados de acesso\n\n");
			printf("Login: ");
			scanf("%s", &login);
			printf("Senha: ");
			scanf("%s", &senha);
			if (!strcmp(login, usuario.login) && !strcmp(senha, usuario.senha)) {
				printf("\n\nBem vindo %s ao sistema de saude\n\n", usuario.login);
				return 1;
			} else {
				printf("Usuario ou senha invalidos!\n");
				tentativas++;
			}
		} while (tentativas < 3);
		printf("Numero maximo de tentativas alcancado!\n");
        return 0;
	}
	return 0;
}

int main(int argc, char *argv[])
{
	login();
	return 0;
}