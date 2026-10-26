#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "lcs_render_config.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0170[4095] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 5, 0, 6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0,
    0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0,
    0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0,
    0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0,
    0, 41, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0,
    48, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58,
    0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0,
    0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 73, 0, 74, 75, 0, 0,
    0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 80, 0, 0, 0, 81, 0, 82, 0, 83, 0, 84, 0, 85, 86, 0, 0, 0,
    87, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0,
    95, 0, 96, 0, 97, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0,
    104, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 111,
    112, 0, 0, 0, 0, 113, 0, 0, 0, 114, 115, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 119, 0, 0, 120, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 123, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    126, 0, 127, 0, 0, 0, 128, 0, 129, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 135,
    0, 136, 0, 137, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0,
    0, 0, 0, 144, 0, 145, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 149, 0, 150, 0, 0, 0, 151, 0, 152, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0,
    0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 160, 0, 161, 0, 162, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 0,
    0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 171, 0, 172, 0, 173, 0, 174, 0, 175, 0,
    0, 0, 176, 0, 177, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0,
    0, 182, 0, 0, 183, 0, 0, 0, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 0, 0, 189, 0, 190, 0, 191, 0, 192, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 196, 0, 197, 0, 0, 0, 198, 0, 199, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 204,
    0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0,
    213, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 217, 0, 0, 218, 0, 0, 0, 0, 219, 0, 220, 0, 221, 0, 222, 0, 223, 0, 0, 0,
    224, 0, 0, 0, 225, 0, 226, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 230, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0,
    233, 0, 234, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 237, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 242, 0, 0,
    0, 0, 243, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0,
    251, 0, 0, 0, 252, 0, 0, 0, 253, 254, 0, 0, 255, 0, 0, 0, 0, 256, 0, 257, 0, 258, 0, 259, 0, 260, 0, 261, 0, 262, 0, 0,
    263, 0, 0, 0, 264, 0, 265, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 270, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0,
    0, 0, 275, 0, 0, 276, 0, 0, 0, 277, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 282,
    0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 287, 0, 0, 0, 0, 0, 288, 289, 0, 0, 0, 0,
    0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 299, 0, 0, 0, 300, 0, 0, 0, 0, 301, 302, 0, 0, 0,
    303, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 306, 0, 0, 307, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310,
    0, 311, 0, 0, 0, 312, 0, 0, 313, 0, 314, 0, 315, 0, 316, 317, 0, 0, 0, 318, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 320, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 324, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0,
    0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 334,
    0, 0, 335, 0, 0, 336, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 342, 0, 0, 343,
    0, 344, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 347, 0, 348, 349, 0, 0, 0, 350, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 353, 0,
    0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 358, 0, 0, 0, 359, 0, 0, 360, 0,
    0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 364, 0, 0, 365, 0, 0, 0, 366, 0, 0, 367, 0, 368, 0, 0, 0, 369, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 377, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 381, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 388,
    0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 392, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 398, 0, 399, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 402, 0, 403, 0, 0, 0, 0, 0, 404,
    0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 407, 0, 0, 0, 0, 408, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 412,
    0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 417, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0,
    0, 0, 0, 420, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 426, 0, 427, 0, 0,
    0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 0,
    0, 435, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    439, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 444, 0, 0, 0, 445,
    0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0,
    0, 457, 0, 458, 0, 459, 0, 460, 0, 461, 0, 462, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 466, 0, 467, 0, 0, 0,
    0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0,
    0, 0, 473, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0, 0, 0, 477, 0, 478, 0, 479, 480, 0, 0, 481, 0, 0, 482, 0,
    483, 0, 484, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 489, 0,
    0, 0, 490, 0, 0, 0, 0, 491, 0, 492, 0, 493, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 497, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 502, 0,
    0, 0, 503, 0, 0, 0, 0, 0, 0, 504, 0, 0, 505, 0, 506, 0, 507, 0, 508, 0, 509, 0, 510, 0, 0, 0, 511, 0, 0, 512, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 514, 0, 515, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 517, 0, 0,
    0, 518, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 521, 0, 522, 0, 0, 0, 0, 0, 523, 0, 0,
    0, 0, 524, 0, 0, 0, 525, 0, 526, 0, 527, 528, 0, 0, 529, 0, 0, 530, 0, 531, 0, 532, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 537, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0, 540, 0, 541, 0,
    0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 545, 0, 0, 546, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 550,
    0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 552, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0,
    0, 0, 0, 0, 0, 0, 555, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 560, 0, 0, 561, 0, 0, 562, 0, 563, 0, 0, 564, 0, 0, 565, 566, 0, 0, 0, 567, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0,
    0, 569, 0, 0, 0, 0, 570, 0, 571, 0, 0, 0, 0, 572, 0, 0, 573, 0, 0, 0, 0, 574, 0, 0, 0, 575, 0, 0, 0, 576, 0, 577,
    0, 0, 578, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 582, 0, 0, 583, 0, 0,
    0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0,
    0, 0, 0, 0, 0, 587, 0, 588, 589, 0, 0, 590, 0, 591, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 593, 0, 594, 595, 0, 596,
    0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 600, 601, 0, 0, 0, 602, 0, 0, 0,
    0, 603, 0, 0, 604, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 607, 0, 608, 0, 609, 0, 0, 0,
    0, 0, 610, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 613, 0, 0, 0, 614, 615, 0, 616, 0, 0, 0, 617, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 619, 0, 0, 620, 621, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 623, 0, 624, 0, 625, 0, 0, 0, 0, 0, 626, 0, 627, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 629, 0, 630, 0, 631, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 633, 0, 0, 0, 0, 0, 0, 0, 634, 0, 635, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 638, 0, 0, 0, 0, 639, 0,
    0, 0, 0, 640, 0, 0, 641, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 644, 0, 645, 0, 646, 0,
    0, 0, 0, 0, 647, 0, 0, 648, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 651, 0, 652, 0,
    653, 0, 0, 654, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 657, 0, 658, 0, 659, 660, 0,
    0, 0, 0, 661, 0, 0, 0, 0, 662, 0, 0, 663, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0,
    666, 0, 667, 0, 668, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 670, 0, 671, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0,
    0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 675, 676, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 678, 0, 679, 680, 0, 681, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 683, 0, 684, 0, 0, 685, 686, 0, 0, 687, 0, 688, 0, 689, 0, 690, 0, 0, 0, 0, 0, 691, 0, 692, 693, 0, 0, 0, 0, 0, 694,
    0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 697, 0, 698, 0, 699, 0, 700, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 702, 0, 703, 0, 704, 705, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 708, 0, 709, 0, 710, 0, 711, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0,
    0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 716, 0, 717, 0, 718, 719, 0, 0, 0, 720,
    0, 0, 0, 0, 721, 0, 0, 722, 723, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 0, 0, 726, 0,
    727, 0, 728, 0, 0, 729, 0, 730, 0, 731, 0, 732, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 734, 735, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 738, 739, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 741, 0, 742, 0, 743, 0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0,
    0, 746, 0, 0, 747, 748, 0, 0, 749, 0, 0, 0, 750, 0, 0, 751, 0, 0, 0, 0, 0, 0, 752, 0, 0, 753, 0, 0, 0, 0, 0, 0,
    754, 0, 0, 755, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 757, 0, 758, 759, 0, 0, 760, 0, 761, 0, 762, 0, 763, 0, 764, 0,
    0, 0, 0, 0, 0, 765, 0, 0, 766, 0, 0, 767, 0, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 769, 0, 0,
    0, 0, 0, 0, 0, 770, 0, 771, 0, 772, 0, 773, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 0, 0, 775,
    0, 776, 0, 777, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 0, 0, 780, 0, 781, 0, 782, 0, 783,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 785, 0, 786, 0, 787, 0, 788, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 0, 790, 0, 791, 0, 792, 0, 793, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 794, 0,
    0, 0, 0, 0, 0, 0, 795, 0, 796, 0, 797, 0, 798, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 799, 0, 0, 0, 0, 0, 0, 0,
    800, 0, 801, 0, 802, 0, 803, 0, 0, 0, 0, 804, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 0, 806,
};
void recomp_unit_0170_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AAC000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0170[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AAC000;
    case 2u: goto L_08AAC01C;
    case 3u: goto L_08AAC054;
    case 4u: goto L_08AAC064;
    case 5u: goto L_08AAC06C;
    case 6u: goto L_08AAC074;
    case 7u: goto L_08AAC0A0;
    case 8u: goto L_08AAC184;
    case 9u: goto L_08AAC260;
    case 10u: goto L_08AAC274;
    case 11u: goto L_08AAC2A4;
    case 12u: goto L_08AAC2AC;
    case 13u: goto L_08AAC320;
    case 14u: goto L_08AAC328;
    case 15u: goto L_08AAC330;
    case 16u: goto L_08AAC34C;
    case 17u: goto L_08AAC36C;
    case 18u: goto L_08AAC374;
    case 19u: goto L_08AAC38C;
    case 20u: goto L_08AAC398;
    case 21u: goto L_08AAC3AC;
    case 22u: goto L_08AAC3B8;
    case 23u: goto L_08AAC3CC;
    case 24u: goto L_08AAC3D4;
    case 25u: goto L_08AAC3E8;
    case 26u: goto L_08AAC408;
    case 27u: goto L_08AAC410;
    case 28u: goto L_08AAC428;
    case 29u: goto L_08AAC434;
    case 30u: goto L_08AAC448;
    case 31u: goto L_08AAC454;
    case 32u: goto L_08AAC468;
    case 33u: goto L_08AAC470;
    case 34u: goto L_08AAC484;
    case 35u: goto L_08AAC4A4;
    case 36u: goto L_08AAC4AC;
    case 37u: goto L_08AAC4C4;
    case 38u: goto L_08AAC4D0;
    case 39u: goto L_08AAC4E4;
    case 40u: goto L_08AAC4F0;
    case 41u: goto L_08AAC504;
    case 42u: goto L_08AAC50C;
    case 43u: goto L_08AAC520;
    case 44u: goto L_08AAC540;
    case 45u: goto L_08AAC548;
    case 46u: goto L_08AAC560;
    case 47u: goto L_08AAC56C;
    case 48u: goto L_08AAC580;
    case 49u: goto L_08AAC58C;
    case 50u: goto L_08AAC5A0;
    case 51u: goto L_08AAC5AC;
    case 52u: goto L_08AAC5D0;
    case 53u: goto L_08AAC5F4;
    case 54u: goto L_08AAC61C;
    case 55u: goto L_08AAC640;
    case 56u: goto L_08AAC64C;
    case 57u: goto L_08AAC65C;
    case 58u: goto L_08AAC67C;
    case 59u: goto L_08AAC688;
    case 60u: goto L_08AAC698;
    case 61u: goto L_08AAC6A8;
    case 62u: goto L_08AAC6E0;
    case 63u: goto L_08AAC718;
    case 64u: goto L_08AAC72C;
    case 65u: goto L_08AAC73C;
    case 66u: goto L_08AAC758;
    case 67u: goto L_08AAC774;
    case 68u: goto L_08AAC790;
    case 69u: goto L_08AAC7A4;
    case 70u: goto L_08AAC7BC;
    case 71u: goto L_08AAC7D0;
    case 72u: goto L_08AAC7D8;
    case 73u: goto L_08AAC7E8;
    case 74u: goto L_08AAC7F0;
    case 75u: goto L_08AAC7F4;
    case 76u: goto L_08AAC804;
    case 77u: goto L_08AAC810;
    case 78u: goto L_08AAC82C;
    case 79u: goto L_08AAC834;
    case 80u: goto L_08AAC83C;
    case 81u: goto L_08AAC84C;
    case 82u: goto L_08AAC854;
    case 83u: goto L_08AAC85C;
    case 84u: goto L_08AAC864;
    case 85u: goto L_08AAC86C;
    case 86u: goto L_08AAC870;
    case 87u: goto L_08AAC880;
    case 88u: goto L_08AAC888;
    case 89u: goto L_08AAC898;
    case 90u: goto L_08AAC8B0;
    case 91u: goto L_08AAC8B8;
    case 92u: goto L_08AAC8C4;
    case 93u: goto L_08AAC8D4;
    case 94u: goto L_08AAC8E8;
    case 95u: goto L_08AAC900;
    case 96u: goto L_08AAC908;
    case 97u: goto L_08AAC910;
    case 98u: goto L_08AAC928;
    case 99u: goto L_08AAC930;
    case 100u: goto L_08AAC93C;
    case 101u: goto L_08AAC94C;
    case 102u: goto L_08AAC960;
    case 103u: goto L_08AAC978;
    case 104u: goto L_08AAC980;
    case 105u: goto L_08AAC98C;
    case 106u: goto L_08AAC99C;
    case 107u: goto L_08AAC9AC;
    case 108u: goto L_08AAC9BC;
    case 109u: goto L_08AAC9D8;
    case 110u: goto L_08AAC9E0;
    case 111u: goto L_08AAC9FC;
    case 112u: goto L_08AACA00;
    case 113u: goto L_08AACA14;
    case 114u: goto L_08AACA24;
    case 115u: goto L_08AACA28;
    case 116u: goto L_08AACA30;
    case 117u: goto L_08AACA44;
    case 118u: goto L_08AACA5C;
    case 119u: goto L_08AACA60;
    case 120u: goto L_08AACA6C;
    case 121u: goto L_08AACAA8;
    case 122u: goto L_08AACAB0;
    case 123u: goto L_08AACAB4;
    case 124u: goto L_08AACABC;
    case 125u: goto L_08AACAC8;
    case 126u: goto L_08AACB00;
    case 127u: goto L_08AACB08;
    case 128u: goto L_08AACB18;
    case 129u: goto L_08AACB20;
    case 130u: goto L_08AACB30;
    case 131u: goto L_08AACB3C;
    case 132u: goto L_08AACB4C;
    case 133u: goto L_08AACB5C;
    case 134u: goto L_08AACB6C;
    case 135u: goto L_08AACB7C;
    case 136u: goto L_08AACB84;
    case 137u: goto L_08AACB8C;
    case 138u: goto L_08AACBA0;
    case 139u: goto L_08AACBAC;
    case 140u: goto L_08AACBBC;
    case 141u: goto L_08AACBCC;
    case 142u: goto L_08AACBDC;
    case 143u: goto L_08AACBEC;
    case 144u: goto L_08AACC0C;
    case 145u: goto L_08AACC14;
    case 146u: goto L_08AACC1C;
    case 147u: goto L_08AACC24;
    case 148u: goto L_08AACC5C;
    case 149u: goto L_08AACC8C;
    case 150u: goto L_08AACC94;
    case 151u: goto L_08AACCA4;
    case 152u: goto L_08AACCAC;
    case 153u: goto L_08AACCBC;
    case 154u: goto L_08AACCC8;
    case 155u: goto L_08AACCD8;
    case 156u: goto L_08AACCE8;
    case 157u: goto L_08AACCF8;
    case 158u: goto L_08AACD08;
    case 159u: goto L_08AACD10;
    case 160u: goto L_08AACD28;
    case 161u: goto L_08AACD30;
    case 162u: goto L_08AACD38;
    case 163u: goto L_08AACD4C;
    case 164u: goto L_08AACD58;
    case 165u: goto L_08AACD68;
    case 166u: goto L_08AACD78;
    case 167u: goto L_08AACD88;
    case 168u: goto L_08AACD98;
    case 169u: goto L_08AACDB8;
    case 170u: goto L_08AACDC4;
    case 171u: goto L_08AACDD8;
    case 172u: goto L_08AACDE0;
    case 173u: goto L_08AACDE8;
    case 174u: goto L_08AACDF0;
    case 175u: goto L_08AACDF8;
    case 176u: goto L_08AACE08;
    case 177u: goto L_08AACE10;
    case 178u: goto L_08AACE18;
    case 179u: goto L_08AACE20;
    case 180u: goto L_08AACE5C;
    case 181u: goto L_08AACE74;
    case 182u: goto L_08AACE84;
    case 183u: goto L_08AACE90;
    case 184u: goto L_08AACEA4;
    case 185u: goto L_08AACEAC;
    case 186u: goto L_08AACEB4;
    case 187u: goto L_08AACEBC;
    case 188u: goto L_08AACEC4;
    case 189u: goto L_08AACED4;
    case 190u: goto L_08AACEDC;
    case 191u: goto L_08AACEE4;
    case 192u: goto L_08AACEEC;
    case 193u: goto L_08AACF28;
    case 194u: goto L_08AACF40;
    case 195u: goto L_08AACF60;
    case 196u: goto L_08AACF8C;
    case 197u: goto L_08AACF94;
    case 198u: goto L_08AACFA4;
    case 199u: goto L_08AACFAC;
    case 200u: goto L_08AACFB0;
    case 201u: goto L_08AACFCC;
    case 202u: goto L_08AACFE0;
    case 203u: goto L_08AACFEC;
    case 204u: goto L_08AACFFC;
    case 205u: goto L_08AAD008;
    case 206u: goto L_08AAD014;
    case 207u: goto L_08AAD020;
    case 208u: goto L_08AAD02C;
    case 209u: goto L_08AAD03C;
    case 210u: goto L_08AAD048;
    case 211u: goto L_08AAD054;
    case 212u: goto L_08AAD06C;
    case 213u: goto L_08AAD080;
    case 214u: goto L_08AAD08C;
    case 215u: goto L_08AAD09C;
    case 216u: goto L_08AAD0AC;
    case 217u: goto L_08AAD0B0;
    case 218u: goto L_08AAD0BC;
    case 219u: goto L_08AAD0D0;
    case 220u: goto L_08AAD0D8;
    case 221u: goto L_08AAD0E0;
    case 222u: goto L_08AAD0E8;
    case 223u: goto L_08AAD0F0;
    case 224u: goto L_08AAD100;
    case 225u: goto L_08AAD110;
    case 226u: goto L_08AAD118;
    case 227u: goto L_08AAD124;
    case 228u: goto L_08AAD138;
    case 229u: goto L_08AAD148;
    case 230u: goto L_08AAD150;
    case 231u: goto L_08AAD15C;
    case 232u: goto L_08AAD168;
    case 233u: goto L_08AAD180;
    case 234u: goto L_08AAD188;
    case 235u: goto L_08AAD198;
    case 236u: goto L_08AAD1A4;
    case 237u: goto L_08AAD1B4;
    case 238u: goto L_08AAD1C0;
    case 239u: goto L_08AAD1C8;
    case 240u: goto L_08AAD1E4;
    case 241u: goto L_08AAD1EC;
    case 242u: goto L_08AAD1F4;
    case 243u: goto L_08AAD208;
    case 244u: goto L_08AAD214;
    case 245u: goto L_08AAD224;
    case 246u: goto L_08AAD234;
    case 247u: goto L_08AAD23C;
    case 248u: goto L_08AAD248;
    case 249u: goto L_08AAD260;
    case 250u: goto L_08AAD274;
    case 251u: goto L_08AAD280;
    case 252u: goto L_08AAD290;
    case 253u: goto L_08AAD2A0;
    case 254u: goto L_08AAD2A4;
    case 255u: goto L_08AAD2B0;
    case 256u: goto L_08AAD2C4;
    case 257u: goto L_08AAD2CC;
    case 258u: goto L_08AAD2D4;
    case 259u: goto L_08AAD2DC;
    case 260u: goto L_08AAD2E4;
    case 261u: goto L_08AAD2EC;
    case 262u: goto L_08AAD2F4;
    case 263u: goto L_08AAD300;
    case 264u: goto L_08AAD310;
    case 265u: goto L_08AAD318;
    case 266u: goto L_08AAD320;
    case 267u: goto L_08AAD328;
    case 268u: goto L_08AAD344;
    case 269u: goto L_08AAD34C;
    case 270u: goto L_08AAD354;
    case 271u: goto L_08AAD358;
    case 272u: goto L_08AAD378;
    case 273u: goto L_08AAD3EC;
    case 274u: goto L_08AAD3F4;
    case 275u: goto L_08AAD408;
    case 276u: goto L_08AAD414;
    case 277u: goto L_08AAD424;
    case 278u: goto L_08AAD428;
    case 279u: goto L_08AAD438;
    case 280u: goto L_08AAD45C;
    case 281u: goto L_08AAD478;
    case 282u: goto L_08AAD47C;
    case 283u: goto L_08AAD494;
    case 284u: goto L_08AAD49C;
    case 285u: goto L_08AAD4C0;
    case 286u: goto L_08AAD4C8;
    case 287u: goto L_08AAD4D0;
    case 288u: goto L_08AAD4E8;
    case 289u: goto L_08AAD4EC;
    case 290u: goto L_08AAD504;
    case 291u: goto L_08AAD510;
    case 292u: goto L_08AAD534;
    case 293u: goto L_08AAD53C;
    case 294u: goto L_08AAD554;
    case 295u: goto L_08AAD584;
    case 296u: goto L_08AAD59C;
    case 297u: goto L_08AAD5B0;
    case 298u: goto L_08AAD5C4;
    case 299u: goto L_08AAD5C8;
    case 300u: goto L_08AAD5D8;
    case 301u: goto L_08AAD5EC;
    case 302u: goto L_08AAD5F0;
    case 303u: goto L_08AAD600;
    case 304u: goto L_08AAD624;
    case 305u: goto L_08AAD634;
    case 306u: goto L_08AAD63C;
    case 307u: goto L_08AAD648;
    case 308u: goto L_08AAD650;
    case 309u: goto L_08AAD65C;
    case 310u: goto L_08AAD67C;
    case 311u: goto L_08AAD684;
    case 312u: goto L_08AAD694;
    case 313u: goto L_08AAD6A0;
    case 314u: goto L_08AAD6A8;
    case 315u: goto L_08AAD6B0;
    case 316u: goto L_08AAD6B8;
    case 317u: goto L_08AAD6BC;
    case 318u: goto L_08AAD6CC;
    case 319u: goto L_08AAD6D0;
    case 320u: goto L_08AAD708;
    case 321u: goto L_08AAD714;
    case 322u: goto L_08AAD724;
    case 323u: goto L_08AAD734;
    case 324u: goto L_08AAD73C;
    case 325u: goto L_08AAD74C;
    case 326u: goto L_08AAD754;
    case 327u: goto L_08AAD770;
    case 328u: goto L_08AAD778;
    case 329u: goto L_08AAD790;
    case 330u: goto L_08AAD79C;
    case 331u: goto L_08AAD7CC;
    case 332u: goto L_08AAD7E0;
    case 333u: goto L_08AAD7E8;
    case 334u: goto L_08AAD7FC;
    case 335u: goto L_08AAD808;
    case 336u: goto L_08AAD814;
    case 337u: goto L_08AAD818;
    case 338u: goto L_08AAD838;
    case 339u: goto L_08AAD840;
    case 340u: goto L_08AAD850;
    case 341u: goto L_08AAD864;
    case 342u: goto L_08AAD870;
    case 343u: goto L_08AAD87C;
    case 344u: goto L_08AAD884;
    case 345u: goto L_08AAD890;
    case 346u: goto L_08AAD8A0;
    case 347u: goto L_08AAD8B0;
    case 348u: goto L_08AAD8B8;
    case 349u: goto L_08AAD8BC;
    case 350u: goto L_08AAD8CC;
    case 351u: goto L_08AAD8D4;
    case 352u: goto L_08AAD8F0;
    case 353u: goto L_08AAD8F8;
    case 354u: goto L_08AAD910;
    case 355u: goto L_08AAD91C;
    case 356u: goto L_08AAD940;
    case 357u: goto L_08AAD954;
    case 358u: goto L_08AAD95C;
    case 359u: goto L_08AAD96C;
    case 360u: goto L_08AAD978;
    case 361u: goto L_08AAD98C;
    case 362u: goto L_08AAD994;
    case 363u: goto L_08AAD9B0;
    case 364u: goto L_08AAD9B8;
    case 365u: goto L_08AAD9C4;
    case 366u: goto L_08AAD9D4;
    case 367u: goto L_08AAD9E0;
    case 368u: goto L_08AAD9E8;
    case 369u: goto L_08AAD9F8;
    case 370u: goto L_08AADA3C;
    case 371u: goto L_08AADA8C;
    case 372u: goto L_08AADA98;
    case 373u: goto L_08AADB34;
    case 374u: goto L_08AADB48;
    case 375u: goto L_08AADB98;
    case 376u: goto L_08AADBA8;
    case 377u: goto L_08AADBB0;
    case 378u: goto L_08AADBB8;
    case 379u: goto L_08AADBF4;
    case 380u: goto L_08AADC24;
    case 381u: goto L_08AADC30;
    case 382u: goto L_08AADC34;
    case 383u: goto L_08AADC5C;
    case 384u: goto L_08AADCD8;
    case 385u: goto L_08AADD54;
    case 386u: goto L_08AADDBC;
    case 387u: goto L_08AADDF4;
    case 388u: goto L_08AADDFC;
    case 389u: goto L_08AADE04;
    case 390u: goto L_08AADE10;
    case 391u: goto L_08AADE28;
    case 392u: goto L_08AADE9C;
    case 393u: goto L_08AADEA4;
    case 394u: goto L_08AADEB8;
    case 395u: goto L_08AADF2C;
    case 396u: goto L_08AADF9C;
    case 397u: goto L_08AADFA4;
    case 398u: goto L_08AAE014;
    case 399u: goto L_08AAE01C;
    case 400u: goto L_08AAE024;
    case 401u: goto L_08AAE03C;
    case 402u: goto L_08AAE05C;
    case 403u: goto L_08AAE064;
    case 404u: goto L_08AAE07C;
    case 405u: goto L_08AAE088;
    case 406u: goto L_08AAE09C;
    case 407u: goto L_08AAE0A8;
    case 408u: goto L_08AAE0BC;
    case 409u: goto L_08AAE0C4;
    case 410u: goto L_08AAE0D4;
    case 411u: goto L_08AAE0F4;
    case 412u: goto L_08AAE0FC;
    case 413u: goto L_08AAE114;
    case 414u: goto L_08AAE120;
    case 415u: goto L_08AAE134;
    case 416u: goto L_08AAE140;
    case 417u: goto L_08AAE154;
    case 418u: goto L_08AAE15C;
    case 419u: goto L_08AAE16C;
    case 420u: goto L_08AAE18C;
    case 421u: goto L_08AAE194;
    case 422u: goto L_08AAE1AC;
    case 423u: goto L_08AAE1B8;
    case 424u: goto L_08AAE1CC;
    case 425u: goto L_08AAE1D8;
    case 426u: goto L_08AAE1EC;
    case 427u: goto L_08AAE1F4;
    case 428u: goto L_08AAE204;
    case 429u: goto L_08AAE224;
    case 430u: goto L_08AAE22C;
    case 431u: goto L_08AAE244;
    case 432u: goto L_08AAE250;
    case 433u: goto L_08AAE264;
    case 434u: goto L_08AAE270;
    case 435u: goto L_08AAE284;
    case 436u: goto L_08AAE290;
    case 437u: goto L_08AAE2B4;
    case 438u: goto L_08AAE2D8;
    case 439u: goto L_08AAE300;
    case 440u: goto L_08AAE324;
    case 441u: goto L_08AAE330;
    case 442u: goto L_08AAE340;
    case 443u: goto L_08AAE360;
    case 444u: goto L_08AAE36C;
    case 445u: goto L_08AAE37C;
    case 446u: goto L_08AAE38C;
    case 447u: goto L_08AAE3D0;
    case 448u: goto L_08AAE420;
    case 449u: goto L_08AAE428;
    case 450u: goto L_08AAE43C;
    case 451u: goto L_08AAE484;
    case 452u: goto L_08AAE498;
    case 453u: goto L_08AAE4B0;
    case 454u: goto L_08AAE4CC;
    case 455u: goto L_08AAE4DC;
    case 456u: goto L_08AAE4F8;
    case 457u: goto L_08AAE504;
    case 458u: goto L_08AAE50C;
    case 459u: goto L_08AAE514;
    case 460u: goto L_08AAE51C;
    case 461u: goto L_08AAE524;
    case 462u: goto L_08AAE52C;
    case 463u: goto L_08AAE53C;
    case 464u: goto L_08AAE54C;
    case 465u: goto L_08AAE55C;
    case 466u: goto L_08AAE568;
    case 467u: goto L_08AAE570;
    case 468u: goto L_08AAE58C;
    case 469u: goto L_08AAE5A8;
    case 470u: goto L_08AAE5B8;
    case 471u: goto L_08AAE5CC;
    case 472u: goto L_08AAE5EC;
    case 473u: goto L_08AAE608;
    case 474u: goto L_08AAE610;
    case 475u: goto L_08AAE628;
    case 476u: goto L_08AAE63C;
    case 477u: goto L_08AAE64C;
    case 478u: goto L_08AAE654;
    case 479u: goto L_08AAE65C;
    case 480u: goto L_08AAE660;
    case 481u: goto L_08AAE66C;
    case 482u: goto L_08AAE678;
    case 483u: goto L_08AAE680;
    case 484u: goto L_08AAE688;
    case 485u: goto L_08AAE690;
    case 486u: goto L_08AAE6BC;
    case 487u: goto L_08AAE6CC;
    case 488u: goto L_08AAE6E8;
    case 489u: goto L_08AAE6F8;
    case 490u: goto L_08AAE708;
    case 491u: goto L_08AAE71C;
    case 492u: goto L_08AAE724;
    case 493u: goto L_08AAE72C;
    case 494u: goto L_08AAE744;
    case 495u: goto L_08AAE77C;
    case 496u: goto L_08AAE7CC;
    case 497u: goto L_08AAE7D4;
    case 498u: goto L_08AAE7E8;
    case 499u: goto L_08AAE830;
    case 500u: goto L_08AAE844;
    case 501u: goto L_08AAE85C;
    case 502u: goto L_08AAE878;
    case 503u: goto L_08AAE888;
    case 504u: goto L_08AAE8A4;
    case 505u: goto L_08AAE8B0;
    case 506u: goto L_08AAE8B8;
    case 507u: goto L_08AAE8C0;
    case 508u: goto L_08AAE8C8;
    case 509u: goto L_08AAE8D0;
    case 510u: goto L_08AAE8D8;
    case 511u: goto L_08AAE8E8;
    case 512u: goto L_08AAE8F4;
    case 513u: goto L_08AAE928;
    case 514u: goto L_08AAE934;
    case 515u: goto L_08AAE93C;
    case 516u: goto L_08AAE958;
    case 517u: goto L_08AAE974;
    case 518u: goto L_08AAE984;
    case 519u: goto L_08AAE998;
    case 520u: goto L_08AAE9B8;
    case 521u: goto L_08AAE9D4;
    case 522u: goto L_08AAE9DC;
    case 523u: goto L_08AAE9F4;
    case 524u: goto L_08AAEA08;
    case 525u: goto L_08AAEA18;
    case 526u: goto L_08AAEA20;
    case 527u: goto L_08AAEA28;
    case 528u: goto L_08AAEA2C;
    case 529u: goto L_08AAEA38;
    case 530u: goto L_08AAEA44;
    case 531u: goto L_08AAEA4C;
    case 532u: goto L_08AAEA54;
    case 533u: goto L_08AAEA5C;
    case 534u: goto L_08AAEA88;
    case 535u: goto L_08AAEA98;
    case 536u: goto L_08AAEAB4;
    case 537u: goto L_08AAEAC4;
    case 538u: goto L_08AAEAD4;
    case 539u: goto L_08AAEAE8;
    case 540u: goto L_08AAEAF0;
    case 541u: goto L_08AAEAF8;
    case 542u: goto L_08AAEB10;
    case 543u: goto L_08AAEB48;
    case 544u: goto L_08AAEBE8;
    case 545u: goto L_08AAEC10;
    case 546u: goto L_08AAEC1C;
    case 547u: goto L_08AAEC2C;
    case 548u: goto L_08AAEC4C;
    case 549u: goto L_08AAEC68;
    case 550u: goto L_08AAEC7C;
    case 551u: goto L_08AAEC9C;
    case 552u: goto L_08AAECA8;
    case 553u: goto L_08AAECB4;
    case 554u: goto L_08AAECF8;
    case 555u: goto L_08AAED18;
    case 556u: goto L_08AAED24;
    case 557u: goto L_08AAED44;
    case 558u: goto L_08AAED54;
    case 559u: goto L_08AAED60;
    case 560u: goto L_08AAED88;
    case 561u: goto L_08AAED94;
    case 562u: goto L_08AAEDA0;
    case 563u: goto L_08AAEDA8;
    case 564u: goto L_08AAEDB4;
    case 565u: goto L_08AAEDC0;
    case 566u: goto L_08AAEDC4;
    case 567u: goto L_08AAEDD4;
    case 568u: goto L_08AAEDE8;
    case 569u: goto L_08AAEE04;
    case 570u: goto L_08AAEE18;
    case 571u: goto L_08AAEE20;
    case 572u: goto L_08AAEE34;
    case 573u: goto L_08AAEE40;
    case 574u: goto L_08AAEE54;
    case 575u: goto L_08AAEE64;
    case 576u: goto L_08AAEE74;
    case 577u: goto L_08AAEE7C;
    case 578u: goto L_08AAEE88;
    case 579u: goto L_08AAEE94;
    case 580u: goto L_08AAEEBC;
    case 581u: goto L_08AAEEE0;
    case 582u: goto L_08AAEEE8;
    case 583u: goto L_08AAEEF4;
    case 584u: goto L_08AAEF18;
    case 585u: goto L_08AAEF28;
    case 586u: goto L_08AAEF78;
    case 587u: goto L_08AAEF94;
    case 588u: goto L_08AAEF9C;
    case 589u: goto L_08AAEFA0;
    case 590u: goto L_08AAEFAC;
    case 591u: goto L_08AAEFB4;
    case 592u: goto L_08AAEFCC;
    case 593u: goto L_08AAEFE8;
    case 594u: goto L_08AAEFF0;
    case 595u: goto L_08AAEFF4;
    case 596u: goto L_08AAEFFC;
    case 597u: goto L_08AAF004;
    case 598u: goto L_08AAF01C;
    case 599u: goto L_08AAF04C;
    case 600u: goto L_08AAF05C;
    case 601u: goto L_08AAF060;
    case 602u: goto L_08AAF070;
    case 603u: goto L_08AAF084;
    case 604u: goto L_08AAF090;
    case 605u: goto L_08AAF094;
    case 606u: goto L_08AAF0C0;
    case 607u: goto L_08AAF0E0;
    case 608u: goto L_08AAF0E8;
    case 609u: goto L_08AAF0F0;
    case 610u: goto L_08AAF108;
    case 611u: goto L_08AAF110;
    case 612u: goto L_08AAF140;
    case 613u: goto L_08AAF190;
    case 614u: goto L_08AAF1A0;
    case 615u: goto L_08AAF1A4;
    case 616u: goto L_08AAF1AC;
    case 617u: goto L_08AAF1BC;
    case 618u: goto L_08AAF1D4;
    case 619u: goto L_08AAF1E8;
    case 620u: goto L_08AAF1F4;
    case 621u: goto L_08AAF1F8;
    case 622u: goto L_08AAF224;
    case 623u: goto L_08AAF244;
    case 624u: goto L_08AAF24C;
    case 625u: goto L_08AAF254;
    case 626u: goto L_08AAF26C;
    case 627u: goto L_08AAF274;
    case 628u: goto L_08AAF2A0;
    case 629u: goto L_08AAF2C0;
    case 630u: goto L_08AAF2C8;
    case 631u: goto L_08AAF2D0;
    case 632u: goto L_08AAF2D8;
    case 633u: goto L_08AAF304;
    case 634u: goto L_08AAF324;
    case 635u: goto L_08AAF32C;
    case 636u: goto L_08AAF334;
    case 637u: goto L_08AAF35C;
    case 638u: goto L_08AAF364;
    case 639u: goto L_08AAF378;
    case 640u: goto L_08AAF38C;
    case 641u: goto L_08AAF398;
    case 642u: goto L_08AAF39C;
    case 643u: goto L_08AAF3C8;
    case 644u: goto L_08AAF3E8;
    case 645u: goto L_08AAF3F0;
    case 646u: goto L_08AAF3F8;
    case 647u: goto L_08AAF410;
    case 648u: goto L_08AAF41C;
    case 649u: goto L_08AAF424;
    case 650u: goto L_08AAF450;
    case 651u: goto L_08AAF470;
    case 652u: goto L_08AAF478;
    case 653u: goto L_08AAF480;
    case 654u: goto L_08AAF48C;
    case 655u: goto L_08AAF498;
    case 656u: goto L_08AAF4C4;
    case 657u: goto L_08AAF4E4;
    case 658u: goto L_08AAF4EC;
    case 659u: goto L_08AAF4F4;
    case 660u: goto L_08AAF4F8;
    case 661u: goto L_08AAF50C;
    case 662u: goto L_08AAF520;
    case 663u: goto L_08AAF52C;
    case 664u: goto L_08AAF530;
    case 665u: goto L_08AAF560;
    case 666u: goto L_08AAF580;
    case 667u: goto L_08AAF588;
    case 668u: goto L_08AAF590;
    case 669u: goto L_08AAF5A8;
    case 670u: goto L_08AAF5C4;
    case 671u: goto L_08AAF5CC;
    case 672u: goto L_08AAF5E0;
    case 673u: goto L_08AAF604;
    case 674u: goto L_08AAF654;
    case 675u: goto L_08AAF664;
    case 676u: goto L_08AAF668;
    case 677u: goto L_08AAF6A4;
    case 678u: goto L_08AAF6C0;
    case 679u: goto L_08AAF6C8;
    case 680u: goto L_08AAF6CC;
    case 681u: goto L_08AAF6D4;
    case 682u: goto L_08AAF6DC;
    case 683u: goto L_08AAF704;
    case 684u: goto L_08AAF70C;
    case 685u: goto L_08AAF718;
    case 686u: goto L_08AAF71C;
    case 687u: goto L_08AAF728;
    case 688u: goto L_08AAF730;
    case 689u: goto L_08AAF738;
    case 690u: goto L_08AAF740;
    case 691u: goto L_08AAF758;
    case 692u: goto L_08AAF760;
    case 693u: goto L_08AAF764;
    case 694u: goto L_08AAF77C;
    case 695u: goto L_08AAF790;
    case 696u: goto L_08AAF7B4;
    case 697u: goto L_08AAF7D4;
    case 698u: goto L_08AAF7DC;
    case 699u: goto L_08AAF7E4;
    case 700u: goto L_08AAF7EC;
    case 701u: goto L_08AAF81C;
    case 702u: goto L_08AAF83C;
    case 703u: goto L_08AAF844;
    case 704u: goto L_08AAF84C;
    case 705u: goto L_08AAF850;
    case 706u: goto L_08AAF860;
    case 707u: goto L_08AAF888;
    case 708u: goto L_08AAF8A8;
    case 709u: goto L_08AAF8B0;
    case 710u: goto L_08AAF8B8;
    case 711u: goto L_08AAF8C0;
    case 712u: goto L_08AAF8C8;
    case 713u: goto L_08AAF8EC;
    case 714u: goto L_08AAF90C;
    case 715u: goto L_08AAF938;
    case 716u: goto L_08AAF958;
    case 717u: goto L_08AAF960;
    case 718u: goto L_08AAF968;
    case 719u: goto L_08AAF96C;
    case 720u: goto L_08AAF97C;
    case 721u: goto L_08AAF990;
    case 722u: goto L_08AAF99C;
    case 723u: goto L_08AAF9A0;
    case 724u: goto L_08AAF9B0;
    case 725u: goto L_08AAF9D8;
    case 726u: goto L_08AAF9F8;
    case 727u: goto L_08AAFA00;
    case 728u: goto L_08AAFA08;
    case 729u: goto L_08AAFA14;
    case 730u: goto L_08AAFA1C;
    case 731u: goto L_08AAFA24;
    case 732u: goto L_08AAFA2C;
    case 733u: goto L_08AAFA40;
    case 734u: goto L_08AAFA5C;
    case 735u: goto L_08AAFA60;
    case 736u: goto L_08AAFA90;
    case 737u: goto L_08AAFAD8;
    case 738u: goto L_08AAFAE8;
    case 739u: goto L_08AAFAEC;
    case 740u: goto L_08AAFB14;
    case 741u: goto L_08AAFB34;
    case 742u: goto L_08AAFB3C;
    case 743u: goto L_08AAFB44;
    case 744u: goto L_08AAFB54;
    case 745u: goto L_08AAFB70;
    case 746u: goto L_08AAFB84;
    case 747u: goto L_08AAFB90;
    case 748u: goto L_08AAFB94;
    case 749u: goto L_08AAFBA0;
    case 750u: goto L_08AAFBB0;
    case 751u: goto L_08AAFBBC;
    case 752u: goto L_08AAFBD8;
    case 753u: goto L_08AAFBE4;
    case 754u: goto L_08AAFC00;
    case 755u: goto L_08AAFC0C;
    case 756u: goto L_08AAFC24;
    case 757u: goto L_08AAFC40;
    case 758u: goto L_08AAFC48;
    case 759u: goto L_08AAFC4C;
    case 760u: goto L_08AAFC58;
    case 761u: goto L_08AAFC60;
    case 762u: goto L_08AAFC68;
    case 763u: goto L_08AAFC70;
    case 764u: goto L_08AAFC78;
    case 765u: goto L_08AAFC94;
    case 766u: goto L_08AAFCA0;
    case 767u: goto L_08AAFCAC;
    case 768u: goto L_08AAFCC4;
    case 769u: goto L_08AAFCF4;
    case 770u: goto L_08AAFD14;
    case 771u: goto L_08AAFD1C;
    case 772u: goto L_08AAFD24;
    case 773u: goto L_08AAFD2C;
    case 774u: goto L_08AAFD5C;
    case 775u: goto L_08AAFD7C;
    case 776u: goto L_08AAFD84;
    case 777u: goto L_08AAFD8C;
    case 778u: goto L_08AAFD94;
    case 779u: goto L_08AAFDC4;
    case 780u: goto L_08AAFDE4;
    case 781u: goto L_08AAFDEC;
    case 782u: goto L_08AAFDF4;
    case 783u: goto L_08AAFDFC;
    case 784u: goto L_08AAFE28;
    case 785u: goto L_08AAFE48;
    case 786u: goto L_08AAFE50;
    case 787u: goto L_08AAFE58;
    case 788u: goto L_08AAFE60;
    case 789u: goto L_08AAFE90;
    case 790u: goto L_08AAFEB0;
    case 791u: goto L_08AAFEB8;
    case 792u: goto L_08AAFEC0;
    case 793u: goto L_08AAFEC8;
    case 794u: goto L_08AAFEF8;
    case 795u: goto L_08AAFF18;
    case 796u: goto L_08AAFF20;
    case 797u: goto L_08AAFF28;
    case 798u: goto L_08AAFF30;
    case 799u: goto L_08AAFF60;
    case 800u: goto L_08AAFF80;
    case 801u: goto L_08AAFF88;
    case 802u: goto L_08AAFF90;
    case 803u: goto L_08AAFF98;
    case 804u: goto L_08AAFFAC;
    case 805u: goto L_08AAFFD8;
    case 806u: goto L_08AAFFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AAC000:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08AAC01Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 607u, 0x088735E0u>(ctx, &aot_mem) && ctx.pc == 0x08AAC01Cu) goto L_08AAC01C;
    return;
