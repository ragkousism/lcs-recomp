#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "lcs_render_config.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0122[4092] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 9, 0, 10, 0, 11, 12, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17,
    0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 20, 0, 21, 0, 22, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 28, 0, 0,
    0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 34, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 45,
    0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0,
    0, 0, 54, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 57, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0,
    0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 64, 0, 0, 0, 0, 0, 65, 66, 0, 0, 0, 67, 68, 0, 0, 0, 0, 69,
    0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 78, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 86, 0, 87, 0, 0, 0, 0,
    0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0,
    90, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95,
    0, 0, 0, 96, 0, 97, 0, 0, 98, 0, 99, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 111, 0, 0, 0, 112, 113, 0, 0, 114, 0, 0, 0, 115, 0, 116, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 126, 0,
    0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0,
    0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 134,
    0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140,
    0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 147, 0, 148, 0, 0, 0,
    0, 149, 150, 0, 0, 0, 151, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 159, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 165, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0,
    0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0,
    0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0,
    189, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 192, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 197, 0, 0,
    198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 204, 0, 0, 205, 0, 0, 0,
    0, 206, 0, 0, 0, 0, 0, 207, 0, 208, 209, 0, 210, 0, 0, 211, 0, 0, 0, 0, 212, 213, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0,
    216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0,
    229, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0,
    0, 0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0,
    0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0,
    255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 259, 0, 260, 0, 261, 0, 0, 0, 0,
    0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 265, 0, 266, 0, 267, 0, 268, 0, 269, 0, 270, 0, 0, 0,
    0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 273, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 277, 0, 278, 0, 0, 0,
    0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 281, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 285, 0, 286, 0, 287, 0,
    288, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294,
    0, 295, 0, 296, 0, 297, 0, 298, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 302, 0, 303, 0, 304, 0, 0, 0,
    0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0,
    311, 0, 312, 0, 313, 0, 314, 0, 315, 316, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 320, 321, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0,
    0, 325, 0, 0, 0, 326, 0, 0, 0, 327, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0,
    0, 332, 0, 0, 0, 333, 0, 0, 0, 334, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 342, 0, 0,
    0, 0, 343, 0, 0, 0, 344, 0, 345, 0, 346, 0, 0, 0, 0, 0, 0, 0, 347, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 350, 0, 351, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 354, 0, 0, 355, 0, 356, 0, 357, 0, 358, 0, 359, 0, 360, 0, 0, 361, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 0,
    364, 0, 0, 0, 365, 0, 0, 366, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0,
    0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 376, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 379,
    0, 0, 380, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0,
    0, 386, 0, 387, 0, 0, 388, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0,
    0, 393, 0, 394, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 401, 0, 402,
    0, 403, 0, 0, 0, 0, 404, 0, 405, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0,
    411, 0, 412, 0, 0, 413, 0, 414, 0, 415, 0, 416, 0, 417, 0, 418, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 421, 422, 0, 0, 423,
    424, 0, 425, 0, 0, 0, 0, 426, 427, 0, 428, 0, 0, 0, 0, 429, 430, 0, 431, 0, 0, 0, 0, 432, 433, 0, 434, 0, 435, 0, 0, 0,
    0, 436, 0, 0, 437, 0, 438, 0, 439, 440, 0, 441, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0,
    0, 445, 0, 446, 447, 0, 448, 0, 0, 449, 0, 450, 0, 451, 0, 452, 453, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0,
    456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 460, 0, 0, 461, 0, 0, 0, 0,
    0, 462, 0, 463, 0, 464, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 467, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 469, 0, 0,
    470, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0, 0, 0, 0, 0, 0, 473, 0, 474, 0, 475, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 0,
    0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479,
    0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0,
    484, 0, 0, 485, 0, 0, 0, 486, 0, 487, 0, 488, 0, 489, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0,
    0, 0, 0, 492, 0, 493, 0, 494, 0, 0, 495, 0, 0, 0, 0, 496, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 499, 0, 500, 0,
    0, 501, 0, 0, 0, 0, 0, 0, 0, 502, 0, 503, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 506, 0,
    0, 0, 507, 0, 508, 0, 509, 0, 510, 0, 0, 0, 511, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 514,
    515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 519, 0, 520, 0, 521, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    523, 0, 0, 0, 524, 0, 525, 0, 526, 0, 527, 0, 0, 528, 0, 0, 0, 529, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 532, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 537, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0,
    540, 541, 0, 0, 0, 0, 0, 0, 542, 0, 543, 0, 0, 0, 544, 545, 0, 0, 546, 0, 0, 0, 547, 0, 0, 0, 548, 0, 549, 0, 550, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 552, 0, 553, 0, 554, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 557, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 560, 0, 561, 0, 0,
    0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 565, 0, 566,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 568, 0, 569, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 571, 0, 0, 0, 0, 0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 575, 0, 0, 0, 0, 0, 576,
    0, 577, 0, 0, 0, 0, 0, 0, 0, 578, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 581, 0, 0, 0, 0, 0, 582,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 585, 586, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 589, 0, 0, 590, 0, 591, 0, 592, 0, 0, 0, 0, 593, 0, 594, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    596, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600,
    0, 601, 0, 0, 602, 0, 603, 604, 0, 605, 0, 0, 606, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 609, 0,
    610, 0, 611, 0, 612, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 615, 0, 616, 0, 617, 0, 0, 618, 0, 619, 0, 620, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 622, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 625, 626, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 629,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 633, 0, 0, 0, 0, 634, 0, 0, 0, 0, 635, 0, 0, 0, 636, 0, 0, 637,
    0, 0, 638, 0, 0, 639, 640, 0, 0, 0, 641, 0, 0, 642, 0, 0, 643, 0, 0, 0, 0, 644, 0, 0, 0, 0, 645, 0, 0, 0, 646, 0,
    0, 0, 647, 0, 0, 648, 0, 0, 649, 0, 650, 0, 651, 0, 0, 652, 653, 0, 654, 0, 0, 655, 0, 0, 656, 0, 0, 657, 658, 0, 0, 0,
    659, 0, 0, 660, 0, 661, 662, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 664, 0, 665, 666, 0, 667, 0, 0, 0, 0, 0, 668, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0,
    0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 676, 0,
    0, 677, 0, 678, 0, 0, 0, 679, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 682, 0, 0, 0, 0,
    0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 686, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 689, 690, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 693,
    0, 694, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 697, 0, 0, 0, 0,
    0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 699, 700, 0, 0, 0, 0, 701, 0, 0, 702, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 704, 0, 705, 0, 0, 0, 0, 0, 0, 706, 0, 707, 0, 0, 0, 0, 708, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 710, 711, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 712, 0, 0, 713, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 716,
};
void recomp_unit_0122_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089EC000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0122[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089EC000;
    case 2u: goto L_089EC014;
    case 3u: goto L_089EC01C;
    case 4u: goto L_089EC038;
    case 5u: goto L_089EC040;
    case 6u: goto L_089EC048;
    case 7u: goto L_089EC050;
    case 8u: goto L_089EC058;
    case 9u: goto L_089EC088;
    case 10u: goto L_089EC090;
    case 11u: goto L_089EC098;
    case 12u: goto L_089EC09C;
    case 13u: goto L_089EC0A4;
    case 14u: goto L_089EC0BC;
    case 15u: goto L_089EC19C;
    case 16u: goto L_089EC1CC;
    case 17u: goto L_089EC1FC;
    case 18u: goto L_089EC218;
    case 19u: goto L_089EC220;
    case 20u: goto L_089EC228;
    case 21u: goto L_089EC230;
    case 22u: goto L_089EC238;
    case 23u: goto L_089EC23C;
    case 24u: goto L_089EC244;
    case 25u: goto L_089EC2C4;
    case 26u: goto L_089EC2D8;
    case 27u: goto L_089EC2EC;
    case 28u: goto L_089EC2F4;
    case 29u: goto L_089EC308;
    case 30u: goto L_089EC320;
    case 31u: goto L_089EC328;
    case 32u: goto L_089EC390;
    case 33u: goto L_089EC3A4;
    case 34u: goto L_089EC3A8;
    case 35u: goto L_089EC3BC;
    case 36u: goto L_089EC3C4;
    case 37u: goto L_089EC3E8;
    case 38u: goto L_089EC400;
    case 39u: goto L_089EC414;
    case 40u: goto L_089EC438;
    case 41u: goto L_089EC43C;
    case 42u: goto L_089EC454;
    case 43u: goto L_089EC464;
    case 44u: goto L_089EC474;
    case 45u: goto L_089EC47C;
    case 46u: goto L_089EC484;
    case 47u: goto L_089EC514;
    case 48u: goto L_089EC524;
    case 49u: goto L_089EC52C;
    case 50u: goto L_089EC540;
    case 51u: goto L_089EC554;
    case 52u: goto L_089EC560;
    case 53u: goto L_089EC574;
    case 54u: goto L_089EC588;
    case 55u: goto L_089EC594;
    case 56u: goto L_089EC5A4;
    case 57u: goto L_089EC5B8;
    case 58u: goto L_089EC5BC;
    case 59u: goto L_089EC5C4;
    case 60u: goto L_089EC5F8;
    case 61u: goto L_089EC60C;
    case 62u: goto L_089EC628;
    case 63u: goto L_089EC630;
    case 64u: goto L_089EC638;
    case 65u: goto L_089EC650;
    case 66u: goto L_089EC654;
    case 67u: goto L_089EC664;
    case 68u: goto L_089EC668;
    case 69u: goto L_089EC67C;
    case 70u: goto L_089EC690;
    case 71u: goto L_089EC69C;
    case 72u: goto L_089EC6C0;
    case 73u: goto L_089EC714;
    case 74u: goto L_089EC730;
    case 75u: goto L_089EC74C;
    case 76u: goto L_089EC754;
    case 77u: goto L_089EC75C;
    case 78u: goto L_089EC784;
    case 79u: goto L_089EC788;
    case 80u: goto L_089EC7CC;
    case 81u: goto L_089EC834;
    case 82u: goto L_089EC840;
    case 83u: goto L_089EC890;
    case 84u: goto L_089EC8C8;
    case 85u: goto L_089EC8D8;
    case 86u: goto L_089EC8E4;
    case 87u: goto L_089EC8EC;
    case 88u: goto L_089EC904;
    case 89u: goto L_089EC974;
    case 90u: goto L_089EC980;
    case 91u: goto L_089EC98C;
    case 92u: goto L_089EC998;
    case 93u: goto L_089EC9A4;
    case 94u: goto L_089EC9D4;
    case 95u: goto L_089EC9FC;
    case 96u: goto L_089ECA0C;
    case 97u: goto L_089ECA14;
    case 98u: goto L_089ECA20;
    case 99u: goto L_089ECA28;
    case 100u: goto L_089ECA30;
    case 101u: goto L_089ECA38;
    case 102u: goto L_089ECA6C;
    case 103u: goto L_089ECAA4;
    case 104u: goto L_089ECAA8;
    case 105u: goto L_089ECAB0;
    case 106u: goto L_089ECAB8;
    case 107u: goto L_089ECAC0;
    case 108u: goto L_089ECAC8;
    case 109u: goto L_089ECAD0;
    case 110u: goto L_089ECAD8;
    case 111u: goto L_089ECB0C;
    case 112u: goto L_089ECB1C;
    case 113u: goto L_089ECB20;
    case 114u: goto L_089ECB2C;
    case 115u: goto L_089ECB3C;
    case 116u: goto L_089ECB44;
    case 117u: goto L_089ECB4C;
    case 118u: goto L_089ECB64;
    case 119u: goto L_089ECBC0;
    case 120u: goto L_089ECBD4;
    case 121u: goto L_089ECC08;
    case 122u: goto L_089ECC7C;
    case 123u: goto L_089ECCC8;
    case 124u: goto L_089ECCD8;
    case 125u: goto L_089ECCEC;
    case 126u: goto L_089ECCF8;
    case 127u: goto L_089ECD04;
    case 128u: goto L_089ECD78;
    case 129u: goto L_089ECD94;
    case 130u: goto L_089ECDA0;
    case 131u: goto L_089ECDB0;
    case 132u: goto L_089ECDD8;
    case 133u: goto L_089ECDF4;
    case 134u: goto L_089ECDFC;
    case 135u: goto L_089ECE04;
    case 136u: goto L_089ECE20;
    case 137u: goto L_089ECE28;
    case 138u: goto L_089ECE64;
    case 139u: goto L_089ECEEC;
    case 140u: goto L_089ECEFC;
    case 141u: goto L_089ECF04;
    case 142u: goto L_089ECF1C;
    case 143u: goto L_089ECF30;
    case 144u: goto L_089ECF3C;
    case 145u: goto L_089ECF48;
    case 146u: goto L_089ECF5C;
    case 147u: goto L_089ECF68;
    case 148u: goto L_089ECF70;
    case 149u: goto L_089ECF84;
    case 150u: goto L_089ECF88;
    case 151u: goto L_089ECF98;
    case 152u: goto L_089ECF9C;
    case 153u: goto L_089ECFF0;
    case 154u: goto L_089ED018;
    case 155u: goto L_089ED028;
    case 156u: goto L_089ED030;
    case 157u: goto L_089ED058;
    case 158u: goto L_089ED060;
    case 159u: goto L_089ED078;
    case 160u: goto L_089ED0B4;
    case 161u: goto L_089ED110;
    case 162u: goto L_089ED16C;
    case 163u: goto L_089ED198;
    case 164u: goto L_089ED1A8;
    case 165u: goto L_089ED1B0;
    case 166u: goto L_089ED1C0;
    case 167u: goto L_089ED1C8;
    case 168u: goto L_089ED1E0;
    case 169u: goto L_089ED1E8;
    case 170u: goto L_089ED20C;
    case 171u: goto L_089ED224;
    case 172u: goto L_089ED234;
    case 173u: goto L_089ED240;
    case 174u: goto L_089ED254;
    case 175u: goto L_089ED260;
    case 176u: goto L_089ED268;
    case 177u: goto L_089ED2B8;
    case 178u: goto L_089ED2E0;
    case 179u: goto L_089ED2F4;
    case 180u: goto L_089ED31C;
    case 181u: goto L_089ED324;
    case 182u: goto L_089ED33C;
    case 183u: goto L_089ED358;
    case 184u: goto L_089ED370;
    case 185u: goto L_089ED388;
    case 186u: goto L_089ED390;
    case 187u: goto L_089ED3D0;
    case 188u: goto L_089ED3EC;
    case 189u: goto L_089ED400;
    case 190u: goto L_089ED418;
    case 191u: goto L_089ED420;
    case 192u: goto L_089ED42C;
    case 193u: goto L_089ED430;
    case 194u: goto L_089ED444;
    case 195u: goto L_089ED45C;
    case 196u: goto L_089ED464;
    case 197u: goto L_089ED474;
    case 198u: goto L_089ED480;
    case 199u: goto L_089ED494;
    case 200u: goto L_089ED4A8;
    case 201u: goto L_089ED4B0;
    case 202u: goto L_089ED4C8;
    case 203u: goto L_089ED4DC;
    case 204u: goto L_089ED4E4;
    case 205u: goto L_089ED4F0;
    case 206u: goto L_089ED504;
    case 207u: goto L_089ED51C;
    case 208u: goto L_089ED524;
    case 209u: goto L_089ED528;
    case 210u: goto L_089ED530;
    case 211u: goto L_089ED53C;
    case 212u: goto L_089ED550;
    case 213u: goto L_089ED554;
    case 214u: goto L_089ED56C;
    case 215u: goto L_089ED574;
    case 216u: goto L_089ED580;
    case 217u: goto L_089ED5A4;
    case 218u: goto L_089ED5AC;
    case 219u: goto L_089ED5CC;
    case 220u: goto L_089ED624;
    case 221u: goto L_089ED684;
    case 222u: goto L_089ED68C;
    case 223u: goto L_089ED720;
    case 224u: goto L_089ED728;
    case 225u: goto L_089ED740;
    case 226u: goto L_089ED750;
    case 227u: goto L_089ED758;
    case 228u: goto L_089ED770;
    case 229u: goto L_089ED780;
    case 230u: goto L_089ED788;
    case 231u: goto L_089ED7EC;
    case 232u: goto L_089ED7F8;
    case 233u: goto L_089ED810;
    case 234u: goto L_089ED818;
    case 235u: goto L_089ED82C;
    case 236u: goto L_089ED8BC;
    case 237u: goto L_089ED8D8;
    case 238u: goto L_089ED8E8;
    case 239u: goto L_089ED918;
    case 240u: goto L_089ED93C;
    case 241u: goto L_089ED944;
    case 242u: goto L_089ED954;
    case 243u: goto L_089ED968;
    case 244u: goto L_089ED98C;
    case 245u: goto L_089ED9B8;
    case 246u: goto L_089ED9CC;
    case 247u: goto L_089EDA1C;
    case 248u: goto L_089EDA64;
    case 249u: goto L_089EDA8C;
    case 250u: goto L_089EDAA0;
    case 251u: goto L_089EDACC;
    case 252u: goto L_089EDAD4;
    case 253u: goto L_089EDADC;
    case 254u: goto L_089EDAF0;
    case 255u: goto L_089EDB00;
    case 256u: goto L_089EDB18;
    case 257u: goto L_089EDB40;
    case 258u: goto L_089EDB4C;
    case 259u: goto L_089EDB5C;
    case 260u: goto L_089EDB64;
    case 261u: goto L_089EDB6C;
    case 262u: goto L_089EDB90;
    case 263u: goto L_089EDBAC;
    case 264u: goto L_089EDBC0;
    case 265u: goto L_089EDBC8;
    case 266u: goto L_089EDBD0;
    case 267u: goto L_089EDBD8;
    case 268u: goto L_089EDBE0;
    case 269u: goto L_089EDBE8;
    case 270u: goto L_089EDBF0;
    case 271u: goto L_089EDC08;
    case 272u: goto L_089EDC20;
    case 273u: goto L_089EDC28;
    case 274u: goto L_089EDC30;
    case 275u: goto L_089EDC48;
    case 276u: goto L_089EDC60;
    case 277u: goto L_089EDC68;
    case 278u: goto L_089EDC70;
    case 279u: goto L_089EDC88;
    case 280u: goto L_089EDCA0;
    case 281u: goto L_089EDCA8;
    case 282u: goto L_089EDCB0;
    case 283u: goto L_089EDCC8;
    case 284u: goto L_089EDCE0;
    case 285u: goto L_089EDCE8;
    case 286u: goto L_089EDCF0;
    case 287u: goto L_089EDCF8;
    case 288u: goto L_089EDD00;
    case 289u: goto L_089EDD08;
    case 290u: goto L_089EDD24;
    case 291u: goto L_089EDD3C;
    case 292u: goto L_089EDD44;
    case 293u: goto L_089EDD5C;
    case 294u: goto L_089EDD7C;
    case 295u: goto L_089EDD84;
    case 296u: goto L_089EDD8C;
    case 297u: goto L_089EDD94;
    case 298u: goto L_089EDD9C;
    case 299u: goto L_089EDDA4;
    case 300u: goto L_089EDDC0;
    case 301u: goto L_089EDDD8;
    case 302u: goto L_089EDDE0;
    case 303u: goto L_089EDDE8;
    case 304u: goto L_089EDDF0;
    case 305u: goto L_089EDE0C;
    case 306u: goto L_089EDE24;
    case 307u: goto L_089EDE3C;
    case 308u: goto L_089EDE44;
    case 309u: goto L_089EDE5C;
    case 310u: goto L_089EDE78;
    case 311u: goto L_089EDE80;
    case 312u: goto L_089EDE88;
    case 313u: goto L_089EDE90;
    case 314u: goto L_089EDE98;
    case 315u: goto L_089EDEA0;
    case 316u: goto L_089EDEA4;
    case 317u: goto L_089EDEB0;
    case 318u: goto L_089EDEFC;
    case 319u: goto L_089EDF28;
    case 320u: goto L_089EDF30;
    case 321u: goto L_089EDF34;
    case 322u: goto L_089EDF3C;
    case 323u: goto L_089EDF50;
    case 324u: goto L_089EDF68;
    case 325u: goto L_089EDF84;
    case 326u: goto L_089EDF94;
    case 327u: goto L_089EDFA4;
    case 328u: goto L_089EDFAC;
    case 329u: goto L_089EDFBC;
    case 330u: goto L_089EDFD0;
    case 331u: goto L_089EDFE8;
    case 332u: goto L_089EE004;
    case 333u: goto L_089EE014;
    case 334u: goto L_089EE024;
    case 335u: goto L_089EE02C;
    case 336u: goto L_089EE03C;
    case 337u: goto L_089EE094;
    case 338u: goto L_089EE0A4;
    case 339u: goto L_089EE0B0;
    case 340u: goto L_089EE0E4;
    case 341u: goto L_089EE0EC;
    case 342u: goto L_089EE0F4;
    case 343u: goto L_089EE108;
    case 344u: goto L_089EE118;
    case 345u: goto L_089EE120;
    case 346u: goto L_089EE128;
    case 347u: goto L_089EE148;
    case 348u: goto L_089EE14C;
    case 349u: goto L_089EE168;
    case 350u: goto L_089EE190;
    case 351u: goto L_089EE198;
    case 352u: goto L_089EE1A8;
    case 353u: goto L_089EE1B8;
    case 354u: goto L_089EE20C;
    case 355u: goto L_089EE218;
    case 356u: goto L_089EE220;
    case 357u: goto L_089EE228;
    case 358u: goto L_089EE230;
    case 359u: goto L_089EE238;
    case 360u: goto L_089EE240;
    case 361u: goto L_089EE24C;
    case 362u: goto L_089EE25C;
    case 363u: goto L_089EE268;
    case 364u: goto L_089EE280;
    case 365u: goto L_089EE290;
    case 366u: goto L_089EE29C;
    case 367u: goto L_089EE2A4;
    case 368u: goto L_089EE2B0;
    case 369u: goto L_089EE2D0;
    case 370u: goto L_089EE2DC;
    case 371u: goto L_089EE2E8;
    case 372u: goto L_089EE308;
    case 373u: goto L_089EE324;
    case 374u: goto L_089EE340;
    case 375u: goto L_089EE348;
    case 376u: goto L_089EE350;
    case 377u: goto L_089EE358;
    case 378u: goto L_089EE374;
    case 379u: goto L_089EE37C;
    case 380u: goto L_089EE388;
    case 381u: goto L_089EE394;
    case 382u: goto L_089EE3A8;
    case 383u: goto L_089EE3C4;
    case 384u: goto L_089EE3D4;
    case 385u: goto L_089EE3E0;
    case 386u: goto L_089EE404;
    case 387u: goto L_089EE40C;
    case 388u: goto L_089EE418;
    case 389u: goto L_089EE424;
    case 390u: goto L_089EE430;
    case 391u: goto L_089EE450;
    case 392u: goto L_089EE46C;
    case 393u: goto L_089EE484;
    case 394u: goto L_089EE48C;
    case 395u: goto L_089EE494;
    case 396u: goto L_089EE49C;
    case 397u: goto L_089EE4B8;
    case 398u: goto L_089EE4C0;
    case 399u: goto L_089EE4DC;
    case 400u: goto L_089EE4E8;
    case 401u: goto L_089EE4F4;
    case 402u: goto L_089EE4FC;
    case 403u: goto L_089EE504;
    case 404u: goto L_089EE518;
    case 405u: goto L_089EE520;
    case 406u: goto L_089EE528;
    case 407u: goto L_089EE53C;
    case 408u: goto L_089EE550;
    case 409u: goto L_089EE560;
    case 410u: goto L_089EE56C;
    case 411u: goto L_089EE580;
    case 412u: goto L_089EE588;
    case 413u: goto L_089EE594;
    case 414u: goto L_089EE59C;
    case 415u: goto L_089EE5A4;
    case 416u: goto L_089EE5AC;
    case 417u: goto L_089EE5B4;
    case 418u: goto L_089EE5BC;
    case 419u: goto L_089EE5C4;
    case 420u: goto L_089EE5D8;
    case 421u: goto L_089EE5EC;
    case 422u: goto L_089EE5F0;
    case 423u: goto L_089EE5FC;
    case 424u: goto L_089EE600;
    case 425u: goto L_089EE608;
    case 426u: goto L_089EE61C;
    case 427u: goto L_089EE620;
    case 428u: goto L_089EE628;
    case 429u: goto L_089EE63C;
    case 430u: goto L_089EE640;
    case 431u: goto L_089EE648;
    case 432u: goto L_089EE65C;
    case 433u: goto L_089EE660;
    case 434u: goto L_089EE668;
    case 435u: goto L_089EE670;
    case 436u: goto L_089EE684;
    case 437u: goto L_089EE690;
    case 438u: goto L_089EE698;
    case 439u: goto L_089EE6A0;
    case 440u: goto L_089EE6A4;
    case 441u: goto L_089EE6AC;
    case 442u: goto L_089EE6C4;
    case 443u: goto L_089EE6D8;
    case 444u: goto L_089EE6F0;
    case 445u: goto L_089EE704;
    case 446u: goto L_089EE70C;
    case 447u: goto L_089EE710;
    case 448u: goto L_089EE718;
    case 449u: goto L_089EE724;
    case 450u: goto L_089EE72C;
    case 451u: goto L_089EE734;
    case 452u: goto L_089EE73C;
    case 453u: goto L_089EE740;
    case 454u: goto L_089EE748;
    case 455u: goto L_089EE778;
    case 456u: goto L_089EE780;
    case 457u: goto L_089EE7B4;
    case 458u: goto L_089EE7C4;
    case 459u: goto L_089EE7D4;
    case 460u: goto L_089EE7E0;
    case 461u: goto L_089EE7EC;
    case 462u: goto L_089EE804;
    case 463u: goto L_089EE80C;
    case 464u: goto L_089EE814;
    case 465u: goto L_089EE818;
    case 466u: goto L_089EE840;
    case 467u: goto L_089EE844;
    case 468u: goto L_089EE868;
    case 469u: goto L_089EE874;
    case 470u: goto L_089EE880;
    case 471u: goto L_089EE89C;
    case 472u: goto L_089EE8A4;
    case 473u: goto L_089EE8C0;
    case 474u: goto L_089EE8C8;
    case 475u: goto L_089EE8D0;
    case 476u: goto L_089EE8D8;
    case 477u: goto L_089EE8F4;
    case 478u: goto L_089EE908;
    case 479u: goto L_089EE97C;
    case 480u: goto L_089EE990;
    case 481u: goto L_089EE9B0;
    case 482u: goto L_089EE9E0;
    case 483u: goto L_089EE9F4;
    case 484u: goto L_089EEA00;
    case 485u: goto L_089EEA0C;
    case 486u: goto L_089EEA1C;
    case 487u: goto L_089EEA24;
    case 488u: goto L_089EEA2C;
    case 489u: goto L_089EEA34;
    case 490u: goto L_089EEA44;
    case 491u: goto L_089EEA78;
    case 492u: goto L_089EEA8C;
    case 493u: goto L_089EEA94;
    case 494u: goto L_089EEA9C;
    case 495u: goto L_089EEAA8;
    case 496u: goto L_089EEABC;
    case 497u: goto L_089EEAC4;
    case 498u: goto L_089EEAE8;
    case 499u: goto L_089EEAF0;
    case 500u: goto L_089EEAF8;
    case 501u: goto L_089EEB04;
    case 502u: goto L_089EEB24;
    case 503u: goto L_089EEB2C;
    case 504u: goto L_089EEB34;
    case 505u: goto L_089EEB64;
    case 506u: goto L_089EEB78;
    case 507u: goto L_089EEB88;
    case 508u: goto L_089EEB90;
    case 509u: goto L_089EEB98;
    case 510u: goto L_089EEBA0;
    case 511u: goto L_089EEBB0;
    case 512u: goto L_089EEBB8;
    case 513u: goto L_089EEBF8;
    case 514u: goto L_089EEBFC;
    case 515u: goto L_089EEC00;
    case 516u: goto L_089EEC30;
    case 517u: goto L_089EEC80;
    case 518u: goto L_089EECD4;
    case 519u: goto L_089EECDC;
    case 520u: goto L_089EECE4;
    case 521u: goto L_089EECEC;
    case 522u: goto L_089EED2C;
    case 523u: goto L_089EED80;
    case 524u: goto L_089EED90;
    case 525u: goto L_089EED98;
    case 526u: goto L_089EEDA0;
    case 527u: goto L_089EEDA8;
    case 528u: goto L_089EEDB4;
    case 529u: goto L_089EEDC4;
    case 530u: goto L_089EEDC8;
    case 531u: goto L_089EEDF0;
    case 532u: goto L_089EEE1C;
    case 533u: goto L_089EEE24;
    case 534u: goto L_089EEE60;
    case 535u: goto L_089EEEA0;
    case 536u: goto L_089EEEDC;
    case 537u: goto L_089EEEE8;
    case 538u: goto L_089EEF24;
    case 539u: goto L_089EEF60;
    case 540u: goto L_089EEF80;
    case 541u: goto L_089EEF84;
    case 542u: goto L_089EEFA0;
    case 543u: goto L_089EEFA8;
    case 544u: goto L_089EEFB8;
    case 545u: goto L_089EEFBC;
    case 546u: goto L_089EEFC8;
    case 547u: goto L_089EEFD8;
    case 548u: goto L_089EEFE8;
    case 549u: goto L_089EEFF0;
    case 550u: goto L_089EEFF8;
    case 551u: goto L_089EF034;
    case 552u: goto L_089EF03C;
    case 553u: goto L_089EF044;
    case 554u: goto L_089EF04C;
    case 555u: goto L_089EF058;
    case 556u: goto L_089EF08C;
    case 557u: goto L_089EF0AC;
    case 558u: goto L_089EF0B4;
    case 559u: goto L_089EF0E0;
    case 560u: goto L_089EF0EC;
    case 561u: goto L_089EF0F4;
    case 562u: goto L_089EF110;
    case 563u: goto L_089EF13C;
    case 564u: goto L_089EF158;
    case 565u: goto L_089EF174;
    case 566u: goto L_089EF17C;
    case 567u: goto L_089EF1A8;
    case 568u: goto L_089EF1B4;
    case 569u: goto L_089EF1BC;
    case 570u: goto L_089EF1D8;
    case 571u: goto L_089EF204;
    case 572u: goto L_089EF224;
    case 573u: goto L_089EF22C;
    case 574u: goto L_089EF258;
    case 575u: goto L_089EF264;
    case 576u: goto L_089EF27C;
    case 577u: goto L_089EF284;
    case 578u: goto L_089EF2A4;
    case 579u: goto L_089EF2AC;
    case 580u: goto L_089EF2D8;
    case 581u: goto L_089EF2E4;
    case 582u: goto L_089EF2FC;
    case 583u: goto L_089EF32C;
    case 584u: goto L_089EF368;
    case 585u: goto L_089EF36C;
    case 586u: goto L_089EF370;
    case 587u: goto L_089EF3B8;
    case 588u: goto L_089EF3C0;
    case 589u: goto L_089EF414;
    case 590u: goto L_089EF420;
    case 591u: goto L_089EF428;
    case 592u: goto L_089EF430;
    case 593u: goto L_089EF444;
    case 594u: goto L_089EF44C;
    case 595u: goto L_089EF454;
    case 596u: goto L_089EF480;
    case 597u: goto L_089EF490;
    case 598u: goto L_089EF4CC;
    case 599u: goto L_089EF4D0;
    case 600u: goto L_089EF4FC;
    case 601u: goto L_089EF504;
    case 602u: goto L_089EF510;
    case 603u: goto L_089EF518;
    case 604u: goto L_089EF51C;
    case 605u: goto L_089EF524;
    case 606u: goto L_089EF530;
    case 607u: goto L_089EF540;
    case 608u: goto L_089EF570;
    case 609u: goto L_089EF578;
    case 610u: goto L_089EF580;
    case 611u: goto L_089EF588;
    case 612u: goto L_089EF590;
    case 613u: goto L_089EF594;
    case 614u: goto L_089EF5C0;
    case 615u: goto L_089EF5C8;
    case 616u: goto L_089EF5D0;
    case 617u: goto L_089EF5D8;
    case 618u: goto L_089EF5E4;
    case 619u: goto L_089EF5EC;
    case 620u: goto L_089EF5F4;
    case 621u: goto L_089EF61C;
    case 622u: goto L_089EF628;
    case 623u: goto L_089EF630;
    case 624u: goto L_089EF65C;
    case 625u: goto L_089EF664;
    case 626u: goto L_089EF668;
    case 627u: goto L_089EF69C;
    case 628u: goto L_089EF6EC;
    case 629u: goto L_089EF6FC;
    case 630u: goto L_089EF75C;
    case 631u: goto L_089EF784;
    case 632u: goto L_089EF7B0;
    case 633u: goto L_089EF7B8;
    case 634u: goto L_089EF7CC;
    case 635u: goto L_089EF7E0;
    case 636u: goto L_089EF7F0;
    case 637u: goto L_089EF7FC;
    case 638u: goto L_089EF808;
    case 639u: goto L_089EF814;
    case 640u: goto L_089EF818;
    case 641u: goto L_089EF828;
    case 642u: goto L_089EF834;
    case 643u: goto L_089EF840;
    case 644u: goto L_089EF854;
    case 645u: goto L_089EF868;
    case 646u: goto L_089EF878;
    case 647u: goto L_089EF888;
    case 648u: goto L_089EF894;
    case 649u: goto L_089EF8A0;
    case 650u: goto L_089EF8A8;
    case 651u: goto L_089EF8B0;
    case 652u: goto L_089EF8BC;
    case 653u: goto L_089EF8C0;
    case 654u: goto L_089EF8C8;
    case 655u: goto L_089EF8D4;
    case 656u: goto L_089EF8E0;
    case 657u: goto L_089EF8EC;
    case 658u: goto L_089EF8F0;
    case 659u: goto L_089EF900;
    case 660u: goto L_089EF90C;
    case 661u: goto L_089EF914;
    case 662u: goto L_089EF918;
    case 663u: goto L_089EF938;
    case 664u: goto L_089EF944;
    case 665u: goto L_089EF94C;
    case 666u: goto L_089EF950;
    case 667u: goto L_089EF958;
    case 668u: goto L_089EF970;
    case 669u: goto L_089EF9A4;
    case 670u: goto L_089EF9B8;
    case 671u: goto L_089EF9F0;
    case 672u: goto L_089EFA04;
    case 673u: goto L_089EFA3C;
    case 674u: goto L_089EFA44;
    case 675u: goto L_089EFA6C;
    case 676u: goto L_089EFA78;
    case 677u: goto L_089EFA84;
    case 678u: goto L_089EFA8C;
    case 679u: goto L_089EFA9C;
    case 680u: goto L_089EFAB0;
    case 681u: goto L_089EFAD8;
    case 682u: goto L_089EFAEC;
    case 683u: goto L_089EFB08;
    case 684u: goto L_089EFB18;
    case 685u: goto L_089EFB2C;
    case 686u: goto L_089EFB44;
    case 687u: goto L_089EFB48;
    case 688u: goto L_089EFB9C;
    case 689u: goto L_089EFBAC;
    case 690u: goto L_089EFBB0;
    case 691u: goto L_089EFBD0;
    case 692u: goto L_089EFBEC;
    case 693u: goto L_089EFBFC;
    case 694u: goto L_089EFC04;
    case 695u: goto L_089EFC10;
    case 696u: goto L_089EFD5C;
    case 697u: goto L_089EFD6C;
    case 698u: goto L_089EFD84;
    case 699u: goto L_089EFDA8;
    case 700u: goto L_089EFDAC;
    case 701u: goto L_089EFDC0;
    case 702u: goto L_089EFDCC;
    case 703u: goto L_089EFDD4;
    case 704u: goto L_089EFE08;
    case 705u: goto L_089EFE10;
    case 706u: goto L_089EFE2C;
    case 707u: goto L_089EFE34;
    case 708u: goto L_089EFE48;
    case 709u: goto L_089EFE50;
    case 710u: goto L_089EFEB0;
    case 711u: goto L_089EFEB4;
    case 712u: goto L_089EFF04;
    case 713u: goto L_089EFF10;
    case 714u: goto L_089EFF18;
    case 715u: goto L_089EFFDC;
    case 716u: goto L_089EFFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089EC000:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089EC014u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 48u, 0x089F46F0u>(ctx, &aot_mem) && ctx.pc == 0x089EC014u) goto L_089EC014;
    return;
