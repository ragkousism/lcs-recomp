#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0168[4053] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 8,
    0, 0, 0, 9, 0, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 13, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0,
    0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 39, 0, 0, 0, 0, 0, 40, 41, 0, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 45, 0, 46, 0, 0, 0, 0, 47, 0, 0, 48,
    49, 0, 50, 0, 51, 0, 0, 52, 0, 0, 0, 53, 0, 54, 0, 55, 0, 0, 0, 56, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0,
    0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0,
    0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 67, 0, 68, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0,
    0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    80, 0, 0, 81, 0, 82, 0, 0, 83, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 90, 0, 0, 0, 91, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0,
    0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0,
    0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 113, 0, 0, 114, 0,
    0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 117, 0, 118, 0, 0, 119, 0, 0, 120, 0, 121, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 124,
    0, 0, 125, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0,
    0, 134, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 139, 0,
    0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 147,
    0, 0, 0, 148, 0, 149, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0,
    159, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 164, 0, 165, 0, 166, 0, 0, 0, 167, 0, 168, 0, 0, 0, 169, 0,
    170, 0, 0, 0, 171, 0, 172, 0, 0, 0, 173, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0,
    179, 0, 0, 0, 0, 0, 0, 0, 180, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 185, 0, 0, 0,
    186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0,
    0, 193, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0,
    0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 209, 0, 210, 0, 211, 0, 0, 0,
    0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 214, 0, 0, 0, 215, 0, 216, 0, 217, 0, 218, 219, 0, 0, 0, 0,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 224, 0, 0,
    0, 0, 225, 0, 226, 0, 0, 227, 0, 228, 0, 229, 0, 230, 231, 0, 232, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0,
    0, 241, 0, 0, 242, 0, 243, 0, 0, 244, 0, 245, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 249, 0, 0, 250, 0, 0, 0, 0,
    0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0, 255, 0, 256, 0, 257, 0, 258, 0, 259, 0, 0, 0, 0, 260, 261,
    0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265,
    0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 273, 0, 0, 274, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0,
    0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 280, 0, 281, 282, 0, 0, 0, 283, 0, 284, 0, 285, 286, 0, 287, 0, 0,
    0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0,
    294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 301,
    302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0,
    0, 0, 308, 0, 309, 0, 310, 0, 311, 0, 312, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0, 0, 316, 0, 317, 0, 0, 0, 318, 0,
    0, 319, 0, 0, 320, 0, 0, 321, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 330, 0, 331, 0, 0, 0,
    0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 0, 342, 343, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 0,
    347, 0, 348, 0, 349, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0,
    0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 359, 0,
    0, 0, 0, 0, 360, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0,
    0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0,
    0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0,
    0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 383, 0, 384, 0, 385, 0, 0, 0, 0, 386, 0, 387, 0, 388,
    0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 393, 0, 394, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 397, 0, 398, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 401,
    0, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 408, 0, 0, 0,
    0, 0, 409, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0,
    0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417,
    0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0,
    0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 427, 428, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 432, 0, 433, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 436, 0,
    437, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 439, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 443, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 446, 0, 447, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0,
    450, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 457,
    0, 0, 458, 0, 0, 0, 0, 0, 0, 459, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0,
    0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0, 469, 470, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0,
    473, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 476, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 0,
    0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 482, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0,
    0, 485, 0, 0, 0, 0, 0, 0, 486, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 489, 0, 490,
    491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 494, 495,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 504, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 506, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0,
    0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 512, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 0,
    0, 516, 0, 0, 0, 517, 0, 0, 0, 518, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 0,
    0, 0, 522, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 529, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 532, 0, 533,
    0, 534, 0, 0, 0, 0, 0, 0, 0, 535, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 538, 0, 0, 0, 0, 539, 0, 0,
    0, 540, 0, 0, 0, 541, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 544, 0, 0, 0, 0, 545, 0, 546, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 552, 0, 0, 0,
    0, 553, 0, 0, 0, 554, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 557, 0, 0, 0, 0, 558, 0, 559, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 565, 0, 0, 0, 0, 566, 0,
    0, 0, 567, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 570, 0, 0, 0, 0, 571, 0, 572, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 573, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 576, 0, 577, 0, 578, 0, 0, 0, 0, 0, 0, 0, 579, 0, 580, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 582, 0, 0, 583, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 585, 0, 0, 0, 0, 586, 0, 0, 587, 0, 0, 0, 588, 0, 589, 0, 0, 0,
    590, 0, 0, 0, 591, 0, 0, 592, 0, 593, 594, 0, 0, 595, 0, 0, 0, 0, 596, 0, 597, 0, 0, 598, 0, 599, 0, 0, 600, 0, 0, 0,
    0, 601, 0, 0, 0, 0, 0, 602, 0, 0, 0, 603, 0, 0, 0, 0, 604, 0, 0, 0, 0, 605, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0,
    607, 0, 0, 608, 0, 0, 609, 0, 0, 0, 610, 0, 0, 0, 611, 0, 612, 613, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0,
    0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0,
    622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 629, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0,
    0, 0, 632, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0,
    0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 641, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 644, 0, 645, 0, 0, 0, 0, 0, 0, 646, 0, 647,
    0, 648, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 652, 0, 653,
};
void recomp_unit_0168_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AA4000u;
        entry_id = (entry_delta < 16212u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0168[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AA4000;
    case 2u: goto L_08AA4018;
    case 3u: goto L_08AA4020;
    case 4u: goto L_08AA402C;
    case 5u: goto L_08AA4040;
    case 6u: goto L_08AA4058;
    case 7u: goto L_08AA406C;
    case 8u: goto L_08AA407C;
    case 9u: goto L_08AA408C;
    case 10u: goto L_08AA4098;
    case 11u: goto L_08AA40A4;
    case 12u: goto L_08AA40B4;
    case 13u: goto L_08AA40BC;
    case 14u: goto L_08AA40C8;
    case 15u: goto L_08AA40DC;
    case 16u: goto L_08AA40F0;
    case 17u: goto L_08AA4120;
    case 18u: goto L_08AA4140;
    case 19u: goto L_08AA414C;
    case 20u: goto L_08AA4158;
    case 21u: goto L_08AA4168;
    case 22u: goto L_08AA4180;
    case 23u: goto L_08AA4190;
    case 24u: goto L_08AA41A4;
    case 25u: goto L_08AA41CC;
    case 26u: goto L_08AA41DC;
    case 27u: goto L_08AA41E4;
    case 28u: goto L_08AA4214;
    case 29u: goto L_08AA4224;
    case 30u: goto L_08AA423C;
    case 31u: goto L_08AA425C;
    case 32u: goto L_08AA426C;
    case 33u: goto L_08AA4288;
    case 34u: goto L_08AA4298;
    case 35u: goto L_08AA42B0;
    case 36u: goto L_08AA42E4;
    case 37u: goto L_08AA42F8;
    case 38u: goto L_08AA4310;
    case 39u: goto L_08AA4388;
    case 40u: goto L_08AA43A0;
    case 41u: goto L_08AA43A4;
    case 42u: goto L_08AA43B4;
    case 43u: goto L_08AA43C0;
    case 44u: goto L_08AA43CC;
    case 45u: goto L_08AA43D4;
    case 46u: goto L_08AA43DC;
    case 47u: goto L_08AA43F0;
    case 48u: goto L_08AA43FC;
    case 49u: goto L_08AA4400;
    case 50u: goto L_08AA4408;
    case 51u: goto L_08AA4410;
    case 52u: goto L_08AA441C;
    case 53u: goto L_08AA442C;
    case 54u: goto L_08AA4434;
    case 55u: goto L_08AA443C;
    case 56u: goto L_08AA444C;
    case 57u: goto L_08AA445C;
    case 58u: goto L_08AA4464;
    case 59u: goto L_08AA4488;
    case 60u: goto L_08AA44D4;
    case 61u: goto L_08AA44F8;
    case 62u: goto L_08AA4508;
    case 63u: goto L_08AA4524;
    case 64u: goto L_08AA4544;
    case 65u: goto L_08AA4554;
    case 66u: goto L_08AA4570;
    case 67u: goto L_08AA4588;
    case 68u: goto L_08AA4590;
    case 69u: goto L_08AA4598;
    case 70u: goto L_08AA45A0;
    case 71u: goto L_08AA45D4;
    case 72u: goto L_08AA45E8;
    case 73u: goto L_08AA45F0;
    case 74u: goto L_08AA4600;
    case 75u: goto L_08AA4668;
    case 76u: goto L_08AA4670;
    case 77u: goto L_08AA4684;
    case 78u: goto L_08AA46AC;
    case 79u: goto L_08AA46B4;
    case 80u: goto L_08AA4700;
    case 81u: goto L_08AA470C;
    case 82u: goto L_08AA4714;
    case 83u: goto L_08AA4720;
    case 84u: goto L_08AA4728;
    case 85u: goto L_08AA4738;
    case 86u: goto L_08AA4750;
    case 87u: goto L_08AA475C;
    case 88u: goto L_08AA477C;
    case 89u: goto L_08AA47C0;
    case 90u: goto L_08AA47C4;
    case 91u: goto L_08AA47D4;
    case 92u: goto L_08AA47E0;
    case 93u: goto L_08AA47E8;
    case 94u: goto L_08AA4804;
    case 95u: goto L_08AA480C;
    case 96u: goto L_08AA4814;
    case 97u: goto L_08AA481C;
    case 98u: goto L_08AA4824;
    case 99u: goto L_08AA4834;
    case 100u: goto L_08AA4850;
    case 101u: goto L_08AA4858;
    case 102u: goto L_08AA4860;
    case 103u: goto L_08AA48A8;
    case 104u: goto L_08AA48EC;
    case 105u: goto L_08AA4904;
    case 106u: goto L_08AA4910;
    case 107u: goto L_08AA4930;
    case 108u: goto L_08AA4988;
    case 109u: goto L_08AA49A4;
    case 110u: goto L_08AA49BC;
    case 111u: goto L_08AA49D0;
    case 112u: goto L_08AA49E4;
    case 113u: goto L_08AA49EC;
    case 114u: goto L_08AA49F8;
    case 115u: goto L_08AA4A0C;
    case 116u: goto L_08AA4A1C;
    case 117u: goto L_08AA4A28;
    case 118u: goto L_08AA4A30;
    case 119u: goto L_08AA4A3C;
    case 120u: goto L_08AA4A48;
    case 121u: goto L_08AA4A50;
    case 122u: goto L_08AA4A60;
    case 123u: goto L_08AA4A6C;
    case 124u: goto L_08AA4A7C;
    case 125u: goto L_08AA4A88;
    case 126u: goto L_08AA4A90;
    case 127u: goto L_08AA4A9C;
    case 128u: goto L_08AA4AA8;
    case 129u: goto L_08AA4AB8;
    case 130u: goto L_08AA4AC0;
    case 131u: goto L_08AA4AD4;
    case 132u: goto L_08AA4AE0;
    case 133u: goto L_08AA4AF0;
    case 134u: goto L_08AA4B04;
    case 135u: goto L_08AA4B10;
    case 136u: goto L_08AA4B18;
    case 137u: goto L_08AA4B58;
    case 138u: goto L_08AA4B70;
    case 139u: goto L_08AA4B78;
    case 140u: goto L_08AA4B9C;
    case 141u: goto L_08AA4BA8;
    case 142u: goto L_08AA4BC0;
    case 143u: goto L_08AA4BD0;
    case 144u: goto L_08AA4BDC;
    case 145u: goto L_08AA4BE8;
    case 146u: goto L_08AA4BF4;
    case 147u: goto L_08AA4BFC;
    case 148u: goto L_08AA4C0C;
    case 149u: goto L_08AA4C14;
    case 150u: goto L_08AA4C1C;
    case 151u: goto L_08AA4C24;
    case 152u: goto L_08AA4C44;
    case 153u: goto L_08AA4C54;
    case 154u: goto L_08AA4C60;
    case 155u: goto L_08AA4C78;
    case 156u: goto L_08AA4CBC;
    case 157u: goto L_08AA4CDC;
    case 158u: goto L_08AA4CF8;
    case 159u: goto L_08AA4D00;
    case 160u: goto L_08AA4D04;
    case 161u: goto L_08AA4D10;
    case 162u: goto L_08AA4D30;
    case 163u: goto L_08AA4D38;
    case 164u: goto L_08AA4D40;
    case 165u: goto L_08AA4D48;
    case 166u: goto L_08AA4D50;
    case 167u: goto L_08AA4D60;
    case 168u: goto L_08AA4D68;
    case 169u: goto L_08AA4D78;
    case 170u: goto L_08AA4D80;
    case 171u: goto L_08AA4D90;
    case 172u: goto L_08AA4D98;
    case 173u: goto L_08AA4DA8;
    case 174u: goto L_08AA4DB0;
    case 175u: goto L_08AA4DC0;
    case 176u: goto L_08AA4DD4;
    case 177u: goto L_08AA4DE0;
    case 178u: goto L_08AA4DF4;
    case 179u: goto L_08AA4E00;
    case 180u: goto L_08AA4E20;
    case 181u: goto L_08AA4E24;
    case 182u: goto L_08AA4E30;
    case 183u: goto L_08AA4E5C;
    case 184u: goto L_08AA4E68;
    case 185u: goto L_08AA4E70;
    case 186u: goto L_08AA4E80;
    case 187u: goto L_08AA4E90;
    case 188u: goto L_08AA4EA0;
    case 189u: goto L_08AA4EBC;
    case 190u: goto L_08AA4ED0;
    case 191u: goto L_08AA4EE0;
    case 192u: goto L_08AA4EF8;
    case 193u: goto L_08AA4F04;
    case 194u: goto L_08AA4F0C;
    case 195u: goto L_08AA4F1C;
    case 196u: goto L_08AA4F2C;
    case 197u: goto L_08AA4F3C;
    case 198u: goto L_08AA4F4C;
    case 199u: goto L_08AA4F70;
    case 200u: goto L_08AA4F84;
    case 201u: goto L_08AA4F90;
    case 202u: goto L_08AA4FAC;
    case 203u: goto L_08AA4FE0;
    case 204u: goto L_08AA4FF8;
    case 205u: goto L_08AA500C;
    case 206u: goto L_08AA5020;
    case 207u: goto L_08AA5040;
    case 208u: goto L_08AA5054;
    case 209u: goto L_08AA5060;
    case 210u: goto L_08AA5068;
    case 211u: goto L_08AA5070;
    case 212u: goto L_08AA5084;
    case 213u: goto L_08AA50BC;
    case 214u: goto L_08AA50C0;
    case 215u: goto L_08AA50D0;
    case 216u: goto L_08AA50D8;
    case 217u: goto L_08AA50E0;
    case 218u: goto L_08AA50E8;
    case 219u: goto L_08AA50EC;
    case 220u: goto L_08AA5110;
    case 221u: goto L_08AA5138;
    case 222u: goto L_08AA5144;
    case 223u: goto L_08AA5170;
    case 224u: goto L_08AA5174;
    case 225u: goto L_08AA5188;
    case 226u: goto L_08AA5190;
    case 227u: goto L_08AA519C;
    case 228u: goto L_08AA51A4;
    case 229u: goto L_08AA51AC;
    case 230u: goto L_08AA51B4;
    case 231u: goto L_08AA51B8;
    case 232u: goto L_08AA51C0;
    case 233u: goto L_08AA51C4;
    case 234u: goto L_08AA51D0;
    case 235u: goto L_08AA51F4;
    case 236u: goto L_08AA5220;
    case 237u: goto L_08AA5240;
    case 238u: goto L_08AA5260;
    case 239u: goto L_08AA526C;
    case 240u: goto L_08AA5278;
    case 241u: goto L_08AA5284;
    case 242u: goto L_08AA5290;
    case 243u: goto L_08AA5298;
    case 244u: goto L_08AA52A4;
    case 245u: goto L_08AA52AC;
    case 246u: goto L_08AA52B0;
    case 247u: goto L_08AA52C8;
    case 248u: goto L_08AA52D8;
    case 249u: goto L_08AA52E0;
    case 250u: goto L_08AA52EC;
    case 251u: goto L_08AA5304;
    case 252u: goto L_08AA5324;
    case 253u: goto L_08AA5330;
    case 254u: goto L_08AA533C;
    case 255u: goto L_08AA5344;
    case 256u: goto L_08AA534C;
    case 257u: goto L_08AA5354;
    case 258u: goto L_08AA535C;
    case 259u: goto L_08AA5364;
    case 260u: goto L_08AA5378;
    case 261u: goto L_08AA537C;
    case 262u: goto L_08AA5388;
    case 263u: goto L_08AA53B4;
    case 264u: goto L_08AA53DC;
    case 265u: goto L_08AA53FC;
    case 266u: goto L_08AA541C;
    case 267u: goto L_08AA5430;
    case 268u: goto L_08AA5470;
    case 269u: goto L_08AA5500;
    case 270u: goto L_08AA551C;
    case 271u: goto L_08AA5534;
    case 272u: goto L_08AA553C;
    case 273u: goto L_08AA5548;
    case 274u: goto L_08AA5554;
    case 275u: goto L_08AA555C;
    case 276u: goto L_08AA5570;
    case 277u: goto L_08AA5590;
    case 278u: goto L_08AA55A0;
    case 279u: goto L_08AA55AC;
    case 280u: goto L_08AA55BC;
    case 281u: goto L_08AA55C4;
    case 282u: goto L_08AA55C8;
    case 283u: goto L_08AA55D8;
    case 284u: goto L_08AA55E0;
    case 285u: goto L_08AA55E8;
    case 286u: goto L_08AA55EC;
    case 287u: goto L_08AA55F4;
    case 288u: goto L_08AA5608;
    case 289u: goto L_08AA562C;
    case 290u: goto L_08AA5638;
    case 291u: goto L_08AA564C;
    case 292u: goto L_08AA566C;
    case 293u: goto L_08AA5674;
    case 294u: goto L_08AA5680;
    case 295u: goto L_08AA56A4;
    case 296u: goto L_08AA56AC;
    case 297u: goto L_08AA56B8;
    case 298u: goto L_08AA56CC;
    case 299u: goto L_08AA56D8;
    case 300u: goto L_08AA56F0;
    case 301u: goto L_08AA56FC;
    case 302u: goto L_08AA5700;
    case 303u: goto L_08AA5710;
    case 304u: goto L_08AA5728;
    case 305u: goto L_08AA5738;
    case 306u: goto L_08AA5768;
    case 307u: goto L_08AA5778;
    case 308u: goto L_08AA5788;
    case 309u: goto L_08AA5790;
    case 310u: goto L_08AA5798;
    case 311u: goto L_08AA57A0;
    case 312u: goto L_08AA57A8;
    case 313u: goto L_08AA57B0;
    case 314u: goto L_08AA57CC;
    case 315u: goto L_08AA57D4;
    case 316u: goto L_08AA57E0;
    case 317u: goto L_08AA57E8;
    case 318u: goto L_08AA57F8;
    case 319u: goto L_08AA5804;
    case 320u: goto L_08AA5810;
    case 321u: goto L_08AA581C;
    case 322u: goto L_08AA5820;
    case 323u: goto L_08AA5834;
    case 324u: goto L_08AA5860;
    case 325u: goto L_08AA587C;
    case 326u: goto L_08AA58A4;
    case 327u: goto L_08AA58B0;
    case 328u: goto L_08AA58CC;
    case 329u: goto L_08AA58E0;
    case 330u: goto L_08AA58E8;
    case 331u: goto L_08AA58F0;
    case 332u: goto L_08AA5908;
    case 333u: goto L_08AA5910;
    case 334u: goto L_08AA5934;
    case 335u: goto L_08AA593C;
    case 336u: goto L_08AA594C;
    case 337u: goto L_08AA595C;
    case 338u: goto L_08AA5968;
    case 339u: goto L_08AA59B4;
    case 340u: goto L_08AA5A1C;
    case 341u: goto L_08AA5A24;
    case 342u: goto L_08AA5A30;
    case 343u: goto L_08AA5A34;
    case 344u: goto L_08AA5A44;
    case 345u: goto L_08AA5A58;
    case 346u: goto L_08AA5A64;
    case 347u: goto L_08AA5A80;
    case 348u: goto L_08AA5A88;
    case 349u: goto L_08AA5A90;
    case 350u: goto L_08AA5A98;
    case 351u: goto L_08AA5AA4;
    case 352u: goto L_08AA5AF8;
    case 353u: goto L_08AA5B18;
    case 354u: goto L_08AA5B2C;
    case 355u: goto L_08AA5B34;
    case 356u: goto L_08AA5B44;
    case 357u: goto L_08AA5B5C;
    case 358u: goto L_08AA5B68;
    case 359u: goto L_08AA5B78;
    case 360u: goto L_08AA5B90;
    case 361u: goto L_08AA5B98;
    case 362u: goto L_08AA5BF0;
    case 363u: goto L_08AA5C0C;
    case 364u: goto L_08AA5C24;
    case 365u: goto L_08AA5C3C;
    case 366u: goto L_08AA5C54;
    case 367u: goto L_08AA5C6C;
    case 368u: goto L_08AA5C84;
    case 369u: goto L_08AA5C9C;
    case 370u: goto L_08AA5CB4;
    case 371u: goto L_08AA5D30;
    case 372u: goto L_08AA5D38;
    case 373u: goto L_08AA5D4C;
    case 374u: goto L_08AA5D60;
    case 375u: goto L_08AA5D74;
    case 376u: goto L_08AA5D8C;
    case 377u: goto L_08AA5DB8;
    case 378u: goto L_08AA5DC8;
    case 379u: goto L_08AA5DCC;
    case 380u: goto L_08AA5DE8;
    case 381u: goto L_08AA5E2C;
    case 382u: goto L_08AA5E3C;
    case 383u: goto L_08AA5E48;
    case 384u: goto L_08AA5E50;
    case 385u: goto L_08AA5E58;
    case 386u: goto L_08AA5E6C;
    case 387u: goto L_08AA5E74;
    case 388u: goto L_08AA5E7C;
    case 389u: goto L_08AA5EA0;
    case 390u: goto L_08AA5EAC;
    case 391u: goto L_08AA5EB4;
    case 392u: goto L_08AA5F20;
    case 393u: goto L_08AA5F28;
    case 394u: goto L_08AA5F30;
    case 395u: goto L_08AA5F38;
    case 396u: goto L_08AA5F60;
    case 397u: goto L_08AA5F6C;
    case 398u: goto L_08AA5F74;
    case 399u: goto L_08AA5FE0;
    case 400u: goto L_08AA5FEC;
    case 401u: goto L_08AA5FFC;
    case 402u: goto L_08AA6008;
    case 403u: goto L_08AA6024;
    case 404u: goto L_08AA6034;
    case 405u: goto L_08AA603C;
    case 406u: goto L_08AA6050;
    case 407u: goto L_08AA6068;
    case 408u: goto L_08AA6070;
    case 409u: goto L_08AA6088;
    case 410u: goto L_08AA6090;
    case 411u: goto L_08AA60E8;
    case 412u: goto L_08AA6104;
    case 413u: goto L_08AA611C;
    case 414u: goto L_08AA6134;
    case 415u: goto L_08AA614C;
    case 416u: goto L_08AA6164;
    case 417u: goto L_08AA617C;
    case 418u: goto L_08AA6194;
    case 419u: goto L_08AA61AC;
    case 420u: goto L_08AA6228;
    case 421u: goto L_08AA6230;
    case 422u: goto L_08AA6244;
    case 423u: goto L_08AA6258;
    case 424u: goto L_08AA626C;
    case 425u: goto L_08AA6284;
    case 426u: goto L_08AA62B0;
    case 427u: goto L_08AA62C0;
    case 428u: goto L_08AA62C4;
    case 429u: goto L_08AA62E0;
    case 430u: goto L_08AA6324;
    case 431u: goto L_08AA6334;
    case 432u: goto L_08AA6340;
    case 433u: goto L_08AA6348;
    case 434u: goto L_08AA6350;
    case 435u: goto L_08AA6370;
    case 436u: goto L_08AA6378;
    case 437u: goto L_08AA6380;
    case 438u: goto L_08AA63A4;
    case 439u: goto L_08AA63B0;
    case 440u: goto L_08AA63B8;
    case 441u: goto L_08AA6424;
    case 442u: goto L_08AA642C;
    case 443u: goto L_08AA6434;
    case 444u: goto L_08AA643C;
    case 445u: goto L_08AA6464;
    case 446u: goto L_08AA6470;
    case 447u: goto L_08AA6478;
    case 448u: goto L_08AA64E4;
    case 449u: goto L_08AA64F0;
    case 450u: goto L_08AA6500;
    case 451u: goto L_08AA650C;
    case 452u: goto L_08AA6528;
    case 453u: goto L_08AA6538;
    case 454u: goto L_08AA6540;
    case 455u: goto L_08AA6554;
    case 456u: goto L_08AA656C;
    case 457u: goto L_08AA657C;
    case 458u: goto L_08AA6588;
    case 459u: goto L_08AA65A4;
    case 460u: goto L_08AA65A8;
    case 461u: goto L_08AA6610;
    case 462u: goto L_08AA6644;
    case 463u: goto L_08AA6650;
    case 464u: goto L_08AA6674;
    case 465u: goto L_08AA668C;
    case 466u: goto L_08AA6698;
    case 467u: goto L_08AA66A8;
    case 468u: goto L_08AA66BC;
    case 469u: goto L_08AA66C4;
    case 470u: goto L_08AA66C8;
    case 471u: goto L_08AA66E0;
    case 472u: goto L_08AA66F4;
    case 473u: goto L_08AA6700;
    case 474u: goto L_08AA6710;
    case 475u: goto L_08AA6724;
    case 476u: goto L_08AA672C;
    case 477u: goto L_08AA6730;
    case 478u: goto L_08AA675C;
    case 479u: goto L_08AA676C;
    case 480u: goto L_08AA6788;
    case 481u: goto L_08AA6798;
    case 482u: goto L_08AA67A8;
    case 483u: goto L_08AA67AC;
    case 484u: goto L_08AA67F4;
    case 485u: goto L_08AA6804;
    case 486u: goto L_08AA6820;
    case 487u: goto L_08AA6828;
    case 488u: goto L_08AA6858;
    case 489u: goto L_08AA6874;
    case 490u: goto L_08AA687C;
    case 491u: goto L_08AA6880;
    case 492u: goto L_08AA68B0;
    case 493u: goto L_08AA68E0;
    case 494u: goto L_08AA68F8;
    case 495u: goto L_08AA68FC;
    case 496u: goto L_08AA6938;
    case 497u: goto L_08AA6944;
    case 498u: goto L_08AA69C0;
    case 499u: goto L_08AA69CC;
    case 500u: goto L_08AA6A08;
    case 501u: goto L_08AA6A18;
    case 502u: goto L_08AA6A34;
    case 503u: goto L_08AA6A44;
    case 504u: goto L_08AA6A54;
    case 505u: goto L_08AA6A58;
    case 506u: goto L_08AA6A8C;
    case 507u: goto L_08AA6A9C;
    case 508u: goto L_08AA6AB8;
    case 509u: goto L_08AA6AC0;
    case 510u: goto L_08AA6AF4;
    case 511u: goto L_08AA6B04;
    case 512u: goto L_08AA6B98;
    case 513u: goto L_08AA6BA4;
    case 514u: goto L_08AA6BD8;
    case 515u: goto L_08AA6BE8;
    case 516u: goto L_08AA6C04;
    case 517u: goto L_08AA6C14;
    case 518u: goto L_08AA6C24;
    case 519u: goto L_08AA6C28;
    case 520u: goto L_08AA6C5C;
    case 521u: goto L_08AA6C6C;
    case 522u: goto L_08AA6C88;
    case 523u: goto L_08AA6C90;
    case 524u: goto L_08AA6CC4;
    case 525u: goto L_08AA6CD4;
    case 526u: goto L_08AA6D94;
    case 527u: goto L_08AA6DD0;
    case 528u: goto L_08AA6E58;
    case 529u: goto L_08AA6E74;
    case 530u: goto L_08AA6F98;
    case 531u: goto L_08AA6FEC;
    case 532u: goto L_08AA6FF4;
    case 533u: goto L_08AA6FFC;
    case 534u: goto L_08AA7004;
    case 535u: goto L_08AA7024;
    case 536u: goto L_08AA702C;
    case 537u: goto L_08AA7054;
    case 538u: goto L_08AA7060;
    case 539u: goto L_08AA7074;
    case 540u: goto L_08AA7084;
    case 541u: goto L_08AA7094;
    case 542u: goto L_08AA7098;
    case 543u: goto L_08AA70D0;
    case 544u: goto L_08AA70DC;
    case 545u: goto L_08AA70F0;
    case 546u: goto L_08AA70F8;
    case 547u: goto L_08AA7134;
    case 548u: goto L_08AA7140;
    case 549u: goto L_08AA71B4;
    case 550u: goto L_08AA71BC;
    case 551u: goto L_08AA71E4;
    case 552u: goto L_08AA71F0;
    case 553u: goto L_08AA7204;
    case 554u: goto L_08AA7214;
    case 555u: goto L_08AA7224;
    case 556u: goto L_08AA7250;
    case 557u: goto L_08AA725C;
    case 558u: goto L_08AA7270;
    case 559u: goto L_08AA7278;
    case 560u: goto L_08AA72A0;
    case 561u: goto L_08AA72AC;
    case 562u: goto L_08AA7328;
    case 563u: goto L_08AA7330;
    case 564u: goto L_08AA7358;
    case 565u: goto L_08AA7364;
    case 566u: goto L_08AA7378;
    case 567u: goto L_08AA7388;
    case 568u: goto L_08AA7398;
    case 569u: goto L_08AA73C4;
    case 570u: goto L_08AA73D0;
    case 571u: goto L_08AA73E4;
    case 572u: goto L_08AA73EC;
    case 573u: goto L_08AA7414;
    case 574u: goto L_08AA741C;
    case 575u: goto L_08AA762C;
    case 576u: goto L_08AA7688;
    case 577u: goto L_08AA7690;
    case 578u: goto L_08AA7698;
    case 579u: goto L_08AA76B8;
    case 580u: goto L_08AA76C0;
    case 581u: goto L_08AA76D8;
    case 582u: goto L_08AA76EC;
    case 583u: goto L_08AA76F8;
    case 584u: goto L_08AA772C;
    case 585u: goto L_08AA7738;
    case 586u: goto L_08AA774C;
    case 587u: goto L_08AA7758;
    case 588u: goto L_08AA7768;
    case 589u: goto L_08AA7770;
    case 590u: goto L_08AA7780;
    case 591u: goto L_08AA7790;
    case 592u: goto L_08AA779C;
    case 593u: goto L_08AA77A4;
    case 594u: goto L_08AA77A8;
    case 595u: goto L_08AA77B4;
    case 596u: goto L_08AA77C8;
    case 597u: goto L_08AA77D0;
    case 598u: goto L_08AA77DC;
    case 599u: goto L_08AA77E4;
    case 600u: goto L_08AA77F0;
    case 601u: goto L_08AA7804;
    case 602u: goto L_08AA781C;
    case 603u: goto L_08AA782C;
    case 604u: goto L_08AA7840;
    case 605u: goto L_08AA7854;
    case 606u: goto L_08AA7868;
    case 607u: goto L_08AA7880;
    case 608u: goto L_08AA788C;
    case 609u: goto L_08AA7898;
    case 610u: goto L_08AA78A8;
    case 611u: goto L_08AA78B8;
    case 612u: goto L_08AA78C0;
    case 613u: goto L_08AA78C4;
    case 614u: goto L_08AA78E0;
    case 615u: goto L_08AA7928;
    case 616u: goto L_08AA7970;
    case 617u: goto L_08AA79CC;
    case 618u: goto L_08AA79EC;
    case 619u: goto L_08AA7A04;
    case 620u: goto L_08AA7A2C;
    case 621u: goto L_08AA7A6C;
    case 622u: goto L_08AA7A80;
    case 623u: goto L_08AA7AA8;
    case 624u: goto L_08AA7AE8;
    case 625u: goto L_08AA7B44;
    case 626u: goto L_08AA7B5C;
    case 627u: goto L_08AA7BA0;
    case 628u: goto L_08AA7BE4;
    case 629u: goto L_08AA7BEC;
    case 630u: goto L_08AA7C30;
    case 631u: goto L_08AA7C74;
    case 632u: goto L_08AA7C88;
    case 633u: goto L_08AA7CA4;
    case 634u: goto L_08AA7CB8;
    case 635u: goto L_08AA7CDC;
    case 636u: goto L_08AA7D34;
    case 637u: goto L_08AA7D74;
    case 638u: goto L_08AA7D84;
    case 639u: goto L_08AA7DCC;
    case 640u: goto L_08AA7DD4;
    case 641u: goto L_08AA7E04;
    case 642u: goto L_08AA7E20;
    case 643u: goto L_08AA7E38;
    case 644u: goto L_08AA7E50;
    case 645u: goto L_08AA7E58;
    case 646u: goto L_08AA7E74;
    case 647u: goto L_08AA7E7C;
    case 648u: goto L_08AA7E84;
    case 649u: goto L_08AA7E8C;
    case 650u: goto L_08AA7ED4;
    case 651u: goto L_08AA7F34;
    case 652u: goto L_08AA7F48;
    case 653u: goto L_08AA7F50;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AA4000:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA4018u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AA4C78;
L_08AA4018:
    ctx.gpr[31] = (0x08AA4020u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 838u, 0x08AA3F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA4020u) goto L_08AA4020;
    return;
L_08AA4020:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AA402Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 839u, 0x08AA3F84u>(ctx, &aot_mem) && ctx.pc == 0x08AA402Cu) goto L_08AA402C;
    return;
L_08AA402C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AA4040u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 662u, 0x08AA3164u>(ctx, &aot_mem) && ctx.pc == 0x08AA4040u) goto L_08AA4040;
    return;
