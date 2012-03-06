/*
  Open source copyright declaration based on BSD open source template:
  http://www.opensource.org/licenses/bsd-license.php

* Copyright (c) 2009, Mike Giles
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*     * Redistributions of source code must retain the above copyright
*       notice, this list of conditions and the following disclaimer.
*     * Redistributions in binary form must reproduce the above copyright
*       notice, this list of conditions and the following disclaimer in the
*       documentation and/or other materials provided with the distribution.
*     * The name of Mike Giles may not be used to endorse or promote products
*       derived from this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY Mike Giles ''AS IS'' AND ANY
* EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL Mike Giles BE LIABLE FOR ANY
* DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
* LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
* SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

/*
 * op_checkpointing.h
 *
 * Header file for checkpointing functions in op_checkpointing.c
 *
 * written by: Istvan Reguly, (Started 02-27-2012)
 */

#ifndef __OP_CHECKPOINTING_H
#define __OP_CHECKPOINTING_H
#ifndef CHECKPOINTING
#define CHECKPOINTING
#endif
typedef enum {OP_BACKUP_GATHER, OP_BACKUP_LEADIN, OP_BACKUP_RESTORE, OP_BACKUP_BEGIN, OP_BACKUP_IN_PROCESS, OP_BACKUP_END} op_backup_state;

#ifdef __cplusplus
extern "C" {
#endif

extern op_backup_state backup_state;
bool op_checkpointing_init(const char *filename, double interval);
bool op_checkpointing_before(op_arg *args, int nargs);
void op_checkpointing_after(op_arg *args, int nargs, int loop_id);

#ifdef __cplusplus
}
#endif

#endif /* __OP_CHECKPOINTING_H */