L_089EC014:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089EC0A4;
      }
      goto L_089EC01C;
    }
L_089EC01C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(484)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089EC038u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 48u, 0x089F46F0u>(ctx, &aot_mem) && ctx.pc == 0x089EC038u) goto L_089EC038;
    return;
L_089EC038:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089EC0A4;
      }
      goto L_089EC040;
    }
L_089EC040:
    ctx.gpr[31] = (0x089EC048u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 110u, 0x089F50C0u>(ctx, &aot_mem) && ctx.pc == 0x089EC048u) goto L_089EC048;
    return;
L_089EC048:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EC0A4;
      }
      goto L_089EC050;
    }
L_089EC050:
    ctx.gpr[31] = (0x089EC058u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 597u, 0x089F3A14u>(ctx, &aot_mem) && ctx.pc == 0x089EC058u) goto L_089EC058;
    return;
L_089EC058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(356)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EC09C;
      }
      goto L_089EC088;
    }
L_089EC088:
    ctx.gpr[31] = (0x089EC090u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    goto L_089EE718;
L_089EC090:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EC09C;
      }
      goto L_089EC098;
    }
L_089EC098:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    goto L_089EC09C;
L_089EC09C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089EC0A4;
      }
      goto L_089EC0A4;
    }
L_089EC0A4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC0BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.execute_vfpu_vx2i(1u, 0u, 1u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.execute_vfpu_vx2i(1u, 0u, 1u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.execute_vfpu_vx2i(1u, 0u, 1u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[17] = ctx.fpr[16] - ctx.fpr[17];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = ctx.fpr[12] - ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = ctx.fpr[13] - ctx.fpr[15];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[18] + ctx.fpr[19];
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EC230;
      }
      goto L_089EC19C;
    }
L_089EC19C:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[13];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = ctx.fpr[18] / ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[19] + ctx.fpr[0];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[2])) && ctx.fpr[12] == ctx.fpr[2]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EC228;
      }
      goto L_089EC1CC;
    }
