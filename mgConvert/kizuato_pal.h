/*
 * LEAF Visual Novel System For MGL2
 * (c) Copyright 2001 TF <tf@denpa.org>
 * All rights reserverd.
 *
 * ORIGINAL LVNS (c) Copyright 1996-1999 LEAF/AQUAPLUS Inc.
 *
 * $Id: kizuato_pal.h,v 1.2 2001/08/05 15:42:37 tf Exp $
 *
 */
#ifndef __INCLUDE_KIZUAT_PAL_H
#define __INCLUDE_KIZUAT_PAL_H

/*
 * 痕オープニングのパレット情報 
 */


static u_char pal[][16][3] = {
  /* 「月」 */
  {{51,0,85},
   {34,0,51},
   {17,0,34},
   {0,0,17},
   
   {153,102,187},
   {85,51,119},
   {85,51,119},
   {85,51,119},
   
   {119,68,170},
   {68,34,102},
   {68,34,102},
   {68,34,102},
   
   {85,34,153},
   {34,17,85},
   {34,17,85},
   {34,17,85},
  },

  /* 千鶴 & 梓 */
  {{0, 0, 0},
   {0, 192, 192},
   {0, 128, 128},
   {0, 64, 64},
   
   {192, 0, 0},
   {192, 192, 192},
   {192, 128, 128},
   {192, 64, 64},
   
   {128, 0, 0},
   {128, 192, 192},
   {128, 128, 128},
   {128, 64, 64},
   
   {64, 0, 0},
   {64, 192, 192},
   {64, 128, 128},
   {64, 64, 64},
  },
  /* 楓 & 初音 */
  {{0, 0, 0},
   {192, 0, 0},
   {128, 0, 0},
   {64, 0, 0},
   
   {0, 96, 192},
   {192, 96, 192},
   {64, 96, 192},
   {128, 96, 192},
   
   {0, 64, 128},
   {192, 64, 128},
   {128, 64, 128},
   {64, 64, 128},
   
   {0, 32, 64},
   {192, 32, 64},
   {128, 32, 64},
   {64, 32, 64},
  }
};

#endif