L_08AA4040:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19416));
    ctx.gpr[31] = (0x08AA4058u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 662u, 0x08AA3164u>(ctx, &aot_mem) && ctx.pc == 0x08AA4058u) goto L_08AA4058;
    return;
L_08AA4058:
    ctx.gpr[22] = (2227u << 16u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[16] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-19396));
    goto L_08AA406C;
L_08AA406C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AA40A4;
      }
      goto L_08AA407C;
    }
L_08AA407C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA4098;
      }
      goto L_08AA408C;
    }
L_08AA408C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AA408C;
      }
      goto L_08AA4098;
    }
L_08AA4098:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AA40A4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 662u, 0x08AA3164u>(ctx, &aot_mem) && ctx.pc == 0x08AA40A4u) goto L_08AA40A4;
    return;
L_08AA40A4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[20] < static_cast<std::uint32_t>(64) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA406C;
      }
      goto L_08AA40B4;
    }
L_08AA40B4:
    ctx.gpr[31] = (0x08AA40BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 838u, 0x08AA3F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA40BCu) goto L_08AA40BC;
    return;
L_08AA40BC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AA40C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 839u, 0x08AA3F84u>(ctx, &aot_mem) && ctx.pc == 0x08AA40C8u) goto L_08AA40C8;
    return;