L_089EC1CC:
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[12];
    ctx.gpr[4] = (16197u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[12];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[12] - ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EC220;
      }
      goto L_089EC1FC;
    }
L_089EC1FC:
    ctx.gpr[4] = (48965u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EC238;
      }
      goto L_089EC218;
    }
L_089EC218:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_089EC23C;
      }
      goto L_089EC220;
    }
L_089EC220:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_089EC23C;
      }
      goto L_089EC228;
    }
L_089EC228:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089EC23C;
      }
      goto L_089EC230;
    }
L_089EC230:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089EC23C;
      }
      goto L_089EC238;
    }
L_089EC238:
    ctx.gpr[2] = (0u | 1u);
    goto L_089EC23C;
L_089EC23C:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC244:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17456), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17452), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17448), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17444), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17440), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17436), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17432), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17428), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17424), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-17407), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-17408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-17460), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6256));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5744));
    goto L_089EC2C4;
L_089EC2C4:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089EC2C4;
      }
      goto L_089EC2D8;
    }
L_089EC2D8:
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5792));
    goto L_089EC2EC;
L_089EC2EC:
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[6]);
    goto L_089EC2F4;
L_089EC2F4:
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[10]) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089EC2F4;
      }
      goto L_089EC308;
    }
L_089EC308:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(100));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089EC2EC;
      }
      goto L_089EC320;
    }
L_089EC320:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC328:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17456), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17452), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17448), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17444), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17440), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17436), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17432), 0u);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-17408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17460), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6256));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5744));
    goto L_089EC390;
L_089EC390:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089EC390;
      }
      goto L_089EC3A4;
    }
L_089EC3A4:
    ctx.gpr[5] = (0u | 0u);
    goto L_089EC3A8;
L_089EC3A8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089EC3A8;
      }
      goto L_089EC3BC;
    }
L_089EC3BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC3C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x089EC3E8u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089EC3E8u) goto L_089EC3E8;
    return;
L_089EC3E8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_089EC400;
    }
    goto L_089EC400;
L_089EC400:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_089EC414;
    }
    goto L_089EC414;
L_089EC414:
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[20];
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[0] - ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[12];
      if (branch_taken) {
          goto L_089EC43C;
      }
      goto L_089EC438;
    }
L_089EC438:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_089EC43C;
L_089EC43C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC454:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 158u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089EC474;
      }
      goto L_089EC464;
    }
L_089EC464:
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089EC47C;
      }
      goto L_089EC474;
    }
L_089EC474:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089EC47C;
L_089EC47C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC484:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[23] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[24])) && ctx.fpr[12] == ctx.fpr[24]));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[21] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_089EC524;
      }
      goto L_089EC514;
    }
L_089EC514:
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[12];
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EC52C;
      }
      goto L_089EC524;
    }
L_089EC524:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089EC52C;
L_089EC52C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[28] - ctx.fpr[13];
    ctx.gpr[31] = (0x089EC540u);
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089EC540u) goto L_089EC540;
    return;
L_089EC540:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_089EC560;
      }
      goto L_089EC554;
    }
L_089EC554:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089EC560;
L_089EC560:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x089EC574u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089EC574u) goto L_089EC574;
    return;
L_089EC574:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_089EC594;
      }
      goto L_089EC588;
    }
L_089EC588:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_089EC594;
L_089EC594:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(397))))));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089EC5BC;
      }
      goto L_089EC5A4;
    }
L_089EC5A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089EC5B8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 552u, 0x089F3500u>(ctx, &aot_mem) && ctx.pc == 0x089EC5B8u) goto L_089EC5B8;
    return;
L_089EC5B8:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089EC5BC;
L_089EC5BC:
    ctx.gpr[31] = (0x089EC5C4u);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089EC5C4u) goto L_089EC5C4;
    return;
L_089EC5C4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EC630;
      }
      goto L_089EC5F8;
    }
L_089EC5F8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
        goto L_089EC60C;
    }
    goto L_089EC60C;
L_089EC60C:
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EC630;
      }
      goto L_089EC628;
    }
L_089EC628:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089EC630;
L_089EC630:
    ctx.gpr[31] = (0x089EC638u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089EC454;
L_089EC638:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EC654;
      }
      goto L_089EC650;
    }
L_089EC650:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089EC654;
L_089EC654:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EC668;
      }
      goto L_089EC664;
    }
L_089EC664:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089EC668;
L_089EC668:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[28] - ctx.fpr[13];
    ctx.gpr[31] = (0x089EC67Cu);
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089EC67Cu) goto L_089EC67C;
    return;
L_089EC67C:
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[28] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_089EC69C;
      }
      goto L_089EC690;
    }
L_089EC690:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = ctx.fpr[28] + ctx.fpr[12];
    goto L_089EC69C;
L_089EC69C:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[22];
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089EC6C0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089EC3C4;
L_089EC6C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16800u << 16u);
      if (branch_taken) {
          goto L_089EC75C;
      }
      goto L_089EC714;
    }
L_089EC714:
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089EC754;
      }
      goto L_089EC730;
    }
L_089EC730:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_089EC74C;
    }
    goto L_089EC74C;
L_089EC74C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089EC788;
      }
      goto L_089EC754;
    }
L_089EC754:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089EC788;
      }
      goto L_089EC75C;
    }
L_089EC75C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_089EC784;
    }
    goto L_089EC784;
L_089EC784:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089EC788;
L_089EC788:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC7CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[16] + ctx.fpr[17];
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.fpr[17] = std::sqrt(ctx.fpr[17]);
    ctx.gpr[7] = (15877u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 7864u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_089EC840;
      }
      goto L_089EC834;
    }
L_089EC834:
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[17];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_089EC840;
L_089EC840:
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.fpr[20] = ctx.fpr[15] + ctx.fpr[13];
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[22] = ctx.fpr[14] + ctx.fpr[12];
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089EC890u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_089EC484;
L_089EC890:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[13];
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EC8EC;
      }
      goto L_089EC8C8;
    }
L_089EC8C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089EC8E4;
      }
      goto L_089EC8D8;
    }
L_089EC8D8:
    ctx.gpr[4] = (0u | 19u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089EC8EC;
      }
      goto L_089EC8E4;
    }
L_089EC8E4:
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089EC8EC;
L_089EC8EC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC904:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.fpr[16] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[17] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[13];
    ctx.gpr[4] = (17096u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 19u);
      if (branch_taken) {
          goto L_089EC998;
      }
      goto L_089EC974;
    }
L_089EC974:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089EC98C;
      }
      goto L_089EC980;
    }
L_089EC980:
    ctx.gpr[4] = (0u | 18u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089ECB4C;
      }
      goto L_089EC98C;
    }
L_089EC98C:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089ECB4C;
      }
      goto L_089EC998;
    }
