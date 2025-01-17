/*----------------------------------------------------------------------------*
 *MediaTek Inc. (C) 2019. All rights reserved.                                *
 *Copyright Statement:                                                        *
 *This software/firmware and related documentation ("MediaTek Software") are  *
 *protected under relevant copyright laws. The information contained herein is*
 *confidential and proprietary to MediaTek Inc. and/or its licensors. Without *
 *the prior written permission of MediaTek inc. and/or its licensors, any     *
 *reproduction, modification, use or disclosure of MediaTek Software, and     *
 *information contained herein, in whole or in part, shall be strictly        *
 *prohibited.                                                                 *
 *BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES *
 *THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")     *
 *RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER  *
 *ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL          *
 *WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED    *
 *WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR          *
 *NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH *
 *RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY,            *
 *INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES*
 *TO LOOK ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO.   *
 *RECEIVER EXPRESSLY ACKNOWLEDGES THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO*
 *OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES CONTAINED IN MEDIATEK       *
 *SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE  *
 *RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR     *
 *STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S *
 *ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE       *
 *RELEASED HEREUNDER WILL BE, AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE  *
 *MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE  *
 *CHARGE PAID BY RECEIVER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.    *
 *The following software/firmware and/or related documentation ("MediaTek     *
 *Software") have been modified by MediaTek Inc. All revisions are subject to *
 *any receiver's applicable license agreements with MediaTek Inc.             *
 *---------------------------------------------------------------------------*/

/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1/GPL 2.0/LGPL 2.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is Mozilla Communicator client code.
 *
 * The Initial Developer of the Original Code is
 * Netscape Communications Corporation.
 * Portions created by the Initial Developer are Copyright (C) 1998
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPL"), or
 * the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
 * in which case the provisions of the GPL or the LGPL are applicable instead
 * of those above. If you wish to allow use of your version of this file only
 * under the terms of either the GPL or the LGPL, and not to allow others to
 * use your version of this file under the terms of the MPL, indicate your
 * decision by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL or the LGPL. If you do not delete
 * the provisions above, a recipient may use your version of this file under
 * the terms of any one of the MPL, the GPL or the LGPL.
 *
 * ***** END LICENSE BLOCK ***** */

#include "../nsSBCharSetProber.h"

/********* Language model for: Slovene *********/

/**
 * Generated by BuildLangModel.py
 * On: 2016-09-28 22:06:46.134717
 **/

/* Character Mapping Table:
 * ILL: illegal character.
 * CTR: control character specific to the charset.
 * RET: carriage/return.
 * SYM: symbol (punctuation) that does not belong to word.
 * NUM: 0 - 9.
 *
 * Other characters are ordered by probabilities
 * (0 is the most common character in the language).
 *
 * Orders are generic to a language. So the codepoint with order X in
 * CHARSET1 maps to the same character as the codepoint with the same
 * order X in CHARSET2 for the same language.
 * As such, it is possible to get missing order. For instance the
 * ligature of 'o' and 'e' exists in ISO-8859-15 but not in ISO-8859-1
 * even though they are both used for French. Same for the euro sign.
 */
