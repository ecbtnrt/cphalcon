
/*
  +------------------------------------------------------------------------+
  | Phalcon Framework                                                      |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2012 Phalcon Team (http://www.phalconphp.com)       |
  +------------------------------------------------------------------------+
  | This source file is subject to the New BSD License that is bundled     |
  | with this package in the file docs/LICENSE.txt.                        |
  |                                                                        |
  | If you did not receive a copy of the license and are unable to         |
  | obtain it through the world-wide-web, please send an email             |
  | to license@phalconphp.com so we can send you a copy immediately.       |
  +------------------------------------------------------------------------+
  | Authors: Andres Gutierrez <andres@phalconphp.com>                      |
  |          Eduar Carvajal <eduar@phalconphp.com>                         |
  +------------------------------------------------------------------------+
*/

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_phalcon.h"
#include "phalcon.h"

#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/require.h"
#include "kernel/object.h"
#include "kernel/debug.h"
#include "kernel/assert.h"
#include "kernel/array.h"

#include "zend_operators.h"
#include "zend_exceptions.h"
#include "zend_interfaces.h"

PHP_METHOD(Phalcon_Flash, _showMessage){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL, *v3 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL, *r3 = NULL, *r4 = NULL, *r5 = NULL, *r6 = NULL;
	zval *ac0 = NULL;
	zval *t0 = NULL, *t1 = NULL;
	zval *p0[] = { NULL, NULL };
	HashTable *ah0;
	HashPosition hp0;
	zval **hd;

	
	if(zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE){
		RETURN_NULL();
	}

	if(Z_TYPE_P(v1)==IS_ARRAY){
		PHALCON_ALLOC_ZVAL(r0);
		PHALCON_ALLOC_ZVAL(p0[0]);
		ZVAL_STRING(p0[0], " ", 1);
		p0[1] = v1;
		PHALCON_CALL_FUNC_PARAMS(r0, "join", 2, p0);
		if(v2){
			Z_DELREF_P(v2);
			if(!Z_REFCOUNT_P(v2)){
				FREE_ZVAL(v2);
			}
		}
		Z_ADDREF_P(r0);
		v2 = r0;
	} else {
		if(v2){
			Z_DELREF_P(v2);
			if(!Z_REFCOUNT_P(v2)){
				FREE_ZVAL(v2);
			}
		}
		Z_ADDREF_P(v1);
		v2 = v1;
	}
	if(Z_TYPE_P(v0)==IS_ARRAY){
		FOREACH_V(v0, ac0, fes49, fee49, ah0, hp0, v3)
			if(!r3){
				PHALCON_ALLOC_ZVAL(r3);
			} else {
				if(Z_REFCOUNT_P(r3)>1){
					{
						zval *orig_ptr = r3;
						if (Z_REFCOUNT_P(orig_ptr) > 1) {
							Z_DELREF_P(orig_ptr);
							ALLOC_ZVAL(r3);
							*r3 = *orig_ptr;
							zval_copy_ctor(r3);
							Z_SET_REFCOUNT_P(r3, 1);
							Z_UNSET_ISREF_P(r3);
						}
					}
				} else {
					FREE_ZVAL(r3);
					PHALCON_ALLOC_ZVAL(r3);
				}
			}
			phalcon_concat_left(r3, "<div class=\"", v2 TSRMLS_CC);
			if(!r2){
				PHALCON_ALLOC_ZVAL(r2);
			} else {
				if(Z_REFCOUNT_P(r2)>1){
					{
						zval *orig_ptr = r2;
						if (Z_REFCOUNT_P(orig_ptr) > 1) {
							Z_DELREF_P(orig_ptr);
							ALLOC_ZVAL(r2);
							*r2 = *orig_ptr;
							zval_copy_ctor(r2);
							Z_SET_REFCOUNT_P(r2, 1);
							Z_UNSET_ISREF_P(r2);
						}
					}
				} else {
					FREE_ZVAL(r2);
					PHALCON_ALLOC_ZVAL(r2);
				}
			}
			phalcon_concat_vboth(r2, r3, "\">", v3 TSRMLS_CC);
			PHALCON_GET_CONSTANT(t0, "PHP_EOL");
			if(!r1){
				PHALCON_ALLOC_ZVAL(r1);
			} else {
				if(Z_REFCOUNT_P(r1)>1){
					{
						zval *orig_ptr = r1;
						if (Z_REFCOUNT_P(orig_ptr) > 1) {
							Z_DELREF_P(orig_ptr);
							ALLOC_ZVAL(r1);
							*r1 = *orig_ptr;
							zval_copy_ctor(r1);
							Z_SET_REFCOUNT_P(r1, 1);
							Z_UNSET_ISREF_P(r1);
						}
					}
				} else {
					FREE_ZVAL(r1);
					PHALCON_ALLOC_ZVAL(r1);
				}
			}
			phalcon_concat_vboth(r1, r2, "</div>", t0 TSRMLS_CC);
			zend_print_zval(r1, 0);
		END_FOREACH(ac0, fes49, fee49, ah0, hp0);
	} else {
		PHALCON_ALLOC_ZVAL(r6);
		phalcon_concat_left(r6, "<div class=\"", v2 TSRMLS_CC);
		PHALCON_ALLOC_ZVAL(r5);
		phalcon_concat_vboth(r5, r6, "\">", v0 TSRMLS_CC);
		PHALCON_GET_CONSTANT(t1, "PHP_EOL");
		PHALCON_ALLOC_ZVAL(r4);
		phalcon_concat_vboth(r4, r5, "</div>", t1 TSRMLS_CC);
		zend_print_zval(r4, 0);
	}
	RETURN_NULL();
}