L_089EC998:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089ECA20;
      }
      goto L_089EC9A4;
    }
L_089EC9A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (14545u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ECB4C;
      }
      goto L_089EC9D4;
    }
L_089EC9D4:
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (14801u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ECB4C;
      }
      goto L_089EC9FC;
    }
L_089EC9FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ECB4C;
      }
      goto L_089ECA0C;
    }
L_089ECA0C:
    ctx.gpr[31] = (0x089ECA14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 262u, 0x0891D608u>(ctx, &aot_mem) && ctx.pc == 0x089ECA14u) goto L_089ECA14;
    return;
L_089ECA14:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089ECB4C;
      }
      goto L_089ECA20;
    }
L_089ECA20:
    ctx.gpr[31] = (0x089ECA28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x089ECA28u) goto L_089ECA28;
    return;
L_089ECA28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ECAA4;
      }
      goto L_089ECA30;
    }
L_089ECA30:
    ctx.gpr[31] = (0x089ECA38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x089ECA38u) goto L_089ECA38;
    return;
L_089ECA38:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ECAA4;
      }
      goto L_089ECA6C;
    }
L_089ECA6C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(644)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16773u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] | 21845u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(644), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089ECAA8;
      }
      goto L_089ECAA4;
    }
L_089ECAA4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(644), static_cast<std::uint16_t>(0u));
    goto L_089ECAA8;
L_089ECAA8:
    ctx.gpr[31] = (0x089ECAB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x089ECAB0u) goto L_089ECAB0;
    return;
L_089ECAB0:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
        goto L_089ECB20;
    }
    goto L_089ECAB8;
L_089ECAB8:
    ctx.gpr[31] = (0x089ECAC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x089ECAC0u) goto L_089ECAC0;
    return;
L_089ECAC0:
    ctx.gpr[31] = (0x089ECAC8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 825u, 0x0889FD24u>(ctx, &aot_mem) && ctx.pc == 0x089ECAC8u) goto L_089ECAC8;
    return;
L_089ECAC8:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
        goto L_089ECB20;
    }
    goto L_089ECAD0;
L_089ECAD0:
    ctx.gpr[31] = (0x089ECAD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x089ECAD8u) goto L_089ECAD8;
    return;
L_089ECAD8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ECB4C;
      }
      goto L_089ECB0C;
    }
L_089ECB0C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(644)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2501 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ECB4C;
      }
      goto L_089ECB1C;
    }
L_089ECB1C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    goto L_089ECB20;
L_089ECB20:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ECB4C;
      }
      goto L_089ECB2C;
    }
L_089ECB2C:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ECB4C;
      }
      goto L_089ECB3C;
    }
L_089ECB3C:
    ctx.gpr[31] = (0x089ECB44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 262u, 0x0891D608u>(ctx, &aot_mem) && ctx.pc == 0x089ECB44u) goto L_089ECB44;
    return;
L_089ECB44:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    goto L_089ECB4C;
L_089ECB4C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ECB64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[31]);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x089ECBC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 175u, 0x089D5818u>(ctx, &aot_mem) && ctx.pc == 0x089ECBC0u) goto L_089ECBC0;
    return;
L_089ECBC0:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089ECBD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 185u, 0x089D58C4u>(ctx, &aot_mem) && ctx.pc == 0x089ECBD4u) goto L_089ECBD4;
    return;
L_089ECBD4:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089ECC08u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x089ECC08u) goto L_089ECC08;
    return;
L_089ECC08:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089ECC7Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x089ECC7Cu) goto L_089ECC7C;
    return;
L_089ECC7C:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
        goto L_089ECCD8;
    }
    goto L_089ECCC8;
L_089ECCC8:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
    goto L_089ECCD8;
L_089ECCD8:
    ctx.fpr[24] = ctx.fpr[24] / ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ECCF8;
      }
      goto L_089ECCEC;
    }
L_089ECCEC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089ECE28;
      }
      goto L_089ECCF8;
    }
L_089ECCF8:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x089ECD04u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x089ECD04u) goto L_089ECD04;
    return;
L_089ECD04:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[13] - ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ECDA0;
      }
      goto L_089ECD78;
    }
L_089ECD78:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089ECD94;
    }
    goto L_089ECD94;
L_089ECD94:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089ECE28;
      }
      goto L_089ECDA0;
    }
L_089ECDA0:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (48588u << 16u);
      if (branch_taken) {
          goto L_089ECE04;
      }
      goto L_089ECDB0;
    }
L_089ECDB0:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_089ECDD8;
    }
    goto L_089ECDD8;
L_089ECDD8:
    ctx.gpr[4] = (16243u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089ECDFC;
      }
      goto L_089ECDF4;
    }
L_089ECDF4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089ECDFC;
L_089ECDFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ECE28;
      }
      goto L_089ECE04;
    }
L_089ECE04:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089ECE20;
    }
    goto L_089ECE20;
L_089ECE20:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089ECE28;
L_089ECE28:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ECE64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.gpr[8] = (48896u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[8] = (16128u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[24])) && ctx.fpr[13] == ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089ECEFC;
      }
      goto L_089ECEEC;
    }
L_089ECEEC:
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[13];
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ECF04;
      }
      goto L_089ECEFC;
    }
L_089ECEFC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089ECF04;
L_089ECF04:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[26] - ctx.fpr[13];
    ctx.gpr[31] = (0x089ECF1Cu);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089ECF1Cu) goto L_089ECF1C;
    return;
L_089ECF1C:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_089ECF3C;
      }
      goto L_089ECF30;
    }
L_089ECF30:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[12];
    goto L_089ECF3C;
L_089ECF3C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089ECF48u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089ECF48u) goto L_089ECF48;
    return;
L_089ECF48:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_089ECF68;
      }
      goto L_089ECF5C;
    }
L_089ECF5C:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_089ECF68;
L_089ECF68:
    ctx.gpr[31] = (0x089ECF70u);
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089ECF70u) goto L_089ECF70;
    return;
L_089ECF70:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ECF88;
      }
      goto L_089ECF84;
    }
L_089ECF84:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_089ECF88;
L_089ECF88:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ECF9C;
      }
      goto L_089ECF98;
    }
L_089ECF98:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_089ECF9C;
L_089ECF9C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
        goto L_089ED030;
    }
    goto L_089ECFF0;
L_089ECFF0:
    ctx.gpr[4] = (48588u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49312u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ED028;
      }
      goto L_089ED018;
    }
L_089ED018:
    ctx.gpr[4] = (48716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089ED028;
L_089ED028:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_089ED078;
      }
      goto L_089ED030;
    }
L_089ED030:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (16000u << 16u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089ED060;
      }
      goto L_089ED058;
    }
L_089ED058:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089ED078;
      }
      goto L_089ED060;
    }
L_089ED060:
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089ED078;
L_089ED078:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED0B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089ED110u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x089ED110u) goto L_089ED110;
    return;
L_089ED110:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[30] / ctx.fpr[12];
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089ED16C;
    }
    goto L_089ED16C;
L_089ED16C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[26])) && ctx.fpr[12] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ED1A8;
      }
      goto L_089ED198;
    }
L_089ED198:
    ctx.fpr[24] = ctx.fpr[24] / ctx.fpr[12];
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ED1B0;
      }
      goto L_089ED1A8;
    }
L_089ED1A8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089ED1B0;
L_089ED1B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089ED1C0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x089ED1C0u) goto L_089ED1C0;
    return;
L_089ED1C0:
    ctx.gpr[31] = (0x089ED1C8u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 175u, 0x089D5818u>(ctx, &aot_mem) && ctx.pc == 0x089ED1C8u) goto L_089ED1C8;
    return;
L_089ED1C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x089ED1E0u);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x089ED1E0u) goto L_089ED1E0;
    return;
L_089ED1E0:
    ctx.gpr[31] = (0x089ED1E8u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 175u, 0x089D5818u>(ctx, &aot_mem) && ctx.pc == 0x089ED1E8u) goto L_089ED1E8;
    return;
L_089ED1E8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[24] + ctx.fpr[14];
    ctx.gpr[31] = (0x089ED20Cu);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089ED20Cu) goto L_089ED20C;
    return;
L_089ED20C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_089ED234;
      }
      goto L_089ED224;
    }
L_089ED224:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_089ED234;
L_089ED234:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089ED240u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089ED240u) goto L_089ED240;
    return;
L_089ED240:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_089ED260;
      }
      goto L_089ED254;
    }
L_089ED254:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    goto L_089ED260;
L_089ED260:
    ctx.gpr[31] = (0x089ED268u);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[24];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089ED268u) goto L_089ED268;
    return;
L_089ED268:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[28] = ctx.fpr[13] - ctx.fpr[28];
    ctx.set_fpu_condition((ctx.fpr[28] <= ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
        goto L_089ED2F4;
    }
    goto L_089ED2B8;
L_089ED2B8:
    ctx.gpr[4] = (48588u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49312u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[28] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ED33C;
      }
      goto L_089ED2E0;
    }
L_089ED2E0:
    ctx.gpr[4] = (48716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089ED33C;
      }
      goto L_089ED2F4;
    }
L_089ED2F4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[28] / ctx.fpr[12];
    ctx.gpr[4] = (16000u << 16u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089ED324;
      }
      goto L_089ED31C;
    }
L_089ED31C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
      if (branch_taken) {
          goto L_089ED33C;
      }
      goto L_089ED324;
    }
L_089ED324:
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089ED33C;
L_089ED33C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 196u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089ED390;
      }
      goto L_089ED358;
    }
L_089ED358:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[30] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (15897u << 16u);
      if (branch_taken) {
          goto L_089ED390;
      }
      goto L_089ED370;
    }
L_089ED370:
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ED390;
      }
      goto L_089ED388;
    }
L_089ED388:
    ctx.gpr[31] = (0x089ED390u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 130u, 0x08861250u>(ctx, &aot_mem) && ctx.pc == 0x089ED390u) goto L_089ED390;
    return;
L_089ED390:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED3D0:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-6256));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6248));
    goto L_089ED3EC;
L_089ED3EC:
    ctx.gpr[8] = (ctx.gpr[9] << 2u);
    ctx.gpr[10] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_089ED420;
      }
      goto L_089ED400;
    }
L_089ED400:
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[8] << 16u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 16u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ED3EC;
      }
      goto L_089ED418;
    }
L_089ED418:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ED42C;
      }
      goto L_089ED420;
    }
L_089ED420:
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089ED4DC;
      }
      goto L_089ED42C;
    }
L_089ED42C:
    ctx.gpr[9] = (0u | 0u);
    goto L_089ED430;
L_089ED430:
    ctx.gpr[8] = (ctx.gpr[9] << 2u);
    ctx.gpr[10] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ED464;
      }
      goto L_089ED444;
    }
L_089ED444:
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[8] << 16u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 16u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ED430;
      }
      goto L_089ED45C;
    }
L_089ED45C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ED474;
      }
      goto L_089ED464;
    }
L_089ED464:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089ED4DC;
      }
      goto L_089ED474;
    }
L_089ED474:
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    goto L_089ED480;
L_089ED480:
    ctx.gpr[8] = (ctx.gpr[9] << 2u);
    ctx.gpr[2] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ED4B0;
      }
      goto L_089ED494;
    }
L_089ED494:
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[8] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ED4B0;
      }
      goto L_089ED4A8;
    }
L_089ED4A8:
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
    ctx.gpr[11] = (ctx.gpr[8] | 0u);
    goto L_089ED4B0;
L_089ED4B0:
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[8] << 16u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 16u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ED480;
      }
      goto L_089ED4C8;
    }
L_089ED4C8:
    ctx.gpr[8] = (ctx.gpr[10] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_089ED4DC;
L_089ED4DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED4E4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6256));
    goto L_089ED4F0;
L_089ED4F0:
    ctx.gpr[7] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089ED524;
      }
      goto L_089ED504;
    }
L_089ED504:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ED4F0;
      }
      goto L_089ED51C;
    }
L_089ED51C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089ED528;
      }
      goto L_089ED524;
    }
L_089ED524:
    ctx.gpr[2] = (0u | 1u);
    goto L_089ED528;
L_089ED528:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED530:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6256));
    goto L_089ED53C;
L_089ED53C:
    ctx.gpr[5] = (ctx.gpr[7] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089ED554;
      }
      goto L_089ED550;
    }
L_089ED550:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_089ED554;
L_089ED554:
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[5] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ED53C;
      }
      goto L_089ED56C;
    }
L_089ED56C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED574:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6256));
    goto L_089ED580;
L_089ED580:
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ED580;
      }
      goto L_089ED5A4;
    }
L_089ED5A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED5AC:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(384), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(388), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED5CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(356), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(352), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(360), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(376), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(380), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(372), 0u);
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089ED624u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 463u, 0x08976040u>(ctx, &aot_mem) && ctx.pc == 0x089ED624u) goto L_089ED624;
    return;
L_089ED624:
    ctx.gpr[9] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[9] << 4u);
    ctx.gpr[5] = (ctx.gpr[9] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[7] = (ctx.gpr[7] & 15u);
    ctx.gpr[5] = (18804u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 9214u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.execute_vfpu_vx2i(1u, 0u, 1u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ED750;
      }
      goto L_089ED684;
    }
L_089ED684:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_089ED68C;
L_089ED68C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[8]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[2]);
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] & 16383u);
    ctx.gpr[10] = (ctx.gpr[10] << 16u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 16u));
    ctx.gpr[2] = (ctx.gpr[10] << 4u);
    ctx.gpr[3] = (ctx.gpr[10] << 2u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[3]);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.execute_vfpu_vx2i(1u, 0u, 1u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = ctx.fpr[18] - ctx.fpr[16];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = ctx.fpr[17] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ED728;
      }
      goto L_089ED720;
    }
L_089ED720:
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[10] | 0u);
    goto L_089ED728;
L_089ED728:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ED68C;
      }
      goto L_089ED740;
    }
L_089ED740:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089ED750;
L_089ED750:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_089ED818;
      }
      goto L_089ED758;
    }
L_089ED758:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[12])) && ctx.fpr[14] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089ED788;
      }
      goto L_089ED770;
    }
L_089ED770:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ED788;
      }
      goto L_089ED780;
    }
L_089ED780:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089ED788;
L_089ED788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.execute_vfpu_vx2i(1u, 0u, 1u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[18];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ED7F8;
      }
      goto L_089ED7EC;
    }
L_089ED7EC:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    goto L_089ED7F8;
L_089ED7F8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(360), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(352), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(356), ctx.gpr[9]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(480), static_cast<std::uint16_t>(0u));
    ctx.gpr[31] = (0x089ED810u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 492u, 0x089F7E88u>(ctx, &aot_mem) && ctx.pc == 0x089ED810u) goto L_089ED810;
    return;
L_089ED810:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(395), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(396), static_cast<std::uint8_t>(0u));
    goto L_089ED818;
L_089ED818:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED82C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(432));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(448));
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(480));
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    ctx.gpr[11] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x089ED8BCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 760u, 0x08977E40u>(ctx, &aot_mem) && ctx.pc == 0x089ED8BCu) goto L_089ED8BC;
    return;
