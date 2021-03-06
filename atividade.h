/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _ATIVIDADE_H_RPCGEN
#define _ATIVIDADE_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct cadastro {
	char user[10];
	char mens[50];
	int op;
	int p_livre_ocupado;
	int msg_apagada;
	int qtd_mensagem;
};
typedef struct cadastro cadastro;

#define ATIVIDADE 0x200000f
#define ATIVIDADE_V1 1

#if defined(__STDC__) || defined(__cplusplus)
#define cad_mens 1
extern  int * cad_mens_1(cadastro *, CLIENT *);
extern  int * cad_mens_1_svc(cadastro *, struct svc_req *);
extern int atividade_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define cad_mens 1
extern  int * cad_mens_1();
extern  int * cad_mens_1_svc();
extern int atividade_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_cadastro (XDR *, cadastro*);

#else /* K&R C */
extern bool_t xdr_cadastro ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_ATIVIDADE_H_RPCGEN */
