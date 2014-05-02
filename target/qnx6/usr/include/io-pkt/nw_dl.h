/*
 * $QNXLicenseC:
 * Copyright 2007, QNX Software Systems. All Rights Reserved.
 * 
 * You must obtain a written license from and pay applicable license fees to QNX 
 * Software Systems before you may reproduce, modify or distribute this software, 
 * or any work that includes all or part of this software.   Free development 
 * licenses are available for evaluation and non-commercial purposes.  For more 
 * information visit http://licensing.qnx.com or email licensing@qnx.com.
 *  
 * This file may contain contributions from others.  Please review this entire 
 * file for other proprietary rights or license notices, as well as the QNX 
 * Development Suite License Guide at http://licensing.qnx.com/license-guide/ 
 * for other information.
 * $
 */





#ifndef _NW_DL_H_INCLUDED
#define _NW_DL_H_INCLUDED

struct nw_dll_syms {
        char *symname;
        void *addr;
};

extern char *nw_dlerror(void);
extern void *nw_dlopen(const char *, int);
extern void *nw_dlsym(void *, const char *);
extern int  nw_dlclose(void *);
extern int  nw_dlload_module(int, char *, char *);

#include <sys/srcversion.h>
__SRCVERSION( "$URL: http://svn/product/branches/6.5.0/SP1/lib/io-pkt/sys/nw_dl.h $ $Rev: 241309 $" )
#endif