L_089ED8BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26868)));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089ED8D8u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 368u, 0x089756C8u>(ctx, &aot_mem) && ctx.pc == 0x089ED8D8u) goto L_089ED8D8;
    return;
L_089ED8D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(480))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ED954;
      }
      goto L_089ED8E8;
    }
L_089ED8E8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(360), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(448)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 20u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(352));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[31] = (0x089ED918u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(352), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 188u, 0x08925464u>(ctx, &aot_mem) && ctx.pc == 0x089ED918u) goto L_089ED918;
    return;
L_089ED918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(448)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[31] = (0x089ED93Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(356), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 188u, 0x08925464u>(ctx, &aot_mem) && ctx.pc == 0x089ED93Cu) goto L_089ED93C;
    return;
L_089ED93C:
    ctx.gpr[31] = (0x089ED944u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 492u, 0x089F7E88u>(ctx, &aot_mem) && ctx.pc == 0x089ED944u) goto L_089ED944;
    return;
L_089ED944:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(395), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(396), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089ED968;
      }
      goto L_089ED954;
    }
L_089ED954:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(356), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(352), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(360), 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(480), static_cast<std::uint16_t>(0u));
    ctx.gpr[2] = (0u | 1u);
    goto L_089ED968;
L_089ED968:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED98C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17464)));
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x089ED9B8u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089ED9B8u) goto L_089ED9B8;
    return;
L_089ED9B8:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089ED9CCu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x089ED9CCu) goto L_089ED9CC;
    return;
L_089ED9CC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7356)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDA1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5744));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (2277u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(6896));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_089EDAD4;
      }
      goto L_089EDA64;
    }
L_089EDA64:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(4688));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x089EDA8Cu);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089EDA8Cu) goto L_089EDA8C;
    return;
L_089EDA8C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089EDAA0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x089EDAA0u) goto L_089EDAA0;
    return;
L_089EDAA0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[6] = (ctx.gpr[2] >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[6] = (ctx.gpr[1] | ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EDADC;
      }
      goto L_089EDACC;
    }
L_089EDACC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDAF0;
      }
      goto L_089EDAD4;
    }
L_089EDAD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089EDB00;
      }
      goto L_089EDADC;
    }
L_089EDADC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089EDADC;
      }
      goto L_089EDAF0;
    }
L_089EDAF0:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5792));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089EDB00;
L_089EDB00:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDB18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5744));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x089EDB40u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_089EDA1C;
L_089EDB40:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDB4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089EDB5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089EDB5Cu) goto L_089EDB5C;
    return;
L_089EDB5C:
    ctx.gpr[31] = (0x089EDB64u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 357u, 0x08ACD740u>(ctx, &aot_mem) && ctx.pc == 0x089EDB64u) goto L_089EDB64;
    return;
L_089EDB64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089EDCF0;
      }
      goto L_089EDB6C;
    }
L_089EDB6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17396)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11072));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2229u << 16u);
      if (branch_taken) {
          goto L_089EDCF0;
      }
      goto L_089EDB90;
    }
L_089EDB90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-19068)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDCF0;
      }
      goto L_089EDBAC;
    }
L_089EDBAC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17400)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EDBD8;
      }
      goto L_089EDBC0;
    }
L_089EDBC0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089EDCF0;
      }
      goto L_089EDBC8;
    }
L_089EDBC8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089EDBF0;
      }
      goto L_089EDBD0;
    }
L_089EDBD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDC30;
      }
      goto L_089EDBD8;
    }
L_089EDBD8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EDC70;
      }
      goto L_089EDBE0;
    }
L_089EDBE0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EDCB0;
      }
      goto L_089EDBE8;
    }
L_089EDBE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDCF0;
      }
      goto L_089EDBF0;
    }
L_089EDBF0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1952)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDC20;
      }
      goto L_089EDC08;
    }
L_089EDC08:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1972)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EDC28;
      }
      goto L_089EDC20;
    }
L_089EDC20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDCF0;
      }
      goto L_089EDC28;
    }
L_089EDC28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-954));
      if (branch_taken) {
          goto L_089EDEA4;
      }
      goto L_089EDC30;
    }
L_089EDC30:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1992)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDC60;
      }
      goto L_089EDC48;
    }
L_089EDC48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2012)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EDC68;
      }
      goto L_089EDC60;
    }
L_089EDC60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDCF0;
      }
      goto L_089EDC68;
    }
L_089EDC68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-954));
      if (branch_taken) {
          goto L_089EDEA4;
      }
      goto L_089EDC70;
    }
L_089EDC70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2032)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDCA0;
      }
      goto L_089EDC88;
    }
L_089EDC88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2052)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EDCA8;
      }
      goto L_089EDCA0;
    }
L_089EDCA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDCF0;
      }
      goto L_089EDCA8;
    }
L_089EDCA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-954));
      if (branch_taken) {
          goto L_089EDEA4;
      }
      goto L_089EDCB0;
    }
L_089EDCB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2072)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDCE0;
      }
      goto L_089EDCC8;
    }
L_089EDCC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2092)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EDCE8;
      }
      goto L_089EDCE0;
    }
L_089EDCE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDCF0;
      }
      goto L_089EDCE8;
    }
L_089EDCE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-954));
      if (branch_taken) {
          goto L_089EDEA4;
      }
      goto L_089EDCF0;
    }
L_089EDCF0:
    ctx.gpr[31] = (0x089EDCF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089EDCF8u) goto L_089EDCF8;
    return;
L_089EDCF8:
    ctx.gpr[31] = (0x089EDD00u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 361u, 0x08ACD76Cu>(ctx, &aot_mem) && ctx.pc == 0x089EDD00u) goto L_089EDD00;
    return;
L_089EDD00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2229u << 16u);
      if (branch_taken) {
          goto L_089EDD8C;
      }
      goto L_089EDD08;
    }
L_089EDD08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3172)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDD8C;
      }
      goto L_089EDD24;
    }
L_089EDD24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDD8C;
      }
      goto L_089EDD3C;
    }
L_089EDD3C:
    ctx.gpr[31] = (0x089EDD44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089EDD44u) goto L_089EDD44;
    return;
L_089EDD44:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17356)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17360)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089EDD5Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x089EDD5Cu) goto L_089EDD5C;
    return;
L_089EDD5C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089EDD84;
      }
      goto L_089EDD7C;
    }
L_089EDD7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 158u);
      if (branch_taken) {
          goto L_089EDEA4;
      }
      goto L_089EDD84;
    }
L_089EDD84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 157u);
      if (branch_taken) {
          goto L_089EDEA4;
      }
      goto L_089EDD8C;
    }
L_089EDD8C:
    ctx.gpr[31] = (0x089EDD94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089EDD94u) goto L_089EDD94;
    return;
L_089EDD94:
    ctx.gpr[31] = (0x089EDD9Cu);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 369u, 0x08ACD7B8u>(ctx, &aot_mem) && ctx.pc == 0x089EDD9Cu) goto L_089EDD9C;
    return;
L_089EDD9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2229u << 16u);
      if (branch_taken) {
          goto L_089EDDD8;
      }
      goto L_089EDDA4;
    }
L_089EDDA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2972)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDDD8;
      }
      goto L_089EDDC0;
    }
L_089EDDC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EDE88;
      }
      goto L_089EDDD8;
    }
L_089EDDD8:
    ctx.gpr[31] = (0x089EDDE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089EDDE0u) goto L_089EDDE0;
    return;
L_089EDDE0:
    ctx.gpr[31] = (0x089EDDE8u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 377u, 0x08ACD804u>(ctx, &aot_mem) && ctx.pc == 0x089EDDE8u) goto L_089EDDE8;
    return;
L_089EDDE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2229u << 16u);
      if (branch_taken) {
          goto L_089EDE80;
      }
      goto L_089EDDF0;
    }
L_089EDDF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3252)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDE80;
      }
      goto L_089EDE0C;
    }
L_089EDE0C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3272)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDE80;
      }
      goto L_089EDE24;
    }
L_089EDE24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDE80;
      }
      goto L_089EDE3C;
    }
L_089EDE3C:
    ctx.gpr[31] = (0x089EDE44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089EDE44u) goto L_089EDE44;
    return;
L_089EDE44:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17364)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17368)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089EDE5Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x089EDE5Cu) goto L_089EDE5C;
    return;
L_089EDE5C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089EDE90;
      }
      goto L_089EDE78;
    }
L_089EDE78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089EDE90;
      }
      goto L_089EDE80;
    }
L_089EDE80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 157u);
      if (branch_taken) {
          goto L_089EDEA4;
      }
      goto L_089EDE88;
    }
L_089EDE88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 148u);
      if (branch_taken) {
          goto L_089EDEA4;
      }
      goto L_089EDE90;
    }
L_089EDE90:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDEA0;
      }
      goto L_089EDE98;
    }
L_089EDE98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 163u);
      if (branch_taken) {
          goto L_089EDEA4;
      }
      goto L_089EDEA0;
    }
L_089EDEA0:
    ctx.gpr[2] = (0u | 162u);
    goto L_089EDEA4;
L_089EDEA4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDEB0:
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5960));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] ^ 1u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDF28;
      }
      goto L_089EDEFC;
    }
L_089EDEFC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EDF30;
      }
      goto L_089EDF28;
    }
L_089EDF28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089EDF34;
      }
      goto L_089EDF30;
    }
L_089EDF30:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089EDF34;
L_089EDF34:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDF3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x089EDF50u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089EDF50u) goto L_089EDF50;
    return;
L_089EDF50:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17372)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17376)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089EDF68u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x089EDF68u) goto L_089EDF68;
    return;
L_089EDF68:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089EDF84;
L_089EDF84:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EDFAC;
      }
      goto L_089EDF94;
    }
L_089EDF94:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089EDF84;
      }
      goto L_089EDFA4;
    }
L_089EDFA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDFAC;
      }
      goto L_089EDFAC;
    }
L_089EDFAC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDFBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x089EDFD0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089EDFD0u) goto L_089EDFD0;
    return;
L_089EDFD0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17372)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17376)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089EDFE8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x089EDFE8u) goto L_089EDFE8;
    return;
L_089EDFE8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[2] = (0u | 9u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(18));
    goto L_089EE004;
L_089EE004:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EE02C;
      }
      goto L_089EE014;
    }
L_089EE014:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[2]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089EE004;
      }
      goto L_089EE024;
    }
L_089EE024:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE02C;
      }
      goto L_089EE02C;
    }
L_089EE02C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE03C:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6896));
    ctx.gpr[9] = (ctx.gpr[8] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[5] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (2277u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(5792));
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[10] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[10] + static_cast<std::uint32_t>(4688));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_089EE0A4;
      }
      goto L_089EE094;
    }
L_089EE094:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    goto L_089EE0A4;
L_089EE0A4:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE0B0:
    ctx.gpr[9] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[9] = (ctx.gpr[6] - ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(5792));
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[7];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4688));
      if (branch_taken) {
          goto L_089EE108;
      }
      goto L_089EE0E4;
    }
L_089EE0E4:
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089EE0F4;
      }
      goto L_089EE0EC;
    }
L_089EE0EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE108;
      }
      goto L_089EE0F4;
    }
L_089EE0F4:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[7];
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089EE0E4;
      }
      goto L_089EE108;
    }
L_089EE108:
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) <= 0;
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089EE120;
      }
      goto L_089EE118;
    }
L_089EE118:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[10]);
    goto L_089EE120;
L_089EE120:
    if (ctx.gpr[9] == ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
        goto L_089EE14C;
    }
    goto L_089EE128;
L_089EE128:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[7];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089EE128;
      }
      goto L_089EE148;
    }
L_089EE148:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    goto L_089EE14C;
L_089EE14C:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6896));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE168:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EE238;
      }
      goto L_089EE190;
    }
L_089EE190:
    ctx.gpr[31] = (0x089EE198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089EE198u) goto L_089EE198;
    return;
L_089EE198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE230;
      }
      goto L_089EE1A8;
    }
L_089EE1A8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29520)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089EE228;
      }
      goto L_089EE1B8;
    }
L_089EE1B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17456)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17452)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17448)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17444)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17436)));
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-17432)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-17404)));
    ctx.gpr[6] = static_cast<std::uint32_t>(lcs::scale_spawn_count(static_cast<std::int32_t>(ctx.gpr[6])));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EE220;
      }
      goto L_089EE20C;
    }
L_089EE20C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17436)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089EE240;
      }
      goto L_089EE218;
    }
L_089EE218:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE37C;
      }
      goto L_089EE220;
    }
L_089EE220:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE4C0;
      }
      goto L_089EE228;
    }
L_089EE228:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE4C0;
      }
      goto L_089EE230;
    }
L_089EE230:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE4C0;
      }
      goto L_089EE238;
    }
L_089EE238:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE4C0;
      }
      goto L_089EE240;
    }
L_089EE240:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16397)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE37C;
      }
      goto L_089EE24C;
    }
L_089EE24C:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16664));
    ctx.gpr[31] = (0x089EE25Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 73u, 0x088B058Cu>(ctx, &aot_mem) && ctx.pc == 0x089EE25Cu) goto L_089EE25C;
    return;
L_089EE25C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089EE358;
      }
      goto L_089EE268;
    }
L_089EE268:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089EE280u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x089EE280u) goto L_089EE280;
    return;
L_089EE280:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089EE290u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 57u, 0x088B03A0u>(ctx, &aot_mem) && ctx.pc == 0x089EE290u) goto L_089EE290;
    return;
L_089EE290:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE350;
      }
      goto L_089EE29C;
    }
L_089EE29C:
    ctx.gpr[31] = (0x089EE2A4u);
    ctx.gpr[4] = (0u | 147u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 407u, 0x089EA8C0u>(ctx, &aot_mem) && ctx.pc == 0x089EE2A4u) goto L_089EE2A4;
    return;
L_089EE2A4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE350;
      }
      goto L_089EE2B0;
    }
L_089EE2B0:
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-17428)));
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30000));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE350;
      }
      goto L_089EE2D0;
    }
L_089EE2D0:
    ctx.gpr[4] = (0u | 147u);
    ctx.gpr[31] = (0x089EE2DCu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x089EE2DCu) goto L_089EE2DC;
    return;
L_089EE2DC:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[31] = (0x089EE2E8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x089EE2E8u) goto L_089EE2E8;
    return;
L_089EE2E8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2952)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE350;
      }
      goto L_089EE308;
    }
L_089EE308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE350;
      }
      goto L_089EE324;
    }
L_089EE324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089EE340u);
    ctx.gpr[4] = (0u | 147u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 14u, 0x089F8218u>(ctx, &aot_mem) && ctx.pc == 0x089EE340u) goto L_089EE340;
    return;
L_089EE340:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE350;
      }
      goto L_089EE348;
    }
L_089EE348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-17428), ctx.gpr[4]);
    goto L_089EE350;
L_089EE350:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE37C;
      }
      goto L_089EE358;
    }
L_089EE358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2952)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EE37C;
      }
      goto L_089EE374;
    }
L_089EE374:
    ctx.gpr[31] = (0x089EE37Cu);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x089EE37Cu) goto L_089EE37C;
    return;