L_08AAC01C:
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(20720)));
    ctx.gpr[4] = (0u | 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[5] = (17302u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    // High-detail sector scan at 0x08AAC01C. Linear distance, guest 300.
    ctx.fpr[22] = lcs::building_hd_scan_distance(ctx.fpr[22]);
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[5] = (16968u << 16u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AAC064;
      }
      goto L_08AAC054;
    }
L_08AAC054:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(20720)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(20720), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AAC074;
      }
      goto L_08AAC064;
    }
L_08AAC064:
    ctx.gpr[31] = (0x08AAC06Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 166u, 0x088C4CA0u>(ctx, &aot_mem) && ctx.pc == 0x08AAC06Cu) goto L_08AAC06C;
    return;
L_08AAC06C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(20720), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AAC074;
L_08AAC074:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26416));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAC184;
      }
      goto L_08AAC0A0;
    }
L_08AAC0A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC260;
      }
      goto L_08AAC184;
    }
L_08AAC184:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_08AAC260;
L_08AAC260:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[31] = (0x08AAC274u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 639u, 0x088B7EA0u>(ctx, &aot_mem) && ctx.pc == 0x08AAC274u) goto L_08AAC274;
    return;
L_08AAC274:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 37u);
      if (branch_taken) {
          goto L_08AAC328;
      }
      goto L_08AAC2A4;
    }
