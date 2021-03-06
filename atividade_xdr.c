/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "atividade.h"

bool_t
xdr_cadastro (XDR *xdrs, cadastro *objp)
{
	register int32_t *buf;

	int i;

	if (xdrs->x_op == XDR_ENCODE) {
		 if (!xdr_vector (xdrs, (char *)objp->user, 10,
			sizeof (char), (xdrproc_t) xdr_char))
			 return FALSE;
		 if (!xdr_vector (xdrs, (char *)objp->mens, 50,
			sizeof (char), (xdrproc_t) xdr_char))
			 return FALSE;
		buf = XDR_INLINE (xdrs, 4 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->op))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->p_livre_ocupado))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->msg_apagada))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->qtd_mensagem))
				 return FALSE;
		} else {
			IXDR_PUT_LONG(buf, objp->op);
			IXDR_PUT_LONG(buf, objp->p_livre_ocupado);
			IXDR_PUT_LONG(buf, objp->msg_apagada);
			IXDR_PUT_LONG(buf, objp->qtd_mensagem);
		}
		return TRUE;
	} else if (xdrs->x_op == XDR_DECODE) {
		 if (!xdr_vector (xdrs, (char *)objp->user, 10,
			sizeof (char), (xdrproc_t) xdr_char))
			 return FALSE;
		 if (!xdr_vector (xdrs, (char *)objp->mens, 50,
			sizeof (char), (xdrproc_t) xdr_char))
			 return FALSE;
		buf = XDR_INLINE (xdrs, 4 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->op))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->p_livre_ocupado))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->msg_apagada))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->qtd_mensagem))
				 return FALSE;
		} else {
			objp->op = IXDR_GET_LONG(buf);
			objp->p_livre_ocupado = IXDR_GET_LONG(buf);
			objp->msg_apagada = IXDR_GET_LONG(buf);
			objp->qtd_mensagem = IXDR_GET_LONG(buf);
		}
	 return TRUE;
	}

	 if (!xdr_vector (xdrs, (char *)objp->user, 10,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->mens, 50,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->p_livre_ocupado))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->msg_apagada))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->qtd_mensagem))
		 return FALSE;
	return TRUE;
}
