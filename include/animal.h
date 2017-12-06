#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include "funcionario.h"
using namespace std;
class animal {
protected:
	int id;
	string nome;
	string cientifico;
	char sexo;
	float tamanho;
	string dieta;
	veterinario vet;
	tratador trat;
	string batismo;
public:
	animal() : id(0), nome(""), cientifico(""), sexo(0), tamanho(0), dieta(0), vet(), trat(), batismo(""){}//por simplicidade, preferi cirar apenas o contrutores padroes
	void set_id(int d) { id = d; }
	void set_nome(string n) { nome = n; }
	void set_cientifico(string c) { cientifico = c; }
	void set_sexo(char s) { sexo = s; }
	void set_tamanho(float t) { tamanho = t; }
	void set_dieta(string d) { dieta = d; }
	void set_veterinario(veterinario v) { vet = v; }
	void set_tratador(tratador t) { trat = t; }
	void set_batismo(string b) { batismo = b; }
	int get_id() { return id; }
	string get_nome() { return nome; }
	string get_cientifico() { return cientifico; }
	char get_sexo() { return sexo; }
	float get_tamanho() { return tamanho; }
	string get_dieta() { return dieta; }
	veterinario get_veterinario() { return vet; }
	tratador get_tratador() { return trat; }
	string get_batismo() { return batismo; }
};
class anfibio : public animal {
protected:
	int total_mudas;
	string ultima_muda;
public:
	anfibio() : total_mudas(0), ultima_muda(""){}
	void set_total_mudas(int t) { total_mudas = t; }
	void set_ultima_muda(string u) { ultima_muda = u; }
	int get_total_mudas() { return total_mudas; }
	string get_ultima_muda() { return ultima_muda; }
};
class mamifero : public animal {
protected:
	string cor_pelo;
public:
	mamifero() : cor_pelo(""){}
	void set_cor_pelo(string c) { cor_pelo = c; }
	string get_cor_pelo() { return cor_pelo; }
};
class reptil : public animal {
protected:
	bool venenoso;
	string tipo_veneno;
public:
	void set_venenoso(bool v) { venenoso = v; }
	bool get_venenoso() { return venenoso; }
	void set_tipo_veneno(string t) { tipo_veneno = t; }
	string get_tipo_veneno() { return tipo_veneno; }
};
class ave : public animal {
protected:
	int tamanho_bico;
	int envergadura;
public:
	ave() : tamanho_bico(0), envergadura(0){}
	void set_tamanho_bico(int t) { tamanho_bico = t; }
	int get_tamanho_bico() { return tamanho_bico; }
	void set_envergadura(int e) { envergadura = e; }
	int get_envergadura() { return envergadura; }
};
class animalSilvestre : public animal {
protected:
	string ibama;
public:
	animalSilvestre() : ibama("") {}
	void set_ibama(string i) { ibama = i; }
	string get_ibama() { return ibama; }
};
class nativo : public animalSilvestre {
protected:
	string uf_origem;
	string autorizacao;
public:
	nativo() : uf_origem(""), autorizacao(""){}
	void set_uf_origem(string u) { uf_origem = u; }
	string get_uf_origem() { return uf_origem; }
	void set_autorizacao(string a) { autorizacao = a; }
	string get_autorizacao() { return autorizacao; }
};
class exotico : public animalSilvestre {
protected:
	string pais_origem;
public:
	exotico() : pais_origem(""){}
	void set_pais_origem(string p) { pais_origem = p; }
	string get_pais_origem() { return pais_origem; }
};
class aveExotica : public exotico, public ave{};
class aveNativa : public nativo, public ave{};
#endif