L_08AAC2A4:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AAC328;
      }
      goto L_08AAC2AC;
    }
L_08AAC2AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-21440));
    ctx.gpr[5] = (0u | 3u);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[24];
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[24];
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[24];
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[24];
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[24];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[26];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[26];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = ctx.fpr[17] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AAC320u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08AAD378;
L_08AAC320:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC6A8;
      }
      goto L_08AAC328;
    }
L_08AAC328:
    ctx.gpr[31] = (0x08AAC330u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 136u, 0x089FD404u>(ctx, &aot_mem) && ctx.pc == 0x08AAC330u) goto L_08AAC330;
    return;
L_08AAC330:
    ctx.gpr[6] = (49864u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AAC34Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 223u, 0x08AA9908u>(ctx, &aot_mem) && ctx.pc == 0x08AAC34Cu) goto L_08AAC34C;
    return;
L_08AAC34C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08AAC374;
      }
      goto L_08AAC36C;
    }
L_08AAC36C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAC374;
L_08AAC374:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
        goto L_08AAC398;
    }
    goto L_08AAC38C;
L_08AAC38C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    goto L_08AAC398;
L_08AAC398:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
        goto L_08AAC3B8;
    }
    goto L_08AAC3AC;
L_08AAC3AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    goto L_08AAC3B8;
L_08AAC3B8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAC3D4;
      }
      goto L_08AAC3CC;
    }
L_08AAC3CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAC3D4;
L_08AAC3D4:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AAC3E8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 223u, 0x08AA9908u>(ctx, &aot_mem) && ctx.pc == 0x08AAC3E8u) goto L_08AAC3E8;
    return;
L_08AAC3E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08AAC410;
      }
      goto L_08AAC408;
    }
L_08AAC408:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAC410;
L_08AAC410:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
        goto L_08AAC434;
    }
    goto L_08AAC428;
L_08AAC428:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    goto L_08AAC434;
L_08AAC434:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
        goto L_08AAC454;
    }
    goto L_08AAC448;
L_08AAC448:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    goto L_08AAC454;
L_08AAC454:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAC470;
      }
      goto L_08AAC468;
    }
L_08AAC468:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAC470;
L_08AAC470:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AAC484u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 223u, 0x08AA9908u>(ctx, &aot_mem) && ctx.pc == 0x08AAC484u) goto L_08AAC484;
    return;
L_08AAC484:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08AAC4AC;
      }
      goto L_08AAC4A4;
    }
L_08AAC4A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAC4AC;
L_08AAC4AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
        goto L_08AAC4D0;
    }
    goto L_08AAC4C4;
L_08AAC4C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    goto L_08AAC4D0;
L_08AAC4D0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
        goto L_08AAC4F0;
    }
    goto L_08AAC4E4;
L_08AAC4E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    goto L_08AAC4F0;
L_08AAC4F0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAC50C;
      }
      goto L_08AAC504;
    }
L_08AAC504:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAC50C;
L_08AAC50C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AAC520u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 223u, 0x08AA9908u>(ctx, &aot_mem) && ctx.pc == 0x08AAC520u) goto L_08AAC520;
    return;
L_08AAC520:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08AAC548;
      }
      goto L_08AAC540;
    }
L_08AAC540:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAC548;
L_08AAC548:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
        goto L_08AAC56C;
    }
    goto L_08AAC560;
L_08AAC560:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    goto L_08AAC56C;
L_08AAC56C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
        goto L_08AAC58C;
    }
    goto L_08AAC580;
L_08AAC580:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    goto L_08AAC58C;
L_08AAC58C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
        goto L_08AAC5AC;
    }
    goto L_08AAC5A0;
L_08AAC5A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    goto L_08AAC5AC;
L_08AAC5AC:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[24];
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
        goto L_08AAC5D0;
    }
    goto L_08AAC5D0;
L_08AAC5D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[24];
    ctx.gpr[16] = (0u | 99u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
        goto L_08AAC5F4;
    }
    goto L_08AAC5F4;
L_08AAC5F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[24];
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_08AAC61C;
    }
    goto L_08AAC61C;
L_08AAC61C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[24];
    ctx.gpr[18] = (0u | 99u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
        goto L_08AAC640;
    }
    goto L_08AAC640;
L_08AAC640:
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AAC6A8;
      }
      goto L_08AAC64C;
    }
L_08AAC64C:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
      if (branch_taken) {
          goto L_08AAC698;
      }
      goto L_08AAC65C;
    }
L_08AAC65C:
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[22] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[22]);
    goto L_08AAC67C;
L_08AAC67C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[31] = (0x08AAC688u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 454u, 0x08AAAC40u>(ctx, &aot_mem) && ctx.pc == 0x08AAC688u) goto L_08AAC688;
    return;
L_08AAC688:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4400));
      if (branch_taken) {
          goto L_08AAC67C;
      }
      goto L_08AAC698;
    }
L_08AAC698:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC64C;
      }
      goto L_08AAC6A8;
    }
L_08AAC6A8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC6E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAC72C;
      }
      goto L_08AAC718;
    }
L_08AAC718:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AAC72C;
L_08AAC72C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AAC888;
      }
      goto L_08AAC73C;
    }
L_08AAC73C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 10u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC774;
      }
      goto L_08AAC758;
    }
L_08AAC758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC888;
      }
      goto L_08AAC774;
    }
L_08AAC774:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAC7D8;
      }
      goto L_08AAC790;
    }
L_08AAC790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (512u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC7D8;
      }
      goto L_08AAC7A4;
    }
L_08AAC7A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAC7D0;
      }
      goto L_08AAC7BC;
    }
L_08AAC7BC:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AAC7D0;
L_08AAC7D0:
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(54)));
    ctx.gpr[18] = (ctx.gpr[18] & 3u);
    goto L_08AAC7D8;
L_08AAC7D8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20436)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
        goto L_08AAC7F4;
    }
    goto L_08AAC7E8;
L_08AAC7E8:
    ctx.gpr[31] = (0x08AAC7F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x08AAC7F0u) goto L_08AAC7F0;
    return;
L_08AAC7F0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    goto L_08AAC7F4;
L_08AAC7F4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[31] = (0x08AAC804u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 91u, 0x089507FCu>(ctx, &aot_mem) && ctx.pc == 0x08AAC804u) goto L_08AAC804;
    return;