L_08AA40C8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AA40DCu);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 662u, 0x08AA3164u>(ctx, &aot_mem) && ctx.pc == 0x08AA40DCu) goto L_08AA40DC;
    return;
L_08AA40DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AA40F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19368));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 662u, 0x08AA3164u>(ctx, &aot_mem) && ctx.pc == 0x08AA40F0u) goto L_08AA40F0;
    return;
L_08AA40F0:
    rt.unsupported(0x08AA40F0u, 0x0000000Du, "special? not lowered yet"); return;
L_08AA4120:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA4180;
      }
      goto L_08AA4140;
    }
L_08AA4140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08AA414Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AA4388;
L_08AA414C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4180;
      }
      goto L_08AA4158;
    }
L_08AA4158:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08AA4168u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AA4464;
L_08AA4168:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA4190;
      }
      goto L_08AA4180;
    }
L_08AA4180:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
      if (branch_taken) {
          goto L_08AA4180_cb;
      }
      goto L_08AA4180_root;
    }
L_08AA4180_root:
    // Unlinked root cannot be reused. Drop it so a later free can start a new tree.
    { const bool branch_taken = ctx.gpr[6] < 0x08000000u || ctx.gpr[6] >= 0x0A000000u || aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)) == 0u || aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)) < 0x08000000u || aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)) >= 0x0A000000u;
      if (branch_taken) {
          aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
          goto L_08AA4180_cb;
      }
      goto L_08AA4180_cb;
    }
L_08AA4180_cb:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AA4190u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA4190u) goto L_08AA4190;
    return;
L_08AA4190:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA41A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AA4288;
      }
      goto L_08AA41CC;
    }
L_08AA41CC:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08AA41DCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_08AA4388;
L_08AA41DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4288;
      }
      goto L_08AA41E4;
    }
L_08AA41E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4224;
      }
      goto L_08AA4214;
    }
L_08AA4214:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    goto L_08AA4224;
L_08AA4224:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA423Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08AA4524;
L_08AA423C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA426C;
      }
      goto L_08AA425C;
    }
L_08AA425C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08AA426C;
L_08AA426C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[2] - ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA4298;
      }
      goto L_08AA4288;
    }
L_08AA4288:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
      if (branch_taken) {
          goto L_08AA4288_cb;
      }
      goto L_08AA4288_root;
    }
L_08AA4288_root:
    // Unlinked root cannot be reused. Drop it so a later free can start a new tree.
    { const bool branch_taken = ctx.gpr[6] < 0x08000000u || ctx.gpr[6] >= 0x0A000000u || aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)) == 0u || aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)) < 0x08000000u || aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)) >= 0x0A000000u;
      if (branch_taken) {
          aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
          goto L_08AA4288_cb;
      }
      goto L_08AA4288_cb;
    }
L_08AA4288_cb:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AA4298u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA4298u) goto L_08AA4298;
    return;
L_08AA4298:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA42B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA42E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19340));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 662u, 0x08AA3164u>(ctx, &aot_mem) && ctx.pc == 0x08AA42E4u) goto L_08AA42E4;
    return;
L_08AA42E4:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[5]);
        goto L_08AA4310;
    }
    goto L_08AA42F8;
L_08AA42F8:
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[6]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[5]);
    goto L_08AA4310;
L_08AA4310:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (32768u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA4388:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (0u | 20u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA43A4;
      }
      goto L_08AA43A0;
    }
L_08AA43A0:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    goto L_08AA43A4;
L_08AA43A4:
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] & 15u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA43C0;
      }
      goto L_08AA43B4;
    }
L_08AA43B4:
    ctx.gpr[8] = (0u | 16u);
    ctx.gpr[7] = (ctx.gpr[8] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    goto L_08AA43C0;
L_08AA43C0:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08AA43CC;
L_08AA43CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[8] = (ctx.gpr[4] < static_cast<std::uint32_t>(15) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA43DC;
      }
      goto L_08AA43D4;
    }
L_08AA43D4:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4434;
      }
      goto L_08AA43DC;
    }
L_08AA43DC:
    // A free chunk's parent is its bin. Null or wild means it is not linked.
    { const bool branch_taken = ctx.gpr[7] < 0x08000000u || ctx.gpr[7] >= 0x0A000000u;
      if (branch_taken) {
          goto L_08AA4434;
      }
      goto L_08AA43DC_parent;
    }
L_08AA43DC_parent:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[8] == 0u || ctx.gpr[8] < 0x08000000u || ctx.gpr[8] >= 0x0A000000u;
      if (branch_taken) {
          goto L_08AA4434;
      }
      goto L_08AA43DC_size;
    }
L_08AA43DC_size:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4410;
      }
      goto L_08AA43F0;
    }
L_08AA43F0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[8] == 0u || ctx.gpr[8] < 0x08000000u || ctx.gpr[8] >= 0x0A000000u || aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)) == 0u || aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)) < 0x08000000u || aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)) >= 0x0A000000u;
      if (branch_taken) {
          goto L_08AA43F4;
      }
      goto L_08AA43FC;
    }
L_08AA43F4:
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08AA4408;
      }
      goto L_08AA43F8;
    }
L_08AA43F8:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), 0u);
    goto L_08AA4408;
L_08AA43FC:
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08AA4400;
L_08AA4400:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA43CC;
      }
      goto L_08AA4408;
    }
L_08AA4408:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4434;
      }
      goto L_08AA4410;
    }
L_08AA4410:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA442C;
      }
      goto L_08AA4414;
    }
L_08AA4414:
    { const bool branch_taken = ctx.gpr[8] < 0x08000000u || ctx.gpr[8] >= 0x0A000000u || aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)) == 0u || aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)) < 0x08000000u || aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)) >= 0x0A000000u;
      if (branch_taken) {
          aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), 0u);
          goto L_08AA442C;
      }
      goto L_08AA441C;
    }
L_08AA441C:
    ctx.gpr[2] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA4400;
      }
      goto L_08AA442C;
    }
L_08AA442C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AA4434;
      }
      goto L_08AA4434;
    }
L_08AA4434:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA443C:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA445C;
      }
      goto L_08AA444C;
    }
L_08AA444C:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA444C;
      }
      goto L_08AA445C;
    }
L_08AA445C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA4464:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA4488u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_08AA4A90;
L_08AA4488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (28672u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (57344u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA44F8;
      }
      goto L_08AA44D4;
    }
L_08AA44D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (49152u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08AA44F8;
L_08AA44F8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA4508u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08AA477C;
L_08AA4508:
    ctx.gpr[2] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA4524:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4590;
      }
      goto L_08AA4544;
    }
L_08AA4544:
    ctx.gpr[8] = (ctx.gpr[6] - ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[8] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08AA45A0;
    }
    goto L_08AA4554;
L_08AA4554:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AA4570u);
    ctx.gpr[5] = (ctx.gpr[8] - ctx.gpr[5]);
    goto L_08AA477C;
L_08AA4570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[31] = (0x08AA4588u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08AA4464;
L_08AA4588:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA45F0;
      }
      goto L_08AA4590;
    }
L_08AA4590:
    ctx.gpr[31] = (0x08AA4598u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08AA4464;
L_08AA4598:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA45F0;
      }
      goto L_08AA45A0;
    }
L_08AA45A0:
    ctx.gpr[9] = (4096u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[9]);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA45D4u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08AA477C;
L_08AA45D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08AA45E8u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08AA4464;
L_08AA45E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA45F0;
      }
      goto L_08AA45F0;
    }
L_08AA45F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA4600:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (32768u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[7] = (61440u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (16384u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[18] = (4096u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[19] = (8192u << 16u);
      if (branch_taken) {
          goto L_08AA4684;
      }
      goto L_08AA4668;
    }
L_08AA4668:
    ctx.gpr[31] = (0x08AA4670u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AA4930;
L_08AA4670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AA46AC;
      }
      goto L_08AA4684;
    }
L_08AA4684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08AA46AC;
L_08AA46AC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4728;
      }
      goto L_08AA46B4;
    }
L_08AA46B4:
    ctx.gpr[18] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[17] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA470C;
      }
      goto L_08AA4700;
    }
L_08AA4700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08AA470C;
L_08AA470C:
    ctx.gpr[31] = (0x08AA4714u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AA4A90;
L_08AA4714:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA4720u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AA49F8;
L_08AA4720:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA475C;
      }
      goto L_08AA4728;
    }
L_08AA4728:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4750;
      }
      goto L_08AA4738;
    }
L_08AA4738:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08AA4750;
L_08AA4750:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA475Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AA49F8;
L_08AA475C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA477C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[17] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AA47C4;
      }
      goto L_08AA47C0;
    }
L_08AA47C0:
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    goto L_08AA47C4;
L_08AA47C4:
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA47E0;
      }
      goto L_08AA47D4;
    }
L_08AA47D4:
    ctx.gpr[7] = (0u | 16u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[6]);
    goto L_08AA47E0;
L_08AA47E0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA480C;
      }
      goto L_08AA47E8;
    }
L_08AA47E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (16384u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[20]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4814;
      }
      goto L_08AA4804;
    }
L_08AA4804:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4824;
      }
      goto L_08AA480C;
    }
L_08AA480C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4910;
      }
      goto L_08AA4814;
    }
L_08AA4814:
    ctx.gpr[31] = (0x08AA481Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AA4930;
L_08AA481C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[19]);
    goto L_08AA4824;
L_08AA4824:
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[17] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4910;
      }
      goto L_08AA4834;
    }
L_08AA4834:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[19]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AA4860;
    }
    goto L_08AA4850;