static const unsigned char Iso_8859_2_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 18, 19, 13,  1, 24, 17, 20,  2,  8, 12,  9, 14,  4,  3, /* 4X */
   11, 28,  5,  6,  7, 16, 10, 27, 25, 26, 15,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 18, 19, 13,  1, 24, 17, 20,  2,  8, 12,  9, 14,  4,  3, /* 6X */
   11, 28,  5,  6,  7, 16, 10, 27, 25, 26, 15,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM, 41,SYM, 42,SYM, 43, 44,SYM,SYM, 22, 45, 46, 47,SYM, 23, 48, /* AX */
  SYM, 49,SYM, 50,SYM, 51, 52,SYM,SYM, 22, 53, 54, 55,SYM, 23, 56, /* BX */
   57, 32, 58, 59, 60, 61, 37, 34, 21, 29, 62, 36, 63, 30, 64, 65, /* CX */
   66, 67, 68, 31, 35, 69, 70,SYM, 71, 72, 39, 73, 74, 40, 75, 76, /* DX */
   77, 32, 78, 79, 80, 81, 37, 34, 21, 29, 82, 36, 83, 30, 84, 85, /* EX */
   86, 87, 88, 31, 35, 89, 90,SYM, 91, 92, 39, 93, 94, 40, 95,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_16_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 18, 19, 13,  1, 24, 17, 20,  2,  8, 12,  9, 14,  4,  3, /* 4X */
   11, 28,  5,  6,  7, 16, 10, 27, 25, 26, 15,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 18, 19, 13,  1, 24, 17, 20,  2,  8, 12,  9, 14,  4,  3, /* 6X */
   11, 28,  5,  6,  7, 16, 10, 27, 25, 26, 15,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM, 96, 97, 98,SYM,SYM, 22,SYM, 22,SYM, 99,SYM,100,SYM,101,102, /* AX */
  SYM,SYM, 21,103, 23,SYM,SYM,SYM, 23, 21,104,SYM,105,106,107,108, /* BX */
  109, 32,110,111,112, 37,113, 34,114, 29, 33, 36,115, 30,116,117, /* CX */
  118,119,120, 31, 35,121,122,123,124,125, 39,126,127,128,129,130, /* DX */
  131, 32,132,133,134, 37,135, 34,136, 29, 33, 36,137, 30,138,139, /* EX */
  140,141,142, 31, 35,143,144,145,146,147, 39,148,149,150,151,152, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1250_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 18, 19, 13,  1, 24, 17, 20,  2,  8, 12,  9, 14,  4,  3, /* 4X */
   11, 28,  5,  6,  7, 16, 10, 27, 25, 26, 15,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 18, 19, 13,  1, 24, 17, 20,  2,  8, 12,  9, 14,  4,  3, /* 6X */
   11, 28,  5,  6,  7, 16, 10, 27, 25, 26, 15,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM,ILL,SYM,SYM,SYM,SYM,ILL,SYM, 22,SYM,153,154, 23,155, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,SYM, 22,SYM,156,157, 23,158, /* 9X */
  SYM,SYM,SYM,159,SYM,160,SYM,SYM,SYM,SYM,161,SYM,SYM,SYM,SYM,162, /* AX */
  SYM,SYM,SYM,163,SYM,SYM,SYM,SYM,SYM,164,165,SYM,166,SYM,167,168, /* BX */
  169, 32,170,171,172,173, 37, 34, 21, 29,174, 36,175, 30,176,177, /* CX */
  178,179,180, 31, 35,181,182,SYM,183,184, 39,185,186, 40,187,188, /* DX */
  189, 32,190,191,192,193, 37, 34, 21, 29,194, 36,195, 30,196,197, /* EX */
  198,199,200, 31, 35,201,202,SYM,203,204, 39,205,206, 40,207,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Mac_Centraleurope_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 18, 19, 13,  1, 24, 17, 20,  2,  8, 12,  9, 14,  4,  3, /* 4X */
   11, 28,  5,  6,  7, 16, 10, 27, 25, 26, 15,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 18, 19, 13,  1, 24, 17, 20,  2,  8, 12,  9, 14,  4,  3, /* 6X */
   11, 28,  5,  6,  7, 16, 10, 27, 25, 26, 15,SYM,SYM,SYM,SYM,CTR, /* 7X */
  208,209,210, 29,211,212,213, 32,214, 21,215, 21, 37, 37, 29,216, /* 8X */
  217,218, 30,219, 38, 38,220, 31,221, 35,222,223, 39,224,225,226, /* 9X */
  SYM,SYM,227,SYM,SYM,SYM,SYM,228,SYM,SYM,SYM,229,SYM,SYM,230,231, /* AX */
  232,233,SYM,SYM,234,235,SYM,SYM,236,237,238,239,240,241,242,243, /* BX */
  244,245,SYM,SYM,246,247,SYM,SYM,SYM,SYM,SYM,248,249,249,249,249, /* CX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,249,249,249,249,SYM,SYM,249,249, /* DX */
  249, 22,SYM,SYM, 22,249,249, 32,249,249, 30, 23, 23,249, 31, 35, /* EX */
  249,249, 39,249,249,249,249,249, 40, 40,249,249,249,249,249,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Ibm852_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 18, 19, 13,  1, 24, 17, 20,  2,  8, 12,  9, 14,  4,  3, /* 4X */
   11, 28,  5,  6,  7, 16, 10, 27, 25, 26, 15,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 18, 19, 13,  1, 24, 17, 20,  2,  8, 12,  9, 14,  4,  3, /* 6X */
   11, 28,  5,  6,  7, 16, 10, 27, 25, 26, 15,SYM,SYM,SYM,SYM,CTR, /* 7X */
   34,249, 29,249,249,249, 37, 34,249, 36,249,249,249,249,249, 37, /* 8X */
   29,249,249, 35,249,249,249,249,249,249,249,249,249,249,SYM, 21, /* 9X */
   32, 30, 31, 39,249,249, 23, 23,249,249,SYM,249, 21,249,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 32,249,249,249,SYM,SYM,SYM,SYM,249,249,SYM, /* BX */
  SYM,SYM,SYM,SYM,SYM,SYM,249,249,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* CX */
  249,249,249, 36,249,249, 30,249,249,SYM,SYM,SYM,SYM,249,249,SYM, /* DX */
   31,249, 35,249,249,249, 22, 22,249, 39,249,249, 40, 40,249,SYM, /* EX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,249,249,249,SYM,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */


/* Model Table:
 * Total sequences: 727
 * First 512 sequences: 0.9983524317161332
 * Next 512 sequences (512-1024): 0.0016475682838668457
 * Rest: -3.859759734048396e-17
 * Negative sequences: TODO
 */
static const PRUint8 SloveneLangModel[] =
{
  2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,2,3,2,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,2,2,
  3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,2,3,2,3,3,3,2,0,0,3,2,3,3,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,0,0,0,3,2,3,3,0,
  3,3,3,3,3,2,3,3,0,0,3,3,3,3,3,2,3,2,3,3,3,2,3,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,2,3,2,3,3,2,3,2,0,
  3,3,3,3,3,3,3,3,3,3,0,3,3,3,3,3,3,3,2,3,3,3,3,2,2,2,2,0,0,
  3,3,3,3,3,3,3,3,2,3,0,3,3,3,2,2,3,3,3,3,3,2,2,0,0,0,3,2,2,
  3,3,3,3,3,3,3,3,3,3,3,0,2,3,3,2,3,0,2,3,3,0,3,0,2,0,3,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,2,3,2,2,3,2,0,
  3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,0,3,2,3,3,2,2,2,0,2,2,3,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,3,2,0,2,0,0,0,
  3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,2,0,0,
  3,3,3,3,3,3,3,2,0,3,3,3,2,2,2,0,3,2,3,2,3,0,0,0,2,2,2,2,0,
  3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,0,3,0,2,2,0,3,3,2,2,0,3,0,0,
  3,3,3,3,3,3,3,3,0,3,2,3,3,3,2,2,3,2,2,3,3,0,0,0,2,2,3,2,2,
  3,3,3,3,3,3,2,3,0,3,3,3,3,2,2,2,3,0,2,0,0,2,0,0,2,0,2,2,0,
  3,3,3,3,3,3,0,0,3,3,2,2,3,2,0,0,3,0,2,2,0,0,2,0,0,0,0,0,0,
  3,3,3,3,3,2,0,3,3,3,2,3,3,0,0,0,3,0,0,0,0,3,0,2,0,0,0,0,0,
  3,3,3,2,3,2,0,2,3,3,2,0,3,0,0,0,3,2,3,2,0,0,0,2,0,0,0,0,0,
  3,3,3,3,2,3,3,3,0,3,0,0,0,2,2,0,3,2,0,2,2,0,0,0,3,2,2,2,0,
  3,3,3,3,2,2,2,3,0,0,2,3,0,2,2,0,3,2,3,3,2,0,0,0,2,2,2,2,0,
  3,3,2,3,3,2,3,3,3,3,0,2,2,2,2,0,2,2,2,3,2,0,0,0,0,2,0,2,0,
  3,3,3,3,3,0,3,0,0,2,0,0,0,0,2,0,2,2,2,0,2,0,0,0,2,0,2,3,0,
  0,0,0,0,2,0,0,2,0,2,0,0,0,0,0,0,3,0,0,2,0,0,0,0,0,0,0,0,0,
};


const SequenceModel Iso_8859_2SloveneModel =
{
  Iso_8859_2_CharToOrderMap,
  SloveneLangModel,
  29,
  (float)0.9983524317161332,
  PR_TRUE,
  "ISO-8859-2"
};

const SequenceModel Iso_8859_16SloveneModel =
{
  Iso_8859_16_CharToOrderMap,
  SloveneLangModel,
  29,
  (float)0.9983524317161332,
  PR_TRUE,
  "ISO-8859-16"
};

const SequenceModel Windows_1250SloveneModel =
{
  Windows_1250_CharToOrderMap,
  SloveneLangModel,
  29,
  (float)0.9983524317161332,
  PR_TRUE,
  "WINDOWS-1250"
};

const SequenceModel Mac_CentraleuropeSloveneModel =
{
  Mac_Centraleurope_CharToOrderMap,
  SloveneLangModel,
  29,
  (float)0.9983524317161332,
  PR_TRUE,
  "MAC-CENTRALEUROPE"
};

const SequenceModel Ibm852SloveneModel =
{
  Ibm852_CharToOrderMap,
  SloveneLangModel,
  29,
  (float)0.9983524317161332,
  PR_TRUE,
  "IBM852"
};