L_08AAC804:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC888;
      }
      goto L_08AAC810;
    }
L_08AAC810:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC85C;
      }
      goto L_08AAC82C;
    }
L_08AAC82C:
    ctx.gpr[31] = (0x08AAC834u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F7ACu>(ctx, &aot_mem) && ctx.pc == 0x08AAC834u) goto L_08AAC834;
    return;
L_08AAC834:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC854;
      }
      goto L_08AAC83C;
    }
L_08AAC83C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20436)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC864;
      }
      goto L_08AAC84C;
    }
L_08AAC84C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AAC870;
      }
      goto L_08AAC854;
    }
L_08AAC854:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08AAD358;
      }
      goto L_08AAC85C;
    }
L_08AAC85C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAD358;
      }
      goto L_08AAC864;
    }
L_08AAC864:
    ctx.gpr[31] = (0x08AAC86Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x08AAC86Cu) goto L_08AAC86C;
    return;
L_08AAC86C:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08AAC870;
L_08AAC870:
    // LOD list draws with no distance test. Hide inside lod[2] * TheCamera+224.
    {
        const std::uint32_t model_flags = aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(54));
        if ((model_flags & 16u) != 0u) {
            const float near_unscaled = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
            ctx.gpr[5] = (2232u << 16u);
            ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
            const float camera_multiplier = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
            const float dx = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48))) - std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
            const float dy = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52))) - std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
            const float dz = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56))) - std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
            const float dist = std::sqrt(dx * dx + dy * dy + dz * dz);
            if (lcs::building_lod_hidden(dist, near_unscaled, camera_multiplier)) {
                const std::uint32_t related = aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56));
                std::uint32_t atomic0 = 0u;
                std::uint32_t alpha = 0u;
                if (related != 0u) {
                    const std::uint32_t atomics = aot_mem.aot_load32(related + static_cast<std::uint32_t>(36));
                    atomic0 = atomics == 0u ? 0u : aot_mem.aot_load32(atomics);
                    alpha = aot_mem.aot_load8(related + static_cast<std::uint32_t>(53));
                }
                if (lcs::building_lod_detail_ready(related, atomic0, alpha)) {
                    ctx.gpr[2] = (0u | 0u);
                    goto L_08AAD358;
                }
            }
        }
    }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AAC880u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 108u, 0x089508BCu>(ctx, &aot_mem) && ctx.pc == 0x08AAC880u) goto L_08AAC880;
    return;
L_08AAC880:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AAD358;
      }
      goto L_08AAC888;
    }
L_08AAC888:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08AAC98C;
      }
      goto L_08AAC898;
    }
L_08AAC898:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x08AAC8B0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 81u, 0x0883C5F8u>(ctx, &aot_mem) && ctx.pc == 0x08AAC8B0u) goto L_08AAC8B0;
    return;
L_08AAC8B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC930;
      }
      goto L_08AAC8B8;
    }
L_08AAC8B8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AAC910;
      }
      goto L_08AAC8C4;
    }
L_08AAC8C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAC8E8;
      }
      goto L_08AAC8D4;
    }
L_08AAC8D4:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AAC8E8;
L_08AAC8E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AAC900u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAC900u) goto L_08AAC900;
    return;
L_08AAC900:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC910;
      }
      goto L_08AAC908;
    }
L_08AAC908:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AACF40;
      }
      goto L_08AAC910;
    }
L_08AAC910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AAC928u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAC928u) goto L_08AAC928;
    return;
L_08AAC928:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAD358;
      }
      goto L_08AAC930;
    }
L_08AAC930:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AACF40;
      }
      goto L_08AAC93C;
    }
L_08AAC93C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAC960;
      }
      goto L_08AAC94C;
    }
L_08AAC94C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AAC960;
L_08AAC960:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AAC978u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAC978u) goto L_08AAC978;
    return;
L_08AAC978:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AACF40;
      }
      goto L_08AAC980;
    }
L_08AAC980:
    ctx.gpr[4] = (0u | 255u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AACF40;
      }
      goto L_08AAC98C;
    }
L_08AAC98C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACE74;
      }
      goto L_08AAC99C;
    }
L_08AAC99C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACE74;
      }
      goto L_08AAC9AC;
    }
L_08AAC9AC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AACC14;
      }
      goto L_08AAC9BC;
    }
L_08AAC9BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AACC14;
      }
      goto L_08AAC9D8;
    }
L_08AAC9D8:
    ctx.gpr[31] = (0x08AAC9E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08AAC9E0u) goto L_08AAC9E0;
    return;
L_08AAC9E0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AACA30;
      }
      goto L_08AAC9FC;
    }
L_08AAC9FC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
    goto L_08AACA00;
L_08AACA00:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_08AACA24;
    }
    goto L_08AACA14;
L_08AACA14:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AACA28;
      }
      goto L_08AACA24;
    }
L_08AACA24:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08AACA28;
L_08AACA28:
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
        goto L_08AACA00;
    }
    goto L_08AACA30;
L_08AACA30:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(104)));
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[4] = (2232u << 16u);
        goto L_08AACA60;
    }
    goto L_08AACA44;
L_08AACA44:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(109), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AACA6C;
      }
      goto L_08AACA5C;
    }
L_08AACA5C:
    ctx.gpr[4] = (2232u << 16u);
    goto L_08AACA60;
L_08AACA60:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (2232u << 16u);
    goto L_08AACA6C;
L_08AACA6C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_08AACAB0;
    }
    goto L_08AACAA8;
L_08AACAA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AACAB4;
      }
      goto L_08AACAB0;
    }
L_08AACAB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08AACAB4;
L_08AACAB4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AACC0C;
      }
      goto L_08AACABC;
    }
L_08AACABC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AACC0C;
      }
      goto L_08AACAC8;
    }
L_08AACAC8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACC0C;
      }
      goto L_08AACB00;
    }
L_08AACB00:
    ctx.gpr[31] = (0x08AACB08u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08AACB08u) goto L_08AACB08;
    return;
L_08AACB08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACB30;
      }
      goto L_08AACB18;
    }
L_08AACB18:
    ctx.gpr[31] = (0x08AACB20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08AACB20u) goto L_08AACB20;
    return;
L_08AACB20:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AACC0C;
      }
      goto L_08AACB30;
    }
L_08AACB30:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AACB8C;
      }
      goto L_08AACB3C;
    }
L_08AACB3C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 162u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACB8C;
      }
      goto L_08AACB4C;
    }
L_08AACB4C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 165u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACB8C;
      }
      goto L_08AACB5C;
    }
L_08AACB5C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 161u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AACB8C;
      }
      goto L_08AACB6C;
    }
L_08AACB6C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(90)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AACB8C;
      }
      goto L_08AACB7C;
    }
L_08AACB7C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AACBEC;
      }
      goto L_08AACB84;
    }
L_08AACB84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
      if (branch_taken) {
          goto L_08AACBA0;
      }
      goto L_08AACB8C;
    }
L_08AACB8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[2] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAD358;
      }
      goto L_08AACBA0;
    }
L_08AACBA0:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACBEC;
      }
      goto L_08AACBAC;
    }
L_08AACBAC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 195u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACBEC;
      }
      goto L_08AACBBC;
    }
L_08AACBBC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-992));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACBEC;
      }
      goto L_08AACBCC;
    }
L_08AACBCC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 196u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACBEC;
      }
      goto L_08AACBDC;
    }
L_08AACBDC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACC0C;
      }
      goto L_08AACBEC;
    }
L_08AACBEC:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6016), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08AAD358;
      }
      goto L_08AACC0C;
    }
L_08AACC0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AACDB8;
      }
      goto L_08AACC14;
    }
L_08AACC14:
    ctx.gpr[31] = (0x08AACC1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08AACC1Cu) goto L_08AACC1C;
    return;
L_08AACC1C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AACDB8;
      }
      goto L_08AACC24;
    }
L_08AACC24:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AACDB8;
      }
      goto L_08AACC5C;
    }
L_08AACC5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AACDB8;
      }
      goto L_08AACC8C;
    }
L_08AACC8C:
    ctx.gpr[31] = (0x08AACC94u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08AACC94u) goto L_08AACC94;
    return;
L_08AACC94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACCBC;
      }
      goto L_08AACCA4;
    }
L_08AACCA4:
    ctx.gpr[31] = (0x08AACCACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08AACCACu) goto L_08AACCAC;
    return;
L_08AACCAC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AACDB8;
      }
      goto L_08AACCBC;
    }
L_08AACCBC:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AACD38;
      }
      goto L_08AACCC8;
    }
L_08AACCC8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 162u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACD38;
      }
      goto L_08AACCD8;
    }
L_08AACCD8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 165u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACD38;
      }
      goto L_08AACCE8;
    }
L_08AACCE8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 161u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AACD38;
      }
      goto L_08AACCF8;
    }
L_08AACCF8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(90)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AACD38;
      }
      goto L_08AACD08;
    }
L_08AACD08:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AACD28;
      }
      goto L_08AACD10;
    }
L_08AACD10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AACD38;
      }
      goto L_08AACD28;
    }
L_08AACD28:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AACD98;
      }
      goto L_08AACD30;
    }
L_08AACD30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
      if (branch_taken) {
          goto L_08AACD4C;
      }
      goto L_08AACD38;
    }
L_08AACD38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[2] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAD358;
      }
      goto L_08AACD4C;
    }
L_08AACD4C:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACD98;
      }
      goto L_08AACD58;
    }
L_08AACD58:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 195u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACD98;
      }
      goto L_08AACD68;
    }
L_08AACD68:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-992));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACD98;
      }
      goto L_08AACD78;
    }
L_08AACD78:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 196u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACD98;
      }
      goto L_08AACD88;
    }
L_08AACD88:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACDB8;
      }
      goto L_08AACD98;
    }
L_08AACD98:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6016), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08AAD358;
      }
      goto L_08AACDB8;
    }
L_08AACDB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AACE18;
      }
      goto L_08AACDC4;
    }
L_08AACDC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AACE18;
      }
      goto L_08AACDD8;
    }
L_08AACDD8:
    ctx.gpr[31] = (0x08AACDE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F7ACu>(ctx, &aot_mem) && ctx.pc == 0x08AACDE0u) goto L_08AACDE0;
    return;
L_08AACDE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AACE10;
      }
      goto L_08AACDE8;
    }
L_08AACDE8:
    ctx.gpr[31] = (0x08AACDF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 206u, 0x08AB0E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AACDF0u) goto L_08AACDF0;
    return;
L_08AACDF0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AACE10;
      }
      goto L_08AACDF8;
    }
L_08AACDF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AACE20;
      }
      goto L_08AACE08;
    }
L_08AACE08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AAD358;
      }
      goto L_08AACE10;
    }
L_08AACE10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08AAD358;
      }
      goto L_08AACE18;
    }
L_08AACE18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAD358;
      }
      goto L_08AACE20;
    }
L_08AACE20:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26416));
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AACE5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 293u, 0x08925E98u>(ctx, &aot_mem) && ctx.pc == 0x08AACE5Cu) goto L_08AACE5C;
    return;
L_08AACE5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAD358;
      }
      goto L_08AACE74;
    }
L_08AACE74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AACF40;
      }
      goto L_08AACE84;
    }
L_08AACE84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AACEE4;
      }
      goto L_08AACE90;
    }
L_08AACE90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AACEE4;
      }
      goto L_08AACEA4;
    }
L_08AACEA4:
    ctx.gpr[31] = (0x08AACEACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F7ACu>(ctx, &aot_mem) && ctx.pc == 0x08AACEACu) goto L_08AACEAC;
    return;
L_08AACEAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AACEDC;
      }
      goto L_08AACEB4;
    }
L_08AACEB4:
    ctx.gpr[31] = (0x08AACEBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 206u, 0x08AB0E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AACEBCu) goto L_08AACEBC;
    return;
L_08AACEBC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AACEDC;
      }
      goto L_08AACEC4;
    }
L_08AACEC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AACEEC;
      }
      goto L_08AACED4;
    }
L_08AACED4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AAD358;
      }
      goto L_08AACEDC;
    }
L_08AACEDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08AAD358;
      }
      goto L_08AACEE4;
    }
L_08AACEE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAD358;
      }
      goto L_08AACEEC;
    }
L_08AACEEC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26416));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AACF28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 293u, 0x08925E98u>(ctx, &aot_mem) && ctx.pc == 0x08AACF28u) goto L_08AACF28;
    return;
L_08AACF28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAD358;
      }
      goto L_08AACF40;
    }
L_08AACF40:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26416));
    ctx.gpr[31] = (0x08AACF60u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x08927554u>(ctx, &aot_mem) && ctx.pc == 0x08AACF60u) goto L_08AACF60;
    return;
L_08AACF60:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    // Big-building LOD hides inside lod[2] * TheCamera+224. +224 already includes ViewDistance.
    {
        const std::uint32_t model_flags = aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(54));
        if ((model_flags & 16u) != 0u) {
            const float near_unscaled = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
            ctx.gpr[4] = (2232u << 16u);
            ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
            const float camera_multiplier = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
            if (lcs::building_lod_hidden(ctx.fpr[20], near_unscaled, camera_multiplier)) {
                const std::uint32_t related = aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56));
                std::uint32_t atomic0 = 0u;
                std::uint32_t alpha = 0u;
                if (related != 0u) {
                    const std::uint32_t atomics = aot_mem.aot_load32(related + static_cast<std::uint32_t>(36));
                    atomic0 = atomics == 0u ? 0u : aot_mem.aot_load32(atomics);
                    alpha = aot_mem.aot_load8(related + static_cast<std::uint32_t>(53));
                }
                if (lcs::building_lod_detail_ready(related, atomic0, alpha)) {
                    ctx.gpr[2] = (0u | 0u);
                    goto L_08AAD358;
                }
            }
        }
    }
    ctx.gpr[4] = (17317u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    // Building high-detail cutoff at 0x08AACF60. Linear distance, guest 330.
    ctx.fpr[12] = lcs::building_lod_distance(ctx.fpr[12]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AACFB0;
      }
      goto L_08AACF8C;
    }
L_08AACF8C:
    ctx.gpr[31] = (0x08AACF94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 34u, 0x08A8C1D8u>(ctx, &aot_mem) && ctx.pc == 0x08AACF94u) goto L_08AACF94;
    return;
L_08AACF94:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AACFB0;
      }
      goto L_08AACFA4;
    }
L_08AACFA4:
    ctx.gpr[31] = (0x08AACFACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 34u, 0x08A8C1D8u>(ctx, &aot_mem) && ctx.pc == 0x08AACFACu) goto L_08AACFAC;
    return;
L_08AACFAC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AACFB0;
L_08AACFB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD008;
      }
      goto L_08AACFCC;
    }
L_08AACFCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (512u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD008;
      }
      goto L_08AACFE0;
    }
L_08AACFE0:
    ctx.gpr[4] = (0u | 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
        goto L_08AACFFC;
    }
    goto L_08AACFEC;
L_08AACFEC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AAD008;
      }
      goto L_08AACFFC;
    }
L_08AACFFC:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AAD008;
L_08AAD008:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AAD014u);
    // Raw camera distance. 0x08A8C144 multiplies model lod by TheCamera+224.
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 22u, 0x08A8C144u>(ctx, &aot_mem) && ctx.pc == 0x08AAD014u) goto L_08AAD014;
    return;
L_08AAD014:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD188;
      }
      goto L_08AAD020;
    }
L_08AAD020:
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
        goto L_08AAD03C;
    }
    goto L_08AAD02C;
L_08AAD02C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AAD048;
      }
      goto L_08AAD03C;
    }
L_08AAD03C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AAD048;
L_08AAD048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD06C;
      }
      goto L_08AAD054;
    }
L_08AAD054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AAD06Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAD06Cu) goto L_08AAD06C;
    return;
L_08AAD06C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AAD08C;
      }
      goto L_08AAD080;
    }
L_08AAD080:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08AAD08Cu);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 175u, 0x08AC8E50u>(ctx, &aot_mem) && ctx.pc == 0x08AAD08Cu) goto L_08AAD08C;
    return;
L_08AAD08C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(53)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 239 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 255u);
      if (branch_taken) {
          goto L_08AAD0AC;
      }
      goto L_08AAD09C;
    }
L_08AAD09C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(53)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AAD0B0;
      }
      goto L_08AAD0AC;
    }
L_08AAD0AC:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AAD0B0;
L_08AAD0B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD148;
      }
      goto L_08AAD0BC;
    }
L_08AAD0BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD148;
      }
      goto L_08AAD0D0;
    }
L_08AAD0D0:
    ctx.gpr[31] = (0x08AAD0D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F7ACu>(ctx, &aot_mem) && ctx.pc == 0x08AAD0D8u) goto L_08AAD0D8;
    return;
L_08AAD0D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD138;
      }
      goto L_08AAD0E0;
    }