L_08AA4850:
    ctx.gpr[31] = (0x08AA4858u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AA4A90;
L_08AA4858:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AA4860;
L_08AA4860:
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[4] | ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[6] & ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[17] | ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (8192u << 16u);
        goto L_08AA48A8;
    }
    goto L_08AA48A8;
L_08AA48A8:
    ctx.gpr[6] = (ctx.gpr[17] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA48ECu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_08AA49F8;
L_08AA48EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4910;
      }
      goto L_08AA4904;
    }
L_08AA4904:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA4910u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AA49F8;
L_08AA4910:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA4930:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[5]);
    ctx.gpr[8] = (0u < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA49A4;
      }
      goto L_08AA4988;
    }
L_08AA4988:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (49152u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[8]);
    goto L_08AA49A4;
L_08AA49A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA49D0;
      }
      goto L_08AA49BC;
    }
L_08AA49BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA49E4;
      }
      goto L_08AA49D0;
    }
L_08AA49D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (57344u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AA49E4;
L_08AA49E4:
    ctx.gpr[31] = (0x08AA49ECu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_08AA4A90;
L_08AA49EC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA49F8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4A1C;
      }
      goto L_08AA4A0C;
    }
L_08AA4A0C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA4A28;
      }
      goto L_08AA4A1C;
    }
L_08AA4A1C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA4A88;
      }
      goto L_08AA4A28;
    }
L_08AA4A28:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4A60;
      }
      goto L_08AA4A30;
    }
L_08AA4A30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4A50;
      }
      goto L_08AA4A3C;
    }
L_08AA4A3C:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    goto L_08AA4A48;
L_08AA4A48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4A28;
      }
      goto L_08AA4A50;
    }
L_08AA4A50:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AA4A88;
      }
      goto L_08AA4A60;
    }
L_08AA4A60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4A7C;
      }
      goto L_08AA4A6C;
    }
L_08AA4A6C:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA4A48;
      }
      goto L_08AA4A7C;
    }
L_08AA4A7C:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    goto L_08AA4A88;
L_08AA4A88:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA4A90:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AA4AB8;
      }
      goto L_08AA4A9C;
    }
L_08AA4A9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AA4B70;
      }
      goto L_08AA4AA8;
    }
L_08AA4AA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AA4B70;
      }
      goto L_08AA4AB8;
    }
L_08AA4AB8:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4AD4;
      }
      goto L_08AA4AC0;
    }
L_08AA4AC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA4B70;
      }
      goto L_08AA4AD4;
    }
L_08AA4AD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4B58;
      }
      goto L_08AA4AE0;
    }
L_08AA4AE0:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4B04;
      }
      goto L_08AA4AF0;
    }
L_08AA4AF0:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4AF0;
      }
      goto L_08AA4B04;
    }
L_08AA4B04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AA4B18;
      }
      goto L_08AA4B10;
    }
L_08AA4B10:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    goto L_08AA4B18;
L_08AA4B18:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AA4B70;
      }
      goto L_08AA4B58;
    }
L_08AA4B58:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08AA4B70;
L_08AA4B70:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA4B78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[7] = (5u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA4B9Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(30720));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 682u, 0x08AA32FCu>(ctx, &aot_mem) && ctx.pc == 0x08AA4B9Cu) goto L_08AA4B9C;
    return;
L_08AA4B9C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA4BA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA4BC0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 681u, 0x08AA32D4u>(ctx, &aot_mem) && ctx.pc == 0x08AA4BC0u) goto L_08AA4BC0;
    return;
L_08AA4BC0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25896)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4BDC;
      }
      goto L_08AA4BD0;
    }
L_08AA4BD0:
    ctx.gpr[17] = (202u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-23552));
      if (branch_taken) {
          goto L_08AA4C24;
      }
      goto L_08AA4BDC;
    }
L_08AA4BDC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AA4BE8u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19308));
    ctx.pc = 0x08B0BCD4u;
    return;
L_08AA4BE8:
    ctx.gpr[5] = (ctx.gpr[2] >> 10u);
    ctx.gpr[31] = (0x08AA4BF4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 662u, 0x08AA3164u>(ctx, &aot_mem) && ctx.pc == 0x08AA4BF4u) goto L_08AA4BF4;
    return;
L_08AA4BF4:
    ctx.gpr[31] = (0x08AA4BFCu);
    // nop
    ctx.pc = 0x08B0BCD4u;
    return;
L_08AA4BFC:
    ctx.gpr[4] = (352u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2229u << 16u);
      if (branch_taken) {
          goto L_08AA4C14;
      }
      goto L_08AA4C0C;
    }
L_08AA4C0C:
    ctx.gpr[4] = (192u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(25900), ctx.gpr[4]);
    goto L_08AA4C14;
L_08AA4C14:
    ctx.gpr[31] = (0x08AA4C1Cu);
    // nop
    ctx.pc = 0x08B0BCD4u;
    return;
L_08AA4C1C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(25900)));
    ctx.gpr[17] = (ctx.gpr[2] - ctx.gpr[17]);
    goto L_08AA4C24;
L_08AA4C24:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08AA4C44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19272));
    ctx.pc = 0x08B0BC8Cu;
    return;
L_08AA4C44:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AA4C54u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BC9Cu;
    return;
L_08AA4C54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08AA4C60u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AA4B78;
L_08AA4C60:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA4C78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-4144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4112), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4120), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4124), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4128), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4132), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4136), ctx.gpr[31]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA4E30;
      }
      goto L_08AA4CBC;
    }
L_08AA4CBC:
    ctx.gpr[31] = (ctx.gpr[29] + static_cast<std::uint32_t>(4111));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[13] = (0u | 116u);
    ctx.gpr[14] = (0u | 111u);
    ctx.gpr[15] = (0u | 110u);
    ctx.gpr[24] = (0u | 109u);
    ctx.gpr[10] = (32768u << 16u);
    ctx.gpr[25] = (4096u << 16u);
    goto L_08AA4CDC;
L_08AA4CDC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[9] & ctx.gpr[10]);
    ctx.gpr[11] = (0u < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[12] = (ctx.gpr[2] - ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AA4D00;
      }
      goto L_08AA4CF8;
    }
L_08AA4CF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[12]);
      if (branch_taken) {
          goto L_08AA4D04;
      }
      goto L_08AA4D00;
    }
L_08AA4D00:
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[12]);
    goto L_08AA4D04;
L_08AA4D04:
    ctx.gpr[19] = (ctx.gpr[11] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[11] = (0u | 46u);
      if (branch_taken) {
          goto L_08AA4DC0;
      }
      goto L_08AA4D10;
    }
L_08AA4D10:
    ctx.gpr[11] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(2)));
    ctx.gpr[19] = (ctx.gpr[9] & ctx.gpr[25]);
    ctx.gpr[9] = (ctx.gpr[11] << 24u);
    ctx.gpr[11] = (0u < ctx.gpr[19] ? 1u : 0u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 24u));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[13];
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
      if (branch_taken) {
          goto L_08AA4D80;
      }
      goto L_08AA4D30;
    }
L_08AA4D30:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[14];
    // nop
      if (branch_taken) {
          goto L_08AA4D68;
      }
      goto L_08AA4D38;
    }
L_08AA4D38:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[15];
    // nop
      if (branch_taken) {
          goto L_08AA4D50;
      }
      goto L_08AA4D40;
    }
L_08AA4D40:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[24];
    // nop
      if (branch_taken) {
          goto L_08AA4D98;
      }
      goto L_08AA4D48;
    }
L_08AA4D48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4DB0;
      }
      goto L_08AA4D50;
    }
L_08AA4D50:
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
    ctx.gpr[11] = (0u | 65u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[11] = (0u | 97u);
        goto L_08AA4D60;
    }
    goto L_08AA4D60;
L_08AA4D60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4DC0;
      }
      goto L_08AA4D68;
    }
L_08AA4D68:
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
    ctx.gpr[11] = (0u | 67u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[11] = (0u | 99u);
        goto L_08AA4D78;
    }
    goto L_08AA4D78;
L_08AA4D78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4DC0;
      }
      goto L_08AA4D80;
    }
L_08AA4D80:
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
    ctx.gpr[11] = (0u | 84u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[11] = (ctx.gpr[13] | 0u);
        goto L_08AA4D90;
    }
    goto L_08AA4D90;
L_08AA4D90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4DC0;
      }
      goto L_08AA4D98;
    }
L_08AA4D98:
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
    ctx.gpr[11] = (0u | 77u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[11] = (ctx.gpr[24] | 0u);
        goto L_08AA4DA8;
    }
    goto L_08AA4DA8;
L_08AA4DA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4DC0;
      }
      goto L_08AA4DB0;
    }
L_08AA4DB0:
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
    ctx.gpr[11] = (0u | 35u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[11] = (0u | 42u);
        goto L_08AA4DC0;
    }
    goto L_08AA4DC0;
L_08AA4DC0:
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1023));
    ctx.gpr[12] = (ctx.gpr[12] >> 10u);
    ctx.gpr[12] = (ctx.gpr[12] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA4E24;
      }
      goto L_08AA4DD4;
    }
L_08AA4DD4:
    ctx.gpr[8] = (ctx.gpr[11] | 0u);
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[8] = (0u | 124u);
        goto L_08AA4DE0;
    }
    goto L_08AA4DE0;
L_08AA4DE0:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[4] < ctx.gpr[31] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA4E00;
      }
      goto L_08AA4DF4;
    }
L_08AA4DF4:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08AA4E00;
L_08AA4E00:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[2] - ctx.gpr[3]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1023));
    ctx.gpr[8] = (ctx.gpr[8] >> 10u);
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA4DD4;
      }
      goto L_08AA4E20;
    }
L_08AA4E20:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08AA4E24;
L_08AA4E24:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08AA4CDC;
      }
      goto L_08AA4E30;
    }
L_08AA4E30:
    ctx.gpr[6] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19244));
    ctx.gpr[31] = (0x08AA4E5Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 173u, 0x08878E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA4E5Cu) goto L_08AA4E5C;
    return;
L_08AA4E5C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AA4E68u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19168));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 173u, 0x08878E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA4E68u) goto L_08AA4E68;
    return;
L_08AA4E68:
    ctx.gpr[31] = (0x08AA4E70u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 173u, 0x08878E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA4E70u) goto L_08AA4E70;
    return;
L_08AA4E70:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AA4E80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19156));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 173u, 0x08878E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA4E80u) goto L_08AA4E80;
    return;
L_08AA4E80:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA4E90u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19136));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 173u, 0x08878E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA4E90u) goto L_08AA4E90;
    return;
L_08AA4E90:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA4EA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19116));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 173u, 0x08878E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA4EA0u) goto L_08AA4EA0;
    return;
L_08AA4EA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19096));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[18]);
    ctx.gpr[31] = (0x08AA4EBCu);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 173u, 0x08878E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA4EBCu) goto L_08AA4EBC;
    return;
L_08AA4EBC:
    ctx.gpr[21] = (2227u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-19076));
    goto L_08AA4ED0;
L_08AA4ED0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AA4F1C;
      }
      goto L_08AA4EE0;
    }
L_08AA4EE0:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AA4F04;
      }
      goto L_08AA4EF8;
    }
L_08AA4EF8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA4EF8;
      }
      goto L_08AA4F04;
    }
L_08AA4F04:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA4F1C;
      }
      goto L_08AA4F0C;
    }
L_08AA4F0C:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AA4F1Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 173u, 0x08878E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA4F1Cu) goto L_08AA4F1C;
    return;
L_08AA4F1C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(64) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA4ED0;
      }
      goto L_08AA4F2C;
    }
L_08AA4F2C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA4F3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19040));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 173u, 0x08878E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA4F3Cu) goto L_08AA4F3C;
    return;
L_08AA4F3C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA4F4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19024));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 173u, 0x08878E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA4F4Cu) goto L_08AA4F4C;
    return;
L_08AA4F4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4124)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4128)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(4144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA4F70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA4F84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    goto L_08AA4BA8;
L_08AA4F84:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA4F90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA4FACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25904)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 665u, 0x08AA31B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA4FACu) goto L_08AA4FAC;
    return;
L_08AA4FAC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(25904));
    ctx.gpr[31] = (0x08AA4FE0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 326u, 0x08A36068u>(ctx, &aot_mem) && ctx.pc == 0x08AA4FE0u) goto L_08AA4FE0;
    return;
L_08AA4FE0:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA4FF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA500Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 193u, 0x08AC8F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA500Cu) goto L_08AA500C;
    return;
L_08AA500C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA5020:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA5040u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25904));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 336u, 0x08A36104u>(ctx, &aot_mem) && ctx.pc == 0x08AA5040u) goto L_08AA5040;
    return;
L_08AA5040:
    ctx.gpr[5] = (2218u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AA5054u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20472));
    goto L_08AA5084;
L_08AA5054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA5068;
      }
      goto L_08AA5060;
    }
L_08AA5060:
    ctx.gpr[31] = (0x08AA5068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 201u, 0x08A5D5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AA5068u) goto L_08AA5068;
    return;
L_08AA5068:
    ctx.gpr[31] = (0x08AA5070u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 669u, 0x08AA31FCu>(ctx, &aot_mem) && ctx.pc == 0x08AA5070u) goto L_08AA5070;
    return;
L_08AA5070:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA5084:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[21];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AA50E8;
      }
      goto L_08AA50BC;
    }
L_08AA50BC:
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(28));
    goto L_08AA50C0;
L_08AA50C0:
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[20]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x08AA50D0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA50D0u) goto L_08AA50D0;
    return;
L_08AA50D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA50E0;
      }
      goto L_08AA50D8;
    }
L_08AA50D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AA50EC;
      }
      goto L_08AA50E0;
    }
L_08AA50E0:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08AA50C0;
      }
      goto L_08AA50E8;
    }
L_08AA50E8:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08AA50EC;
L_08AA50EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA5110:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA5138u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25904));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 296u, 0x08A35E54u>(ctx, &aot_mem) && ctx.pc == 0x08AA5138u) goto L_08AA5138;
    return;
L_08AA5138:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA5144:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[18];
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AA51D0;
      }
      goto L_08AA5170;
    }
L_08AA5170:
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(28));
    goto L_08AA5174;
L_08AA5174:
    ctx.gpr[16] = (ctx.gpr[19] - ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA51C4;
      }
      goto L_08AA5188;
    }
L_08AA5188:
    ctx.gpr[31] = (0x08AA5190u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x08AA5190u) goto L_08AA5190;
    return;
L_08AA5190:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AA51AC;
      }
      goto L_08AA519C;
    }
L_08AA519C:
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AA51A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA51A4u) goto L_08AA51A4;
    return;
L_08AA51A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AA51B8;
      }
      goto L_08AA51AC;
    }
L_08AA51AC:
    ctx.gpr[31] = (0x08AA51B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 206u, 0x08AC9208u>(ctx, &aot_mem) && ctx.pc == 0x08AA51B4u) goto L_08AA51B4;
    return;
L_08AA51B4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08AA51B8;
L_08AA51B8:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA51C4;
      }
      goto L_08AA51C0;
    }
