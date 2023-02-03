// somebar - dwl bar
// See LICENSE file for copyright and license details.

#pragma once
#include "common.hpp"

constexpr bool topbar = true;

constexpr int paddingX = 8;
constexpr int paddingY = 2;

// See https://docs.gtk.org/Pango/type_func.FontDescription.from_string.html
constexpr const char* font = "FiraCode Nerd Font 11";

constexpr ColorScheme colorInactive = {Color(0xa8, 0x99, 0x84), Color(0x1d, 0x20, 0x21)};
constexpr ColorScheme colorActive = {Color(0x1d, 0x20, 0x21), Color(0xeb, 0xdb, 0xb2)};
constexpr const char* termcmd[] = {"alacritty", nullptr};

static std::vector<std::string> tagNames = {
	"1", "2", "3",
	"4", "5", "6",
	"7", "8", "9",
};

constexpr Button buttons[] = {
	{ ClkStatusText,   BTN_RIGHT,  spawn,      {.v = termcmd} },
};