L_08AAD0E0:
    ctx.gpr[31] = (0x08AAD0E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 206u, 0x08AB0E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAD0E8u) goto L_08AAD0E8;
    return;
L_08AAD0E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD138;
      }
      goto L_08AAD0F0;
    }
L_08AAD0F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(53)));
    ctx.gpr[5] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AAD118;
      }
      goto L_08AAD100;
    }
L_08AAD100:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD15C;
      }
      goto L_08AAD110;
    }
L_08AAD110:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08AAD150;
      }
      goto L_08AAD118;
    }
L_08AAD118:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AAD124u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 293u, 0x08925E98u>(ctx, &aot_mem) && ctx.pc == 0x08AAD124u) goto L_08AAD124;
    return;
L_08AAD124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAD358;
      }
      goto L_08AAD138;
    }
L_08AAD138:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08AAD358;
      }
      goto L_08AAD148;
    }
L_08AAD148:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAD358;
      }
      goto L_08AAD150;
    }
L_08AAD150:
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD180;
      }
      goto L_08AAD15C;
    }
L_08AAD15C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AAD168u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 293u, 0x08925E98u>(ctx, &aot_mem) && ctx.pc == 0x08AAD168u) goto L_08AAD168;
    return;
L_08AAD168:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAD358;
      }
      goto L_08AAD180;
    }
L_08AAD180:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AAD358;
      }
      goto L_08AAD188;
    }
L_08AAD188:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD1F4;
      }
      goto L_08AAD198;
    }
L_08AAD198:
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
        goto L_08AAD1B4;
    }
    goto L_08AAD1A4;
L_08AAD1A4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AAD1C0;
      }
      goto L_08AAD1B4;
    }
L_08AAD1B4:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AAD1C0;
L_08AAD1C0:
    ctx.gpr[31] = (0x08AAD1C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 34u, 0x08A8C1D8u>(ctx, &aot_mem) && ctx.pc == 0x08AAD1C8u) goto L_08AAD1C8;
    return;
L_08AAD1C8:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAD354;
      }
      goto L_08AAD1E4;
    }
L_08AAD1E4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD354;
      }
      goto L_08AAD1EC;
    }
L_08AAD1EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_08AAD358;
      }
      goto L_08AAD1F4;
    }
L_08AAD1F4:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AAD208u);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 39u, 0x08A8C22Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAD208u) goto L_08AAD208;
    return;
L_08AAD208:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AAD224;
      }
      goto L_08AAD214;
    }
L_08AAD214:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AAD234;
      }
      goto L_08AAD224;
    }
L_08AAD224:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AAD234;
L_08AAD234:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD320;
      }
      goto L_08AAD23C;
    }
L_08AAD23C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD260;
      }
      goto L_08AAD248;
    }
L_08AAD248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AAD260u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAD260u) goto L_08AAD260;
    return;
L_08AAD260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AAD280;
      }
      goto L_08AAD274;
    }
L_08AAD274:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08AAD280u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 175u, 0x08AC8E50u>(ctx, &aot_mem) && ctx.pc == 0x08AAD280u) goto L_08AAD280;
    return;
L_08AAD280:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(53)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 239 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 255u);
      if (branch_taken) {
          goto L_08AAD2A0;
      }
      goto L_08AAD290;
    }
L_08AAD290:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(53)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AAD2A4;
      }
      goto L_08AAD2A0;
    }
L_08AAD2A0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AAD2A4;
L_08AAD2A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD2DC;
      }
      goto L_08AAD2B0;
    }
L_08AAD2B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD2DC;
      }
      goto L_08AAD2C4;
    }
L_08AAD2C4:
    ctx.gpr[31] = (0x08AAD2CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F7ACu>(ctx, &aot_mem) && ctx.pc == 0x08AAD2CCu) goto L_08AAD2CC;
    return;
L_08AAD2CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD2E4;
      }
      goto L_08AAD2D4;
    }
L_08AAD2D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD310;
      }
      goto L_08AAD2DC;
    }
L_08AAD2DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAD358;
      }
      goto L_08AAD2E4;
    }
L_08AAD2E4:
    ctx.gpr[31] = (0x08AAD2ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 206u, 0x08AB0E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAD2ECu) goto L_08AAD2EC;
    return;
L_08AAD2EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD310;
      }
      goto L_08AAD2F4;
    }
L_08AAD2F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AAD300u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 293u, 0x08925E98u>(ctx, &aot_mem) && ctx.pc == 0x08AAD300u) goto L_08AAD300;
    return;
L_08AAD300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAD318;
      }
      goto L_08AAD310;
    }
L_08AAD310:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AAD318;
L_08AAD318:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08AAD358;
      }
      goto L_08AAD320;
    }
L_08AAD320:
    ctx.gpr[31] = (0x08AAD328u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 34u, 0x08A8C1D8u>(ctx, &aot_mem) && ctx.pc == 0x08AAD328u) goto L_08AAD328;
    return;
L_08AAD328:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAD354;
      }
      goto L_08AAD344;
    }
L_08AAD344:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD354;
      }
      goto L_08AAD34C;
    }
L_08AAD34C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_08AAD358;
      }
      goto L_08AAD354;
    }
L_08AAD354:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AAD358;
L_08AAD358:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD378:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[23]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[23] = (0u | 9999u);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-9999));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AAD438;
      }
      goto L_08AAD3EC;
    }
L_08AAD3EC:
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08AAD3F4;
L_08AAD3F4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAD414;
      }
      goto L_08AAD408;
    }
L_08AAD408:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08AAD428;
      }
      goto L_08AAD414;
    }
L_08AAD414:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAD428;
      }
      goto L_08AAD424;
    }
L_08AAD424:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AAD428;
L_08AAD428:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AAD3F4;
      }
      goto L_08AAD438;
    }
L_08AAD438:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08AAD45C;
L_08AAD45C:
    ctx.gpr[6] = (ctx.gpr[18] << 3u);
    ctx.gpr[16] = (ctx.gpr[21] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08AAD47C;
      }
      goto L_08AAD478;
    }
L_08AAD478:
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    goto L_08AAD47C;
L_08AAD47C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[23]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[18] << 3u);
      if (branch_taken) {
          goto L_08AAD49C;
      }
      goto L_08AAD494;
    }
L_08AAD494:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAD49C;
L_08AAD49C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[30] = (ctx.gpr[21] + ctx.gpr[17]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAD4C8;
      }
      goto L_08AAD4C0;
    }
L_08AAD4C0:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD45C;
      }
      goto L_08AAD4C8;
    }
L_08AAD4C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 0u);
    goto L_08AAD4D0;
L_08AAD4D0:
    ctx.gpr[6] = (ctx.gpr[19] << 3u);
    ctx.gpr[22] = (ctx.gpr[21] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[7];
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AAD4EC;
      }
      goto L_08AAD4E8;
    }
L_08AAD4E8:
    ctx.gpr[19] = (0u | 0u);
    goto L_08AAD4EC;
L_08AAD4EC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
        goto L_08AAD510;
    }
    goto L_08AAD504;
L_08AAD504:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    goto L_08AAD510;
L_08AAD510:
    ctx.gpr[5] = (ctx.gpr[19] << 3u);
    ctx.gpr[22] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAD53C;
      }
      goto L_08AAD534;
    }
L_08AAD534:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD4D0;
      }
      goto L_08AAD53C;
    }
L_08AAD53C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<2u>(ctx.fpr[12]));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[24] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[6]);
    ctx.gpr[31] = (0x08AAD554u);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 222u, 0x08AA98E4u>(ctx, &aot_mem) && ctx.pc == 0x08AAD554u) goto L_08AAD554;
    return;
L_08AAD554:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<2u>(ctx.fpr[13]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[28] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[17]);
    ctx.gpr[31] = (0x08AAD584u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 222u, 0x08AA98E4u>(ctx, &aot_mem) && ctx.pc == 0x08AAD584u) goto L_08AAD584;
    return;
L_08AAD584:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08AAD5F0;
      }
      goto L_08AAD59C;
    }
L_08AAD59C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAD5C8;
      }
      goto L_08AAD5B0;
    }
L_08AAD5B0:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD5C8;
      }
      goto L_08AAD5C4;
    }
L_08AAD5C4:
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    goto L_08AAD5C8;
L_08AAD5C8:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAD5F0;
      }
      goto L_08AAD5D8;
    }
L_08AAD5D8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD5F0;
      }
      goto L_08AAD5EC;
    }
L_08AAD5EC:
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    goto L_08AAD5F0;
L_08AAD5F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(4400));
      if (branch_taken) {
          goto L_08AAD9F8;
      }
      goto L_08AAD600;
    }
L_08AAD600:
    ctx.fpr[28] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[7] << 5u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08AAD624;
L_08AAD624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD63C;
      }
      goto L_08AAD634;
    }
L_08AAD634:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD9F8;
      }
      goto L_08AAD63C;
    }
L_08AAD63C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 100 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAD6CC;
      }
      goto L_08AAD648;
    }
L_08AAD648:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_08AAD6D0;
    }
    goto L_08AAD650;
L_08AAD650:
    ctx.gpr[17] = (2227u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) < 0;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20716)));
      if (branch_taken) {
          goto L_08AAD67C;
      }
      goto L_08AAD65C;
    }
L_08AAD65C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAD684;
      }
      goto L_08AAD67C;
    }
L_08AAD67C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    goto L_08AAD684;
L_08AAD684:
    ctx.gpr[16] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AAD6CC;
      }
      goto L_08AAD694;
    }
L_08AAD694:
    ctx.gpr[4] = (0u | 100u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AAD6A8;
      }
      goto L_08AAD6A0;
    }
L_08AAD6A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD6CC;
      }
      goto L_08AAD6A8;
    }
L_08AAD6A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AAD6BC;
      }
      goto L_08AAD6B0;
    }
L_08AAD6B0:
    jump_target = ctx.gpr[23];
    ctx.gpr[31] = (0x08AAD6B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAD6B8u) goto L_08AAD6B8;
    return;
L_08AAD6B8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(44));
    goto L_08AAD6BC;
L_08AAD6BC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD694;
      }
      goto L_08AAD6CC;
    }
L_08AAD6CC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08AAD6D0;
L_08AAD6D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[20] = ctx.fpr[22] + ctx.fpr[20];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = ctx.fpr[26] + ctx.fpr[24];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4400));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AAD850;
      }
      goto L_08AAD708;
    }
L_08AAD708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AAD7E8;
      }
      goto L_08AAD714;
    }
L_08AAD714:
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[28]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[26];
        goto L_08AAD734;
    }
    goto L_08AAD724;
L_08AAD724:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AAD73C;
      }
      goto L_08AAD734;
    }
L_08AAD734:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAD73C;
L_08AAD73C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    if (static_cast<std::int32_t>(ctx.gpr[18]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
        goto L_08AAD754;
    }
    goto L_08AAD74C;
L_08AAD74C:
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    goto L_08AAD754;
L_08AAD754:
    ctx.gpr[16] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[5] = (ctx.gpr[18] << 3u);
        goto L_08AAD778;
    }
    goto L_08AAD770;
L_08AAD770:
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] << 3u);
    goto L_08AAD778;
L_08AAD778:
    ctx.gpr[30] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AAD73C;
      }
      goto L_08AAD790;
    }
L_08AAD790:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08AAD79Cu);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 222u, 0x08AA98E4u>(ctx, &aot_mem) && ctx.pc == 0x08AAD79Cu) goto L_08AAD79C;
    return;
L_08AAD79C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<2u>(ctx.fpr[12]));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[28]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08AAD87C;
      }
      goto L_08AAD7CC;
    }
L_08AAD7CC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD87C;
      }
      goto L_08AAD7E0;
    }
L_08AAD7E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AAD87C;
      }
      goto L_08AAD7E8;
    }
L_08AAD7E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AAD840;
      }
      goto L_08AAD7FC;
    }
L_08AAD7FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAD808;
L_08AAD808:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AAD818;
      }
      goto L_08AAD814;
    }
L_08AAD814:
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    goto L_08AAD818;
L_08AAD818:
    ctx.gpr[30] = (ctx.gpr[18] << 3u);
    ctx.gpr[30] = (ctx.gpr[21] + ctx.gpr[30]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD808;
      }
      goto L_08AAD838;
    }
L_08AAD838:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD87C;
      }
      goto L_08AAD840;
    }
L_08AAD840:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[26];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AAD87C;
      }
      goto L_08AAD850;
    }
L_08AAD850:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AAD870;
      }
      goto L_08AAD864;
    }
L_08AAD864:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AAD87C;
      }
      goto L_08AAD870;
    }
L_08AAD870:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[26];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAD87C;
L_08AAD87C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AAD9C4;
      }
      goto L_08AAD884;
    }
L_08AAD884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AAD95C;
      }
      goto L_08AAD890;
    }
L_08AAD890:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
        goto L_08AAD8B0;
    }
    goto L_08AAD8A0;
L_08AAD8A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AAD8B8;
      }
      goto L_08AAD8B0;
    }
L_08AAD8B0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAD8B8;
L_08AAD8B8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08AAD8BC;
L_08AAD8BC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[19] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
        goto L_08AAD8D4;
    }
    goto L_08AAD8CC;
L_08AAD8CC:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    goto L_08AAD8D4;
L_08AAD8D4:
    ctx.gpr[16] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[5] = (ctx.gpr[19] << 3u);
        goto L_08AAD8F8;
    }
    goto L_08AAD8F0;
L_08AAD8F0:
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] << 3u);
    goto L_08AAD8F8;
L_08AAD8F8:
    ctx.gpr[22] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AAD8BC;
      }
      goto L_08AAD910;
    }
L_08AAD910:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08AAD91Cu);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 222u, 0x08AA98E4u>(ctx, &aot_mem) && ctx.pc == 0x08AAD91Cu) goto L_08AAD91C;
    return;
L_08AAD91C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<2u>(ctx.fpr[12]));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[28]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08AAD9E8;
      }
      goto L_08AAD940;
    }
L_08AAD940:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD9E8;
      }
      goto L_08AAD954;
    }
L_08AAD954:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AAD9E8;
      }
      goto L_08AAD95C;
    }
L_08AAD95C:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
        goto L_08AAD9B8;
    }
    goto L_08AAD96C;
L_08AAD96C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAD978;
L_08AAD978:
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    ctx.gpr[22] = (ctx.gpr[19] << 3u);
      if (branch_taken) {
          goto L_08AAD994;
      }
      goto L_08AAD98C;
    }
L_08AAD98C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[19] << 3u);
    goto L_08AAD994;
L_08AAD994:
    ctx.gpr[22] = (ctx.gpr[21] + ctx.gpr[22]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD978;
      }
      goto L_08AAD9B0;
    }
L_08AAD9B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD9E8;
      }
      goto L_08AAD9B8;
    }
L_08AAD9B8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AAD9E8;
      }
      goto L_08AAD9C4;
    }
L_08AAD9C4:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
        goto L_08AAD9E0;
    }
    goto L_08AAD9D4;
L_08AAD9D4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AAD9E8;
      }
      goto L_08AAD9E0;
    }
L_08AAD9E0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAD9E8;
L_08AAD9E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AAD624;
      }
      goto L_08AAD9F8;
    }
L_08AAD9F8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AADA3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-528));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[17]);
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AADA8Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 642u, 0x0887395Cu>(ctx, &aot_mem) && ctx.pc == 0x08AADA8Cu) goto L_08AADA8C;
    return;
L_08AADA8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2736)));
    ctx.gpr[31] = (0x08AADA98u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 602u, 0x08873598u>(ctx, &aot_mem) && ctx.pc == 0x08AADA98u) goto L_08AADA98;
    return;
L_08AADA98:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2736)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AADB34u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 607u, 0x088735E0u>(ctx, &aot_mem) && ctx.pc == 0x08AADB34u) goto L_08AADB34;
    return;
L_08AADB34:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AADB48u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6016), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 269u, 0x08925CE0u>(ctx, &aot_mem) && ctx.pc == 0x08AADB48u) goto L_08AADB48;
    return;
L_08AADB48:
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20720)));
    ctx.gpr[4] = (0u | 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[5] = (17302u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    // High-detail sector scan at 0x08AADB48. Linear distance, guest 300.
    ctx.fpr[24] = lcs::building_hd_scan_distance(ctx.fpr[24]);
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[21] = (2232u << 16u);
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[5] = (16968u << 16u);
    ctx.gpr[22] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-13664));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-13648));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AADBA8;
      }
      goto L_08AADB98;
    }
L_08AADB98:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20720)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(20720), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AADBB8;
      }
      goto L_08AADBA8;
    }
L_08AADBA8:
    ctx.gpr[31] = (0x08AADBB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 166u, 0x088C4CA0u>(ctx, &aot_mem) && ctx.pc == 0x08AADBB0u) goto L_08AADBB0;
    return;
L_08AADBB0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(20720), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AADBB8;
L_08AADBB8:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AADC30;
      }
      goto L_08AADBF4;
    }
L_08AADBF4:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16250u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 57672u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AADC30;
      }
      goto L_08AADC24;
    }
L_08AADC24:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-13680), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AADC34;
      }
      goto L_08AADC30;
    }