L_08AA51C0:
    ctx.gpr[20] = (0u | 0u);
    goto L_08AA51C4;
L_08AA51C4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AA5174;
      }
      goto L_08AA51D0;
    }
L_08AA51D0:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA51F4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA5220:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA5240:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA5260u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 184u, 0x08AC8ECCu>(ctx, &aot_mem) && ctx.pc == 0x08AA5260u) goto L_08AA5260;
    return;
L_08AA5260:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA5298;
      }
      goto L_08AA526C;
    }
L_08AA526C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA52A4;
      }
      goto L_08AA5278;
    }
L_08AA5278:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (0x08AA5284u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 199u, 0x08AC8FD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA5284u) goto L_08AA5284;
    return;
L_08AA5284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AA5290u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AA51F4;
L_08AA5290:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AA52B0;
      }
      goto L_08AA5298;
    }
L_08AA5298:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA52B0;
      }
      goto L_08AA52A4;
    }
L_08AA52A4:
    ctx.gpr[31] = (0x08AA52ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 193u, 0x08AC8F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA52ACu) goto L_08AA52AC;
    return;
L_08AA52AC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AA52B0;
L_08AA52B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA52C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA52D8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_08AA4F90;
L_08AA52D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA535C;
      }
      goto L_08AA52E0;
    }
L_08AA52E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08AA52ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 216u, 0x08A5D78Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA52ECu) goto L_08AA52EC;
    return;
L_08AA52EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA534C;
      }
      goto L_08AA5304;
    }
L_08AA5304:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2218u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AA5324u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21056));
    goto L_08AA5084;
L_08AA5324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08AA5330u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 220u, 0x08A5D7D8u>(ctx, &aot_mem) && ctx.pc == 0x08AA5330u) goto L_08AA5330;
    return;
L_08AA5330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08AA5364;
      }
      goto L_08AA533C;
    }
L_08AA533C:
    ctx.gpr[31] = (0x08AA5344u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AA5020;
L_08AA5344:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA537C;
      }
      goto L_08AA534C;
    }
L_08AA534C:
    ctx.gpr[31] = (0x08AA5354u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AA5020;
L_08AA5354:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA537C;
      }
      goto L_08AA535C;
    }
L_08AA535C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA537C;
      }
      goto L_08AA5364;
    }
L_08AA5364:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AA5378u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25904));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 340u, 0x08A36164u>(ctx, &aot_mem) && ctx.pc == 0x08AA5378u) goto L_08AA5378;
    return;
L_08AA5378:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08AA537C;
L_08AA537C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA5388:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    ctx.gpr[2] = (0u | 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA53B4:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA53DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA53FCu);
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 166u, 0x088A0D74u>(ctx, &aot_mem) && ctx.pc == 0x08AA53FCu) goto L_08AA53FC;
    return;
L_08AA53FC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13164));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA5430;
      }
      goto L_08AA541C;
    }
L_08AA541C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA5430;
L_08AA5430:
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(836), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(66))))));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24020)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(336), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AA5470u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AA5608;
L_08AA5470:
    ctx.gpr[4] = (19646u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 48160u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16255u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 55470u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(322))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15692u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(864), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] | 176u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA5500:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA555C;
      }
      goto L_08AA551C;
    }
L_08AA551C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13164));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AA5534u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19008));
    goto L_08AA5388;
L_08AA5534:
    ctx.gpr[31] = (0x08AA553Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AA5570;
L_08AA553C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA5548u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 515u, 0x0889E91Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA5548u) goto L_08AA5548;
    return;
L_08AA5548:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA555C;
      }
      goto L_08AA5554;
    }
L_08AA5554:
    ctx.gpr[31] = (0x08AA555Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 513u, 0x0889E8F8u>(ctx, &aot_mem) && ctx.pc == 0x08AA555Cu) goto L_08AA555C;
    return;
L_08AA555C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA5570:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA55EC;
      }
      goto L_08AA5590;
    }
L_08AA5590:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AA55EC;
      }
      goto L_08AA55A0;
    }
L_08AA55A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA55C8;
      }
      goto L_08AA55AC;
    }
L_08AA55AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA55C8;
      }
      goto L_08AA55BC;
    }
L_08AA55BC:
    ctx.gpr[31] = (0x08AA55C4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08AA55C4u) goto L_08AA55C4;
    return;
L_08AA55C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_08AA55C8;
L_08AA55C8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AA55E8;
      }
      goto L_08AA55D8;
    }
L_08AA55D8:
    ctx.gpr[31] = (0x08AA55E0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 193u, 0x08AC8F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA55E0u) goto L_08AA55E0;
    return;
L_08AA55E0:
    ctx.gpr[31] = (0x08AA55E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 168u, 0x08A5D3C4u>(ctx, &aot_mem) && ctx.pc == 0x08AA55E8u) goto L_08AA55E8;
    return;
L_08AA55E8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    goto L_08AA55EC;
L_08AA55EC:
    ctx.gpr[31] = (0x08AA55F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 695u, 0x08A2F22Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA55F4u) goto L_08AA55F4;
    return;
L_08AA55F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA5608:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA562Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18988));
    goto L_08AA5388;
L_08AA562C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA5638u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 538u, 0x0889EABCu>(ctx, &aot_mem) && ctx.pc == 0x08AA5638u) goto L_08AA5638;
    return;
L_08AA5638:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA564C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(865), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(679)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA5674;
      }
      goto L_08AA566C;
    }
L_08AA566C:
    ctx.gpr[31] = (0x08AA5674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 819u, 0x08A2FB88u>(ctx, &aot_mem) && ctx.pc == 0x08AA5674u) goto L_08AA5674;
    return;
L_08AA5674:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA5680:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA56AC;
      }
      goto L_08AA56A4;
    }
L_08AA56A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA5710;
      }
      goto L_08AA56AC;
    }
L_08AA56AC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (2229u << 16u);
    goto L_08AA56B8;
L_08AA56B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA5700;
      }
      goto L_08AA56CC;
    }
L_08AA56CC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(865)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA56FC;
      }
      goto L_08AA56D8;
    }
L_08AA56D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(120));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AA56F0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA56F0u) goto L_08AA56F0;
    return;
L_08AA56F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA56FC;
L_08AA56FC:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(865), static_cast<std::uint8_t>(0u));
    goto L_08AA5700;
L_08AA5700:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA56B8;
      }
      goto L_08AA5710;
    }
L_08AA5710:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA5728:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA5738:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA5768u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18964));
    goto L_08AA5388;
L_08AA5768:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA5790;
      }
      goto L_08AA5778;
    }
L_08AA5778:
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA57A0;
      }
      goto L_08AA5788;
    }
L_08AA5788:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA57A8;
      }
      goto L_08AA5790;
    }
L_08AA5790:
    ctx.gpr[31] = (0x08AA5798u);
    // nop
    goto L_08AA5A44;
L_08AA5798:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA587C;
      }
      goto L_08AA57A0;
    }
L_08AA57A0:
    ctx.gpr[31] = (0x08AA57A8u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08AA58A4;
L_08AA57A8:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08AA57B0;
L_08AA57B0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA57B0;
      }
      goto L_08AA57CC;
    }
L_08AA57CC:
    ctx.gpr[31] = (0x08AA57D4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x08AA57D4u) goto L_08AA57D4;
    return;
L_08AA57D4:
    ctx.gpr[4] = (0u | 200u);
    ctx.gpr[31] = (0x08AA57E0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AA57E0u) goto L_08AA57E0;
    return;
L_08AA57E0:
    ctx.gpr[31] = (0x08AA57E8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x08AA57E8u) goto L_08AA57E8;
    return;
L_08AA57E8:
    ctx.gpr[21] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[17] = (0u | 0u);
    goto L_08AA57F8;
L_08AA57F8:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08AA5804u);
    ctx.gpr[4] = (0u | 880u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 511u, 0x0889E8D8u>(ctx, &aot_mem) && ctx.pc == 0x08AA5804u) goto L_08AA5804;
    return;
L_08AA5804:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AA5820;
      }
      goto L_08AA5810;
    }
L_08AA5810:
    ctx.gpr[5] = (0u | 200u);
    ctx.gpr[31] = (0x08AA581Cu);
    ctx.gpr[6] = (0u | 4u);
    goto L_08AA53DC;
L_08AA581C:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    goto L_08AA5820;
L_08AA5820:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AA5834u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 520u, 0x08A066A0u>(ctx, &aot_mem) && ctx.pc == 0x08AA5834u) goto L_08AA5834;
    return;
L_08AA5834:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(848), static_cast<std::uint16_t>(ctx.gpr[21]));
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(852), static_cast<std::uint16_t>(0u));
    ctx.gpr[31] = (0x08AA5860u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA5860u) goto L_08AA5860;
    return;
L_08AA5860:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA57F8;
      }
      goto L_08AA587C;
    }
L_08AA587C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA58A4:
    ctx.gpr[5] = (2229u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(25988), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA58B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA58E8;
      }
      goto L_08AA58CC;
    }
L_08AA58CC:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AA58F0;
      }
      goto L_08AA58E0;
    }
L_08AA58E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA5A30;
      }
      goto L_08AA58E8;
    }
L_08AA58E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA5A34;
      }
      goto L_08AA58F0;
    }
L_08AA58F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[6] << 5u);
      if (branch_taken) {
          goto L_08AA5910;
      }
      goto L_08AA5908;
    }
L_08AA5908:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA5934;
      }
      goto L_08AA5910;
    }
L_08AA5910:
    ctx.gpr[8] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[5]);
    goto L_08AA5934;
L_08AA5934:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA5A24;
      }
      goto L_08AA593C;
    }
L_08AA593C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[9] = (0u | 200u);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08AA5A24;
      }
      goto L_08AA594C;
    }
L_08AA594C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[9] = (0u | 201u);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08AA5A24;
      }
      goto L_08AA595C;
    }
L_08AA595C:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(864)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA5A24;
      }
      goto L_08AA5968;
    }
L_08AA5968:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (16840u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA5A24;
      }
      goto L_08AA59B4;
    }
L_08AA59B4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(860), ctx.gpr[4]);
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(864), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2064));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1983));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08AA5A1Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 306u, 0x08ACD40Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA5A1Cu) goto L_08AA5A1C;
    return;
L_08AA5A1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AA5A34;
      }
      goto L_08AA5A24;
    }
L_08AA5A24:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AA58F0;
      }
      goto L_08AA5A30;
    }
L_08AA5A30:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AA5A34;
L_08AA5A34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA5A44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AA5A58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18948));
    goto L_08AA5388;
L_08AA5A58:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (2229u << 16u);
    goto L_08AA5A64;
L_08AA5A64:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA5A64;
      }
      goto L_08AA5A80;
    }
L_08AA5A80:
    ctx.gpr[31] = (0x08AA5A88u);
    ctx.gpr[4] = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA5A88u) goto L_08AA5A88;
    return;
L_08AA5A88:
    ctx.gpr[31] = (0x08AA5A90u);
    ctx.gpr[4] = (0u | 201u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA5A90u) goto L_08AA5A90;
    return;
L_08AA5A90:
    ctx.gpr[31] = (0x08AA5A98u);
    ctx.gpr[4] = (0u | 201u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA5A98u) goto L_08AA5A98;
    return;
L_08AA5A98:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA5AA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-944));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(904), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 200u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(880), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(884), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(888), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(892), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(896), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(900), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(908), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(912), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(916), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(920), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(924), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(928), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(932), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(936), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(940), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AA5B34;
      }
      goto L_08AA5AF8;
    }
L_08AA5AF8:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA5B5C;
      }
      goto L_08AA5B18;
    }
L_08AA5B18:
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
    ctx.gpr[31] = (0x08AA5B2Cu);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(848))))));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 476u, 0x08ABA880u>(ctx, &aot_mem) && ctx.pc == 0x08AA5B2Cu) goto L_08AA5B2C;
    return;
L_08AA5B2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA5B5C;
      }
      goto L_08AA5B34;
    }
L_08AA5B34:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 201u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA5B5C;
      }
      goto L_08AA5B44;
    }
L_08AA5B44:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08AA5B5Cu);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(848))))));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 551u, 0x08ABAFD0u>(ctx, &aot_mem) && ctx.pc == 0x08AA5B5Cu) goto L_08AA5B5C;
    return;
L_08AA5B5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(864)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA656C;
      }
      goto L_08AA5B68;
    }
L_08AA5B68:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.gpr[30] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AA6070;
      }
      goto L_08AA5B78;
    }
L_08AA5B78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(860)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[30] = (ctx.gpr[30] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[30] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(860), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AA5E3C;
      }
      goto L_08AA5B90;
    }
L_08AA5B90:
    ctx.gpr[31] = (0x08AA5B98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA5B98u) goto L_08AA5B98;
    return;
L_08AA5B98:
    ctx.fpr[28] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x08AA5BF0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 413u, 0x08A46B40u>(ctx, &aot_mem) && ctx.pc == 0x08AA5BF0u) goto L_08AA5BF0;
    return;
L_08AA5BF0:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AA5C0Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AA5C0Cu) goto L_08AA5C0C;
    return;
L_08AA5C0C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (0u | 224u);
    ctx.gpr[6] = (0u | 230u);
    ctx.gpr[7] = (0u | 238u);
    ctx.gpr[31] = (0x08AA5C24u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AA5C24u) goto L_08AA5C24;
    return;
L_08AA5C24:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (0u | 224u);
    ctx.gpr[6] = (0u | 230u);
    ctx.gpr[7] = (0u | 238u);
    ctx.gpr[31] = (0x08AA5C3Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AA5C3Cu) goto L_08AA5C3C;
    return;
L_08AA5C3C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AA5C54u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AA5C54u) goto L_08AA5C54;
    return;
L_08AA5C54:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 224u);
    ctx.gpr[6] = (0u | 230u);
    ctx.gpr[7] = (0u | 238u);
    ctx.gpr[31] = (0x08AA5C6Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AA5C6Cu) goto L_08AA5C6C;
    return;
L_08AA5C6C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AA5C84u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AA5C84u) goto L_08AA5C84;
    return;
L_08AA5C84:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AA5C9Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AA5C9Cu) goto L_08AA5C9C;
    return;
L_08AA5C9C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (0u | 224u);
    ctx.gpr[6] = (0u | 230u);
    ctx.gpr[7] = (0u | 238u);
    ctx.gpr[31] = (0x08AA5CB4u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AA5CB4u) goto L_08AA5CB4;
    return;
L_08AA5CB4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (49152u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26004)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26000)));
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    goto L_08AA5D30;
L_08AA5D30:
    ctx.gpr[31] = (0x08AA5D38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08AA5D38u) goto L_08AA5D38;
    return;
L_08AA5D38:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[26];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.gpr[31] = (0x08AA5D4Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08AA5D4Cu) goto L_08AA5D4C;
    return;
L_08AA5D4C:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[26];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.gpr[31] = (0x08AA5D60u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08AA5D60u) goto L_08AA5D60;
    return;
