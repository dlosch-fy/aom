/*
 *  Copyright (c) 2010 The WebM project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */


#ifndef DETOKENIZE_H
#define DETOKENIZE_H

#include "onyxd_int.h"

void vp8_reset_mb_tokens_context(MACROBLOCKD *xd);
int vp8_decode_mb_tokens(VP8D_COMP *, MACROBLOCKD *);
int vp8_decode_mb_tokens_8x8(VP8D_COMP *, MACROBLOCKD *);
#if CONFIG_TX16X16 || CONFIG_HYBRIDTRANSFORM16X16
int vp8_decode_mb_tokens_16x16(VP8D_COMP *, MACROBLOCKD *);
#endif

#endif /* DETOKENIZE_H */