L_08AADC30:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-13680), static_cast<std::uint8_t>(0u));
    goto L_08AADC34;
L_08AADC34:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AADCD8;
      }
      goto L_08AADC5C;
    }
L_08AADC5C:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AADD54;
      }
      goto L_08AADCD8;
    }
L_08AADCD8:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    goto L_08AADD54;
L_08AADD54:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AADDBCu);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 645u, 0x088B7FA4u>(ctx, &aot_mem) && ctx.pc == 0x08AADDBCu) goto L_08AADDBC;
    return;
L_08AADDBC:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7167), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 37u);
      if (branch_taken) {
          goto L_08AAE01C;
      }
      goto L_08AADDF4;
    }
L_08AADDF4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AAE01C;
      }
      goto L_08AADDFC;
    }
L_08AADDFC:
    ctx.gpr[31] = (0x08AADE04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 190u, 0x089D591Cu>(ctx, &aot_mem) && ctx.pc == 0x08AADE04u) goto L_08AADE04;
    return;
L_08AADE04:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_08AADEA4;
      }
      goto L_08AADE10;
    }
L_08AADE10:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AADEA4;
      }
      goto L_08AADE28;
    }
L_08AADE28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[26];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[6] = (2219u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22136));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[26];
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[26];
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[26];
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[26];
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[26];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[28];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[28];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = ctx.fpr[17] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AADE9Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08AAD378;
L_08AADE9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE014;
      }
      goto L_08AADEA4;
    }
L_08AADEA4:
    ctx.gpr[17] = (2219u << 16u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-7216));
      if (branch_taken) {
          goto L_08AADFA4;
      }
      goto L_08AADEB8;
    }
L_08AADEB8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[26];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[6] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6276));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[26];
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[26];
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[26];
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[26];
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[26];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[28];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[28];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = ctx.fpr[17] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AADF2Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08AAD378;
L_08AADF2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[26];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[26];
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[26];
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[26];
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[26];
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[26];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[28];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[28];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = ctx.fpr[17] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AADF9Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08AAD378;
L_08AADF9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE014;
      }
      goto L_08AADFA4;
    }
L_08AADFA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[26];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[26];
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[26];
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[26];
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[26];
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[26];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[28];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[28];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = ctx.fpr[17] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AAE014u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08AAD378;
L_08AAE014:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE38C;
      }
      goto L_08AAE01C;
    }
L_08AAE01C:
    ctx.gpr[31] = (0x08AAE024u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 136u, 0x089FD404u>(ctx, &aot_mem) && ctx.pc == 0x08AAE024u) goto L_08AAE024;
    return;
L_08AAE024:
    ctx.gpr[6] = (49864u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AAE03Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 223u, 0x08AA9908u>(ctx, &aot_mem) && ctx.pc == 0x08AAE03Cu) goto L_08AAE03C;
    return;
L_08AAE03C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08AAE064;
      }
      goto L_08AAE05C;
    }
L_08AAE05C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAE064;
L_08AAE064:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
        goto L_08AAE088;
    }
    goto L_08AAE07C;
L_08AAE07C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    goto L_08AAE088;
L_08AAE088:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
        goto L_08AAE0A8;
    }
    goto L_08AAE09C;
L_08AAE09C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    goto L_08AAE0A8;
L_08AAE0A8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE0C4;
      }
      goto L_08AAE0BC;
    }
L_08AAE0BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAE0C4;
L_08AAE0C4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AAE0D4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 223u, 0x08AA9908u>(ctx, &aot_mem) && ctx.pc == 0x08AAE0D4u) goto L_08AAE0D4;
    return;
L_08AAE0D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08AAE0FC;
      }
      goto L_08AAE0F4;
    }
L_08AAE0F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAE0FC;
L_08AAE0FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
        goto L_08AAE120;
    }
    goto L_08AAE114;
L_08AAE114:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    goto L_08AAE120;
L_08AAE120:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
        goto L_08AAE140;
    }
    goto L_08AAE134;
L_08AAE134:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    goto L_08AAE140;
L_08AAE140:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE15C;
      }
      goto L_08AAE154;
    }
L_08AAE154:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAE15C;
L_08AAE15C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AAE16Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 223u, 0x08AA9908u>(ctx, &aot_mem) && ctx.pc == 0x08AAE16Cu) goto L_08AAE16C;
    return;
L_08AAE16C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08AAE194;
      }
      goto L_08AAE18C;
    }
L_08AAE18C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAE194;
L_08AAE194:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
        goto L_08AAE1B8;
    }
    goto L_08AAE1AC;
L_08AAE1AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    goto L_08AAE1B8;
L_08AAE1B8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
        goto L_08AAE1D8;
    }
    goto L_08AAE1CC;
L_08AAE1CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    goto L_08AAE1D8;
L_08AAE1D8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE1F4;
      }
      goto L_08AAE1EC;
    }
L_08AAE1EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAE1F4;
L_08AAE1F4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AAE204u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 223u, 0x08AA9908u>(ctx, &aot_mem) && ctx.pc == 0x08AAE204u) goto L_08AAE204;
    return;
L_08AAE204:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08AAE22C;
      }
      goto L_08AAE224;
    }
L_08AAE224:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAE22C;
L_08AAE22C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
        goto L_08AAE250;
    }
    goto L_08AAE244;
L_08AAE244:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    goto L_08AAE250;
L_08AAE250:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
        goto L_08AAE270;
    }
    goto L_08AAE264;
L_08AAE264:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    goto L_08AAE270;
L_08AAE270:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
        goto L_08AAE290;
    }
    goto L_08AAE284;
L_08AAE284:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    goto L_08AAE290;
L_08AAE290:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[26];
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
        goto L_08AAE2B4;
    }
    goto L_08AAE2B4;
L_08AAE2B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[26];
    ctx.gpr[16] = (0u | 99u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
        goto L_08AAE2D8;
    }
    goto L_08AAE2D8;
L_08AAE2D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[26];
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_08AAE300;
    }
    goto L_08AAE300;
L_08AAE300:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[26];
    ctx.gpr[18] = (0u | 99u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
        goto L_08AAE324;
    }
    goto L_08AAE324;
L_08AAE324:
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AAE38C;
      }
      goto L_08AAE330;
    }
L_08AAE330:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
      if (branch_taken) {
          goto L_08AAE37C;
      }
      goto L_08AAE340;
    }
L_08AAE340:
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[22] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[22]);
    goto L_08AAE360;
L_08AAE360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[31] = (0x08AAE36Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_08AAE3D0;
L_08AAE36C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4400));
      if (branch_taken) {
          goto L_08AAE360;
      }
      goto L_08AAE37C;
    }
L_08AAE37C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE330;
      }
      goto L_08AAE38C;
    }
L_08AAE38C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE3D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(27452)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAE428;
      }
      goto L_08AAE420;
    }
L_08AAE420:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08AAE428;
L_08AAE428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AAE744;
      }
      goto L_08AAE43C;
    }
L_08AAE43C:
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30464));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (49648u << 16u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26432));
    ctx.gpr[22] = (2277u << 16u);
    ctx.gpr[4] = (16880u << 16u);
    ctx.gpr[23] = (2278u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[22] + static_cast<std::uint32_t>(26416));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-31104));
    ctx.gpr[21] = (8u << 16u);
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[18] = (2230u << 16u);
    goto L_08AAE484;
L_08AAE484:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAE72C;
      }
      goto L_08AAE498;
    }
L_08AAE498:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20720)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AAE724;
      }
      goto L_08AAE4B0;
    }
L_08AAE4B0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AAE4CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AAC6E0;
L_08AAE4CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AAE4F8;
      }
      goto L_08AAE4DC;
    }
L_08AAE4DC:
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08AAE4F8;
L_08AAE4F8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAE51C;
      }
      goto L_08AAE504;
    }
L_08AAE504:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AAE724;
      }
      goto L_08AAE50C;
    }
L_08AAE50C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AAE610;
      }
      goto L_08AAE514;
    }
L_08AAE514:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE570;
      }
      goto L_08AAE51C;
    }
L_08AAE51C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAE690;
      }
      goto L_08AAE524;
    }
L_08AAE524:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE724;
      }
      goto L_08AAE52C;
    }
L_08AAE52C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8068)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE568;
      }
      goto L_08AAE53C;
    }
L_08AAE53C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7167)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AAE55C;
      }
      goto L_08AAE54C;
    }
L_08AAE54C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8060)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE568;
      }
      goto L_08AAE55C;
    }
L_08AAE55C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x08AAE568u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AAE568u) goto L_08AAE568;
    return;
L_08AAE568:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE724;
      }
      goto L_08AAE570;
    }
L_08AAE570:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (ctx.gpr[7] & 14u);
    ctx.gpr[4] = (ctx.gpr[7] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE5CC;
      }
      goto L_08AAE58C;
    }
L_08AAE58C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[7] ^ 6u);
      if (branch_taken) {
          goto L_08AAE5CC;
      }
      goto L_08AAE5A8;
    }
L_08AAE5A8:
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (4u << 16u);
      if (branch_taken) {
          goto L_08AAE5CC;
      }
      goto L_08AAE5B8;
    }
L_08AAE5B8:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE5EC;
      }
      goto L_08AAE5CC;
    }
L_08AAE5CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-6020)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-6020), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AAE608;
      }
      goto L_08AAE5EC;
    }
L_08AAE5EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-6028)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-6028), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08AAE608;
L_08AAE608:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE724;
      }
      goto L_08AAE610;
    }
L_08AAE610:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAE63C;
      }
      goto L_08AAE628;
    }
L_08AAE628:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AAE63C;
L_08AAE63C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[8];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08AAE65C;
      }
      goto L_08AAE64C;
    }
L_08AAE64C:
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(54)));
        goto L_08AAE660;
    }
    goto L_08AAE654;
L_08AAE654:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAE680;
      }
      goto L_08AAE65C;
    }
L_08AAE65C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(54)));
    goto L_08AAE660;
L_08AAE660:
    ctx.gpr[5] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAE678;
      }
      goto L_08AAE66C;
    }
L_08AAE66C:
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_08AAE680;
      }
      goto L_08AAE678;
    }
L_08AAE678:
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
    goto L_08AAE680;
L_08AAE680:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE690;
      }
      goto L_08AAE688;
    }
L_08AAE688:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE724;
      }
      goto L_08AAE690;
    }
L_08AAE690:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[5] | 2048u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(26416)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE71C;
      }
      goto L_08AAE6BC;
    }
L_08AAE6BC:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE71C;
      }
      goto L_08AAE6CC;
    }
L_08AAE6CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE71C;
      }
      goto L_08AAE6E8;
    }
L_08AAE6E8:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE71C;
      }
      goto L_08AAE6F8;
    }
L_08AAE6F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6024)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 149 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE71C;
      }
      goto L_08AAE708;
    }
L_08AAE708:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-6024), ctx.gpr[4]);
    goto L_08AAE71C;
L_08AAE71C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE724;
      }
      goto L_08AAE724;
    }
L_08AAE724:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE498;
      }
      goto L_08AAE72C;
    }
L_08AAE72C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAE484;
      }
      goto L_08AAE744;
    }
L_08AAE744:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE77C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(27452)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAE7D4;
      }
      goto L_08AAE7CC;
    }
L_08AAE7CC:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08AAE7D4;
L_08AAE7D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AAEB10;
      }
      goto L_08AAE7E8;
    }
L_08AAE7E8:
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30464));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (49648u << 16u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26432));
    ctx.gpr[22] = (2277u << 16u);
    ctx.gpr[4] = (16880u << 16u);
    ctx.gpr[23] = (2278u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[22] + static_cast<std::uint32_t>(26416));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-31104));
    ctx.gpr[21] = (8u << 16u);
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[18] = (2230u << 16u);
    goto L_08AAE830;
L_08AAE830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAEAF8;
      }
      goto L_08AAE844;
    }
L_08AAE844:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20720)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AAEAF0;
      }
      goto L_08AAE85C;
    }
L_08AAE85C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AAE878u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AAC6E0;
L_08AAE878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AAE8A4;
      }
      goto L_08AAE888;
    }
L_08AAE888:
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08AAE8A4;
L_08AAE8A4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAE8C8;
      }
      goto L_08AAE8B0;
    }
L_08AAE8B0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AAEAF0;
      }
      goto L_08AAE8B8;
    }
L_08AAE8B8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AAE9DC;
      }
      goto L_08AAE8C0;
    }
L_08AAE8C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE93C;
      }
      goto L_08AAE8C8;
    }
L_08AAE8C8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAEA5C;
      }
      goto L_08AAE8D0;
    }
L_08AAE8D0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAEAF0;
      }
      goto L_08AAE8D8;
    }
L_08AAE8D8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8068)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE934;
      }
      goto L_08AAE8E8;
    }
L_08AAE8E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x08AAE8F4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AAE8F4u) goto L_08AAE8F4;
    return;
L_08AAE8F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
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
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE934;
      }
      goto L_08AAE928;
    }
L_08AAE928:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7167), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AAE934;
L_08AAE934:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAEAF0;
      }
      goto L_08AAE93C;
    }
L_08AAE93C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (ctx.gpr[7] & 14u);
    ctx.gpr[4] = (ctx.gpr[7] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE998;
      }
      goto L_08AAE958;
    }
L_08AAE958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[7] ^ 6u);
      if (branch_taken) {
          goto L_08AAE998;
      }
      goto L_08AAE974;
    }
L_08AAE974:
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (4u << 16u);
      if (branch_taken) {
          goto L_08AAE998;
      }
      goto L_08AAE984;
    }
L_08AAE984:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE9B8;
      }
      goto L_08AAE998;
    }
L_08AAE998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-6020)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-6020), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AAE9D4;
      }
      goto L_08AAE9B8;
    }
L_08AAE9B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-6028)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-6028), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08AAE9D4;
L_08AAE9D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAEAF0;
      }
      goto L_08AAE9DC;
    }
L_08AAE9DC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAEA08;
      }
      goto L_08AAE9F4;
    }
L_08AAE9F4:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AAEA08;
L_08AAEA08:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[8];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08AAEA28;
      }
      goto L_08AAEA18;
    }
L_08AAEA18:
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(54)));
        goto L_08AAEA2C;
    }
    goto L_08AAEA20;
L_08AAEA20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAEA4C;
      }
      goto L_08AAEA28;
    }
L_08AAEA28:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(54)));
    goto L_08AAEA2C;
L_08AAEA2C:
    ctx.gpr[5] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAEA44;
      }
      goto L_08AAEA38;
    }
L_08AAEA38:
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_08AAEA4C;
      }
      goto L_08AAEA44;
    }
L_08AAEA44:
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
    goto L_08AAEA4C;
L_08AAEA4C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAEA5C;
      }
      goto L_08AAEA54;
    }
L_08AAEA54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAEAF0;
      }
      goto L_08AAEA5C;
    }
L_08AAEA5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[5] | 2048u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(26416)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAEAE8;
      }
      goto L_08AAEA88;
    }
L_08AAEA88:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAEAE8;
      }
      goto L_08AAEA98;
    }
L_08AAEA98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAEAE8;
      }
      goto L_08AAEAB4;
    }
L_08AAEAB4:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAEAE8;
      }
      goto L_08AAEAC4;
    }
L_08AAEAC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6024)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 149 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAEAE8;
      }
      goto L_08AAEAD4;
    }
L_08AAEAD4:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-6024), ctx.gpr[4]);
    goto L_08AAEAE8;
L_08AAEAE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAEAF0;
      }
      goto L_08AAEAF0;
    }
L_08AAEAF0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE844;
      }
      goto L_08AAEAF8;
    }
L_08AAEAF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAE830;
      }
      goto L_08AAEB10;
    }
L_08AAEB10:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEB48:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26388)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26384)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26412)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[3] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26420));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(26392), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[12] = (2229u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(26400), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(26396), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26404), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26408), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(26416), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEBE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(26656));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_08AAEC10;
L_08AAEC10:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AAEC1Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08AAEC1Cu) goto L_08AAEC1C;
    return;
L_08AAEC1C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AAEC2Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 560u, 0x089171D8u>(ctx, &aot_mem) && ctx.pc == 0x08AAEC2Cu) goto L_08AAEC2C;
    return;
L_08AAEC2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(5)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AAEC10;
      }
      goto L_08AAEC4C;
    }
L_08AAEC4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEC68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAECA8;
      }
      goto L_08AAEC7C;
    }
L_08AAEC7C:
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18436));
    ctx.gpr[31] = (0x08AAEC9Cu);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 221u, 0x08A5945Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAEC9Cu) goto L_08AAEC9C;
    return;
L_08AAEC9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08AAECA8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08AAED60;
L_08AAECA8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAECB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAECF8u);
    ctx.gpr[6] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 223u, 0x08A5949Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAECF8u) goto L_08AAECF8;
    return;
L_08AAECF8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AAED18u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18412));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 221u, 0x08A5945Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAED18u) goto L_08AAED18;
    return;
L_08AAED18:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AAED24u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 244u, 0x088B9474u>(ctx, &aot_mem) && ctx.pc == 0x08AAED24u) goto L_08AAED24;
    return;