L_08AA5D60:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[28];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    ctx.gpr[31] = (0x08AA5D74u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08AA5D74u) goto L_08AA5D74;
    return;
L_08AA5D74:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25996)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25992)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AA5D8Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08AA5D8Cu) goto L_08AA5D8C;
    return;
L_08AA5D8C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[22] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08AA5DB8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08AA5DB8u) goto L_08AA5DB8;
    return;
L_08AA5DB8:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA5DCC;
      }
      goto L_08AA5DC8;
    }
L_08AA5DC8:
    ctx.gpr[16] = (0u - ctx.gpr[16]);
    goto L_08AA5DCC;
L_08AA5DCC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(876), ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-13696)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-13696), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AA5DE8u);
    ctx.gpr[30] = (ctx.gpr[5] & 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08AA5DE8u) goto L_08AA5DE8;
    return;
L_08AA5DE8:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-13696)));
    ctx.gpr[4] = (0u | 64u);
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(208));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08AA5E2Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 276u, 0x089999ACu>(ctx, &aot_mem) && ctx.pc == 0x08AA5E2Cu) goto L_08AA5E2C;
    return;
L_08AA5E2C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(876)));
      if (branch_taken) {
          goto L_08AA5D30;
      }
      goto L_08AA5E3C;
    }
L_08AA5E3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(860)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[30] < static_cast<std::uint32_t>(81) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA5FE0;
      }
      goto L_08AA5E48;
    }
L_08AA5E48:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[30] & 1u);
      if (branch_taken) {
          goto L_08AA5FE0;
      }
      goto L_08AA5E50;
    }
L_08AA5E50:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA5FE0;
      }
      goto L_08AA5E58;
    }
L_08AA5E58:
    ctx.gpr[5] = (15948u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(-40));
      if (branch_taken) {
          goto L_08AA5F28;
      }
      goto L_08AA5E6C;
    }
L_08AA5E6C:
    ctx.gpr[31] = (0x08AA5E74u);
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA5E74u) goto L_08AA5E74;
    return;
L_08AA5E74:
    ctx.gpr[31] = (0x08AA5E7Cu);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08AA5E7Cu) goto L_08AA5E7C;
    return;
L_08AA5E7C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_08AA5EAC;
      }
      goto L_08AA5EA0;
    }
L_08AA5EA0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08AA5EAC;
L_08AA5EAC:
    ctx.gpr[31] = (0x08AA5EB4u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08AA5EB4u) goto L_08AA5EB4;
    return;
L_08AA5EB4:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x08AA5F20u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 413u, 0x08A46B40u>(ctx, &aot_mem) && ctx.pc == 0x08AA5F20u) goto L_08AA5F20;
    return;
L_08AA5F20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA5FE0;
      }
      goto L_08AA5F28;
    }
L_08AA5F28:
    ctx.gpr[31] = (0x08AA5F30u);
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA5F30u) goto L_08AA5F30;
    return;
L_08AA5F30:
    ctx.gpr[31] = (0x08AA5F38u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08AA5F38u) goto L_08AA5F38;
    return;
L_08AA5F38:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (0u - ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_08AA5F6C;
      }
      goto L_08AA5F60;
    }
L_08AA5F60:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08AA5F6C;
L_08AA5F6C:
    ctx.gpr[31] = (0x08AA5F74u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08AA5F74u) goto L_08AA5F74;
    return;
L_08AA5F74:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x08AA5FE0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 413u, 0x08A46B40u>(ctx, &aot_mem) && ctx.pc == 0x08AA5FE0u) goto L_08AA5FE0;
    return;
L_08AA5FE0:
    ctx.gpr[4] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AA5FFC;
      }
      goto L_08AA5FEC;
    }
L_08AA5FEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08AA5FFC;
L_08AA5FFC:
    ctx.gpr[4] = (0u | 82u);
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AA656C;
      }
      goto L_08AA6008;
    }
L_08AA6008:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08AA6024u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 390u, 0x088EE848u>(ctx, &aot_mem) && ctx.pc == 0x08AA6024u) goto L_08AA6024;
    return;
L_08AA6024:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA6034u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 401u, 0x088EE920u>(ctx, &aot_mem) && ctx.pc == 0x08AA6034u) goto L_08AA6034;
    return;
L_08AA6034:
    ctx.gpr[31] = (0x08AA603Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 438u, 0x088EED08u>(ctx, &aot_mem) && ctx.pc == 0x08AA603Cu) goto L_08AA603C;
    return;
L_08AA603C:
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08AA6050u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 401u, 0x088EE920u>(ctx, &aot_mem) && ctx.pc == 0x08AA6050u) goto L_08AA6050;
    return;
L_08AA6050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(152));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AA6068u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA6068u) goto L_08AA6068;
    return;
L_08AA6068:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA656C;
      }
      goto L_08AA6070;
    }
L_08AA6070:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(860)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[30] = (ctx.gpr[30] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[30] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(860), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AA6334;
      }
      goto L_08AA6088;
    }
L_08AA6088:
    ctx.gpr[31] = (0x08AA6090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA6090u) goto L_08AA6090;
    return;
L_08AA6090:
    ctx.fpr[28] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x08AA60E8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 413u, 0x08A46B40u>(ctx, &aot_mem) && ctx.pc == 0x08AA60E8u) goto L_08AA60E8;
    return;
L_08AA60E8:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AA6104u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AA6104u) goto L_08AA6104;
    return;
L_08AA6104:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (0u | 224u);
    ctx.gpr[6] = (0u | 230u);
    ctx.gpr[7] = (0u | 238u);
    ctx.gpr[31] = (0x08AA611Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AA611Cu) goto L_08AA611C;
    return;
L_08AA611C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (0u | 224u);
    ctx.gpr[6] = (0u | 230u);
    ctx.gpr[7] = (0u | 238u);
    ctx.gpr[31] = (0x08AA6134u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AA6134u) goto L_08AA6134;
    return;
L_08AA6134:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AA614Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AA614Cu) goto L_08AA614C;
    return;
L_08AA614C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 252u);
    ctx.gpr[6] = (0u | 66u);
    ctx.gpr[7] = (0u | 66u);
    ctx.gpr[31] = (0x08AA6164u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AA6164u) goto L_08AA6164;
    return;
L_08AA6164:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AA617Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AA617Cu) goto L_08AA617C;
    return;
L_08AA617C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AA6194u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AA6194u) goto L_08AA6194;
    return;
L_08AA6194:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (0u | 252u);
    ctx.gpr[6] = (0u | 66u);
    ctx.gpr[7] = (0u | 66u);
    ctx.gpr[31] = (0x08AA61ACu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AA61ACu) goto L_08AA61AC;
    return;
L_08AA61AC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
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
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (49152u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26004)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26000)));
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    goto L_08AA6228;
L_08AA6228:
    ctx.gpr[31] = (0x08AA6230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08AA6230u) goto L_08AA6230;
    return;
L_08AA6230:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x08AA6244u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08AA6244u) goto L_08AA6244;
    return;
L_08AA6244:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x08AA6258u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08AA6258u) goto L_08AA6258;
    return;
L_08AA6258:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[28];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    ctx.gpr[31] = (0x08AA626Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08AA626Cu) goto L_08AA626C;
    return;
L_08AA626C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25996)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25992)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AA6284u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08AA6284u) goto L_08AA6284;
    return;
L_08AA6284:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[22] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08AA62B0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08AA62B0u) goto L_08AA62B0;
    return;
L_08AA62B0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA62C4;
      }
      goto L_08AA62C0;
    }
L_08AA62C0:
    ctx.gpr[16] = (0u - ctx.gpr[16]);
    goto L_08AA62C4;
L_08AA62C4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(876), ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-13695)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-13695), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AA62E0u);
    ctx.gpr[30] = (ctx.gpr[5] & 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08AA62E0u) goto L_08AA62E0;
    return;
L_08AA62E0:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[26];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-13695)));
    ctx.gpr[4] = (0u | 64u);
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(400));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08AA6324u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 276u, 0x089999ACu>(ctx, &aot_mem) && ctx.pc == 0x08AA6324u) goto L_08AA6324;
    return;
L_08AA6324:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(876)));
      if (branch_taken) {
          goto L_08AA6228;
      }
      goto L_08AA6334;
    }
L_08AA6334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(860)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[30] < static_cast<std::uint32_t>(61) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA64E4;
      }
      goto L_08AA6340;
    }
L_08AA6340:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[30] & 1u);
      if (branch_taken) {
          goto L_08AA64E4;
      }
      goto L_08AA6348;
    }
L_08AA6348:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA64E4;
      }
      goto L_08AA6350;
    }
L_08AA6350:
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(-40));
    ctx.gpr[5] = (16025u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AA642C;
      }
      goto L_08AA6370;
    }
L_08AA6370:
    ctx.gpr[31] = (0x08AA6378u);
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA6378u) goto L_08AA6378;
    return;
L_08AA6378:
    ctx.gpr[31] = (0x08AA6380u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08AA6380u) goto L_08AA6380;
    return;
L_08AA6380:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_08AA63B0;
      }
      goto L_08AA63A4;
    }
L_08AA63A4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08AA63B0;
L_08AA63B0:
    ctx.gpr[31] = (0x08AA63B8u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08AA63B8u) goto L_08AA63B8;
    return;
L_08AA63B8:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x08AA6424u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 413u, 0x08A46B40u>(ctx, &aot_mem) && ctx.pc == 0x08AA6424u) goto L_08AA6424;
    return;
L_08AA6424:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA64E4;
      }
      goto L_08AA642C;
    }
L_08AA642C:
    ctx.gpr[31] = (0x08AA6434u);
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA6434u) goto L_08AA6434;
    return;
L_08AA6434:
    ctx.gpr[31] = (0x08AA643Cu);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08AA643Cu) goto L_08AA643C;
    return;
L_08AA643C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (0u - ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_08AA6470;
      }
      goto L_08AA6464;
    }
L_08AA6464:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08AA6470;
L_08AA6470:
    ctx.gpr[31] = (0x08AA6478u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08AA6478u) goto L_08AA6478;
    return;
L_08AA6478:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x08AA64E4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 413u, 0x08A46B40u>(ctx, &aot_mem) && ctx.pc == 0x08AA64E4u) goto L_08AA64E4;
    return;
L_08AA64E4:
    ctx.gpr[4] = (0u | 30u);
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AA6500;
      }
      goto L_08AA64F0;
    }
L_08AA64F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08AA6500;
L_08AA6500:
    ctx.gpr[4] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AA656C;
      }
      goto L_08AA650C;
    }
L_08AA650C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 200u);
    ctx.gpr[6] = (0u | 200u);
    ctx.gpr[31] = (0x08AA6528u);
    ctx.gpr[7] = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 390u, 0x088EE848u>(ctx, &aot_mem) && ctx.pc == 0x08AA6528u) goto L_08AA6528;
    return;
L_08AA6528:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA6538u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 401u, 0x088EE920u>(ctx, &aot_mem) && ctx.pc == 0x08AA6538u) goto L_08AA6538;
    return;
L_08AA6538:
    ctx.gpr[31] = (0x08AA6540u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 438u, 0x088EED08u>(ctx, &aot_mem) && ctx.pc == 0x08AA6540u) goto L_08AA6540;
    return;
L_08AA6540:
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08AA6554u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 401u, 0x088EE920u>(ctx, &aot_mem) && ctx.pc == 0x08AA6554u) goto L_08AA6554;
    return;
L_08AA6554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(152));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AA656Cu);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA656Cu) goto L_08AA656C;
    return;
L_08AA656C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (0u | 200u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[6] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AA65A8;
      }
      goto L_08AA657C;
    }
L_08AA657C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(850))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AA65A8;
      }
      goto L_08AA6588;
    }
L_08AA6588:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(86)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA7698;
      }
      goto L_08AA65A4;
    }
L_08AA65A4:
    ctx.gpr[6] = (2232u << 16u);
    goto L_08AA65A8;
L_08AA65A8:
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(12960));
    ctx.gpr[6] = (15496u << 16u);
    ctx.gpr[11] = (16256u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 34953u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[11] = (16880u << 16u);
    ctx.gpr[6] = (18351u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (ctx.gpr[6] | 51200u);
    ctx.gpr[11] = (16128u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[23] = (65534u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[10] = (ctx.gpr[21] + static_cast<std::uint32_t>(112));
    ctx.gpr[9] = (ctx.gpr[21] + static_cast<std::uint32_t>(128));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AA7004;
      }
      goto L_08AA6610;
    }
L_08AA6610:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(848))))));
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[28];
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA6650;
      }
      goto L_08AA6644;
    }
L_08AA6644:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_08AA6650;
L_08AA6650:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[28];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = ctx.fpr[20] + ctx.fpr[26];
      if (branch_taken) {
          goto L_08AA6698;
      }
      goto L_08AA6674;
    }
L_08AA6674:
    ctx.gpr[4] = (49804u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA6698;
      }
      goto L_08AA668C;
    }
L_08AA668C:
    ctx.fpr[28] = ctx.fpr[13] / ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = ctx.fpr[30] - ctx.fpr[28];
      if (branch_taken) {
          goto L_08AA66C4;
      }
      goto L_08AA6698;
    }
L_08AA6698:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17096u << 16u);
      if (branch_taken) {
          goto L_08AA66C4;
      }
      goto L_08AA66A8;
    }
L_08AA66A8:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
        goto L_08AA66C8;
    }
    goto L_08AA66BC;
L_08AA66BC:
    ctx.fpr[28] = ctx.fpr[13] / ctx.fpr[14];
    ctx.fpr[28] = ctx.fpr[30] - ctx.fpr[28];
    goto L_08AA66C4;
L_08AA66C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    goto L_08AA66C8;
L_08AA66C8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (49992u << 16u);
      if (branch_taken) {
          goto L_08AA6700;
      }
      goto L_08AA66E0;
    }
L_08AA66E0:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA6700;
      }
      goto L_08AA66F4;
    }
L_08AA66F4:
    ctx.fpr[28] = ctx.fpr[12] / ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = ctx.fpr[30] - ctx.fpr[28];
      if (branch_taken) {
          goto L_08AA672C;
      }
      goto L_08AA6700;
    }
L_08AA6700:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17036u << 16u);
      if (branch_taken) {
          goto L_08AA672C;
      }
      goto L_08AA6710;
    }
L_08AA6710:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
        goto L_08AA6730;
    }
    goto L_08AA6724;
L_08AA6724:
    ctx.fpr[28] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[28] = ctx.fpr[30] - ctx.fpr[28];
    goto L_08AA672C;
L_08AA672C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    goto L_08AA6730;
L_08AA6730:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(852))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[17] << 4u);
    ctx.gpr[8] = (ctx.gpr[17] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AA676C;
      }
      goto L_08AA675C;
    }
L_08AA675C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AA6788;
      }
      goto L_08AA676C;
    }
L_08AA676C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[5] = (ctx.gpr[17] << 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08AA6788;
L_08AA6788:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(852))))));
        goto L_08AA67AC;
    }
    goto L_08AA6798;
