/* ---------------------------------------------------------------------- *
 * lcconfig.h
 * This file is part of lincity.
 * Lincity is copyright (c) I J Peters 1995-1997, (c) Greg Sharp 1997-2001.
 * ---------------------------------------------------------------------- */
#ifndef __lcconfig_h__
#define __lcconfig_h__

#ifdef WIN32
#include "confw32.h"
#else
#include "config.h"
#endif

#ifdef HAVE_STDINT_H

#include <stdint.h>
typedef int32_t Int32;
typedef int16_t Int16;

#else /* HAVE_STDINT_H */

#if (SIZEOF_SHORT==4)
typedef short Int32;
#elif (SIZEOF_INT==4)
typedef int Int32;
#elif (SIZEOF_LONG==4)
typedef long Int32;
#else
#error  Int32 is not defined.
#endif

#if (SIZEOF_SHORT==2)
typedef short Int16;
#elif (SIZEOF_INT==2)
typedef int Int16;
#else
#error  Int16 is not defined.
#endif

#endif /* HAVE_STDINT_H */

#endif	/* __lcconfig_h__ */
