// wrapUmpire.h
// This file is generated by Shroud 0.12.2. Do not edit.
// Copyright (c) 2016-21, Lawrence Livermore National Security, LLC and Umpire
// project contributors. See the COPYRIGHT file for details.
//
// SPDX-License-Identifier: (MIT)
/**
 * \file wrapUmpire.h
 * \brief Shroud generated wrapper for umpire namespace
 */
// For C users and C++ implementation

#ifndef WRAPUMPIRE_H
#define WRAPUMPIRE_H

#include "typesUmpire.h"
#ifdef __cplusplus
#include <cstddef>
#else
#include <stdbool.h>
#include <stddef.h>
#endif

// splicer begin CXX_declarations
// splicer end CXX_declarations

#ifdef __cplusplus
extern "C" {
#endif

// splicer begin C_declarations
// splicer end C_declarations

bool umpire_pointer_overlaps(void * left, void * right);

bool umpire_pointer_contains(void * left, void * right);

void umpire_get_backtrace_bufferify(void * ptr,
    umpire_SHROUD_array *DSHF_rv);

size_t umpire_get_process_memory_usage(void);

size_t umpire_get_device_memory_usage(int device_id);

int umpire_get_major_version(void);

int umpire_get_minor_version(void);

int umpire_get_patch_version(void);

#ifdef __cplusplus
}
#endif

#endif  // WRAPUMPIRE_H