L_089EE37C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-17432)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089EE4C0;
      }
      goto L_089EE388;
    }
L_089EE388:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16397)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE4C0;
      }
      goto L_089EE394;
    }
L_089EE394:
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-25056)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089EE49C;
      }
      goto L_089EE3A8;
    }
L_089EE3A8:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25056));
    ctx.gpr[31] = (0x089EE3C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x089EE3C4u) goto L_089EE3C4;
    return;
L_089EE3C4:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089EE3D4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 581u, 0x0884E3D4u>(ctx, &aot_mem) && ctx.pc == 0x089EE3D4u) goto L_089EE3D4;
    return;
L_089EE3D4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE494;
      }
      goto L_089EE3E0;
    }
L_089EE3E0:
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-17424)));
    ctx.gpr[4] = (0u | 35000u);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE494;
      }
      goto L_089EE404;
    }
L_089EE404:
    ctx.gpr[31] = (0x089EE40Cu);
    ctx.gpr[4] = (0u | 138u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 407u, 0x089EA8C0u>(ctx, &aot_mem) && ctx.pc == 0x089EE40Cu) goto L_089EE40C;
    return;
L_089EE40C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE494;
      }
      goto L_089EE418;
    }
L_089EE418:
    ctx.gpr[4] = (0u | 138u);
    ctx.gpr[31] = (0x089EE424u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x089EE424u) goto L_089EE424;
    return;
L_089EE424:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x089EE430u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x089EE430u) goto L_089EE430;
    return;
L_089EE430:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2772)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE494;
      }
      goto L_089EE450;
    }
L_089EE450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE494;
      }
      goto L_089EE46C;
    }
L_089EE46C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089EE484u);
    ctx.gpr[4] = (0u | 138u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 14u, 0x089F8218u>(ctx, &aot_mem) && ctx.pc == 0x089EE484u) goto L_089EE484;
    return;
L_089EE484:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE494;
      }
      goto L_089EE48C;
    }
L_089EE48C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-17424), ctx.gpr[4]);
    goto L_089EE494;
L_089EE494:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE4C0;
      }
      goto L_089EE49C;
    }
L_089EE49C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2772)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EE4C0;
      }
      goto L_089EE4B8;
    }
L_089EE4B8:
    ctx.gpr[31] = (0x089EE4C0u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x089EE4C0u) goto L_089EE4C0;
    return;
L_089EE4C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE4DC:
    ctx.gpr[6] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(596)));
      if (branch_taken) {
          goto L_089EE588;
      }
      goto L_089EE4E8;
    }
L_089EE4E8:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
        goto L_089EE518;
    }
    goto L_089EE4F4;
L_089EE4F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EE580;
      }
      goto L_089EE4FC;
    }
L_089EE4FC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EE53C;
      }
      goto L_089EE504;
    }
L_089EE504:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17448)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17448), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089EE668;
      }
      goto L_089EE518;
    }
L_089EE518:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EE56C;
      }
      goto L_089EE520;
    }
L_089EE520:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE580;
      }
      goto L_089EE528;
    }
L_089EE528:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17440)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17440), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089EE668;
      }
      goto L_089EE53C;
    }
L_089EE53C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17456)));
      if (branch_taken) {
          goto L_089EE560;
      }
      goto L_089EE550;
    }
L_089EE550:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17452)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-17452), ctx.gpr[7]);
    goto L_089EE560;
L_089EE560:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-17456), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089EE668;
      }
      goto L_089EE56C;
    }
L_089EE56C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17444)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17444), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089EE668;
      }
      goto L_089EE580;
    }
L_089EE580:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE668;
      }
      goto L_089EE588;
    }
L_089EE588:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
        goto L_089EE5AC;
    }
    goto L_089EE594;
L_089EE594:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EE668;
      }
      goto L_089EE59C;
    }
L_089EE59C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EE5C4;
      }
      goto L_089EE5A4;
    }
L_089EE5A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE608;
      }
      goto L_089EE5AC;
    }
L_089EE5AC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EE628;
      }
      goto L_089EE5B4;
    }
L_089EE5B4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EE648;
      }
      goto L_089EE5BC;
    }
L_089EE5BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE668;
      }
      goto L_089EE5C4;
    }
L_089EE5C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17456)));
      if (branch_taken) {
          goto L_089EE5F0;
      }
      goto L_089EE5D8;
    }
L_089EE5D8:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17452)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) >= 0;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-17452), ctx.gpr[7]);
      if (branch_taken) {
          goto L_089EE5F0;
      }
      goto L_089EE5EC;
    }
L_089EE5EC:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-17452), 0u);
    goto L_089EE5F0;
L_089EE5F0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-17456), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089EE600;
      }
      goto L_089EE5FC;
    }
L_089EE5FC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-17456), 0u);
    goto L_089EE600;
L_089EE600:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE668;
      }
      goto L_089EE608;
    }
L_089EE608:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17448)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17448), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089EE620;
      }
      goto L_089EE61C;
    }
L_089EE61C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17448), 0u);
    goto L_089EE620;
L_089EE620:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE668;
      }
      goto L_089EE628;
    }
L_089EE628:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17444)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17444), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089EE640;
      }
      goto L_089EE63C;
    }
L_089EE63C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17444), 0u);
    goto L_089EE640;
L_089EE640:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE668;
      }
      goto L_089EE648;
    }
L_089EE648:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17440)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17440), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089EE660;
      }
      goto L_089EE65C;
    }
L_089EE65C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17440), 0u);
    goto L_089EE660;
L_089EE660:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE668;
      }
      goto L_089EE668;
    }
L_089EE668:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE670:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(262)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089EE698;
      }
      goto L_089EE684;
    }
L_089EE684:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(266)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089EE6A0;
      }
      goto L_089EE690;
    }
L_089EE690:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089EE6A4;
      }
      goto L_089EE698;
    }
L_089EE698:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089EE6A4;
      }
      goto L_089EE6A0;
    }
L_089EE6A0:
    ctx.gpr[2] = (0u | 0u);
    goto L_089EE6A4;
L_089EE6A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE6AC:
    ctx.gpr[4] = (50091u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (50011u << 16u);
      if (branch_taken) {
          goto L_089EE70C;
      }
      goto L_089EE6C4;
    }
L_089EE6C4:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (50217u << 16u);
      if (branch_taken) {
          goto L_089EE70C;
      }
      goto L_089EE6D8;
    }
L_089EE6D8:
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (50193u << 16u);
      if (branch_taken) {
          goto L_089EE70C;
      }
      goto L_089EE6F0;
    }
L_089EE6F0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EE70C;
      }
      goto L_089EE704;
    }
L_089EE704:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089EE710;
      }
      goto L_089EE70C;
    }
L_089EE70C:
    ctx.gpr[2] = (0u | 0u);
    goto L_089EE710;
L_089EE710:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE718:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-988));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-990));
      if (branch_taken) {
          goto L_089EE734;
      }
      goto L_089EE724;
    }
L_089EE724:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-992));
      if (branch_taken) {
          goto L_089EE734;
      }
      goto L_089EE72C;
    }
L_089EE72C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089EE73C;
      }
      goto L_089EE734;
    }
L_089EE734:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089EE740;
      }
      goto L_089EE73C;
    }
L_089EE73C:
    ctx.gpr[2] = (0u | 0u);
    goto L_089EE740;
L_089EE740:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE748:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089EE780;
      }
      goto L_089EE778;
    }
L_089EE778:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089EE844;
      }
      goto L_089EE780;
    }
L_089EE780:
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_089EE840;
      }
      goto L_089EE7B4;
    }
L_089EE7B4:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089EE7C4;
L_089EE7C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    if (ctx.gpr[4] == ctx.gpr[19]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
        goto L_089EE818;
    }
    goto L_089EE7D4;
L_089EE7D4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089EE7E0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 648u, 0x088A7DE0u>(ctx, &aot_mem) && ctx.pc == 0x089EE7E0u) goto L_089EE7E0;
    return;
L_089EE7E0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE814;
      }
      goto L_089EE7EC;
    }
L_089EE7EC:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089EE804u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 142u, 0x08A34D58u>(ctx, &aot_mem) && ctx.pc == 0x089EE804u) goto L_089EE804;
    return;
L_089EE804:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE814;
      }
      goto L_089EE80C;
    }
L_089EE80C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089EE844;
      }
      goto L_089EE814;
    }
L_089EE814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    goto L_089EE818;
L_089EE818:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EE7C4;
      }
      goto L_089EE840;
    }
L_089EE840:
    ctx.gpr[2] = (0u | 1u);
    goto L_089EE844;
L_089EE844:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE868:
    ctx.gpr[5] = (2229u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-17388), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE874:
    ctx.gpr[5] = (2229u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-17384), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE880:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089EE89Cu);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x089EE89Cu) goto L_089EE89C;
    return;
L_089EE89C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE8C0;
      }
      goto L_089EE8A4;
    }
L_089EE8A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089EE8C0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EE8C0u) goto L_089EE8C0;
    return;
L_089EE8C0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE8F4;
      }
      goto L_089EE8C8;
    }
L_089EE8C8:
    ctx.gpr[31] = (0x089EE8D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x089EE8D0u) goto L_089EE8D0;
    return;
L_089EE8D0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE8F4;
      }
      goto L_089EE8D8;
    }
L_089EE8D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089EE8F4u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EE8F4u) goto L_089EE8F4;
    return;
L_089EE8F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE908:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1168));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1096), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1104), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1108), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1112), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1116), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1120), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1124), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1128), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1132), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1136), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1140), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1144), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1148), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1152), ctx.gpr[31]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089EE97Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 199u, 0x089D599Cu>(ctx, &aot_mem) && ctx.pc == 0x089EE97Cu) goto L_089EE97C;
    return;
L_089EE97C:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089EE990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 175u, 0x089D5818u>(ctx, &aot_mem) && ctx.pc == 0x089EE990u) goto L_089EE990;
    return;
L_089EE990:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.gpr[31] = (0x089EE9B0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 391u, 0x088724E0u>(ctx, &aot_mem) && ctx.pc == 0x089EE9B0u) goto L_089EE9B0;
    return;
L_089EE9B0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(328)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(324), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(324)));
        goto L_089EECEC;
    }
    goto L_089EE9E0;
L_089EE9E0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16407)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089EEA2C;
      }
      goto L_089EE9F4;
    }
L_089EE9F4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089EEA00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 247u, 0x088A9154u>(ctx, &aot_mem) && ctx.pc == 0x089EEA00u) goto L_089EEA00;
    return;
L_089EEA00:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EEA24;
      }
      goto L_089EEA0C;
    }
L_089EEA0C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-17384)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EEA34;
      }
      goto L_089EEA1C;
    }
L_089EEA1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EEA9C;
      }
      goto L_089EEA24;
    }
L_089EEA24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F1248u>(ctx, &aot_mem); return;
      }
      goto L_089EEA2C;
    }
L_089EEA2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F1248u>(ctx, &aot_mem); return;
      }
      goto L_089EEA34;
    }
L_089EEA34:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[31] = (0x089EEA44u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 313u, 0x088A9580u>(ctx, &aot_mem) && ctx.pc == 0x089EEA44u) goto L_089EEA44;
    return;
L_089EEA44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (0u | 20u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EEA94;
      }
      goto L_089EEA78;
    }
L_089EEA78:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089EEAC4;
      }
      goto L_089EEA8C;
    }
L_089EEA8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089EEAF0;
      }
      goto L_089EEA94;
    }
L_089EEA94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F1248u>(ctx, &aot_mem); return;
      }
      goto L_089EEA9C;
    }
L_089EEA9C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089EEAA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 313u, 0x088A9580u>(ctx, &aot_mem) && ctx.pc == 0x089EEAA8u) goto L_089EEAA8;
    return;
L_089EEAA8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17388)));
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EEA78;
      }
      goto L_089EEABC;
    }
L_089EEABC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F1248u>(ctx, &aot_mem); return;
      }
      goto L_089EEAC4;
    }
L_089EEAC4:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089EEAF0;
      }
      goto L_089EEAE8;
    }
L_089EEAE8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089EEAF0;
L_089EEAF0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EEB2C;
      }
      goto L_089EEAF8;
    }
L_089EEAF8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089EEB04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 276u, 0x088A9368u>(ctx, &aot_mem) && ctx.pc == 0x089EEB04u) goto L_089EEB04;
    return;
L_089EEB04:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17416)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17412)));
    ctx.gpr[4] = (ctx.gpr[2] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089EEB34;
      }
      goto L_089EEB24;
    }
L_089EEB24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F1248u>(ctx, &aot_mem); return;
      }
      goto L_089EEB2C;
    }
L_089EEB2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F1248u>(ctx, &aot_mem); return;
      }
      goto L_089EEB34;
    }
L_089EEB34:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089EEC30;
      }
      goto L_089EEB64;
    }
L_089EEB64:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089EEB78u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 648u, 0x088A7DE0u>(ctx, &aot_mem) && ctx.pc == 0x089EEB78u) goto L_089EEB78;
    return;
L_089EEB78:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089EEB88u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 648u, 0x088A7DE0u>(ctx, &aot_mem) && ctx.pc == 0x089EEB88u) goto L_089EEB88;
    return;
L_089EEB88:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089EEB98;
      }
      goto L_089EEB90;
    }
L_089EEB90:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EEBA0;
      }
      goto L_089EEB98;
    }
L_089EEB98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089EEC00;
      }
      goto L_089EEBA0;
    }
L_089EEBA0:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089EEBB0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 299u, 0x089D62A8u>(ctx, &aot_mem) && ctx.pc == 0x089EEBB0u) goto L_089EEBB0;
    return;
L_089EEBB0:
    ctx.gpr[31] = (0x089EEBB8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 123u, 0x08A34C08u>(ctx, &aot_mem) && ctx.pc == 0x089EEBB8u) goto L_089EEBB8;
    return;
L_089EEBB8:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17580)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EEBFC;
      }
      goto L_089EEBF8;
    }
L_089EEBF8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089EEBFC;
L_089EEBFC:
    ctx.gpr[4] = (2232u << 16u);
    goto L_089EEC00;
L_089EEC00:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EEB64;
      }
      goto L_089EEC30;
    }
L_089EEC30:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(324)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17460)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31080)));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17456)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] * lcs::spawn_count_scale();
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089EECDC;
      }
      goto L_089EEC80;
    }
L_089EEC80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17456)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17452)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17448)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17444)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17436)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17432)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17404)));
    ctx.gpr[5] = static_cast<std::uint32_t>(lcs::scale_spawn_count(static_cast<std::int32_t>(ctx.gpr[5])));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EECE4;
      }
      goto L_089EECD4;
    }
L_089EECD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F1248u>(ctx, &aot_mem); return;
      }
      goto L_089EECDC;
    }
L_089EECDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F1248u>(ctx, &aot_mem); return;
      }
      goto L_089EECE4;
    }
L_089EECE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EED80;
      }
      goto L_089EECEC;
    }
L_089EECEC:
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17460)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17456)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-31080)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] * lcs::spawn_count_scale();
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089EEDA0;
      }
      goto L_089EED2C;
    }
