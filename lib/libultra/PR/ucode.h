/**************************************************************************
 *									  *
 *		 Copyright (C) 1995, Silicon Graphics, Inc.		  *
 *									  *
 *  These coded instructions, statements, and computer programs  contain  *
 *  unpublished  proprietary  information of Silicon Graphics, Inc., and  *
 *  are protected by Federal copyright law.  They  may  not be disclosed  *
 *  to  third  parties  or copied or duplicated in any form, in whole or  *
 *  in part, without the prior written consent of Silicon Graphics, Inc.  *
 *									  *
 **************************************************************************/

/**************************************************************************
 *
 *  $Revision: 1.15 $
 *  $Date: 1998/03/31 07:58:57 $
 *  $Source: /exdisk2/cvs/N64OS/Master/cvsmdev2/PR/include/ucode.h,v $
 *
 **************************************************************************/

#ifndef _UCODE_H_
#define	_UCODE_H_

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include <PR/ultratypes.h>

#if defined(_LANGUAGE_C) || defined(_LANGUAGE_C_PLUS_PLUS)

/**************************************************************************
 *
 * Macro definitions
 *
 */

/*
 * This is the recommended size of the SP DRAM stack area, used
 * by the graphics ucode. This stack is used primarily for the
 * matrix stack, so it needs to be AT LEAST (10 * 64bytes) in size.
 */
#define	SP_DRAM_STACK_SIZE8	(1024)
#define	SP_DRAM_STACK_SIZE64	(SP_DRAM_STACK_SIZE8 >> 3)

/*
 * This is the size of the IMEM, which is also the size of the
 * graphics microcode. (other ucode might be less)
 * This value is used in apps to tell the OS how much ucode to
 * load.
 */
#define SP_UCODE_SIZE           4096

/*
 * This is 1/2 the size of DMEM, which is the maximum amount of
 * initialized DMEM data any of the ucode tasks need to start up.
 * This value is dependent on all of the task ucodes, and is therefore
 * fixed per release.
 */
#define SP_UCODE_DATA_SIZE      2048
   

/**************************************************************************
 *
 * Extern variables
 *
 */

/*
 * Symbols generated by "rsp2elf", included by "makerom" that indicate 
 * the location and size of the SP microcode objects. The ucode objects
 * are loaded as part of the codesegment (arbitrary, could do other
 * ways)
 *
 */

/* standard boot ucode: */
extern long long int	rspbootTextStart[], rspbootTextEnd[];

/* standard 3D ucode: */
extern long long int	gspFast3DTextStart[], gspFast3DTextEnd[];
extern long long int	gspFast3DDataStart[], gspFast3DDataEnd[];

/* 3D ucode with output to DRAM: */
extern long long int	gspFast3D_dramTextStart[], gspFast3D_dramTextEnd[];
extern long long int	gspFast3D_dramDataStart[], gspFast3D_dramDataEnd[];

/* 3D ucode with output through DRAM FIFO to RDP: */
extern long long int	gspFast3D_fifoTextStart[], gspFast3D_fifoTextEnd[];
extern long long int	gspFast3D_fifoDataStart[], gspFast3D_fifoDataEnd[];

/* 3D ucode without nearclip: */
extern long long int	gspF3DNoNTextStart[], gspF3DNoNTextEnd[];
extern long long int	gspF3DNoNDataStart[], gspF3DNoNDataEnd[];

/* 3D ucode without nearclip with output to DRAM: */
extern long long int	gspF3DNoN_dramTextStart[];
extern long long int	gspF3DNoN_dramTextEnd[];
extern long long int	gspF3DNoN_dramDataStart[];
extern long long int	gspF3DNoN_dramDataEnd[];

/* 3D ucode without nearclip with output through DRAM FIFO to RDP: */
extern long long int	gspF3DNoN_fifoTextStart[];
extern long long int	gspF3DNoN_fifoTextEnd[];
extern long long int	gspF3DNoN_fifoDataStart[];
extern long long int	gspF3DNoN_fifoDataEnd[];

/* 3D line ucode: */
extern long long int	gspLine3DTextStart[], gspLine3DTextEnd[];
extern long long int	gspLine3DDataStart[], gspLine3DDataEnd[];

/* 3D line ucode with output to DRAM: */
extern long long int	gspLine3D_dramTextStart[], gspLine3D_dramTextEnd[];
extern long long int	gspLine3D_dramDataStart[], gspLine3D_dramDataEnd[];

/* 3D line ucode with output through DRAM FIFO to RDP: */
extern long long int	gspLine3D_fifoTextStart[], gspLine3D_fifoTextEnd[];
extern long long int	gspLine3D_fifoDataStart[], gspLine3D_fifoDataEnd[];

/* 2D sprite ucode: */
extern long long int	gspSprite2DTextStart[], gspSprite2DTextEnd[];
extern long long int	gspSprite2DDataStart[], gspSprite2DDataEnd[];

/* 2D sprite ucode with output to DRAM: */
extern long long int	gspSprite2D_dramTextStart[], gspSprite2D_dramTextEnd[];
extern long long int	gspSprite2D_dramDataStart[], gspSprite2D_dramDataEnd[];

/* 2D sprite ucode with output through DRAM FIFO to RDP: */
extern long long int	gspSprite2D_fifoTextStart[], gspSprite2D_fifoTextEnd[];
extern long long int	gspSprite2D_fifoDataStart[], gspSprite2D_fifoDataEnd[];

/* basic audio ucode: */
extern long long int 	aspMainTextStart[], aspMainTextEnd[];
extern long long int 	aspMainDataStart[], aspMainDataEnd[];

/**************************************************************************
 *
 * Function prototypes
 *
 */

#endif /* _LANGUAGE_C */

#ifdef _LANGUAGE_C_PLUS_PLUS
}
#endif

#endif /* !_UCODE_H */