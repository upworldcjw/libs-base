/* Interface for Objective-C KeyedCollection collection object
   Copyright (C) 1993, 1994, 1995, 1996 Free Software Foundation, Inc.

   Written by:  Andrew Kachites McCallum <mccallum@gnu.ai.mit.edu>
   Date: May 1993

   This file is part of the GNUstep Base Library.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
   
   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with this library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111 USA 02139, USA.
*/ 

#ifndef __KeyedCollection_h_GNUSTEP_BASE_INCLUDE
#define __KeyedCollection_h_GNUSTEP_BASE_INCLUDE

#include <base/preface.h>
#include <base/Collection.h>
#include <base/KeyedCollecting.h>

@interface ConstantKeyedCollection : Collection
@end

@interface KeyedCollection : ConstantKeyedCollection
@end

/* Put this on category instead of class to avoid bogus complaint from gcc */
@interface ConstantKeyedCollection (Protocol) <ConstantKeyedCollecting>
@end
@interface KeyedCollection (Protocol) <KeyedCollecting>
@end

@interface KeyEnumerator : Enumerator
@end

#define FOR_KEYED_COLLECTION(ACOLL, ELT, KEY) \
{ \
   void *_es = [ACOLL newEnumState]; \
   while ((ELT = [ACOLL nextObjectAndKey: &(KEY) withEnumState: &_es])) \
     {

#define END_FOR_KEYED_COLLECTION(ACOLL) \
     } \
   [ACOLL freeEnumState: &_es]; \
}

#define FOR_KEYED_COLLECTION_WHILE_TRUE(ACOLL, ELT, KEY, FLAG) \
{ \
   void *_es = [ACOLL newEnumState]; \
   while (FLAG && (ELT = [ACOLL nextObjectAndKey: &(KEY) \
                                withEnumState: &_es])) \
     {

#define END_FOR_KEYED_COLLECTION_WHILE_TRUE(ACOLL) \
     } \
   [ACOLL freeEnumState: &_es]; \
}


/* The only subclassResponsibilities in IndexedCollection are:

      keyDescription
      insertElement:atKey:
      removeElementAtKey:
      elementAtKey:
      includesKey:
      getNextKey:content:withEnumState:
*/

#endif /* __KeyedCollection_h_GNUSTEP_BASE_INCLUDE */