L_089EED2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17456)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17452)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17448)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17444)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17436)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17432)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17404)));
    ctx.gpr[5] = static_cast<std::uint32_t>(lcs::scale_spawn_count(static_cast<std::int32_t>(ctx.gpr[5])));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EED98;
      }
      goto L_089EED80;
    }
L_089EED80:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EEDA8;
      }
      goto L_089EED90;
    }
L_089EED90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089EEE24;
      }
      goto L_089EED98;
    }
L_089EED98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F1248u>(ctx, &aot_mem); return;
      }
      goto L_089EEDA0;
    }
L_089EEDA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F1248u>(ctx, &aot_mem); return;
      }
      goto L_089EEDA8;
    }
L_089EEDA8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.gpr[31] = (0x089EEDB4u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 324u, 0x089EA2B8u>(ctx, &aot_mem) && ctx.pc == 0x089EEDB4u) goto L_089EEDB4;
    return;
L_089EEDB4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089EEE1C;
      }
      goto L_089EEDC4;
    }
L_089EEDC4:
    ctx.gpr[4] = (2232u << 16u);
    goto L_089EEDC8;
L_089EEDC8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (48998u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EF044;
      }
      goto L_089EEDF0;
    }
L_089EEDF0:
    ctx.gpr[5] = (16180u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 65012u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (16988u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_089EF2FC;
      }
      goto L_089EEE1C;
    }
L_089EEE1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F1248u>(ctx, &aot_mem); return;
      }
      goto L_089EEE24;
    }
L_089EEE24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2064));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089EEFB8;
      }
      goto L_089EEE60;
    }
L_089EEE60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2090)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17452)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089EEFB8;
      }
      goto L_089EEEA0;
    }
L_089EEEA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2088)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2089)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089EEFB8;
      }
      goto L_089EEEDC;
    }
L_089EEEDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29520)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089EEFB8;
      }
      goto L_089EEEE8;
    }
L_089EEEE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2064));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089EEFA0;
      }
      goto L_089EEF24;
    }
L_089EEF24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2064));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089EEF84;
      }
      goto L_089EEF60;
    }
L_089EEF60:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17420)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EEFA0;
      }
      goto L_089EEF80;
    }
L_089EEF80:
    ctx.gpr[4] = (2229u << 16u);
    goto L_089EEF84;
L_089EEF84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17420)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8000));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EEFB8;
      }
      goto L_089EEFA0;
    }
L_089EEFA0:
    ctx.gpr[31] = (0x089EEFA8u);
    // nop
    goto L_089EDB4C;
L_089EEFA8:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089EEDC4;
      }
      goto L_089EEFB8;
    }
L_089EEFB8:
    ctx.gpr[18] = (0u | 0u);
    goto L_089EEFBC;
L_089EEFBC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.gpr[31] = (0x089EEFC8u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 324u, 0x089EA2B8u>(ctx, &aot_mem) && ctx.pc == 0x089EEFC8u) goto L_089EEFC8;
    return;
L_089EEFC8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089EEFF0;
      }
      goto L_089EEFD8;
    }
L_089EEFD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089EEFF8;
      }
      goto L_089EEFE8;
    }
L_089EEFE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF03C;
      }
      goto L_089EEFF0;
    }
L_089EEFF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F1248u>(ctx, &aot_mem); return;
      }
      goto L_089EEFF8;
    }
L_089EEFF8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2064));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EF03C;
      }
      goto L_089EF034;
    }
L_089EF034:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EEFBC;
      }
      goto L_089EF03C;
    }
L_089EF03C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089EEDC8;
      }
      goto L_089EF044;
    }
L_089EF044:
    ctx.gpr[31] = (0x089EF04Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x089EF04Cu) goto L_089EF04C;
    return;
L_089EF04C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (2232u << 16u);
        goto L_089EF284;
    }
    goto L_089EF058;
L_089EF058:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[14] = std::sqrt(ctx.fpr[14]);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EF13C;
      }
      goto L_089EF08C;
    }
L_089EF08C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089EF0E0;
      }
      goto L_089EF0AC;
    }
L_089EF0AC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089EF27C;
      }
      goto L_089EF0B4;
    }
L_089EF0B4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (17116u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (16217u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089EF27C;
      }
      goto L_089EF0E0;
    }
L_089EF0E0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EF110;
      }
      goto L_089EF0EC;
    }
L_089EF0EC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF27C;
      }
      goto L_089EF0F4;
    }
L_089EF0F4:
    ctx.gpr[5] = (16180u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 65012u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (16928u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089EF27C;
      }
      goto L_089EF110;
    }
L_089EF110:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (17116u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (16180u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 65012u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089EF27C;
      }
      goto L_089EF13C;
    }
L_089EF13C:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089EF204;
      }
      goto L_089EF158;
    }
L_089EF158:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089EF1A8;
      }
      goto L_089EF174;
    }
L_089EF174:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089EF27C;
      }
      goto L_089EF17C;
    }
L_089EF17C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (17116u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (16217u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089EF27C;
      }
      goto L_089EF1A8;
    }
L_089EF1A8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EF1D8;
      }
      goto L_089EF1B4;
    }
L_089EF1B4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF27C;
      }
      goto L_089EF1BC;
    }
L_089EF1BC:
    ctx.gpr[5] = (16180u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 65012u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (16928u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089EF27C;
      }
      goto L_089EF1D8;
    }
L_089EF1D8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (17116u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (16180u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 65012u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089EF27C;
      }
      goto L_089EF204;
    }
L_089EF204:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089EF258;
      }
      goto L_089EF224;
    }
L_089EF224:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089EF27C;
      }
      goto L_089EF22C;
    }
L_089EF22C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (17116u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (16180u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 65012u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089EF27C;
      }
      goto L_089EF258;
    }
L_089EF258:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF27C;
      }
      goto L_089EF264;
    }
L_089EF264:
    ctx.gpr[5] = (16180u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 65012u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_089EF27C;
L_089EF27C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF2FC;
      }
      goto L_089EF284;
    }
L_089EF284:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089EF2D8;
      }
      goto L_089EF2A4;
    }
L_089EF2A4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089EF2FC;
      }
      goto L_089EF2AC;
    }
L_089EF2AC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (17116u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (16180u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 65012u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089EF2FC;
      }
      goto L_089EF2D8;
    }
L_089EF2D8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF2FC;
      }
      goto L_089EF2E4;
    }
L_089EF2E4:
    ctx.gpr[5] = (16180u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 65012u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_089EF2FC;
L_089EF2FC:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[2] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[2];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26868)));
      if (branch_taken) {
          goto L_089EF36C;
      }
      goto L_089EF32C;
    }
L_089EF32C:
    ctx.gpr[11] = (2230u << 16u);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[3] = (ctx.gpr[11] << 7u);
    ctx.gpr[12] = (ctx.gpr[3] + ctx.gpr[3]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[12]);
    ctx.gpr[11] = (ctx.gpr[11] << 4u);
    ctx.gpr[11] = (ctx.gpr[3] - ctx.gpr[11]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(2064));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) <= 0;
    ctx.gpr[11] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_089EF370;
      }
      goto L_089EF368;
    }
L_089EF368:
    ctx.gpr[9] = (0u | 1u);
    goto L_089EF36C;
L_089EF36C:
    ctx.gpr[11] = (ctx.gpr[8] | 0u);
    goto L_089EF370;
L_089EF370:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[2] = (ctx.gpr[9] & 255u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[6] = (ctx.gpr[10] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
    ctx.gpr[31] = (0x089EF3B8u);
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 129u, 0x08978FC8u>(ctx, &aot_mem) && ctx.pc == 0x089EF3B8u) goto L_089EF3B8;
    return;
L_089EF3B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F1248u>(ctx, &aot_mem); return;
      }
      goto L_089EF3C0;
    }
L_089EF3C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[20] = (ctx.gpr[20] & 15u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
        goto L_089EF414;
    }
    goto L_089EF414;
L_089EF414:
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    ctx.gpr[31] = (0x089EF420u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    goto L_089EE748;
L_089EF420:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF44C;
      }
      goto L_089EF428;
    }
L_089EF428:
    ctx.gpr[31] = (0x089EF430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089EF430u) goto L_089EF430;
    return;
L_089EF430:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_089EF454;
    }
    goto L_089EF444;
L_089EF444:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F1248u>(ctx, &aot_mem); return;
      }
      goto L_089EF44C;
    }
L_089EF44C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F1248u>(ctx, &aot_mem); return;
      }
      goto L_089EF454;
    }
L_089EF454:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF5D0;
      }
      goto L_089EF480;
    }
L_089EF480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089EF518;
      }
      goto L_089EF490;
    }
L_089EF490:
    ctx.gpr[4] = (0u | 21u);
    ctx.gpr[17] = (0u | 196u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] << 4u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF504;
      }
      goto L_089EF4CC;
    }
L_089EF4CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_089EF4D0;
L_089EF4D0:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EF5C0;
      }
      goto L_089EF4FC;
    }
L_089EF4FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_089EF594;
      }
      goto L_089EF504;
    }
L_089EF504:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089EF510u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x089EF510u) goto L_089EF510;
    return;
L_089EF510:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F1248u>(ctx, &aot_mem); return;
      }
      goto L_089EF518;
    }
L_089EF518:
    ctx.gpr[20] = (0u | 10u);
    goto L_089EF51C;
L_089EF51C:
    ctx.gpr[31] = (0x089EF524u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(260));
    goto L_089EDFBC;
L_089EF524:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.gpr[31] = (0x089EF530u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089EDB18;
L_089EF530:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089EF570;
      }
      goto L_089EF540;
    }
L_089EF540:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EF578;
      }
      goto L_089EF570;
    }
L_089EF570:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) > 0;
    // nop
      if (branch_taken) {
          goto L_089EF51C;
      }
      goto L_089EF578;
    }
L_089EF578:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EF588;
      }
      goto L_089EF580;
    }
L_089EF580:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F1248u>(ctx, &aot_mem); return;
      }
      goto L_089EF588;
    }
L_089EF588:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089EF4D0;
      }
      goto L_089EF590;
    }
L_089EF590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_089EF594;
L_089EF594:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF5D0;
      }
      goto L_089EF5C0;
    }
L_089EF5C0:
    ctx.gpr[31] = (0x089EF5C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089EE718;
L_089EF5C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EF5E4;
      }
      goto L_089EF5D0;
    }
L_089EF5D0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_089EF5EC;
      }
      goto L_089EF5D8;
    }
L_089EF5D8:
    ctx.gpr[5] = (16928u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089EF5F4;
      }
      goto L_089EF5E4;
    }
L_089EF5E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F1248u>(ctx, &aot_mem); return;
      }
      goto L_089EF5EC;
    }
L_089EF5EC:
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_089EF5F4;
L_089EF5F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(402));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x089EF61Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 270u, 0x088C1B24u>(ctx, &aot_mem) && ctx.pc == 0x089EF61Cu) goto L_089EF61C;
    return;
L_089EF61C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(402))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F1248u>(ctx, &aot_mem); return;
      }
      goto L_089EF628;
    }
L_089EF628:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (2228u << 16u);
      if (branch_taken) {
          goto L_089EF664;
      }
      goto L_089EF630;
    }
L_089EF630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089EF65Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 503u, 0x08976524u>(ctx, &aot_mem) && ctx.pc == 0x089EF65Cu) goto L_089EF65C;
    return;
L_089EF65C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F1248u>(ctx, &aot_mem); return;
      }
      goto L_089EF664;
    }
L_089EF664:
    ctx.gpr[20] = (0u | 0u);
    goto L_089EF668;
L_089EF668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_089EF6FC;
    }
    goto L_089EF69C;
L_089EF69C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 16383u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_089EF6FC;
    }
    goto L_089EF6EC;
L_089EF6EC:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 16u));
      if (branch_taken) {
          goto L_089EF668;
      }
      goto L_089EF6FC;
    }
L_089EF6FC:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (2228u << 16u);
      if (branch_taken) {
          goto L_089EF784;
      }
      goto L_089EF75C;
    }
L_089EF75C:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 7u);
      if (branch_taken) {
          goto L_089EF7B0;
      }
      goto L_089EF784;
    }
L_089EF784:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[4] = (ctx.gpr[4] & 56u);
    ctx.gpr[4] = (ctx.gpr[4] >> 3u);
    ctx.gpr[21] = (ctx.gpr[4] << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    goto L_089EF7B0;
L_089EF7B0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F1248u>(ctx, &aot_mem); return;
      }
      goto L_089EF7B8;
    }
L_089EF7B8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089EF7E0;
      }
      goto L_089EF7CC;
    }
L_089EF7CC:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089EF7E0;
L_089EF7E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089EF840;
      }
      goto L_089EF7F0;
    }
L_089EF7F0:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x089EF7FCu);
    ctx.gpr[4] = (0u | 1472u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 511u, 0x0889E8D8u>(ctx, &aot_mem) && ctx.pc == 0x089EF7FCu) goto L_089EF7FC;
    return;
L_089EF7FC:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_089EF818;
      }
      goto L_089EF808;
    }
L_089EF808:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089EF814u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 577u, 0x08A379F0u>(ctx, &aot_mem) && ctx.pc == 0x089EF814u) goto L_089EF814;
    return;
L_089EF814:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_089EF818;
L_089EF818:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(360), 0u);
        goto L_089EF918;
    }
    goto L_089EF828;
L_089EF828:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089EF834u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 276u, 0x088A9368u>(ctx, &aot_mem) && ctx.pc == 0x089EF834u) goto L_089EF834;
    return;
L_089EF834:
    ctx.gpr[4] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17416), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089EF914;
      }
      goto L_089EF840;
    }
L_089EF840:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089EF868;
      }
      goto L_089EF854;
    }
L_089EF854:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089EF868;
L_089EF868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089EF8C8;
      }
      goto L_089EF878;
    }
L_089EF878:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EF8A8;
      }
      goto L_089EF888;
    }
L_089EF888:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x089EF894u);
    ctx.gpr[4] = (0u | 1424u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 511u, 0x0889E8D8u>(ctx, &aot_mem) && ctx.pc == 0x089EF894u) goto L_089EF894;
    return;
L_089EF894:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] != 0u;
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_089EF8B0;
      }
      goto L_089EF8A0;
    }
L_089EF8A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF8C0;
      }
      goto L_089EF8A8;
    }
L_089EF8A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F1248u>(ctx, &aot_mem); return;
      }
      goto L_089EF8B0;
    }
L_089EF8B0:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089EF8BCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 418u, 0x08A4DFA8u>(ctx, &aot_mem) && ctx.pc == 0x089EF8BCu) goto L_089EF8BC;
    return;
L_089EF8BC:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_089EF8C0;
L_089EF8C0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(360), 0u);
      if (branch_taken) {
          goto L_089EF918;
      }
      goto L_089EF8C8;
    }
L_089EF8C8:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x089EF8D4u);
    ctx.gpr[4] = (0u | 1760u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 511u, 0x0889E8D8u>(ctx, &aot_mem) && ctx.pc == 0x089EF8D4u) goto L_089EF8D4;
    return;
L_089EF8D4:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_089EF8F0;
      }
      goto L_089EF8E0;
    }
