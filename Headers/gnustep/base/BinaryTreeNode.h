/* Interface for Objective-C BinaryTreeNode object
   Copyright (C) 1993, 1994, 1995, 1996 Free Software Foundation, Inc.

   Written by:  Andrew Kachites McCallum <mccallum@gnu.ai.mit.edu>
   Created: May 1993

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

#ifndef __BinaryTreeNode_h_GNUSTEP_BASE_INCLUDE
#define __BinaryTreeNode_h_GNUSTEP_BASE_INCLUDE

#include <base/preface.h>
#include <base/BinaryTree.h>
#include <base/Coding.h>

@interface BinaryTreeNode : NSObject <BinaryTreeComprising>
{
  id _left;
  id _right;
  id _parent;
  id _binary_tree;
}
@end


#endif /* __BinaryTreeNode_h_GNUSTEP_BASE_INCLUDE */