L_08AA6798:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
        goto L_08AA6828;
    }
    goto L_08AA67A8;
L_08AA67A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(852))))));
    goto L_08AA67AC;
L_08AA67AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(852), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(852))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[17] << 4u);
    ctx.gpr[8] = (ctx.gpr[17] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AA6804;
      }
      goto L_08AA67F4;
    }
L_08AA67F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AA6820;
      }
      goto L_08AA6804;
    }
L_08AA6804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[5] = (ctx.gpr[17] << 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08AA6820;
L_08AA6820:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA6788;
      }
      goto L_08AA6828;
    }
L_08AA6828:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(852))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(864), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[17] << 4u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AA687C;
      }
      goto L_08AA6858;
    }
L_08AA6858:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(864), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA687C;
      }
      goto L_08AA6874;
    }
L_08AA6874:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA6880;
      }
      goto L_08AA687C;
    }
L_08AA687C:
    ctx.gpr[23] = (0u | 0u);
    goto L_08AA6880;
L_08AA6880:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(848))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(872), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(868), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
        goto L_08AA68FC;
    }
    goto L_08AA68B0;
L_08AA68B0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(848))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(872), ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(868), ctx.gpr[9]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
        goto L_08AA68FC;
    }
    goto L_08AA68E0;
L_08AA68E0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x08AA68F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA68F8u) goto L_08AA68F8;
    return;
L_08AA68F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    goto L_08AA68FC;
L_08AA68FC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(852))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(868)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(872)));
      if (branch_taken) {
          goto L_08AA6944;
      }
      goto L_08AA6938;
    }
L_08AA6938:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08AA6944;
L_08AA6944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(852))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[17]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[19]));
    ctx.fpr[19] = ctx.fpr[30] - ctx.fpr[12];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[15];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[17];
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[14] = ctx.fpr[18] + ctx.fpr[19];
      if (branch_taken) {
          goto L_08AA69CC;
      }
      goto L_08AA69C0;
    }
L_08AA69C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = ctx.fpr[22] - ctx.fpr[20];
    goto L_08AA69CC;
L_08AA69CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(852))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.fpr[2] = ctx.fpr[20] + ctx.fpr[26];
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA6A18;
      }
      goto L_08AA6A08;
    }
L_08AA6A08:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[6] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AA6A34;
      }
      goto L_08AA6A18;
    }
L_08AA6A18:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[8] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(68)));
    ctx.gpr[11] = (ctx.gpr[4] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[11]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    goto L_08AA6A34;
L_08AA6A34:
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
        goto L_08AA6A58;
    }
    goto L_08AA6A44;
L_08AA6A44:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
        goto L_08AA6AC0;
    }
    goto L_08AA6A54;
L_08AA6A54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    goto L_08AA6A58;
L_08AA6A58:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[8] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AA6A9C;
      }
      goto L_08AA6A8C;
    }
L_08AA6A8C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[6] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AA6AB8;
      }
      goto L_08AA6A9C;
    }
L_08AA6A9C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[8] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(68)));
    ctx.gpr[11] = (ctx.gpr[4] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[11]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    goto L_08AA6AB8;
L_08AA6AB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA6A34;
      }
      goto L_08AA6AC0;
    }
L_08AA6AC0:
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
        goto L_08AA6B04;
    }
    goto L_08AA6AF4;
L_08AA6AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    goto L_08AA6B04;
L_08AA6B04:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = ctx.fpr[20] - ctx.fpr[16];
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[5] = ctx.fpr[30] - ctx.fpr[15];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[18];
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[0];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[3]));
    ctx.fpr[17] = ctx.fpr[26] - ctx.fpr[12];
    ctx.fpr[0] = ctx.fpr[26] + ctx.fpr[12];
    ctx.fpr[19] = ctx.fpr[22] + ctx.fpr[13];
    ctx.fpr[18] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[16] = ctx.fpr[22] - ctx.fpr[13];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[14];
    { const bool branch_taken = ctx.fpu_condition();
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
      if (branch_taken) {
          goto L_08AA6BA4;
      }
      goto L_08AA6B98;
    }
L_08AA6B98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = ctx.fpr[2] - ctx.fpr[20];
    goto L_08AA6BA4;
L_08AA6BA4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(852))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AA6BE8;
      }
      goto L_08AA6BD8;
    }
L_08AA6BD8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AA6C04;
      }
      goto L_08AA6BE8;
    }
L_08AA6BE8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[8] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(68)));
    ctx.gpr[11] = (ctx.gpr[6] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[11]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    goto L_08AA6C04;
L_08AA6C04:
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
        goto L_08AA6C28;
    }
    goto L_08AA6C14;
L_08AA6C14:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[1]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
        goto L_08AA6C90;
    }
    goto L_08AA6C24;
L_08AA6C24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    goto L_08AA6C28;
L_08AA6C28:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[8] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AA6C6C;
      }
      goto L_08AA6C5C;
    }
L_08AA6C5C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AA6C88;
      }
      goto L_08AA6C6C;
    }
L_08AA6C6C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[8] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(68)));
    ctx.gpr[11] = (ctx.gpr[6] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[11]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    goto L_08AA6C88;
L_08AA6C88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA6C04;
      }
      goto L_08AA6C90;
    }
L_08AA6C90:
    ctx.gpr[7] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[1];
    ctx.set_fpu_condition((ctx.fpr[2] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
        goto L_08AA6CD4;
    }
    goto L_08AA6CC4;
L_08AA6CC4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_08AA6CD4;
L_08AA6CD4:
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[4] = ctx.fpr[20] - ctx.fpr[4];
    ctx.fpr[16] = ctx.fpr[4] / ctx.fpr[2];
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[6] = ctx.fpr[30] - ctx.fpr[16];
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[4];
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[7] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[7] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[7];
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[2];
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[4] = (16521u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[19];
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[28]) || std::isnan(ctx.fpr[24])) && ctx.fpr[28] == ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA6DD0;
      }
      goto L_08AA6D94;
    }
L_08AA6D94:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08AA6DD0;
L_08AA6DD0:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[23] != 0u;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-16385));
      if (branch_taken) {
          goto L_08AA6E74;
      }
      goto L_08AA6E58;
    }
L_08AA6E58:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-16385));
    goto L_08AA6E74;
L_08AA6E74:
    ctx.gpr[4] = (65534u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (18351u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 51200u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(864)));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(848))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (15496u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 34953u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(736), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(740), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(744), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(848))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(856), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(760), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08AA6F98u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 36u, 0x08A10220u>(ctx, &aot_mem) && ctx.pc == 0x08AA6F98u) goto L_08AA6F98;
    return;
L_08AA6F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[13];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA6FF4;
      }
      goto L_08AA6FEC;
    }
L_08AA6FEC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(850), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_08AA6FFC;
      }
      goto L_08AA6FF4;
    }
L_08AA6FF4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(850), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AA6FFC;
L_08AA6FFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA7698;
      }
      goto L_08AA7004;
    }
L_08AA7004:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(848)));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA702C;
      }
      goto L_08AA7024;
    }
L_08AA7024:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(852)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08AA702C;
L_08AA702C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(852))))));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA7060;
      }
      goto L_08AA7054;
    }
L_08AA7054:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA7074;
      }
      goto L_08AA7060;
    }
L_08AA7060:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    goto L_08AA7074;
L_08AA7074:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(852))))));
        goto L_08AA7098;
    }
    goto L_08AA7084;
L_08AA7084:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_08AA70F8;
      }
      goto L_08AA7094;
    }
L_08AA7094:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(852))))));
    goto L_08AA7098;
L_08AA7098:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const std::uint32_t dividend = ctx.gpr[4]; ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; }
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(852), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(852))))));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA70DC;
      }
      goto L_08AA70D0;
    }
L_08AA70D0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA70F0;
      }
      goto L_08AA70DC;
    }
L_08AA70DC:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    goto L_08AA70F0;
L_08AA70F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA7074;
      }
      goto L_08AA70F8;
    }
L_08AA70F8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(852))))));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[18] = ctx.fpr[18] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(852))))));
        goto L_08AA7140;
    }
    goto L_08AA7134;
L_08AA7134:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(852)));
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[13];
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(852))))));
    goto L_08AA7140;
L_08AA7140:
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(852)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[1];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    ctx.fpr[5] = ctx.fpr[30] - ctx.fpr[13];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[17] + ctx.fpr[19];
    ctx.fpr[18] = ctx.fpr[15] + ctx.fpr[16];
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
      if (branch_taken) {
          goto L_08AA71BC;
      }
      goto L_08AA71B4;
    }
L_08AA71B4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(852)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_08AA71BC;
L_08AA71BC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(852))))));
    ctx.gpr[4] = (ctx.gpr[6] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[11] = (ctx.gpr[5] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AA71F0;
      }
      goto L_08AA71E4;
    }
L_08AA71E4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA7204;
      }
      goto L_08AA71F0;
    }
L_08AA71F0:
    ctx.gpr[11] = (ctx.gpr[6] << 4u);
    ctx.gpr[2] = (ctx.gpr[6] << 2u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.gpr[11] = (0u + ctx.gpr[11]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
    goto L_08AA7204;
L_08AA7204:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA7224;
      }
      goto L_08AA7214;
    }
L_08AA7214:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
        goto L_08AA7278;
    }
    goto L_08AA7224;
L_08AA7224:
    { const std::uint32_t dividend = ctx.gpr[6]; ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; }
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[6] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[11] = (ctx.gpr[5] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AA725C;
      }
      goto L_08AA7250;
    }
L_08AA7250:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA7270;
      }
      goto L_08AA725C;
    }
L_08AA725C:
    ctx.gpr[11] = (ctx.gpr[6] << 4u);
    ctx.gpr[2] = (ctx.gpr[6] << 2u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.gpr[11] = (0u + ctx.gpr[11]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
    goto L_08AA7270;
L_08AA7270:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA7204;
      }
      goto L_08AA7278;
    }
L_08AA7278:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_08AA72AC;
    }
    goto L_08AA72A0;
L_08AA72A0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(852)));
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08AA72AC;
L_08AA72AC:
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[22];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(852)));
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    ctx.fpr[7] = ctx.fpr[30] - ctx.fpr[13];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[17];
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[1]));
    ctx.fpr[17] = ctx.fpr[13] + ctx.fpr[6];
    ctx.fpr[28] = ctx.fpr[22] + ctx.fpr[18];
    ctx.fpr[15] = ctx.fpr[22] - ctx.fpr[18];
    ctx.fpr[16] = ctx.fpr[20] - ctx.fpr[19];
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[19];
    ctx.fpr[14] = ctx.fpr[17] + ctx.fpr[0];
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[0];
    { const bool branch_taken = ctx.fpu_condition();
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
      if (branch_taken) {
          goto L_08AA7330;
      }
      goto L_08AA7328;
    }
L_08AA7328:
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(852)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[2];
    goto L_08AA7330;
L_08AA7330:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(852))))));
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (0u + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[11] = (ctx.gpr[4] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AA7364;
      }
      goto L_08AA7358;
    }
L_08AA7358:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(852)));
      if (branch_taken) {
          goto L_08AA7378;
      }
      goto L_08AA7364;
    }
L_08AA7364:
    ctx.gpr[11] = (ctx.gpr[5] << 4u);
    ctx.gpr[2] = (ctx.gpr[5] << 2u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.gpr[11] = (0u + ctx.gpr[11]);
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
    goto L_08AA7378;
L_08AA7378:
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA7398;
      }
      goto L_08AA7388;
    }
L_08AA7388:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[2]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
        goto L_08AA73EC;
    }
    goto L_08AA7398;
L_08AA7398:
    { const std::uint32_t dividend = ctx.gpr[5]; ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; }
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (0u + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[11] = (ctx.gpr[4] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AA73D0;
      }
      goto L_08AA73C4;
    }
L_08AA73C4:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(852)));
      if (branch_taken) {
          goto L_08AA73E4;
      }
      goto L_08AA73D0;
    }
L_08AA73D0:
    ctx.gpr[11] = (ctx.gpr[5] << 4u);
    ctx.gpr[2] = (ctx.gpr[5] << 2u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.gpr[11] = (0u + ctx.gpr[11]);
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
    goto L_08AA73E4;
L_08AA73E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA7378;
      }
      goto L_08AA73EC;
    }
L_08AA73EC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[1];
    ctx.set_fpu_condition((ctx.fpr[2] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08AA741C;
      }
      goto L_08AA7414;
    }
L_08AA7414:
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(852)));
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[1];
    goto L_08AA741C;
L_08AA741C:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(856)));
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[5];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[2];
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[7] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[8] = ctx.fpr[30] - ctx.fpr[12];
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[7] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[3] + ctx.fpr[7];
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[5];
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[7] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[7] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[7];
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[30];
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = ctx.fpr[3] - ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[2] - ctx.fpr[19];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(816), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(820), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(824), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(856), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(832), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(836), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(840), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08AA762Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 36u, 0x08A10220u>(ctx, &aot_mem) && ctx.pc == 0x08AA762Cu) goto L_08AA762C;
    return;
L_08AA762C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (65535u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32767));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[13];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA7690;
      }
      goto L_08AA7688;
    }
L_08AA7688:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(850), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_08AA7698;
      }
      goto L_08AA7690;
    }
L_08AA7690:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(850), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AA7698;
L_08AA7698:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AA76B8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08AA76B8u) goto L_08AA76B8;
    return;
L_08AA76B8:
    ctx.gpr[31] = (0x08AA76C0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F898u>(ctx, &aot_mem) && ctx.pc == 0x08AA76C0u) goto L_08AA76C0;
    return;
L_08AA76C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA76EC;
      }
      goto L_08AA76D8;
    }
L_08AA76D8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA76EC;
L_08AA76EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(850))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA77E4;
      }
      goto L_08AA76F8;
    }
L_08AA76F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA77D0;
      }
      goto L_08AA772C;
    }
L_08AA772C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA77A8;
      }
      goto L_08AA7738;
    }
L_08AA7738:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AA77A8;
      }
      goto L_08AA774C;
    }
L_08AA774C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA7770;
      }
      goto L_08AA7758;
    }
L_08AA7758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA7770;
      }
      goto L_08AA7768;
    }
L_08AA7768:
    ctx.gpr[31] = (0x08AA7770u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08AA7770u) goto L_08AA7770;
    return;
L_08AA7770:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA77A8;
      }
      goto L_08AA7780;
    }
L_08AA7780:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AA77A4;
      }
      goto L_08AA7790;
    }
L_08AA7790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08AA779Cu);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 193u, 0x08AC8F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA779Cu) goto L_08AA779C;
    return;
L_08AA779C:
    ctx.gpr[31] = (0x08AA77A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 168u, 0x08A5D3C4u>(ctx, &aot_mem) && ctx.pc == 0x08AA77A4u) goto L_08AA77A4;
    return;
L_08AA77A4:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(80), 0u);
    goto L_08AA77A8;
L_08AA77A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA78E0;
      }
      goto L_08AA77B4;
    }