PHP_METHOD(Phalcon_Flash, error){

	zval *v0 = NULL, *v1 = NULL;
	zval *r0 = NULL;
	zval *p0[] = { NULL, NULL };

	
	if(zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z|z", &v0, &v1) == FAILURE){
		RETURN_NULL();
	}

	if(!v1){
		PHALCON_ALLOC_ZVAL(v1);
		ZVAL_STRING(v1, "errorMessage", 0);
	}
	
	PHALCON_ALLOC_ZVAL(r0);
	Z_ADDREF_P(v0);
	p0[0] = v0;
	Z_ADDREF_P(v1);
	p0[1] = v1;
	PHALCON_CALL_SELF_PARAMS(r0, this_ptr, "_showmessage", 2, p0);
	RETURN_ZVAL(r0, 1, 0);
}

PHP_METHOD(Phalcon_Flash, notice){

	zval *v0 = NULL, *v1 = NULL;
	zval *r0 = NULL;
	zval *p0[] = { NULL, NULL };

	
	if(zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z|z", &v0, &v1) == FAILURE){
		RETURN_NULL();
	}

	if(!v1){
		PHALCON_ALLOC_ZVAL(v1);
		ZVAL_STRING(v1, "noticeMessage", 0);
	}
	
	PHALCON_ALLOC_ZVAL(r0);
	Z_ADDREF_P(v0);
	p0[0] = v0;
	Z_ADDREF_P(v1);
	p0[1] = v1;
	PHALCON_CALL_SELF_PARAMS(r0, this_ptr, "_showmessage", 2, p0);
	RETURN_ZVAL(r0, 1, 0);
}

PHP_METHOD(Phalcon_Flash, success){

	zval *v0 = NULL, *v1 = NULL;
	zval *r0 = NULL;
	zval *p0[] = { NULL, NULL };

	
	if(zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z|z", &v0, &v1) == FAILURE){
		RETURN_NULL();
	}

	if(!v1){
		PHALCON_ALLOC_ZVAL(v1);
		ZVAL_STRING(v1, "successMessage", 0);
	}
	
	PHALCON_ALLOC_ZVAL(r0);
	Z_ADDREF_P(v0);
	p0[0] = v0;
	Z_ADDREF_P(v1);
	p0[1] = v1;
	PHALCON_CALL_SELF_PARAMS(r0, this_ptr, "_showmessage", 2, p0);
	RETURN_ZVAL(r0, 1, 0);
}

PHP_METHOD(Phalcon_Flash, warning){

	zval *v0 = NULL, *v1 = NULL;
	zval *r0 = NULL;
	zval *p0[] = { NULL, NULL };

	
	if(zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z|z", &v0, &v1) == FAILURE){
		RETURN_NULL();
	}

	if(!v1){
		PHALCON_ALLOC_ZVAL(v1);
		ZVAL_STRING(v1, "warningMessage", 0);
	}
	
	PHALCON_ALLOC_ZVAL(r0);
	Z_ADDREF_P(v0);
	p0[0] = v0;
	Z_ADDREF_P(v1);
	p0[1] = v1;
	PHALCON_CALL_SELF_PARAMS(r0, this_ptr, "_showmessage", 2, p0);
	RETURN_ZVAL(r0, 1, 0);
}