L_08AAED24:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAED44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAED54u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08AAECB4;
L_08AAED54:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAED60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 286 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 288 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAEDA0;
      }
      goto L_08AAED88;
    }
L_08AAED88:
    ctx.gpr[5] = (0u | 278u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AAEDB4;
      }
      goto L_08AAED94;
    }
L_08AAED94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AAEDC4;
      }
      goto L_08AAEDA0;
    }
L_08AAEDA0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAEDB4;
      }
      goto L_08AAEDA8;
    }
L_08AAEDA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AAEDC4;
      }
      goto L_08AAEDB4;
    }
L_08AAEDB4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AAEDC0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AAEDE8;
L_08AAEDC0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AAEDC4;
L_08AAEDC4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AAEDD4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AAED44;
L_08AAEDD4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEDE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 257 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AAEE20;
      }
      goto L_08AAEE04;
    }
L_08AAEE04:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[31] = (0x08AAEE18u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18392));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 221u, 0x08A5945Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAEE18u) goto L_08AAEE18;
    return;
L_08AAEE18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAEE34;
      }
      goto L_08AAEE20;
    }
L_08AAEE20:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26656));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1028)));
    goto L_08AAEE34;
L_08AAEE34:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEE40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (0u | 288u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AAEE7C;
      }
      goto L_08AAEE54;
    }
L_08AAEE54:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AAEE64u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08AAEDE8;
L_08AAEE64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08AAEE74u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08AAED44;
L_08AAEE74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAEE88;
      }
      goto L_08AAEE7C;
    }
L_08AAEE7C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08AAEE88u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08AAED44;
L_08AAEE88:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEE94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAEEE0;
      }
      goto L_08AAEEBC;
    }
L_08AAEEBC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAEEF4;
      }
      goto L_08AAEEE0;
    }
L_08AAEEE0:
    ctx.gpr[31] = (0x08AAEEE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875984u>(ctx, &aot_mem) && ctx.pc == 0x08AAEEE8u) goto L_08AAEEE8;
    return;
L_08AAEEE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08AAEEF4;
L_08AAEEF4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3));
    ctx.gpr[31] = (0x08AAEF18u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-18388));
    goto L_08AAEC68;
L_08AAEF18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEF28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 288u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAEF94;
      }
      goto L_08AAEF78;
    }
L_08AAEF78:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AAEFA0;
      }
      goto L_08AAEF94;
    }
L_08AAEF94:
    ctx.gpr[31] = (0x08AAEF9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875984u>(ctx, &aot_mem) && ctx.pc == 0x08AAEF9Cu) goto L_08AAEF9C;
    return;
L_08AAEF9C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AAEFA0;
L_08AAEFA0:
    ctx.gpr[5] = (0u | 35u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAF004;
      }
      goto L_08AAEFAC;
    }
L_08AAEFAC:
    ctx.gpr[18] = (0u | 10u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AAEFB4;
L_08AAEFB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAEFE8;
      }
      goto L_08AAEFCC;
    }
L_08AAEFCC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AAEFF4;
      }
      goto L_08AAEFE8;
    }
L_08AAEFE8:
    ctx.gpr[31] = (0x08AAEFF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875984u>(ctx, &aot_mem) && ctx.pc == 0x08AAEFF0u) goto L_08AAEFF0;
    return;
L_08AAEFF0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AAEFF4;
L_08AAEFF4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAF004;
      }
      goto L_08AAEFFC;
    }
L_08AAEFFC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AAEFB4;
      }
      goto L_08AAF004;
    }
L_08AAF004:
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
L_08AAF01C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAF060;
      }
      goto L_08AAF04C;
    }
L_08AAF04C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08AAF05Cu);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 75u, 0x08875B50u>(ctx, &aot_mem) && ctx.pc == 0x08AAF05Cu) goto L_08AAF05C;
    return;
L_08AAF05C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF060;
L_08AAF060:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25176));
    ctx.gpr[17] = (0u | 95u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08AAF070;
L_08AAF070:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(5));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AAF094;
      }
      goto L_08AAF084;
    }
L_08AAF084:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08AAF090u);
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 75u, 0x08875B50u>(ctx, &aot_mem) && ctx.pc == 0x08AAF090u) goto L_08AAF090;
    return;
L_08AAF090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF094;
L_08AAF094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAF0E0;
      }
      goto L_08AAF0C0;
    }
L_08AAF0C0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AAF0F0;
      }
      goto L_08AAF0E0;
    }
L_08AAF0E0:
    ctx.gpr[31] = (0x08AAF0E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875984u>(ctx, &aot_mem) && ctx.pc == 0x08AAF0E8u) goto L_08AAF0E8;
    return;
L_08AAF0E8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF0F0;
L_08AAF0F0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] & 7u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF070;
      }
      goto L_08AAF108;
    }
L_08AAF108:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AAF070;
      }
      goto L_08AAF110;
    }
L_08AAF110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF140:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[8] + static_cast<std::uint32_t>(-25176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 46u);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AAF1A4;
      }
      goto L_08AAF190;
    }
L_08AAF190:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08AAF1A0u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 75u, 0x08875B50u>(ctx, &aot_mem) && ctx.pc == 0x08AAF1A0u) goto L_08AAF1A0;
    return;
L_08AAF1A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF1A4;
L_08AAF1A4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF1BC;
      }
      goto L_08AAF1AC;
    }
L_08AAF1AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF1BC;
L_08AAF1BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] & 4u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF26C;
      }
      goto L_08AAF1D4;
    }
L_08AAF1D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(5));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AAF1F8;
      }
      goto L_08AAF1E8;
    }
L_08AAF1E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08AAF1F4u);
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 75u, 0x08875B50u>(ctx, &aot_mem) && ctx.pc == 0x08AAF1F4u) goto L_08AAF1F4;
    return;
L_08AAF1F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF1F8;
L_08AAF1F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAF244;
      }
      goto L_08AAF224;
    }
L_08AAF224:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AAF254;
      }
      goto L_08AAF244;
    }
L_08AAF244:
    ctx.gpr[31] = (0x08AAF24Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875984u>(ctx, &aot_mem) && ctx.pc == 0x08AAF24Cu) goto L_08AAF24C;
    return;
L_08AAF24C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF254;
L_08AAF254:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] & 4u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF1D4;
      }
      goto L_08AAF26C;
    }
L_08AAF26C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AAF364;
      }
      goto L_08AAF274;
    }
L_08AAF274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAF2C0;
      }
      goto L_08AAF2A0;
    }
L_08AAF2A0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AAF2D0;
      }
      goto L_08AAF2C0;
    }
L_08AAF2C0:
    ctx.gpr[31] = (0x08AAF2C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875984u>(ctx, &aot_mem) && ctx.pc == 0x08AAF2C8u) goto L_08AAF2C8;
    return;
L_08AAF2C8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF2D0;
L_08AAF2D0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AAF364;
      }
      goto L_08AAF2D8;
    }
L_08AAF2D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAF324;
      }
      goto L_08AAF304;
    }
L_08AAF304:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AAF334;
      }
      goto L_08AAF324;
    }
L_08AAF324:
    ctx.gpr[31] = (0x08AAF32Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875984u>(ctx, &aot_mem) && ctx.pc == 0x08AAF32Cu) goto L_08AAF32C;
    return;
L_08AAF32C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF334;
L_08AAF334:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 286u);
    ctx.gpr[31] = (0x08AAF35Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18368));
    goto L_08AAEE40;
L_08AAF35C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AAF364;
L_08AAF364:
    ctx.gpr[6] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] & 4u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF410;
      }
      goto L_08AAF378;
    }
L_08AAF378:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(5));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AAF39C;
      }
      goto L_08AAF38C;
    }
L_08AAF38C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08AAF398u);
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 75u, 0x08875B50u>(ctx, &aot_mem) && ctx.pc == 0x08AAF398u) goto L_08AAF398;
    return;
L_08AAF398:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF39C;
L_08AAF39C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAF3E8;
      }
      goto L_08AAF3C8;
    }
L_08AAF3C8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AAF3F8;
      }
      goto L_08AAF3E8;
    }
L_08AAF3E8:
    ctx.gpr[31] = (0x08AAF3F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875984u>(ctx, &aot_mem) && ctx.pc == 0x08AAF3F0u) goto L_08AAF3F0;
    return;
L_08AAF3F0:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF3F8;
L_08AAF3F8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] & 4u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF378;
      }
      goto L_08AAF410;
    }
L_08AAF410:
    ctx.gpr[6] = (0u | 101u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 69u);
      if (branch_taken) {
          goto L_08AAF424;
      }
      goto L_08AAF41C;
    }
L_08AAF41C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AAF5A8;
      }
      goto L_08AAF424;
    }
L_08AAF424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAF470;
      }
      goto L_08AAF450;
    }
L_08AAF450:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AAF480;
      }
      goto L_08AAF470;
    }
L_08AAF470:
    ctx.gpr[31] = (0x08AAF478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875984u>(ctx, &aot_mem) && ctx.pc == 0x08AAF478u) goto L_08AAF478;
    return;
L_08AAF478:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF480;
L_08AAF480:
    ctx.gpr[6] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AAF498;
      }
      goto L_08AAF48C;
    }
L_08AAF48C:
    ctx.gpr[6] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AAF4F8;
      }
      goto L_08AAF498;
    }
L_08AAF498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAF4E4;
      }
      goto L_08AAF4C4;
    }
L_08AAF4C4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AAF4F4;
      }
      goto L_08AAF4E4;
    }
L_08AAF4E4:
    ctx.gpr[31] = (0x08AAF4ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875984u>(ctx, &aot_mem) && ctx.pc == 0x08AAF4ECu) goto L_08AAF4EC;
    return;
L_08AAF4EC:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF4F4;
L_08AAF4F4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08AAF4F8;
L_08AAF4F8:
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF5A8;
      }
      goto L_08AAF50C;
    }
L_08AAF50C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AAF530;
      }
      goto L_08AAF520;
    }
L_08AAF520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08AAF52Cu);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 75u, 0x08875B50u>(ctx, &aot_mem) && ctx.pc == 0x08AAF52Cu) goto L_08AAF52C;
    return;
L_08AAF52C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF530;
L_08AAF530:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAF580;
      }
      goto L_08AAF560;
    }
L_08AAF560:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AAF590;
      }
      goto L_08AAF580;
    }
L_08AAF580:
    ctx.gpr[31] = (0x08AAF588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875984u>(ctx, &aot_mem) && ctx.pc == 0x08AAF588u) goto L_08AAF588;
    return;
L_08AAF588:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF590;
L_08AAF590:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF50C;
      }
      goto L_08AAF5A8;
    }
L_08AAF5A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08AAF5C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 204u, 0x08A59310u>(ctx, &aot_mem) && ctx.pc == 0x08AAF5C4u) goto L_08AAF5C4;
    return;
L_08AAF5C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF5E0;
      }
      goto L_08AAF5CC;
    }
L_08AAF5CC:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 286u);
    ctx.gpr[31] = (0x08AAF5E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18312));
    goto L_08AAEE40;
L_08AAF5E0:
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
L_08AAF604:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[23] = (0u | 91u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    ctx.gpr[22] = (0u | 10u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AAF668;
      }
      goto L_08AAF654;
    }
L_08AAF654:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[31] = (0x08AAF664u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 75u, 0x08875B50u>(ctx, &aot_mem) && ctx.pc == 0x08AAF664u) goto L_08AAF664;
    return;
L_08AAF664:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF668;
L_08AAF668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (0u | 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAF6C0;
      }
      goto L_08AAF6A4;
    }
L_08AAF6A4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AAF6CC;
      }
      goto L_08AAF6C0;
    }
L_08AAF6C0:
    ctx.gpr[31] = (0x08AAF6C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875984u>(ctx, &aot_mem) && ctx.pc == 0x08AAF6C8u) goto L_08AAF6C8;
    return;
L_08AAF6C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AAF6CC;
L_08AAF6CC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAF6DC;
      }
      goto L_08AAF6D4;
    }
L_08AAF6D4:
    ctx.gpr[31] = (0x08AAF6DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AAEE94;
L_08AAF6DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18292));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-18268));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[21] = (0u | 93u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[18] = (ctx.gpr[18] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    goto L_08AAF704;
L_08AAF704:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AAF71C;
      }
      goto L_08AAF70C;
    }
L_08AAF70C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08AAF718u);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 75u, 0x08875B50u>(ctx, &aot_mem) && ctx.pc == 0x08AAF718u) goto L_08AAF718;
    return;
L_08AAF718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF71C;
L_08AAF71C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[21];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AAF860;
      }
      goto L_08AAF728;
    }
L_08AAF728:
    if (ctx.gpr[18] == ctx.gpr[23]) {
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
        goto L_08AAF790;
    }
    goto L_08AAF730;
L_08AAF730:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[22];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AAF97C;
      }
      goto L_08AAF738;
    }
L_08AAF738:
    if (ctx.gpr[18] != ctx.gpr[5]) {
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
        goto L_08AAF9B0;
    }
    goto L_08AAF740;
L_08AAF740:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAF760;
      }
      goto L_08AAF758;
    }
L_08AAF758:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08AAF764;
      }
      goto L_08AAF760;
    }
L_08AAF760:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08AAF764;
L_08AAF764:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AAF77Cu);
    ctx.gpr[6] = (0u | 288u);
    goto L_08AAEE40;
L_08AAF77C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[18] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AAFA14;
      }
      goto L_08AAF790;
    }
L_08AAF790:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAF7D4;
      }
      goto L_08AAF7B4;
    }
L_08AAF7B4:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AAF7E4;
      }
      goto L_08AAF7D4;
    }
L_08AAF7D4:
    ctx.gpr[31] = (0x08AAF7DCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875984u>(ctx, &aot_mem) && ctx.pc == 0x08AAF7DCu) goto L_08AAF7DC;
    return;
L_08AAF7DC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF7E4;
L_08AAF7E4:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[23];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AAF850;
      }
      goto L_08AAF7EC;
    }
L_08AAF7EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAF83C;
      }
      goto L_08AAF81C;
    }
L_08AAF81C:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AAF84C;
      }
      goto L_08AAF83C;
    }
L_08AAF83C:
    ctx.gpr[31] = (0x08AAF844u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875984u>(ctx, &aot_mem) && ctx.pc == 0x08AAF844u) goto L_08AAF844;
    return;
L_08AAF844:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF84C;
L_08AAF84C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08AAF850;
L_08AAF850:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAFA14;
      }
      goto L_08AAF860;
    }
L_08AAF860:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAF8A8;
      }
      goto L_08AAF888;
    }
L_08AAF888:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AAF8B8;
      }
      goto L_08AAF8A8;
    }
L_08AAF8A8:
    ctx.gpr[31] = (0x08AAF8B0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875984u>(ctx, &aot_mem) && ctx.pc == 0x08AAF8B0u) goto L_08AAF8B0;
    return;
L_08AAF8B0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF8B8;
L_08AAF8B8:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[21];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AAF96C;
      }
      goto L_08AAF8C0;
    }
L_08AAF8C0:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AAF90C;
      }
      goto L_08AAF8C8;
    }
L_08AAF8C8:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAFA1C;
      }
      goto L_08AAF8EC;
    }
L_08AAF8EC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AAFA2C;
      }
      goto L_08AAF90C;
    }
L_08AAF90C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAF958;
      }
      goto L_08AAF938;
    }
L_08AAF938:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AAF968;
      }
      goto L_08AAF958;
    }
L_08AAF958:
    ctx.gpr[31] = (0x08AAF960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875984u>(ctx, &aot_mem) && ctx.pc == 0x08AAF960u) goto L_08AAF960;
    return;
L_08AAF960:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF968;
L_08AAF968:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08AAF96C;
L_08AAF96C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAFA14;
      }
      goto L_08AAF97C;
    }
L_08AAF97C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AAF990u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AAEE94;
L_08AAF990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AAF9A0;
      }
      goto L_08AAF99C;
    }
L_08AAF99C:
    ctx.gpr[17] = (0u | 0u);
    goto L_08AAF9A0;
L_08AAF9A0:
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.gpr[18] = (ctx.gpr[19] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAFA14;
      }
      goto L_08AAF9B0;
    }
L_08AAF9B0:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAF9F8;
      }
      goto L_08AAF9D8;
    }
L_08AAF9D8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AAFA08;
      }
      goto L_08AAF9F8;
    }
L_08AAF9F8:
    ctx.gpr[31] = (0x08AAFA00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875984u>(ctx, &aot_mem) && ctx.pc == 0x08AAFA00u) goto L_08AAFA00;
    return;
L_08AAFA00:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAFA08;
L_08AAFA08:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[5] < ctx.gpr[18] ? 1u : 0u);
    goto L_08AAFA14;
L_08AAFA14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF704;
      }
      goto L_08AAFA1C;
    }
L_08AAFA1C:
    ctx.gpr[31] = (0x08AAFA24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875984u>(ctx, &aot_mem) && ctx.pc == 0x08AAFA24u) goto L_08AAFA24;
    return;