L_08AA77B4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AA77C8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 538u, 0x0889EABCu>(ctx, &aot_mem) && ctx.pc == 0x08AA77C8u) goto L_08AA77C8;
    return;
L_08AA77C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA78E0;
      }
      goto L_08AA77D0;
    }
L_08AA77D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x08AA77DCu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AA77DCu) goto L_08AA77DC;
    return;
L_08AA77DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA78E0;
      }
      goto L_08AA77E4;
    }
L_08AA77E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA78E0;
      }
      goto L_08AA77F0;
    }
L_08AA77F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA78E0;
      }
      goto L_08AA7804;
    }
L_08AA7804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AA781Cu);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA781Cu) goto L_08AA781C;
    return;
L_08AA781C:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AA78E0;
      }
      goto L_08AA782C;
    }
L_08AA782C:
    ctx.gpr[17] = (2275u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1824));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA7840u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 173u, 0x088E8DF4u>(ctx, &aot_mem) && ctx.pc == 0x08AA7840u) goto L_08AA7840;
    return;
L_08AA7840:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA7868;
      }
      goto L_08AA7854;
    }
L_08AA7854:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA7868;
L_08AA7868:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AA7880u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA7880u) goto L_08AA7880;
    return;
L_08AA7880:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.gpr[31] = (0x08AA788Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 174u, 0x088E8DFCu>(ctx, &aot_mem) && ctx.pc == 0x08AA788Cu) goto L_08AA788C;
    return;
L_08AA788C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA78E0;
      }
      goto L_08AA7898;
    }
L_08AA7898:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AA78C0;
      }
      goto L_08AA78A8;
    }
L_08AA78A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
        goto L_08AA78C4;
    }
    goto L_08AA78B8;
L_08AA78B8:
    ctx.gpr[31] = (0x08AA78C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08AA78C0u) goto L_08AA78C0;
    return;
L_08AA78C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    goto L_08AA78C4;
L_08AA78C4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AA78E0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08AA78E0u) goto L_08AA78E0;
    return;
L_08AA78E0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(880)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(884)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(888)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(892)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(896)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(900)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(904)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(908)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(912)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(916)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(920)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(924)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(928)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(932)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(936)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(940)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(944));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA7928:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AA7970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 510u, 0x0889E8D0u>(ctx, &aot_mem) && ctx.pc == 0x08AA7970u) goto L_08AA7970;
    return;
L_08AA7970:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[28]) || std::isnan(ctx.fpr[26])) && ctx.fpr[28] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AA79EC;
      }
      goto L_08AA79CC;
    }
L_08AA79CC:
    ctx.fpr[12] = ctx.fpr[30] / ctx.fpr[28];
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA7A04;
      }
      goto L_08AA79EC;
    }
L_08AA79EC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08AA7A04;
L_08AA7A04:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA7C74;
      }
      goto L_08AA7A2C;
    }
L_08AA7A2C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[7] = (17264u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[7] = (16320u << 16u);
    ctx.gpr[20] = (0u | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(10));
    ctx.gpr[21] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(11));
      if (branch_taken) {
          goto L_08AA7A80;
      }
      goto L_08AA7A6C;
    }
L_08AA7A6C:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08AA7A80;
L_08AA7A80:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AA7AA8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AA53B4;
L_08AA7AA8:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA7AE8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x08927554u>(ctx, &aot_mem) && ctx.pc == 0x08AA7AE8u) goto L_08AA7AE8;
    return;
L_08AA7AE8:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[30];
    ctx.gpr[4] = (48998u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
      if (branch_taken) {
          goto L_08AA7BEC;
      }
      goto L_08AA7B44;
    }
L_08AA7B44:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[28] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA7BEC;
      }
      goto L_08AA7B5C;
    }
L_08AA7B5C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[21]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 2u);
    ctx.gpr[31] = (0x08AA7BA0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 328u, 0x089FA154u>(ctx, &aot_mem) && ctx.pc == 0x08AA7BA0u) goto L_08AA7BA0;
    return;
L_08AA7BA0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[21]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 2u);
    ctx.gpr[31] = (0x08AA7BE4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 328u, 0x089FA154u>(ctx, &aot_mem) && ctx.pc == 0x08AA7BE4u) goto L_08AA7BE4;
    return;
L_08AA7BE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA7C74;
      }
      goto L_08AA7BEC;
    }
L_08AA7BEC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[21]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08AA7C30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 328u, 0x089FA154u>(ctx, &aot_mem) && ctx.pc == 0x08AA7C30u) goto L_08AA7C30;
    return;
L_08AA7C30:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[21]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08AA7C74u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 328u, 0x089FA154u>(ctx, &aot_mem) && ctx.pc == 0x08AA7C74u) goto L_08AA7C74;
    return;
L_08AA7C74:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA7D34;
      }
      goto L_08AA7C88;
    }
L_08AA7C88:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08AA7CB8;
      }
      goto L_08AA7CA4;
    }
L_08AA7CA4:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA7CB8;
L_08AA7CB8:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA7CDCu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08AA53B4;
L_08AA7CDC:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (17136u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[5] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AA7D34u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 328u, 0x089FA154u>(ctx, &aot_mem) && ctx.pc == 0x08AA7D34u) goto L_08AA7D34;
    return;
L_08AA7D34:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA7D74:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (13824u << 16u);
      if (branch_taken) {
          goto L_08AA7DCC;
      }
      goto L_08AA7D84;
    }
L_08AA7D84:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[11] = (3u << 16u);
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (8u << 16u);
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.gpr[10] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-21846));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AA7DD4;
      }
      goto L_08AA7DCC;
    }
L_08AA7DCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA7F48;
      }
      goto L_08AA7DD4;
    }
L_08AA7DD4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-8148)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[8]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    if (static_cast<std::int32_t>(ctx.gpr[6]) < 0) {
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
        goto L_08AA7E04;
    }
    goto L_08AA7E04;
L_08AA7E04:
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA7E38;
      }
      goto L_08AA7E20;
    }
L_08AA7E20:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08AA7E20;
      }
      goto L_08AA7E38;
    }
L_08AA7E38:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[6] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA7E74;
      }
      goto L_08AA7E50;
    }
L_08AA7E50:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AA7F34;
      }
      goto L_08AA7E58;
    }
L_08AA7E58:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08AA7F34;
      }
      goto L_08AA7E74;
    }
L_08AA7E74:
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA7E8C;
      }
      goto L_08AA7E7C;
    }
L_08AA7E7C:
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(76)));
        goto L_08AA7ED4;
    }
    goto L_08AA7E84;
L_08AA7E84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA7F34;
      }
      goto L_08AA7E8C;
    }
L_08AA7E8C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(76)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(84)));
    ctx.fpr[15] = ctx.fpr[16] - ctx.fpr[15];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[5]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[0] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25988)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[7]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08AA7F34;
      }
      goto L_08AA7ED4;
    }
L_08AA7ED4:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(84)));
    ctx.fpr[15] = ctx.fpr[16] - ctx.fpr[15];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[5]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[2] + ctx.fpr[18];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[18] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[0] + ctx.fpr[15];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    goto L_08AA7F34;
L_08AA7F34:
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[12]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA7DD4;
      }
      goto L_08AA7F48;
    }
L_08AA7F48:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA7F50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25932)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25928)));
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[6] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25936), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25956)));
    ctx.gpr[3] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(25968)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25964)));
    ctx.gpr[24] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[16] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(25972), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(25980), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[13] = (2229u << 16u);
    ctx.gpr[12] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(25944), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(25940), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[11] = (15744u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[11]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[14] = (2229u << 16u);
    ctx.gpr[8] = (16281u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(25948), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.pc = 0x08AA8000u; return;
}

void recomp_unit_0168(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0168_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_168(Runtime &runtime) {
    runtime.register_generated_unit(168u, 0x08AA4000u, 16384u, &recomp_unit_0168, &recomp_unit_0168_entry);
    runtime.register_function(0x08AA4000u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4018u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4020u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA402Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4040u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4058u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA406Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA407Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA408Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4098u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA40A4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA40B4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA40BCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA40C8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA40DCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA40F0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4120u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4140u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA414Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4158u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4168u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4180u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4190u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA41A4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA41CCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA41DCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA41E4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4214u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4224u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA423Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA425Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA426Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4288u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4298u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA42B0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA42E4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA42F8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4310u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4388u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA43A0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA43A4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA43B4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA43C0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA43CCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA43D4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA43DCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA43F0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA43FCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4400u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4408u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4410u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA441Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA442Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4434u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA443Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA444Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA445Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4464u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4488u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA44D4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA44F8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4508u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4524u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4544u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4554u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4570u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4588u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4590u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4598u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA45A0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA45D4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA45E8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA45F0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4600u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4668u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4670u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4684u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA46ACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA46B4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4700u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA470Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4714u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4720u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4728u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4738u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4750u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA475Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA477Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA47C0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA47C4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA47D4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA47E0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA47E8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4804u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA480Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4814u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA481Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4824u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4834u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4850u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4858u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4860u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA48A8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA48ECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4904u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4910u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4930u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4988u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA49A4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA49BCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA49D0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA49E4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA49ECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA49F8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4A0Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4A1Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4A28u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4A30u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4A3Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4A48u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4A50u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4A60u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4A6Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4A7Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4A88u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4A90u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4A9Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4AA8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4AB8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4AC0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4AD4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4AE0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4AF0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4B04u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4B10u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4B18u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4B58u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4B70u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4B78u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4B9Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4BA8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4BC0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4BD0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4BDCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4BE8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4BF4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4BFCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4C0Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4C14u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4C1Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4C24u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4C44u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4C54u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4C60u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4C78u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4CBCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4CDCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4CF8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4D00u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4D04u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4D10u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4D30u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4D38u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4D40u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4D48u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4D50u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4D60u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4D68u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4D78u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4D80u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4D90u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4D98u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4DA8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4DB0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4DC0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4DD4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4DE0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4DF4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4E00u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4E20u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4E24u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4E30u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4E5Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4E68u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4E70u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4E80u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4E90u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4EA0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4EBCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4ED0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4EE0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4EF8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4F04u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4F0Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4F1Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4F2Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4F3Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4F4Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4F70u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4F84u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4F90u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4FACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4FE0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA4FF8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA500Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5020u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5040u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5054u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5060u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5068u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5070u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5084u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA50BCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA50C0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA50D0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA50D8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA50E0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA50E8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA50ECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5110u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5138u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5144u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5170u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5174u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5188u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5190u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA519Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA51A4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA51ACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA51B4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA51B8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA51C0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA51C4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA51D0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA51F4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5220u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5240u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5260u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA526Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5278u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5284u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5290u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5298u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA52A4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA52ACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA52B0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA52C8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA52D8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA52E0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA52ECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5304u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5324u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5330u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA533Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5344u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA534Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5354u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA535Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5364u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5378u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA537Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5388u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA53B4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA53DCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA53FCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA541Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5430u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5470u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5500u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA551Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5534u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA553Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5548u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5554u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA555Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5570u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5590u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA55A0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA55ACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA55BCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA55C4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA55C8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA55D8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA55E0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA55E8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA55ECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA55F4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5608u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA562Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5638u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA564Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA566Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5674u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5680u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA56A4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA56ACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA56B8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA56CCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA56D8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA56F0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA56FCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5700u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5710u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5728u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5738u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5768u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5778u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5788u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5790u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5798u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA57A0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA57A8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA57B0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA57CCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA57D4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA57E0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA57E8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA57F8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5804u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5810u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA581Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5820u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5834u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5860u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA587Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA58A4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA58B0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA58CCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA58E0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA58E8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA58F0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5908u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5910u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5934u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA593Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA594Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA595Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5968u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA59B4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5A1Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5A24u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5A30u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5A34u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5A44u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5A58u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5A64u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5A80u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5A88u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5A90u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5A98u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5AA4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5AF8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5B18u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5B2Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5B34u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5B44u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5B5Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5B68u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5B78u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5B90u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5B98u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5BF0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5C0Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5C24u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5C3Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5C54u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5C6Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5C84u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5C9Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5CB4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5D30u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5D38u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5D4Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5D60u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5D74u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5D8Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5DB8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5DC8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5DCCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5DE8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5E2Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5E3Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5E48u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5E50u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5E58u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5E6Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5E74u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5E7Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5EA0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5EACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5EB4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5F20u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5F28u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5F30u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5F38u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5F60u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5F6Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5F74u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5FE0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5FECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA5FFCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6008u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6024u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6034u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA603Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6050u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6068u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6070u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6088u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6090u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA60E8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6104u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA611Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6134u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA614Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6164u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA617Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6194u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA61ACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6228u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6230u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6244u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6258u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA626Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6284u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA62B0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA62C0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA62C4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA62E0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6324u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6334u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6340u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6348u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6350u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6370u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6378u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6380u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA63A4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA63B0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA63B8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6424u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA642Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6434u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA643Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6464u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6470u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6478u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA64E4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA64F0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6500u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA650Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6528u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6538u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6540u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6554u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA656Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA657Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6588u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA65A4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA65A8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6610u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6644u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6650u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6674u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA668Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6698u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA66A8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA66BCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA66C4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA66C8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA66E0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA66F4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6700u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6710u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6724u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA672Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6730u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA675Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA676Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6788u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6798u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA67A8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA67ACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA67F4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6804u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6820u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6828u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6858u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6874u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA687Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6880u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA68B0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA68E0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA68F8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA68FCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6938u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6944u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA69C0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA69CCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6A08u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6A18u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6A34u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6A44u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6A54u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6A58u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6A8Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6A9Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6AB8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6AC0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6AF4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6B04u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6B98u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6BA4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6BD8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6BE8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6C04u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6C14u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6C24u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6C28u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6C5Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6C6Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6C88u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6C90u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6CC4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6CD4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6D94u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6DD0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6E58u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6E74u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6F98u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6FECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6FF4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA6FFCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7004u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7024u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA702Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7054u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7060u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7074u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7084u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7094u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7098u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA70D0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA70DCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA70F0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA70F8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7134u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7140u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA71B4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA71BCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA71E4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA71F0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7204u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7214u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7224u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7250u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA725Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7270u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7278u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA72A0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA72ACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7328u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7330u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7358u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7364u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7378u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7388u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7398u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA73C4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA73D0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA73E4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA73ECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7414u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA741Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA762Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7688u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7690u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7698u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA76B8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA76C0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA76D8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA76ECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA76F8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA772Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7738u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA774Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7758u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7768u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7770u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7780u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7790u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA779Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA77A4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA77A8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA77B4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA77C8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA77D0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA77DCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA77E4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA77F0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7804u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA781Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA782Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7840u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7854u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7868u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7880u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA788Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7898u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA78A8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA78B8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA78C0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA78C4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA78E0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7928u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7970u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA79CCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA79ECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7A04u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7A2Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7A6Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7A80u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7AA8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7AE8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7B44u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7B5Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7BA0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7BE4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7BECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7C30u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7C74u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7C88u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7CA4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7CB8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7CDCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7D34u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7D74u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7D84u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7DCCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7DD4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7E04u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7E20u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7E38u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7E50u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7E58u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7E74u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7E7Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7E84u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7E8Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7ED4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7F34u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7F48u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x08AA7F50u, &recomp_unit_0168, "recomp_unit_0168");
}
} // namespace psprecomp
