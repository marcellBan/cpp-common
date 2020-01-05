#pragma once

namespace bm {
// ANSI escape sequences
namespace console {
const char *BLACK_FONT = "\x1b[30m";
const char *RED_FONT = "\x1b[31m";
const char *GREEN_FONT = "\x1b[32m";
const char *YELLOW_FONT = "\x1b[33m";
const char *BLUE_FONT = "\x1b[34m";
const char *MAGENTA_FONT = "\x1b[35m";
const char *CYAN_FONT = "\x1b[36m";
const char *WHITE_FONT = "\x1b[37m";
const char *BLACK_BG = "\x1b[40m";
const char *RED_BG = "\x1b[41m";
const char *GREEN_BG = "\x1b[42m";
const char *YELLOW_BG = "\x1b[43m";
const char *BLUE_BG = "\x1b[44m";
const char *MAGENTA_BG = "\x1b[45m";
const char *CYAN_BG = "\x1b[46m";
const char *WHITE_BG = "\x1b[47m";
const char *COLOR_RESET = "\x1b[39;49m";
const char *FULL_RESET = "\x1b[0m";
}; // namespace console
} // namespace bm