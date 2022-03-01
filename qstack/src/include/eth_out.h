/*
* mTCP source code is distributed under the Modified BSD Licence.
* 
* Copyright (C) 2015 EunYoung Jeong, Shinae Woo, Muhammad Jamshed, Haewon Jeong, 
* Sunghwan Ihm, Dongsu Han, KyoungSoo Park
* 
* All rights reserved.
* 
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*     * Redistributions of source code must retain the above copyright
*       notice, this list of conditions and the following disclaimer.
*     * Redistributions in binary form must reproduce the above copyright
*       notice, this list of conditions and the following disclaimer in the
*       documentation and/or other materials provided with the distribution.
*     * Neither the name of the <organization> nor the
*       names of its contributors may be used to endorse or promote products
*       derived from this software without specific prior written permission.
* 
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
* ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> BE LIABLE FOR ANY
* DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
* LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
* SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
/**
 * @file eth_out.h
 * @brief generate and send ethernet packet
 * @author Shen Yifan (shenyifan@ict.ac.cn) 
 * @date 2018.8.29
 * @version 0.1
 * @detail Function list: \n
 *   1. eth_hdr_generate(): generate ethernet header for mbuf\n
 */
/*----------------------------------------------------------------------------*/
/* - History: 
 *   1. Date: 2018.8.28
 *   	Author: Shen Yifan
 *   	Modification: create
 *   2. Date:
 *   	Author:
 *   	Modification:
 */
/******************************************************************************/
#ifndef __ETH_OUT_H_
#define __ETH_OUT_H_
/******************************************************************************/
#include "qstack.h"
/******************************************************************************/
/* global macros */
/******************************************************************************/
/* forward declarations */
/******************************************************************************/
/* data structures */
/******************************************************************************/
/* function declarations */
/**
 * generate ethernet header
 *
 * @param qstack stack process context
 * @param mbuf target mbuf
 * @param h_proto protocol type
 * @param nif NIC port
 * @param dest_haddr dest MAC address
 *
 * @return
 * 	return SUCCESS if sendout seccussfully;
 * 	return FAILED if the packet failed to be send, e.g. not found in arp table
 * 	return ERROR if something wrong
 */	
int 
eth_hdr_generate(qstack_t qstack, mbuf_t mbuf, uint16_t h_proto, int nif, 
		unsigned char* dst_haddr);
/******************************************************************************/
/* inline functions */
/******************************************************************************/
/*----------------------------------------------------------------------------*/
/**
 * 
 * @param 
 * @param[out]
 * @return
 * 	
 * @ref 
 * @see
 * @note
 */
#endif //#ifdef __ETH_OUT_H_
