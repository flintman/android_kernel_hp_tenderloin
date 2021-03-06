/*
 $License:
    Copyright (C) 2010 InvenSense Corporation, All Rights Reserved.

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
  $
 */
/**
 * @defgroup
 * @brief
 *
 * @{
 * @file     mlos-kernel.c
 * @brief
 *
 *
 */

#include "mlos.h"
#include <linux/delay.h>
#include <linux/slab.h>

void *MLOSMalloc(unsigned int numBytes)
{
	return kmalloc(numBytes, GFP_KERNEL);
}

unchar MLOSFree(void *ptr)
{
	kfree(ptr);
	return ML_SUCCESS;
}

unchar MLOSCreateMutex(uint *mutex)
{
	/* @todo implement if needed */
	return ML_ERROR_FEATURE_NOT_IMPLEMENTED;
}

unchar MLOSLockMutex(uint mutex)
{
	/* @todo implement if needed */
	return ML_ERROR_FEATURE_NOT_IMPLEMENTED;
}

unchar MLOSUnlockMutex(uint mutex)
{
	/* @todo implement if needed */
	return ML_ERROR_FEATURE_NOT_IMPLEMENTED;
}

unchar MLOSDestroyMutex(uint handle)
{
	/* @todo implement if needed */
	return ML_ERROR_FEATURE_NOT_IMPLEMENTED;
}

uint *MLOSFOpen(char *filename)
{
	/* @todo implement if needed */
	return NULL;
}

void MLOSFClose(uint *fp)
{
	/* @todo implement if needed */
}

void MLOSSleep(int mSecs)
{
	hr_msleep(mSecs);
}

unsigned long MLOSGetTickCount(void)
{
	/* @todo implement if needed */
	return ML_ERROR_FEATURE_NOT_IMPLEMENTED;
}
