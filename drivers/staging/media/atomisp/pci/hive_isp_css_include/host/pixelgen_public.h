/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Support for Intel Camera Imaging ISP subsystem.
 * Copyright (c) 2015, Intel Corporation.
 */

#ifndef __PIXELGEN_PUBLIC_H_INCLUDED__
#define __PIXELGEN_PUBLIC_H_INCLUDED__

/*****************************************************
 *
 * Native command interface (NCI).
 *
 *****************************************************/
/**
 * @brief Get the pixelgen state.
 * Get the state of the pixelgen regiester-set.
 *
 * @param[in]	id	The global unique ID of the pixelgen controller.
 * @param[out]	state	Point to the register-state.
 */
STORAGE_CLASS_PIXELGEN_H void pixelgen_ctrl_get_state(
    const pixelgen_ID_t ID,
    pixelgen_ctrl_state_t *state);
/**
 * @brief Dump the pixelgen state.
 * Dump the state of the pixelgen regiester-set.
 *
 * @param[in]	id	The global unique ID of the pixelgen controller.
 * @param[in]	state	Point to the register-state.
 */
STORAGE_CLASS_PIXELGEN_H void pixelgen_ctrl_dump_state(
    const pixelgen_ID_t ID,
    pixelgen_ctrl_state_t *state);
/* end of NCI */

/*****************************************************
 *
 * Device level interface (DLI).
 *
 *****************************************************/
/**
 * @brief Load the register value.
 * Load the value of the register of the pixelgen
 *
 * @param[in]	ID	The global unique ID for the pixelgen instance.
 * @param[in]	reg	The offset address of the register.
 *
 * @return the value of the register.
 */
STORAGE_CLASS_PIXELGEN_H hrt_data pixelgen_ctrl_reg_load(
    const pixelgen_ID_t ID,
    const hrt_address reg);
/**
 * @brief Store a value to the register.
 * Store a value to the registe of the pixelgen
 *
 * @param[in]	ID		The global unique ID for the pixelgen.
 * @param[in]	reg		The offset address of the register.
 * @param[in]	value	The value to be stored.
 *
 */
STORAGE_CLASS_PIXELGEN_H void pixelgen_ctrl_reg_store(
    const pixelgen_ID_t ID,
    const hrt_address reg,
    const hrt_data value);
/* end of DLI */

#endif /* __PIXELGEN_PUBLIC_H_INCLUDED__ */