L_08AAFA24:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAFA2C;
L_08AAFA2C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AAFA60;
      }
      goto L_08AAFA40;
    }
L_08AAFA40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.gpr[31] = (0x08AAFA5Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5));
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 560u, 0x089171D8u>(ctx, &aot_mem) && ctx.pc == 0x08AAFA5Cu) goto L_08AAFA5C;
    return;
L_08AAFA5C:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AAFA60;
L_08AAFA60:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAFA90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AAFAEC;
      }
      goto L_08AAFAD8;
    }
L_08AAFAD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[31] = (0x08AAFAE8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 75u, 0x08875B50u>(ctx, &aot_mem) && ctx.pc == 0x08AAFAE8u) goto L_08AAFAE8;
    return;
L_08AAFAE8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    goto L_08AAFAEC;
L_08AAFAEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAFB34;
      }
      goto L_08AAFB14;
    }
L_08AAFB14:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AAFB44;
      }
      goto L_08AAFB34;
    }
L_08AAFB34:
    ctx.gpr[31] = (0x08AAFB3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875984u>(ctx, &aot_mem) && ctx.pc == 0x08AAFB3Cu) goto L_08AAFB3C;
    return;
L_08AAFB3C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    goto L_08AAFB44;
L_08AAFB44:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 21u, 0x08AB014Cu>(ctx, &aot_mem); return;
      }
      goto L_08AAFB54;
    }
L_08AAFB54:
    ctx.gpr[21] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25176));
    ctx.gpr[23] = (2227u << 16u);
    ctx.gpr[30] = (2227u << 16u);
    ctx.gpr[22] = (0u | 10u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-18244));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-18224));
    goto L_08AAFB70;
L_08AAFB70:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(5));
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFB94;
      }
      goto L_08AAFB84;
    }
L_08AAFB84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08AAFB90u);
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 75u, 0x08875B50u>(ctx, &aot_mem) && ctx.pc == 0x08AAFB90u) goto L_08AAFB90;
    return;
L_08AAFB90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AAFB94;
L_08AAFB94:
    ctx.gpr[5] = (0u | 92u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AAFC0C;
      }
      goto L_08AAFBA0;
    }
L_08AAFBA0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AAFBE4;
      }
      goto L_08AAFBB0;
    }
L_08AAFBB0:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] != ctx.gpr[7]) {
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[19]);
        (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 15u, 0x08AB00ECu>(ctx, &aot_mem); return;
    }
    goto L_08AAFBBC;
L_08AAFBBC:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AAFBD8u);
    ctx.gpr[6] = (0u | 288u);
    goto L_08AAEE40;
L_08AAFBD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 20u, 0x08AB0140u>(ctx, &aot_mem); return;
      }
      goto L_08AAFBE4;
    }
L_08AAFBE4:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AAFC00u);
    ctx.gpr[6] = (0u | 287u);
    goto L_08AAEE40;
L_08AAFC00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 20u, 0x08AB0140u>(ctx, &aot_mem); return;
      }
      goto L_08AAFC0C;
    }
L_08AAFC0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAFC40;
      }
      goto L_08AAFC24;
    }
L_08AAFC24:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AAFC4C;
      }
      goto L_08AAFC40;
    }
L_08AAFC40:
    ctx.gpr[31] = (0x08AAFC48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875984u>(ctx, &aot_mem) && ctx.pc == 0x08AAFC48u) goto L_08AAFC48;
    return;
L_08AAFC48:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AAFC4C;
L_08AAFC4C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 97 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAFCA0;
      }
      goto L_08AAFC58;
    }
L_08AAFC58:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -1 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAFC70;
      }
      goto L_08AAFC60;
    }
L_08AAFC60:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFF98;
      }
      goto L_08AAFC68;
    }
L_08AAFC68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 14u, 0x08AB00E4u>(ctx, &aot_mem); return;
      }
      goto L_08AAFC70;
    }
L_08AAFC70:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08AAFF98;
      }
      goto L_08AAFC78;
    }
L_08AAFC78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08AAFC94u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[22]));
    goto L_08AAEE94;
L_08AAFC94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 14u, 0x08AB00E4u>(ctx, &aot_mem); return;
      }
      goto L_08AAFCA0;
    }
L_08AAFCA0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 119 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-97));
      if (branch_taken) {
          goto L_08AAFF98;
      }
      goto L_08AAFCAC;
    }
L_08AAFCAC:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-18160)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAFCC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAFD14;
      }
      goto L_08AAFCF4;
    }
L_08AAFCF4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AAFD24;
      }
      goto L_08AAFD14;
    }
L_08AAFD14:
    ctx.gpr[31] = (0x08AAFD1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875984u>(ctx, &aot_mem) && ctx.pc == 0x08AAFD1Cu) goto L_08AAFD1C;
    return;
L_08AAFD1C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    goto L_08AAFD24;
L_08AAFD24:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 14u, 0x08AB00E4u>(ctx, &aot_mem); return;
      }
      goto L_08AAFD2C;
    }
L_08AAFD2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAFD7C;
      }
      goto L_08AAFD5C;
    }
L_08AAFD5C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AAFD8C;
      }
      goto L_08AAFD7C;
    }
L_08AAFD7C:
    ctx.gpr[31] = (0x08AAFD84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875984u>(ctx, &aot_mem) && ctx.pc == 0x08AAFD84u) goto L_08AAFD84;
    return;
L_08AAFD84:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    goto L_08AAFD8C;
L_08AAFD8C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 14u, 0x08AB00E4u>(ctx, &aot_mem); return;
      }
      goto L_08AAFD94;
    }
L_08AAFD94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAFDE4;
      }
      goto L_08AAFDC4;
    }
L_08AAFDC4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AAFDF4;
      }
      goto L_08AAFDE4;
    }
L_08AAFDE4:
    ctx.gpr[31] = (0x08AAFDECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875984u>(ctx, &aot_mem) && ctx.pc == 0x08AAFDECu) goto L_08AAFDEC;
    return;
L_08AAFDEC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    goto L_08AAFDF4;
L_08AAFDF4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 14u, 0x08AB00E4u>(ctx, &aot_mem); return;
      }
      goto L_08AAFDFC;
    }
L_08AAFDFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAFE48;
      }
      goto L_08AAFE28;
    }
L_08AAFE28:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AAFE58;
      }
      goto L_08AAFE48;
    }
L_08AAFE48:
    ctx.gpr[31] = (0x08AAFE50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875984u>(ctx, &aot_mem) && ctx.pc == 0x08AAFE50u) goto L_08AAFE50;
    return;
L_08AAFE50:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    goto L_08AAFE58;
L_08AAFE58:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 14u, 0x08AB00E4u>(ctx, &aot_mem); return;
      }
      goto L_08AAFE60;
    }
L_08AAFE60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAFEB0;
      }
      goto L_08AAFE90;
    }
L_08AAFE90:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AAFEC0;
      }
      goto L_08AAFEB0;
    }
L_08AAFEB0:
    ctx.gpr[31] = (0x08AAFEB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875984u>(ctx, &aot_mem) && ctx.pc == 0x08AAFEB8u) goto L_08AAFEB8;
    return;
L_08AAFEB8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    goto L_08AAFEC0;
L_08AAFEC0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 14u, 0x08AB00E4u>(ctx, &aot_mem); return;
      }
      goto L_08AAFEC8;
    }
L_08AAFEC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAFF18;
      }
      goto L_08AAFEF8;
    }
L_08AAFEF8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AAFF28;
      }
      goto L_08AAFF18;
    }
L_08AAFF18:
    ctx.gpr[31] = (0x08AAFF20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875984u>(ctx, &aot_mem) && ctx.pc == 0x08AAFF20u) goto L_08AAFF20;
    return;
L_08AAFF20:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    goto L_08AAFF28;
L_08AAFF28:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 14u, 0x08AB00E4u>(ctx, &aot_mem); return;
      }
      goto L_08AAFF30;
    }
L_08AAFF30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAFF80;
      }
      goto L_08AAFF60;
    }
L_08AAFF60:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AAFF90;
      }
      goto L_08AAFF80;
    }
L_08AAFF80:
    ctx.gpr[31] = (0x08AAFF88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875984u>(ctx, &aot_mem) && ctx.pc == 0x08AAFF88u) goto L_08AAFF88;
    return;
L_08AAFF88:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    goto L_08AAFF90;
L_08AAFF90:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 14u, 0x08AB00E4u>(ctx, &aot_mem); return;
      }
      goto L_08AAFF98;
    }
L_08AAFF98:
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 3u, 0x08AB0010u>(ctx, &aot_mem); return;
      }
      goto L_08AAFFAC;
    }
L_08AAFFAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAFFF8;
      }
      goto L_08AAFFD8;
    }
L_08AAFFD8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 2u, 0x08AB0008u>(ctx, &aot_mem); return;
      }
      goto L_08AAFFF8;
    }
L_08AAFFF8:
    ctx.gpr[31] = (0x08AB0000u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875984u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0170(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0170_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_170(Runtime &runtime) {
    runtime.register_generated_unit(170u, 0x08AAC000u, 16384u, &recomp_unit_0170, &recomp_unit_0170_entry);
    runtime.register_function(0x08AAC000u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC01Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC054u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC064u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC06Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC074u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC0A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC184u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC260u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC274u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC2A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC2ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC320u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC328u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC330u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC34Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC36Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC374u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC38Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC398u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC3ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC3B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC3CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC3D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC3E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC408u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC410u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC428u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC434u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC448u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC454u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC468u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC470u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC484u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC4A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC4ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC4C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC4D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC4E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC4F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC504u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC50Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC520u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC540u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC548u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC560u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC56Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC580u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC58Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC5A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC5ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC5D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC5F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC61Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC640u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC64Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC65Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC67Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC688u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC698u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC6A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC6E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC718u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC72Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC73Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC758u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC774u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC790u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC804u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC810u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC82Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC834u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC83Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC84Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC854u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC85Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC864u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC86Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC870u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC880u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC888u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC898u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC8B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC8B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC8C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC8D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC8E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC900u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC908u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC910u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC928u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC930u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC93Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC94Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC960u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC978u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC980u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC98Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC99Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC9ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC9BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC9D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC9E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC9FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA00u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA14u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA24u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA28u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA30u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA44u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA5Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA60u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA6Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACAA8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACAB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACAB4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACABCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACAC8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB00u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB08u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB18u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB20u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB30u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB3Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB4Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB5Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB6Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB7Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB84u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB8Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACBA0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACBACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACBBCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACBCCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACBDCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACBECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC0Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC14u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC1Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC24u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC5Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC8Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC94u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACCA4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACCACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACCBCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACCC8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACCD8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACCE8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACCF8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD08u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD10u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD28u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD30u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD38u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD4Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD58u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD68u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD78u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD88u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD98u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACDB8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACDC4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACDD8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACDE0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACDE8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACDF0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACDF8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE08u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE10u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE18u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE20u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE5Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE74u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE84u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE90u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACEA4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACEACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACEB4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACEBCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACEC4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACED4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACEDCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACEE4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACEECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF28u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF40u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF60u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF8Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF94u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACFA4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACFACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACFB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACFCCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACFE0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACFECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACFFCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD008u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD014u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD020u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD02Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD03Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD048u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD054u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD06Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD080u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD08Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD09Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD0ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD0B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD0BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD0D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD0D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD0E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD0E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD0F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD100u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD110u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD118u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD124u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD138u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD148u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD150u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD15Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD168u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD180u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD188u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD198u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD1A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD1B4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD1C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD1C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD1E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD1ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD1F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD208u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD214u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD224u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD234u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD23Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD248u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD260u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD274u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD280u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD290u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD2A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD2A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD2B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD2C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD2CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD2D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD2DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD2E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD2ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD2F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD300u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD310u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD318u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD320u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD328u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD344u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD34Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD354u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD358u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD378u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD3ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD3F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD408u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD414u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD424u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD428u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD438u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD45Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD478u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD47Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD494u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD49Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD4C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD4C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD4D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD4E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD4ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD504u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD510u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD534u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD53Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD554u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD584u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD59Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD5B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD5C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD5C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD5D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD5ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD5F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD600u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD624u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD634u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD63Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD648u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD650u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD65Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD67Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD684u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD694u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD6A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD6A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD6B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD6B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD6BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD6CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD6D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD708u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD714u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD724u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD734u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD73Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD74Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD754u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD770u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD778u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD790u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD79Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD7CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD7E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD7E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD7FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD808u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD814u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD818u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD838u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD840u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD850u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD864u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD870u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD87Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD884u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD890u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD8A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD8B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD8B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD8BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD8CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD8D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD8F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD8F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD910u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD91Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD940u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD954u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD95Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD96Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD978u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD98Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD994u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD9B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD9B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD9C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD9D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD9E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD9E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD9F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA3Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA8Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA98u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB34u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB48u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB98u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADBA8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADBB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADBB8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADBF4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC24u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC30u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC34u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC5Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADCD8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADD54u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADDBCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADDF4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADDFCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADE04u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADE10u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADE28u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADE9Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADEA4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADEB8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADF2Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADF9Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADFA4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE014u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE01Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE024u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE03Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE05Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE064u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE07Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE088u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE09Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE0A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE0BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE0C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE0D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE0F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE0FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE114u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE120u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE134u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE140u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE154u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE15Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE16Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE18Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE194u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE1ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE1B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE1CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE1D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE1ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE1F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE204u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE224u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE22Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE244u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE250u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE264u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE270u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE284u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE290u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE2B4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE2D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE300u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE324u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE330u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE340u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE360u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE36Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE37Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE38Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE3D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE420u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE428u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE43Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE484u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE498u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE4B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE4CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE4DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE4F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE504u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE50Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE514u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE51Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE524u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE52Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE53Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE54Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE55Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE568u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE570u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE58Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE5A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE5B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE5CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE5ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE608u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE610u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE628u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE63Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE64Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE654u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE65Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE660u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE66Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE678u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE680u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE688u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE690u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE6BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE6CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE6E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE6F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE708u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE71Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE724u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE72Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE744u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE77Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE7CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE7D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE7E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE830u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE844u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE85Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE878u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE888u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE8A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE8B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE8B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE8C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE8C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE8D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE8D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE8E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE8F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE928u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE934u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE93Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE958u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE974u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE984u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE998u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE9B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE9D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE9DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE9F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA08u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA18u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA20u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA28u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA2Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA38u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA44u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA4Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA54u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA5Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA88u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA98u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEAB4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEAC4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEAD4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEAE8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEAF0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEAF8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEB10u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEB48u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEBE8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEC10u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEC1Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEC2Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEC4Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEC68u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEC7Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEC9Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAECA8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAECB4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAECF8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED18u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED24u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED44u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED54u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED60u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED88u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED94u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEDA0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEDA8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEDB4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEDC0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEDC4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEDD4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEDE8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE04u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE18u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE20u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE34u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE40u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE54u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE64u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE74u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE7Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE88u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE94u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEEBCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEEE0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEEE8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEEF4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF18u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF28u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF78u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF94u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF9Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFA0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFB4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFCCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFE8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFF0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFF4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFFCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF004u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF01Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF04Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF05Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF060u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF070u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF084u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF090u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF094u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF0C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF0E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF0E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF0F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF108u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF110u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF140u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF190u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF1A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF1A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF1ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF1BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF1D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF1E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF1F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF1F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF224u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF244u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF24Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF254u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF26Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF274u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF2A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF2C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF2C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF2D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF2D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF304u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF324u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF32Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF334u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF35Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF364u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF378u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF38Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF398u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF39Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF3C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF3E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF3F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF3F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF410u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF41Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF424u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF450u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF470u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF478u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF480u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF48Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF498u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF4C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF4E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF4ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF4F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF4F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF50Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF520u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF52Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF530u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF560u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF580u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF588u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF590u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF604u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF654u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF664u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF668u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF6A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF6C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF6C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF6CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF6D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF6DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF704u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF70Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF718u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF71Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF728u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF730u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF738u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF740u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF758u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF760u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF764u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF77Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF790u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF7B4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF7D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF7DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF7E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF7ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF81Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF83Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF844u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF84Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF850u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF860u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF888u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF8A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF8B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF8B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF8C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF8C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF8ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF90Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF938u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF958u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF960u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF968u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF96Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF97Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF990u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF99Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF9A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF9B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF9D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF9F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA00u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA08u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA14u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA1Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA24u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA2Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA40u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA5Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA60u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA90u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFAD8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFAE8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFAECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB14u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB34u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB3Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB44u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB54u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB70u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB84u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB90u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB94u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBA0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBBCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBD8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBE4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC00u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC0Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC24u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC40u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC48u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC4Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC58u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC60u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC68u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC70u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC78u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC94u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFCA0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFCACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFCC4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFCF4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD14u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD1Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD24u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD2Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD5Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD7Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD84u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD8Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD94u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFDC4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFDE4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFDECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFDF4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFDFCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE28u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE48u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE50u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE58u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE60u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE90u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFEB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFEB8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFEC0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFEC8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFEF8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF18u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF20u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF28u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF30u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF60u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF80u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF88u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF90u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF98u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFFACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFFD8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFFF8u, &recomp_unit_0170, "recomp_unit_0170");
}
} // namespace psprecomp
