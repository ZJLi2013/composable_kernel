// SPDX-License-Identifier: MIT
// Copyright (c) 2024, Advanced Micro Devices, Inc. All rights reserved.

#pragma once

#include <cstdlib>

namespace ck_tile {
namespace literals {
// [P0330] Literal Suffix for (signed) size_t (C++23)
// ref: https://wg21.link/p0330r8
inline constexpr std::size_t operator""_uz(unsigned long long size)
{
    return static_cast<std::size_t>(size);
}

inline constexpr std::size_t operator""_zu(unsigned long long size)
{
    return static_cast<std::size_t>(size);
}
} // namespace literals
} // namespace ck_tile