L_089EF8E0:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089EF8ECu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 357u, 0x0880E120u>(ctx, &aot_mem) && ctx.pc == 0x089EF8ECu) goto L_089EF8EC;
    return;
L_089EF8EC:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_089EF8F0;
L_089EF8F0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(360), 0u);
        goto L_089EF918;
    }
    goto L_089EF900;
L_089EF900:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089EF90Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 276u, 0x088A9368u>(ctx, &aot_mem) && ctx.pc == 0x089EF90Cu) goto L_089EF90C;
    return;
L_089EF90C:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17416), ctx.gpr[2]);
    goto L_089EF914;
L_089EF914:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(360), 0u);
    goto L_089EF918;
L_089EF918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(352), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(356), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 21u);
      if (branch_taken) {
          goto L_089EF950;
      }
      goto L_089EF938;
    }
L_089EF938:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EFA9C;
      }
      goto L_089EF944;
    }
L_089EF944:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089EF9B8;
      }
      goto L_089EF94C;
    }
L_089EF94C:
    ctx.gpr[5] = (0u | 21u);
    goto L_089EF950;
L_089EF950:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089EFA9C;
      }
      goto L_089EF958;
    }
L_089EF958:
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (16768u << 16u);
    ctx.gpr[31] = (0x089EF970u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089EF970u) goto L_089EF970;
    return;
L_089EF970:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(408))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[31] = (0x089EF9A4u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 316u, 0x0891DA20u>(ctx, &aot_mem) && ctx.pc == 0x089EF9A4u) goto L_089EF9A4;
    return;
L_089EF9A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(603))))));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089EFBEC;
      }
      goto L_089EF9B8;
    }
L_089EF9B8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EFA3C;
      }
      goto L_089EF9F0;
    }
L_089EF9F0:
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16768u << 16u);
    ctx.gpr[31] = (0x089EFA04u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089EFA04u) goto L_089EFA04;
    return;
L_089EFA04:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(408))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089EFA78;
      }
      goto L_089EFA3C;
    }
L_089EFA3C:
    ctx.gpr[31] = (0x089EFA44u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 325u, 0x0891DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x089EFA44u) goto L_089EFA44;
    return;
L_089EFA44:
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(408))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x089EFA6Cu);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 299u, 0x0891D928u>(ctx, &aot_mem) && ctx.pc == 0x089EFA6Cu) goto L_089EFA6C;
    return;
L_089EFA6C:
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089EFA78;
L_089EFA78:
    ctx.gpr[4] = (0u | 148u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089EFA8C;
      }
      goto L_089EFA84;
    }
L_089EFA84:
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(496), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(497), static_cast<std::uint8_t>(0u));
    goto L_089EFA8C;
L_089EFA8C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089EFBEC;
      }
      goto L_089EFA9C;
    }
L_089EFA9C:
    ctx.gpr[4] = (16656u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16736u << 16u);
    ctx.gpr[31] = (0x089EFAB0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089EFAB0u) goto L_089EFAB0;
    return;
L_089EFAB0:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (0u | 3u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089EFB08;
      }
      goto L_089EFAD8;
    }
L_089EFAD8:
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16784u << 16u);
    ctx.gpr[31] = (0x089EFAECu);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089EFAECu) goto L_089EFAEC;
    return;
L_089EFAEC:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089EFB44;
      }
      goto L_089EFB08;
    }
L_089EFB08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(88))))));
        goto L_089EFB48;
    }
    goto L_089EFB18;
L_089EFB18:
    ctx.gpr[4] = (16608u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16672u << 16u);
    ctx.gpr[31] = (0x089EFB2Cu);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089EFB2Cu) goto L_089EFB2C;
    return;
L_089EFB2C:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089EFB44;
L_089EFB44:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(88))))));
    goto L_089EFB48;
L_089EFB48:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(408))))));
        goto L_089EFBB0;
    }
    goto L_089EFB9C;
L_089EFB9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (0u | 5u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(408))))));
        goto L_089EFBD0;
    }
    goto L_089EFBAC;
L_089EFBAC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(408))))));
    goto L_089EFBB0;
L_089EFBB0:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(408))))));
    goto L_089EFBD0;
L_089EFBD0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089EFBEC;
L_089EFBEC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 154u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089EFC04;
      }
      goto L_089EFBFC;
    }
L_089EFBFC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089EFC04;
L_089EFC04:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(376), ctx.gpr[20]);
    ctx.gpr[31] = (0x089EFC10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089EFC10u) goto L_089EFC10;
    return;
L_089EFC10:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[21]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(395), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(396), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.execute_vfpu_vx2i(1u, 0u, 1u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(516));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.execute_vfpu_vx2i(1u, 0u, 1u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), ctx.gpr[4]);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[5]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EFD6C;
      }
      goto L_089EFD5C;
    }
L_089EFD5C:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089EFDAC;
      }
      goto L_089EFD6C;
    }
L_089EFD6C:
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_089EFD84;
    }
    goto L_089EFD84;
L_089EFD84:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_089EFDA8;
    }
    goto L_089EFDA8;
L_089EFDA8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089EFDAC;
L_089EFDAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EFDCC;
      }
      goto L_089EFDC0;
    }
L_089EFDC0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(394), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089EFDD4;
      }
      goto L_089EFDCC;
    }
L_089EFDCC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(394), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089EFDD4;
L_089EFDD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089EFE34;
      }
      goto L_089EFE08;
    }
L_089EFE08:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EFE2C;
      }
      goto L_089EFE10;
    }
L_089EFE10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089EFE2Cu);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EFE2Cu) goto L_089EFE2C;
    return;
L_089EFE2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F1248u>(ctx, &aot_mem); return;
      }
      goto L_089EFE34;
    }
L_089EFE34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(376)));
    ctx.gpr[4] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(372), ctx.gpr[4]);
        goto L_089EFEB4;
    }
    goto L_089EFE48;
L_089EFE48:
    ctx.gpr[31] = (0x089EFE50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089EFE50u) goto L_089EFE50;
    return;
L_089EFE50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(376)));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089EFE48;
      }
      goto L_089EFEB0;
    }
L_089EFEB0:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(372), ctx.gpr[4]);
    goto L_089EFEB4;
L_089EFEB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[7] = (ctx.gpr[4] << 4u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 16383u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EFF10;
      }
      goto L_089EFF04;
    }
L_089EFF04:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(393), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089EFF18;
      }
      goto L_089EFF10;
    }
L_089EFF10:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(393), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089EFF18;
L_089EFF18:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vx2i(1u, 0u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vx2i(1u, 0u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
        goto L_089EFFEC;
    }
    goto L_089EFFDC;
L_089EFFDC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 1u, 0x089F0000u>(ctx, &aot_mem); return;
      }
      goto L_089EFFEC;
    }
L_089EFFEC:
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.pc = 0x089F0000u; return;
}

void recomp_unit_0122(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0122_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_122(Runtime &runtime) {
    runtime.register_generated_unit(122u, 0x089EC000u, 16384u, &recomp_unit_0122, &recomp_unit_0122_entry);
    runtime.register_function(0x089EC000u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC014u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC01Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC038u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC040u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC048u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC050u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC058u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC088u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC090u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC098u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC09Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC0A4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC0BCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC19Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC1CCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC1FCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC218u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC220u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC228u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC230u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC238u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC23Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC244u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC2C4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC2D8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC2ECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC2F4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC308u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC320u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC328u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC390u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC3A4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC3A8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC3BCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC3C4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC3E8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC400u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC414u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC438u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC43Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC454u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC464u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC474u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC47Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC484u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC514u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC524u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC52Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC540u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC554u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC560u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC574u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC588u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC594u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC5A4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC5B8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC5BCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC5C4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC5F8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC60Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC628u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC630u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC638u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC650u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC654u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC664u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC668u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC67Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC690u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC69Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC6C0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC714u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC730u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC74Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC754u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC75Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC784u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC788u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC7CCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC834u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC840u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC890u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC8C8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC8D8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC8E4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC8ECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC904u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC974u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC980u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC98Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC998u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC9A4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC9D4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC9FCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECA0Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECA14u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECA20u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECA28u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECA30u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECA38u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECA6Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECAA4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECAA8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECAB0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECAB8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECAC0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECAC8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECAD0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECAD8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECB0Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECB1Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECB20u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECB2Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECB3Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECB44u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECB4Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECB64u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECBC0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECBD4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECC08u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECC7Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECCC8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECCD8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECCECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECCF8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECD04u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECD78u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECD94u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECDA0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECDB0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECDD8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECDF4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECDFCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECE04u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECE20u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECE28u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECE64u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECEECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECEFCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECF04u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECF1Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECF30u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECF3Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECF48u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECF5Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECF68u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECF70u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECF84u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECF88u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECF98u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECF9Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECFF0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED018u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED028u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED030u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED058u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED060u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED078u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED0B4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED110u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED16Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED198u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED1A8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED1B0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED1C0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED1C8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED1E0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED1E8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED20Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED224u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED234u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED240u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED254u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED260u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED268u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED2B8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED2E0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED2F4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED31Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED324u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED33Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED358u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED370u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED388u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED390u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED3D0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED3ECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED400u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED418u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED420u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED42Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED430u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED444u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED45Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED464u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED474u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED480u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED494u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED4A8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED4B0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED4C8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED4DCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED4E4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED4F0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED504u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED51Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED524u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED528u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED530u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED53Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED550u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED554u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED56Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED574u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED580u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED5A4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED5ACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED5CCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED624u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED684u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED68Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED720u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED728u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED740u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED750u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED758u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED770u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED780u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED788u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED7ECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED7F8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED810u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED818u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED82Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED8BCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED8D8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED8E8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED918u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED93Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED944u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED954u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED968u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED98Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED9B8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED9CCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDA1Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDA64u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDA8Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDAA0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDACCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDAD4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDADCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDAF0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDB00u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDB18u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDB40u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDB4Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDB5Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDB64u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDB6Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDB90u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDBACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDBC0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDBC8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDBD0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDBD8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDBE0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDBE8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDBF0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDC08u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDC20u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDC28u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDC30u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDC48u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDC60u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDC68u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDC70u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDC88u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDCA0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDCA8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDCB0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDCC8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDCE0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDCE8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDCF0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDCF8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDD00u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDD08u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDD24u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDD3Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDD44u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDD5Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDD7Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDD84u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDD8Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDD94u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDD9Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDDA4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDDC0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDDD8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDDE0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDDE8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDDF0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDE0Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDE24u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDE3Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDE44u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDE5Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDE78u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDE80u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDE88u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDE90u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDE98u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDEA0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDEA4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDEB0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDEFCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDF28u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDF30u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDF34u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDF3Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDF50u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDF68u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDF84u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDF94u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDFA4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDFACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDFBCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDFD0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDFE8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE004u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE014u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE024u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE02Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE03Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE094u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE0A4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE0B0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE0E4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE0ECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE0F4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE108u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE118u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE120u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE128u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE148u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE14Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE168u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE190u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE198u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE1A8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE1B8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE20Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE218u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE220u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE228u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE230u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE238u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE240u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE24Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE25Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE268u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE280u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE290u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE29Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE2A4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE2B0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE2D0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE2DCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE2E8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE308u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE324u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE340u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE348u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE350u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE358u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE374u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE37Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE388u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE394u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE3A8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE3C4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE3D4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE3E0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE404u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE40Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE418u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE424u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE430u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE450u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE46Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE484u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE48Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE494u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE49Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE4B8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE4C0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE4DCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE4E8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE4F4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE4FCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE504u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE518u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE520u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE528u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE53Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE550u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE560u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE56Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE580u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE588u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE594u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE59Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE5A4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE5ACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE5B4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE5BCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE5C4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE5D8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE5ECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE5F0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE5FCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE600u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE608u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE61Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE620u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE628u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE63Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE640u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE648u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE65Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE660u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE668u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE670u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE684u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE690u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE698u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE6A0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE6A4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE6ACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE6C4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE6D8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE6F0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE704u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE70Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE710u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE718u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE724u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE72Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE734u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE73Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE740u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE748u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE778u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE780u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE7B4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE7C4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE7D4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE7E0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE7ECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE804u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE80Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE814u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE818u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE840u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE844u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE868u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE874u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE880u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE89Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE8A4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE8C0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE8C8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE8D0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE8D8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE8F4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE908u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE97Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE990u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE9B0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE9E0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE9F4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA00u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA0Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA1Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA24u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA2Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA34u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA44u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA78u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA8Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA94u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA9Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEAA8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEABCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEAC4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEAE8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEAF0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEAF8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEB04u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEB24u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEB2Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEB34u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEB64u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEB78u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEB88u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEB90u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEB98u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEBA0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEBB0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEBB8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEBF8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEBFCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEC00u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEC30u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEC80u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EECD4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EECDCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EECE4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EECECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EED2Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EED80u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EED90u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EED98u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEDA0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEDA8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEDB4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEDC4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEDC8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEDF0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEE1Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEE24u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEE60u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEEA0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEEDCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEEE8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEF24u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEF60u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEF80u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEF84u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEFA0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEFA8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEFB8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEFBCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEFC8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEFD8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEFE8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEFF0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEFF8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF034u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF03Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF044u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF04Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF058u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF08Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF0ACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF0B4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF0E0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF0ECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF0F4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF110u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF13Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF158u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF174u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF17Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF1A8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF1B4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF1BCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF1D8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF204u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF224u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF22Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF258u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF264u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF27Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF284u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF2A4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF2ACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF2D8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF2E4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF2FCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF32Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF368u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF36Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF370u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF3B8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF3C0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF414u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF420u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF428u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF430u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF444u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF44Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF454u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF480u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF490u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF4CCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF4D0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF4FCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF504u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF510u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF518u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF51Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF524u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF530u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF540u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF570u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF578u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF580u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF588u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF590u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF594u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF5C0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF5C8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF5D0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF5D8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF5E4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF5ECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF5F4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF61Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF628u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF630u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF65Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF664u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF668u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF69Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF6ECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF6FCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF75Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF784u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF7B0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF7B8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF7CCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF7E0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF7F0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF7FCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF808u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF814u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF818u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF828u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF834u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF840u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF854u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF868u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF878u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF888u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF894u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF8A0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF8A8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF8B0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF8BCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF8C0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF8C8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF8D4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF8E0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF8ECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF8F0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF900u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF90Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF914u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF918u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF938u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF944u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF94Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF950u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF958u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF970u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF9A4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF9B8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF9F0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFA04u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFA3Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFA44u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFA6Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFA78u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFA84u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFA8Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFA9Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFAB0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFAD8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFAECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFB08u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFB18u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFB2Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFB44u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFB48u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFB9Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFBACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFBB0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFBD0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFBECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFBFCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFC04u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFC10u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFD5Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFD6Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFD84u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFDA8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFDACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFDC0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFDCCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFDD4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFE08u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFE10u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFE2Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFE34u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFE48u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFE50u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFEB0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFEB4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFF04u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFF10u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFF18u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFFDCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFFECu, &recomp_unit_0122, "recomp_unit_0122");
}
} // namespace psprecomp
