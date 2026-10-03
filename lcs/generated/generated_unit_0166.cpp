#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "lcs_render_config.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0166[4094] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0,
    6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 10, 0, 11, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 20, 0, 0, 0, 0,
    0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0,
    0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33,
    0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0,
    0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 0, 41, 0, 42, 0, 0, 43, 0, 0, 44, 0, 0, 0, 45, 0, 0, 46,
    0, 0, 0, 47, 0, 0, 48, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 55,
    0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 58, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 61, 0, 0, 62, 63, 0, 0, 0, 0, 64,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 67, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0,
    0, 0, 76, 0, 77, 0, 0, 78, 0, 0, 0, 79, 0, 0, 80, 0, 81, 0, 82, 0, 0, 83, 0, 84, 85, 0, 86, 0, 0, 0, 87, 0,
    88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 92, 0, 0, 0, 93, 0, 94, 0, 0, 95,
    0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 99, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 104, 105,
    0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 113, 0, 114,
    0, 0, 0, 115, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 122, 0,
    123, 0, 0, 0, 124, 125, 126, 0, 0, 127, 0, 0, 0, 128, 0, 129, 0, 0, 0, 130, 131, 0, 0, 132, 0, 133, 0, 0, 134, 135, 0, 136,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0,
    0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 148, 149, 0,
    0, 0, 0, 150, 151, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0,
    0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0,
    0, 0, 0, 0, 163, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0,
    0, 0, 0, 167, 0, 168, 0, 0, 0, 169, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0,
    175, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 181, 0, 182,
    0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 186, 187, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 190, 191, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 194, 0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199,
    0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 202, 203, 0, 0, 204, 0, 205, 0, 0, 206, 207, 0, 208, 0, 0, 209, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214,
    0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0,
    0, 0, 0, 0, 0, 0, 221, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0,
    226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 234,
    0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 240, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0,
    0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 260, 0, 261, 262, 0, 0,
    263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0,
    268, 0, 269, 0, 0, 0, 270, 0, 271, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 275, 276, 0, 277, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282,
    0, 283, 0, 0, 284, 0, 285, 0, 286, 0, 287, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 290, 0, 291, 0, 292, 0, 293, 0, 0, 294, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297,
    0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0,
    305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 307, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 313,
    314, 0, 0, 315, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 0, 0, 0, 320, 0, 321, 0,
    322, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 329, 330, 0, 331, 0, 332, 0, 333, 0, 334, 0, 0, 0, 0, 335, 0,
    0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 338, 0, 0, 339, 0, 0, 340, 0, 341, 0, 342, 0, 343, 344, 0, 345,
    0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 353, 0,
    354, 0, 0, 355, 0, 0, 0, 356, 0, 357, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0,
    0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0,
    0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 367, 0, 368, 369, 0, 0, 370, 0, 371, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0,
    0, 0, 374, 0, 0, 0, 375, 0, 376, 0, 377, 378, 0, 0, 0, 379, 0, 0, 380, 0, 381, 0, 382, 0, 383, 0, 0, 0, 0, 384, 0, 0,
    0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 387, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 394, 395, 0, 0, 0,
    396, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 401, 0, 402, 0,
    403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 405, 0, 406, 0, 407, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 411, 0, 412, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 419, 0, 420, 0,
    421, 0, 0, 0, 0, 0, 0, 0, 422, 0, 423, 0, 424, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 428, 0, 0, 429, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0,
    434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0,
    0, 0, 438, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0,
    0, 442, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 451, 0, 452, 0, 453, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 456, 457, 0, 0, 458, 0, 459, 0, 0, 0, 0, 460, 0, 461, 0,
    0, 0, 0, 0, 0, 0, 462, 0, 463, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 468, 0, 469, 0, 0,
    0, 470, 0, 0, 471, 0, 472, 0, 0, 473, 0, 0, 474, 0, 475, 0, 476, 0, 0, 477, 0, 478, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 482, 0, 483, 0, 484, 0, 485, 0, 486, 0, 487, 0, 488, 0, 489, 0, 490, 0, 491, 0, 492,
    0, 493, 0, 494, 0, 495, 0, 496, 0, 497, 0, 498, 0, 499, 0, 500, 0, 501, 0, 502, 0, 503, 0, 504, 0, 505, 0, 506, 0, 507, 0, 508,
    0, 509, 0, 510, 0, 511, 512, 0, 513, 0, 0, 514, 0, 515, 0, 516, 0, 517, 0, 518, 0, 519, 0, 520, 0, 521, 0, 522, 0, 523, 0, 524,
    0, 525, 0, 526, 0, 527, 0, 528, 0, 529, 0, 530, 0, 531, 0, 532, 0, 533, 0, 534, 0, 535, 0, 536, 0, 537, 0, 538, 0, 539, 0, 540,
    541, 0, 542, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 544, 0, 0, 545, 0, 546, 0, 547, 0, 548, 0, 549, 550, 0, 0, 0, 551, 0, 0, 0, 552, 0, 0, 553, 0, 554, 0, 555, 556, 0,
    557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 559, 0, 0, 0, 560, 0, 0,
    561, 0, 0, 562, 0, 0, 0, 0, 0, 563, 0, 564, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 567, 0, 0, 0, 0, 0, 0,
    0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 570, 0, 571, 0, 0, 0, 0, 0, 572, 0, 573, 0,
    0, 0, 574, 0, 0, 0, 575, 0, 0, 0, 0, 576, 0, 577, 0, 578, 0, 0, 0, 579, 0, 0, 0, 0, 580, 0, 581, 582, 0, 0, 0, 583,
    0, 0, 0, 0, 0, 0, 584, 0, 0, 585, 0, 0, 0, 0, 0, 586, 0, 587, 588, 0, 589, 0, 590, 0, 591, 0, 0, 592, 593, 0, 0, 0,
    0, 594, 0, 0, 0, 595, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 598, 0, 599, 0, 600, 601,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 603, 0, 604, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 606, 0, 0, 0,
    0, 0, 607, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0,
    612, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 617, 0,
    0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 621, 0, 622, 0, 0, 623, 0, 624, 0, 625,
    0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 630, 0, 0,
    0, 0, 0, 631, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0,
    0, 636, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 641,
    0, 0, 0, 0, 0, 642, 0, 643, 0, 0, 644, 0, 0, 645, 0, 646, 0, 0, 0, 0, 0, 647, 0, 648, 0, 649, 0, 0, 650, 0, 0, 0,
    651, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 654, 0, 655, 0, 656, 0, 0,
    0, 0, 657, 0, 658, 0, 0, 659, 0, 660, 0, 661, 0, 662, 0, 663, 664, 0, 665, 0, 0, 666, 0, 667, 0, 668, 669, 0, 670, 0, 671, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 673, 0, 674, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 676, 0, 677, 0, 0, 0, 0, 0, 0, 0, 678, 0,
    679, 0, 680, 0, 0, 681, 0, 682, 0, 0, 0, 683, 0, 684, 0, 685, 686, 0, 0, 687, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 689, 0, 0, 0, 0, 690, 0, 691, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 696, 0, 0, 697, 0, 0,
    0, 0, 698, 0, 0, 699, 0, 0, 0, 0, 0, 0, 700, 0, 701, 0, 0, 0, 0, 0, 0, 0, 0, 702, 0, 703, 0, 704, 0, 0, 705, 0,
    0, 706, 0, 0, 707, 0, 0, 0, 0, 708, 0, 709, 0, 710, 0, 711, 712, 0, 713, 0, 714, 715, 0, 0, 716, 0, 0, 0, 0, 717, 0, 0,
    0, 718, 0, 0, 0, 719, 0, 720, 721, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 723,
    0, 724, 0, 725, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 728, 729, 0, 730, 0, 0, 731, 0, 732, 0, 733,
    0, 0, 0, 734, 0, 735, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 0, 737, 0, 0, 738, 0, 739, 740, 0, 741, 0, 0, 0, 742, 0,
    0, 743, 0, 744, 0, 745, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 0, 0, 748, 0, 0, 749, 0, 0, 750, 0, 0,
    0, 0, 0, 751, 0, 752, 0, 753, 0, 0, 0, 0, 0, 754, 0, 755, 0, 756, 0, 757, 0, 758, 0, 759, 760, 0, 761, 0, 0, 0, 0, 762,
    0, 763, 0, 764, 0, 0, 0, 0, 0, 765, 0, 766, 0, 0, 767, 768, 769, 0, 0, 770, 0, 771, 0, 0, 772, 0, 0, 0, 0, 0, 773, 0,
    774, 0, 775, 0, 776, 0, 0, 777, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 779, 0, 0, 0, 780, 0, 781, 0, 0, 0, 0, 782,
    0, 0, 0, 0, 0, 783, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 786, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0, 0, 0, 788, 0, 0, 0, 789, 0, 790, 0, 0, 0, 0, 791, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 793, 0, 794, 0, 0, 0, 795, 0, 796, 0, 0, 797, 0, 798, 0, 0, 0, 0,
    799, 0, 0, 0, 0, 0, 0, 0, 800, 0, 801, 0, 0, 0, 0, 802, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 803, 0,
    0, 0, 804, 0, 805, 0, 0, 0, 0, 0, 0, 806, 0, 0, 0, 0, 807, 0, 808, 0, 809, 0, 0, 810, 0, 0, 0, 0, 0, 0, 811, 0,
    812, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 813, 0, 814, 0, 0, 815, 0, 0, 0, 0, 0, 0, 816, 0, 817, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 818, 0, 819, 0, 0, 820, 0, 0, 0, 0, 0, 0, 821, 0, 822, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    823, 0, 824, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 825, 0, 826, 0, 0, 0, 827, 0, 0, 0, 0, 828, 0, 0, 0, 0, 0, 829,
    0, 830, 0, 831, 0, 832, 0, 833, 0, 0, 0, 0, 0, 0, 0, 0, 834, 0, 0, 0, 0, 835, 0, 0, 0, 0, 836, 0, 0, 0, 837, 838,
    0, 839, 0, 0, 0, 840, 841, 0, 0, 0, 0, 0, 0, 0, 842, 0, 0, 843, 0, 844, 0, 845, 0, 0, 0, 0, 0, 846, 0, 847, 0, 848,
    0, 849, 0, 0, 0, 0, 850, 0, 0, 0, 0, 0, 851, 0, 0, 0, 852, 0, 0, 0, 0, 853, 0, 854, 0, 855, 856, 857, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 858, 0, 859, 0, 860, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 861, 0, 0, 0, 0, 0, 0,
    862, 863, 0, 0, 0, 0, 864, 0, 0, 0, 0, 865, 0, 0, 0, 866, 0, 867, 868, 0, 869, 0, 0, 0, 0, 0, 870, 0, 0, 0, 871, 0,
    0, 0, 872, 873, 0, 0, 874, 0, 875, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 876,
    0, 0, 877, 0, 0, 0, 878, 0, 0, 0, 879, 880, 0, 0, 0, 881, 0, 0, 0, 882, 0, 0, 0, 0, 883, 0, 0, 0, 0, 884,
};
void recomp_unit_0166_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A9C000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0166[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A9C000;
    case 2u: goto L_08A9C038;
    case 3u: goto L_08A9C040;
    case 4u: goto L_08A9C04C;
    case 5u: goto L_08A9C074;
    case 6u: goto L_08A9C080;
    case 7u: goto L_08A9C094;
    case 8u: goto L_08A9C0A8;
    case 9u: goto L_08A9C0C0;
    case 10u: goto L_08A9C0C8;
    case 11u: goto L_08A9C0D0;
    case 12u: goto L_08A9C0D8;
    case 13u: goto L_08A9C0F0;
    case 14u: goto L_08A9C100;
    case 15u: goto L_08A9C110;
    case 16u: goto L_08A9C128;
    case 17u: goto L_08A9C13C;
    case 18u: goto L_08A9C15C;
    case 19u: goto L_08A9C164;
    case 20u: goto L_08A9C16C;
    case 21u: goto L_08A9C190;
    case 22u: goto L_08A9C1A0;
    case 23u: goto L_08A9C1AC;
    case 24u: goto L_08A9C1BC;
    case 25u: goto L_08A9C1C8;
    case 26u: goto L_08A9C1F4;
    case 27u: goto L_08A9C208;
    case 28u: goto L_08A9C264;
    case 29u: goto L_08A9C29C;
    case 30u: goto L_08A9C2AC;
    case 31u: goto L_08A9C2B8;
    case 32u: goto L_08A9C2C8;
    case 33u: goto L_08A9C2FC;
    case 34u: goto L_08A9C320;
    case 35u: goto L_08A9C328;
    case 36u: goto L_08A9C34C;
    case 37u: goto L_08A9C374;
    case 38u: goto L_08A9C398;
    case 39u: goto L_08A9C3A4;
    case 40u: goto L_08A9C3B4;
    case 41u: goto L_08A9C3C0;
    case 42u: goto L_08A9C3C8;
    case 43u: goto L_08A9C3D4;
    case 44u: goto L_08A9C3E0;
    case 45u: goto L_08A9C3F0;
    case 46u: goto L_08A9C3FC;
    case 47u: goto L_08A9C40C;
    case 48u: goto L_08A9C418;
    case 49u: goto L_08A9C420;
    case 50u: goto L_08A9C42C;
    case 51u: goto L_08A9C438;
    case 52u: goto L_08A9C444;
    case 53u: goto L_08A9C460;
    case 54u: goto L_08A9C468;
    case 55u: goto L_08A9C47C;
    case 56u: goto L_08A9C498;
    case 57u: goto L_08A9C4A0;
    case 58u: goto L_08A9C4AC;
    case 59u: goto L_08A9C4BC;
    case 60u: goto L_08A9C4C4;
    case 61u: goto L_08A9C4D8;
    case 62u: goto L_08A9C4E4;
    case 63u: goto L_08A9C4E8;
    case 64u: goto L_08A9C4FC;
    case 65u: goto L_08A9C52C;
    case 66u: goto L_08A9C56C;
    case 67u: goto L_08A9C570;
    case 68u: goto L_08A9C5B8;
    case 69u: goto L_08A9C5D4;
    case 70u: goto L_08A9C5D8;
    case 71u: goto L_08A9C628;
    case 72u: goto L_08A9C630;
    case 73u: goto L_08A9C644;
    case 74u: goto L_08A9C668;
    case 75u: goto L_08A9C678;
    case 76u: goto L_08A9C688;
    case 77u: goto L_08A9C690;
    case 78u: goto L_08A9C69C;
    case 79u: goto L_08A9C6AC;
    case 80u: goto L_08A9C6B8;
    case 81u: goto L_08A9C6C0;
    case 82u: goto L_08A9C6C8;
    case 83u: goto L_08A9C6D4;
    case 84u: goto L_08A9C6DC;
    case 85u: goto L_08A9C6E0;
    case 86u: goto L_08A9C6E8;
    case 87u: goto L_08A9C6F8;
    case 88u: goto L_08A9C700;
    case 89u: goto L_08A9C720;
    case 90u: goto L_08A9C740;
    case 91u: goto L_08A9C74C;
    case 92u: goto L_08A9C758;
    case 93u: goto L_08A9C768;
    case 94u: goto L_08A9C770;
    case 95u: goto L_08A9C77C;
    case 96u: goto L_08A9C788;
    case 97u: goto L_08A9C794;
    case 98u: goto L_08A9C7A8;
    case 99u: goto L_08A9C7B4;
    case 100u: goto L_08A9C7B8;
    case 101u: goto L_08A9C7D0;
    case 102u: goto L_08A9C7E0;
    case 103u: goto L_08A9C7F0;
    case 104u: goto L_08A9C7F8;
    case 105u: goto L_08A9C7FC;
    case 106u: goto L_08A9C814;
    case 107u: goto L_08A9C81C;
    case 108u: goto L_08A9C838;
    case 109u: goto L_08A9C840;
    case 110u: goto L_08A9C848;
    case 111u: goto L_08A9C858;
    case 112u: goto L_08A9C864;
    case 113u: goto L_08A9C874;
    case 114u: goto L_08A9C87C;
    case 115u: goto L_08A9C88C;
    case 116u: goto L_08A9C894;
    case 117u: goto L_08A9C89C;
    case 118u: goto L_08A9C8B8;
    case 119u: goto L_08A9C8CC;
    case 120u: goto L_08A9C8DC;
    case 121u: goto L_08A9C8E8;
    case 122u: goto L_08A9C8F8;
    case 123u: goto L_08A9C900;
    case 124u: goto L_08A9C910;
    case 125u: goto L_08A9C914;
    case 126u: goto L_08A9C918;
    case 127u: goto L_08A9C924;
    case 128u: goto L_08A9C934;
    case 129u: goto L_08A9C93C;
    case 130u: goto L_08A9C94C;
    case 131u: goto L_08A9C950;
    case 132u: goto L_08A9C95C;
    case 133u: goto L_08A9C964;
    case 134u: goto L_08A9C970;
    case 135u: goto L_08A9C974;
    case 136u: goto L_08A9C97C;
    case 137u: goto L_08A9C9B4;
    case 138u: goto L_08A9C9BC;
    case 139u: goto L_08A9C9CC;
    case 140u: goto L_08A9C9EC;
    case 141u: goto L_08A9CA04;
    case 142u: goto L_08A9CA18;
    case 143u: goto L_08A9CA2C;
    case 144u: goto L_08A9CA38;
    case 145u: goto L_08A9CA44;
    case 146u: goto L_08A9CA58;
    case 147u: goto L_08A9CA60;
    case 148u: goto L_08A9CA74;
    case 149u: goto L_08A9CA78;
    case 150u: goto L_08A9CA8C;
    case 151u: goto L_08A9CA90;
    case 152u: goto L_08A9CAA4;
    case 153u: goto L_08A9CAAC;
    case 154u: goto L_08A9CAC4;
    case 155u: goto L_08A9CAE4;
    case 156u: goto L_08A9CAF8;
    case 157u: goto L_08A9CB1C;
    case 158u: goto L_08A9CB24;
    case 159u: goto L_08A9CB30;
    case 160u: goto L_08A9CB44;
    case 161u: goto L_08A9CB5C;
    case 162u: goto L_08A9CB74;
    case 163u: goto L_08A9CB90;
    case 164u: goto L_08A9CB94;
    case 165u: goto L_08A9CBE0;
    case 166u: goto L_08A9CBEC;
    case 167u: goto L_08A9CC0C;
    case 168u: goto L_08A9CC14;
    case 169u: goto L_08A9CC24;
    case 170u: goto L_08A9CC2C;
    case 171u: goto L_08A9CC3C;
    case 172u: goto L_08A9CC48;
    case 173u: goto L_08A9CC54;
    case 174u: goto L_08A9CC6C;
    case 175u: goto L_08A9CC80;
    case 176u: goto L_08A9CC84;
    case 177u: goto L_08A9CCB8;
    case 178u: goto L_08A9CCC4;
    case 179u: goto L_08A9CCE4;
    case 180u: goto L_08A9CCEC;
    case 181u: goto L_08A9CCF4;
    case 182u: goto L_08A9CCFC;
    case 183u: goto L_08A9CD0C;
    case 184u: goto L_08A9CD18;
    case 185u: goto L_08A9CD2C;
    case 186u: goto L_08A9CD3C;
    case 187u: goto L_08A9CD40;
    case 188u: goto L_08A9CD4C;
    case 189u: goto L_08A9CD60;
    case 190u: goto L_08A9CD6C;
    case 191u: goto L_08A9CD70;
    case 192u: goto L_08A9CD98;
    case 193u: goto L_08A9CDA4;
    case 194u: goto L_08A9CDAC;
    case 195u: goto L_08A9CDB4;
    case 196u: goto L_08A9CDC0;
    case 197u: goto L_08A9CDCC;
    case 198u: goto L_08A9CDF0;
    case 199u: goto L_08A9CDFC;
    case 200u: goto L_08A9CE14;
    case 201u: goto L_08A9CE28;
    case 202u: goto L_08A9CE38;
    case 203u: goto L_08A9CE3C;
    case 204u: goto L_08A9CE48;
    case 205u: goto L_08A9CE50;
    case 206u: goto L_08A9CE5C;
    case 207u: goto L_08A9CE60;
    case 208u: goto L_08A9CE68;
    case 209u: goto L_08A9CE74;
    case 210u: goto L_08A9CEAC;
    case 211u: goto L_08A9CEB4;
    case 212u: goto L_08A9CEC4;
    case 213u: goto L_08A9CEE4;
    case 214u: goto L_08A9CEFC;
    case 215u: goto L_08A9CF10;
    case 216u: goto L_08A9CF1C;
    case 217u: goto L_08A9CF30;
    case 218u: goto L_08A9CF40;
    case 219u: goto L_08A9CF60;
    case 220u: goto L_08A9CF78;
    case 221u: goto L_08A9CF98;
    case 222u: goto L_08A9CF9C;
    case 223u: goto L_08A9CFE4;
    case 224u: goto L_08A9D0E0;
    case 225u: goto L_08A9D0EC;
    case 226u: goto L_08A9D100;
    case 227u: goto L_08A9D12C;
    case 228u: goto L_08A9D154;
    case 229u: goto L_08A9D168;
    case 230u: goto L_08A9D23C;
    case 231u: goto L_08A9D248;
    case 232u: goto L_08A9D26C;
    case 233u: goto L_08A9D274;
    case 234u: goto L_08A9D27C;
    case 235u: goto L_08A9D284;
    case 236u: goto L_08A9D294;
    case 237u: goto L_08A9D2A8;
    case 238u: goto L_08A9D2B0;
    case 239u: goto L_08A9D2B8;
    case 240u: goto L_08A9D38C;
    case 241u: goto L_08A9D394;
    case 242u: goto L_08A9D39C;
    case 243u: goto L_08A9D3BC;
    case 244u: goto L_08A9D3D4;
    case 245u: goto L_08A9D3F0;
    case 246u: goto L_08A9D404;
    case 247u: goto L_08A9D424;
    case 248u: goto L_08A9D42C;
    case 249u: goto L_08A9D434;
    case 250u: goto L_08A9D4A8;
    case 251u: goto L_08A9D4B0;
    case 252u: goto L_08A9D4BC;
    case 253u: goto L_08A9D4C4;
    case 254u: goto L_08A9D4F8;
    case 255u: goto L_08A9D514;
    case 256u: goto L_08A9D51C;
    case 257u: goto L_08A9D53C;
    case 258u: goto L_08A9D54C;
    case 259u: goto L_08A9D560;
    case 260u: goto L_08A9D568;
    case 261u: goto L_08A9D570;
    case 262u: goto L_08A9D574;
    case 263u: goto L_08A9D580;
    case 264u: goto L_08A9D598;
    case 265u: goto L_08A9D5D8;
    case 266u: goto L_08A9D5E8;
    case 267u: goto L_08A9D5F8;
    case 268u: goto L_08A9D600;
    case 269u: goto L_08A9D608;
    case 270u: goto L_08A9D618;
    case 271u: goto L_08A9D620;
    case 272u: goto L_08A9D630;
    case 273u: goto L_08A9D63C;
    case 274u: goto L_08A9D654;
    case 275u: goto L_08A9D65C;
    case 276u: goto L_08A9D660;
    case 277u: goto L_08A9D668;
    case 278u: goto L_08A9D694;
    case 279u: goto L_08A9D6B0;
    case 280u: goto L_08A9D6D4;
    case 281u: goto L_08A9D6F4;
    case 282u: goto L_08A9D6FC;
    case 283u: goto L_08A9D704;
    case 284u: goto L_08A9D710;
    case 285u: goto L_08A9D718;
    case 286u: goto L_08A9D720;
    case 287u: goto L_08A9D728;
    case 288u: goto L_08A9D730;
    case 289u: goto L_08A9D740;
    case 290u: goto L_08A9D788;
    case 291u: goto L_08A9D790;
    case 292u: goto L_08A9D798;
    case 293u: goto L_08A9D7A0;
    case 294u: goto L_08A9D7AC;
    case 295u: goto L_08A9D7B0;
    case 296u: goto L_08A9D7E4;
    case 297u: goto L_08A9D7FC;
    case 298u: goto L_08A9D804;
    case 299u: goto L_08A9D820;
    case 300u: goto L_08A9D830;
    case 301u: goto L_08A9D8A0;
    case 302u: goto L_08A9D94C;
    case 303u: goto L_08A9D954;
    case 304u: goto L_08A9D968;
    case 305u: goto L_08A9D980;
    case 306u: goto L_08A9D9BC;
    case 307u: goto L_08A9DA04;
    case 308u: goto L_08A9DA14;
    case 309u: goto L_08A9DA20;
    case 310u: goto L_08A9DA40;
    case 311u: goto L_08A9DA5C;
    case 312u: goto L_08A9DA74;
    case 313u: goto L_08A9DA7C;
    case 314u: goto L_08A9DA80;
    case 315u: goto L_08A9DA8C;
    case 316u: goto L_08A9DA94;
    case 317u: goto L_08A9DA9C;
    case 318u: goto L_08A9DAD4;
    case 319u: goto L_08A9DADC;
    case 320u: goto L_08A9DAF0;
    case 321u: goto L_08A9DAF8;
    case 322u: goto L_08A9DB00;
    case 323u: goto L_08A9DB08;
    case 324u: goto L_08A9DB24;
    case 325u: goto L_08A9DB58;
    case 326u: goto L_08A9DB8C;
    case 327u: goto L_08A9DB9C;
    case 328u: goto L_08A9DBB8;
    case 329u: goto L_08A9DBC0;
    case 330u: goto L_08A9DBC4;
    case 331u: goto L_08A9DBCC;
    case 332u: goto L_08A9DBD4;
    case 333u: goto L_08A9DBDC;
    case 334u: goto L_08A9DBE4;
    case 335u: goto L_08A9DBF8;
    case 336u: goto L_08A9DC18;
    case 337u: goto L_08A9DC38;
    case 338u: goto L_08A9DC40;
    case 339u: goto L_08A9DC4C;
    case 340u: goto L_08A9DC58;
    case 341u: goto L_08A9DC60;
    case 342u: goto L_08A9DC68;
    case 343u: goto L_08A9DC70;
    case 344u: goto L_08A9DC74;
    case 345u: goto L_08A9DC7C;
    case 346u: goto L_08A9DC84;
    case 347u: goto L_08A9DC8C;
    case 348u: goto L_08A9DCA8;
    case 349u: goto L_08A9DCB0;
    case 350u: goto L_08A9DCC4;
    case 351u: goto L_08A9DCD8;
    case 352u: goto L_08A9DCE8;
    case 353u: goto L_08A9DCF8;
    case 354u: goto L_08A9DD00;
    case 355u: goto L_08A9DD0C;
    case 356u: goto L_08A9DD1C;
    case 357u: goto L_08A9DD24;
    case 358u: goto L_08A9DD2C;
    case 359u: goto L_08A9DD40;
    case 360u: goto L_08A9DD54;
    case 361u: goto L_08A9DD6C;
    case 362u: goto L_08A9DD84;
    case 363u: goto L_08A9DD9C;
    case 364u: goto L_08A9DDEC;
    case 365u: goto L_08A9DE04;
    case 366u: goto L_08A9DE28;
    case 367u: goto L_08A9DE34;
    case 368u: goto L_08A9DE3C;
    case 369u: goto L_08A9DE40;
    case 370u: goto L_08A9DE4C;
    case 371u: goto L_08A9DE54;
    case 372u: goto L_08A9DE5C;
    case 373u: goto L_08A9DE74;
    case 374u: goto L_08A9DE88;
    case 375u: goto L_08A9DE98;
    case 376u: goto L_08A9DEA0;
    case 377u: goto L_08A9DEA8;
    case 378u: goto L_08A9DEAC;
    case 379u: goto L_08A9DEBC;
    case 380u: goto L_08A9DEC8;
    case 381u: goto L_08A9DED0;
    case 382u: goto L_08A9DED8;
    case 383u: goto L_08A9DEE0;
    case 384u: goto L_08A9DEF4;
    case 385u: goto L_08A9DF0C;
    case 386u: goto L_08A9DF20;
    case 387u: goto L_08A9DF28;
    case 388u: goto L_08A9DF30;
    case 389u: goto L_08A9DF4C;
    case 390u: goto L_08A9DF54;
    case 391u: goto L_08A9DF6C;
    case 392u: goto L_08A9DFD8;
    case 393u: goto L_08A9DFE4;
    case 394u: goto L_08A9DFEC;
    case 395u: goto L_08A9DFF0;
    case 396u: goto L_08A9E000;
    case 397u: goto L_08A9E010;
    case 398u: goto L_08A9E020;
    case 399u: goto L_08A9E044;
    case 400u: goto L_08A9E068;
    case 401u: goto L_08A9E070;
    case 402u: goto L_08A9E078;
    case 403u: goto L_08A9E080;
    case 404u: goto L_08A9E0A0;
    case 405u: goto L_08A9E0A8;
    case 406u: goto L_08A9E0B0;
    case 407u: goto L_08A9E0B8;
    case 408u: goto L_08A9E0C0;
    case 409u: goto L_08A9E0D8;
    case 410u: goto L_08A9E11C;
    case 411u: goto L_08A9E128;
    case 412u: goto L_08A9E130;
    case 413u: goto L_08A9E138;
    case 414u: goto L_08A9E150;
    case 415u: goto L_08A9E188;
    case 416u: goto L_08A9E1A0;
    case 417u: goto L_08A9E1C4;
    case 418u: goto L_08A9E1E8;
    case 419u: goto L_08A9E1F0;
    case 420u: goto L_08A9E1F8;
    case 421u: goto L_08A9E200;
    case 422u: goto L_08A9E220;
    case 423u: goto L_08A9E228;
    case 424u: goto L_08A9E230;
    case 425u: goto L_08A9E238;
    case 426u: goto L_08A9E254;
    case 427u: goto L_08A9E25C;
    case 428u: goto L_08A9E28C;
    case 429u: goto L_08A9E298;
    case 430u: goto L_08A9E2A0;
    case 431u: goto L_08A9E2BC;
    case 432u: goto L_08A9E2C4;
    case 433u: goto L_08A9E2E8;
    case 434u: goto L_08A9E300;
    case 435u: goto L_08A9E318;
    case 436u: goto L_08A9E338;
    case 437u: goto L_08A9E374;
    case 438u: goto L_08A9E388;
    case 439u: goto L_08A9E394;
    case 440u: goto L_08A9E3CC;
    case 441u: goto L_08A9E3F4;
    case 442u: goto L_08A9E404;
    case 443u: goto L_08A9E40C;
    case 444u: goto L_08A9E41C;
    case 445u: goto L_08A9E43C;
    case 446u: goto L_08A9E4A4;
    case 447u: goto L_08A9E4AC;
    case 448u: goto L_08A9E4B4;
    case 449u: goto L_08A9E4C8;
    case 450u: goto L_08A9E4DC;
    case 451u: goto L_08A9E508;
    case 452u: goto L_08A9E510;
    case 453u: goto L_08A9E518;
    case 454u: goto L_08A9E528;
    case 455u: goto L_08A9E538;
    case 456u: goto L_08A9E544;
    case 457u: goto L_08A9E548;
    case 458u: goto L_08A9E554;
    case 459u: goto L_08A9E55C;
    case 460u: goto L_08A9E570;
    case 461u: goto L_08A9E578;
    case 462u: goto L_08A9E598;
    case 463u: goto L_08A9E5A0;
    case 464u: goto L_08A9E5B0;
    case 465u: goto L_08A9E5C0;
    case 466u: goto L_08A9E5CC;
    case 467u: goto L_08A9E5DC;
    case 468u: goto L_08A9E5EC;
    case 469u: goto L_08A9E5F4;
    case 470u: goto L_08A9E604;
    case 471u: goto L_08A9E610;
    case 472u: goto L_08A9E618;
    case 473u: goto L_08A9E624;
    case 474u: goto L_08A9E630;
    case 475u: goto L_08A9E638;
    case 476u: goto L_08A9E640;
    case 477u: goto L_08A9E64C;
    case 478u: goto L_08A9E654;
    case 479u: goto L_08A9E660;
    case 480u: goto L_08A9E670;
    case 481u: goto L_08A9E6A0;
    case 482u: goto L_08A9E6AC;
    case 483u: goto L_08A9E6B4;
    case 484u: goto L_08A9E6BC;
    case 485u: goto L_08A9E6C4;
    case 486u: goto L_08A9E6CC;
    case 487u: goto L_08A9E6D4;
    case 488u: goto L_08A9E6DC;
    case 489u: goto L_08A9E6E4;
    case 490u: goto L_08A9E6EC;
    case 491u: goto L_08A9E6F4;
    case 492u: goto L_08A9E6FC;
    case 493u: goto L_08A9E704;
    case 494u: goto L_08A9E70C;
    case 495u: goto L_08A9E714;
    case 496u: goto L_08A9E71C;
    case 497u: goto L_08A9E724;
    case 498u: goto L_08A9E72C;
    case 499u: goto L_08A9E734;
    case 500u: goto L_08A9E73C;
    case 501u: goto L_08A9E744;
    case 502u: goto L_08A9E74C;
    case 503u: goto L_08A9E754;
    case 504u: goto L_08A9E75C;
    case 505u: goto L_08A9E764;
    case 506u: goto L_08A9E76C;
    case 507u: goto L_08A9E774;
    case 508u: goto L_08A9E77C;
    case 509u: goto L_08A9E784;
    case 510u: goto L_08A9E78C;
    case 511u: goto L_08A9E794;
    case 512u: goto L_08A9E798;
    case 513u: goto L_08A9E7A0;
    case 514u: goto L_08A9E7AC;
    case 515u: goto L_08A9E7B4;
    case 516u: goto L_08A9E7BC;
    case 517u: goto L_08A9E7C4;
    case 518u: goto L_08A9E7CC;
    case 519u: goto L_08A9E7D4;
    case 520u: goto L_08A9E7DC;
    case 521u: goto L_08A9E7E4;
    case 522u: goto L_08A9E7EC;
    case 523u: goto L_08A9E7F4;
    case 524u: goto L_08A9E7FC;
    case 525u: goto L_08A9E804;
    case 526u: goto L_08A9E80C;
    case 527u: goto L_08A9E814;
    case 528u: goto L_08A9E81C;
    case 529u: goto L_08A9E824;
    case 530u: goto L_08A9E82C;
    case 531u: goto L_08A9E834;
    case 532u: goto L_08A9E83C;
    case 533u: goto L_08A9E844;
    case 534u: goto L_08A9E84C;
    case 535u: goto L_08A9E854;
    case 536u: goto L_08A9E85C;
    case 537u: goto L_08A9E864;
    case 538u: goto L_08A9E86C;
    case 539u: goto L_08A9E874;
    case 540u: goto L_08A9E87C;
    case 541u: goto L_08A9E880;
    case 542u: goto L_08A9E888;
    case 543u: goto L_08A9E890;
    case 544u: goto L_08A9E908;
    case 545u: goto L_08A9E914;
    case 546u: goto L_08A9E91C;
    case 547u: goto L_08A9E924;
    case 548u: goto L_08A9E92C;
    case 549u: goto L_08A9E934;
    case 550u: goto L_08A9E938;
    case 551u: goto L_08A9E948;
    case 552u: goto L_08A9E958;
    case 553u: goto L_08A9E964;
    case 554u: goto L_08A9E96C;
    case 555u: goto L_08A9E974;
    case 556u: goto L_08A9E978;
    case 557u: goto L_08A9E980;
    case 558u: goto L_08A9E9D8;
    case 559u: goto L_08A9E9E4;
    case 560u: goto L_08A9E9F4;
    case 561u: goto L_08A9EA00;
    case 562u: goto L_08A9EA0C;
    case 563u: goto L_08A9EA24;
    case 564u: goto L_08A9EA2C;
    case 565u: goto L_08A9EA34;
    case 566u: goto L_08A9EA60;
    case 567u: goto L_08A9EA64;
    case 568u: goto L_08A9EA88;
    case 569u: goto L_08A9EAC0;
    case 570u: goto L_08A9EAD0;
    case 571u: goto L_08A9EAD8;
    case 572u: goto L_08A9EAF0;
    case 573u: goto L_08A9EAF8;
    case 574u: goto L_08A9EB08;
    case 575u: goto L_08A9EB18;
    case 576u: goto L_08A9EB2C;
    case 577u: goto L_08A9EB34;
    case 578u: goto L_08A9EB3C;
    case 579u: goto L_08A9EB4C;
    case 580u: goto L_08A9EB60;
    case 581u: goto L_08A9EB68;
    case 582u: goto L_08A9EB6C;
    case 583u: goto L_08A9EB7C;
    case 584u: goto L_08A9EB98;
    case 585u: goto L_08A9EBA4;
    case 586u: goto L_08A9EBBC;
    case 587u: goto L_08A9EBC4;
    case 588u: goto L_08A9EBC8;
    case 589u: goto L_08A9EBD0;
    case 590u: goto L_08A9EBD8;
    case 591u: goto L_08A9EBE0;
    case 592u: goto L_08A9EBEC;
    case 593u: goto L_08A9EBF0;
    case 594u: goto L_08A9EC04;
    case 595u: goto L_08A9EC14;
    case 596u: goto L_08A9EC20;
    case 597u: goto L_08A9EC60;
    case 598u: goto L_08A9EC68;
    case 599u: goto L_08A9EC70;
    case 600u: goto L_08A9EC78;
    case 601u: goto L_08A9EC7C;
    case 602u: goto L_08A9ECA4;
    case 603u: goto L_08A9ECB8;
    case 604u: goto L_08A9ECC0;
    case 605u: goto L_08A9ECD8;
    case 606u: goto L_08A9ECF0;
    case 607u: goto L_08A9ED08;
    case 608u: goto L_08A9ED20;
    case 609u: goto L_08A9ED38;
    case 610u: goto L_08A9ED50;
    case 611u: goto L_08A9ED68;
    case 612u: goto L_08A9ED80;
    case 613u: goto L_08A9ED98;
    case 614u: goto L_08A9EDB0;
    case 615u: goto L_08A9EDC8;
    case 616u: goto L_08A9EDE0;
    case 617u: goto L_08A9EDF8;
    case 618u: goto L_08A9EE10;
    case 619u: goto L_08A9EE28;
    case 620u: goto L_08A9EE40;
    case 621u: goto L_08A9EE58;
    case 622u: goto L_08A9EE60;
    case 623u: goto L_08A9EE6C;
    case 624u: goto L_08A9EE74;
    case 625u: goto L_08A9EE7C;
    case 626u: goto L_08A9EE94;
    case 627u: goto L_08A9EEAC;
    case 628u: goto L_08A9EEC4;
    case 629u: goto L_08A9EEDC;
    case 630u: goto L_08A9EEF4;
    case 631u: goto L_08A9EF0C;
    case 632u: goto L_08A9EF24;
    case 633u: goto L_08A9EF3C;
    case 634u: goto L_08A9EF54;
    case 635u: goto L_08A9EF6C;
    case 636u: goto L_08A9EF84;
    case 637u: goto L_08A9EF9C;
    case 638u: goto L_08A9EFB4;
    case 639u: goto L_08A9EFCC;
    case 640u: goto L_08A9EFE4;
    case 641u: goto L_08A9EFFC;
    case 642u: goto L_08A9F014;
    case 643u: goto L_08A9F01C;
    case 644u: goto L_08A9F028;
    case 645u: goto L_08A9F034;
    case 646u: goto L_08A9F03C;
    case 647u: goto L_08A9F054;
    case 648u: goto L_08A9F05C;
    case 649u: goto L_08A9F064;
    case 650u: goto L_08A9F070;
    case 651u: goto L_08A9F080;
    case 652u: goto L_08A9F08C;
    case 653u: goto L_08A9F0CC;
    case 654u: goto L_08A9F0E4;
    case 655u: goto L_08A9F0EC;
    case 656u: goto L_08A9F0F4;
    case 657u: goto L_08A9F108;
    case 658u: goto L_08A9F110;
    case 659u: goto L_08A9F11C;
    case 660u: goto L_08A9F124;
    case 661u: goto L_08A9F12C;
    case 662u: goto L_08A9F134;
    case 663u: goto L_08A9F13C;
    case 664u: goto L_08A9F140;
    case 665u: goto L_08A9F148;
    case 666u: goto L_08A9F154;
    case 667u: goto L_08A9F15C;
    case 668u: goto L_08A9F164;
    case 669u: goto L_08A9F168;
    case 670u: goto L_08A9F170;
    case 671u: goto L_08A9F178;
    case 672u: goto L_08A9F1D8;
    case 673u: goto L_08A9F1E0;
    case 674u: goto L_08A9F1E8;
    case 675u: goto L_08A9F234;
    case 676u: goto L_08A9F250;
    case 677u: goto L_08A9F258;
    case 678u: goto L_08A9F278;
    case 679u: goto L_08A9F280;
    case 680u: goto L_08A9F288;
    case 681u: goto L_08A9F294;
    case 682u: goto L_08A9F29C;
    case 683u: goto L_08A9F2AC;
    case 684u: goto L_08A9F2B4;
    case 685u: goto L_08A9F2BC;
    case 686u: goto L_08A9F2C0;
    case 687u: goto L_08A9F2CC;
    case 688u: goto L_08A9F2D8;
    case 689u: goto L_08A9F304;
    case 690u: goto L_08A9F318;
    case 691u: goto L_08A9F320;
    case 692u: goto L_08A9F330;
    case 693u: goto L_08A9F350;
    case 694u: goto L_08A9F38C;
    case 695u: goto L_08A9F3E0;
    case 696u: goto L_08A9F3E8;
    case 697u: goto L_08A9F3F4;
    case 698u: goto L_08A9F408;
    case 699u: goto L_08A9F414;
    case 700u: goto L_08A9F430;
    case 701u: goto L_08A9F438;
    case 702u: goto L_08A9F45C;
    case 703u: goto L_08A9F464;
    case 704u: goto L_08A9F46C;
    case 705u: goto L_08A9F478;
    case 706u: goto L_08A9F484;
    case 707u: goto L_08A9F490;
    case 708u: goto L_08A9F4A4;
    case 709u: goto L_08A9F4AC;
    case 710u: goto L_08A9F4B4;
    case 711u: goto L_08A9F4BC;
    case 712u: goto L_08A9F4C0;
    case 713u: goto L_08A9F4C8;
    case 714u: goto L_08A9F4D0;
    case 715u: goto L_08A9F4D4;
    case 716u: goto L_08A9F4E0;
    case 717u: goto L_08A9F4F4;
    case 718u: goto L_08A9F504;
    case 719u: goto L_08A9F514;
    case 720u: goto L_08A9F51C;
    case 721u: goto L_08A9F520;
    case 722u: goto L_08A9F560;
    case 723u: goto L_08A9F57C;
    case 724u: goto L_08A9F584;
    case 725u: goto L_08A9F58C;
    case 726u: goto L_08A9F5A4;
    case 727u: goto L_08A9F5CC;
    case 728u: goto L_08A9F5D4;
    case 729u: goto L_08A9F5D8;
    case 730u: goto L_08A9F5E0;
    case 731u: goto L_08A9F5EC;
    case 732u: goto L_08A9F5F4;
    case 733u: goto L_08A9F5FC;
    case 734u: goto L_08A9F60C;
    case 735u: goto L_08A9F614;
    case 736u: goto L_08A9F62C;
    case 737u: goto L_08A9F648;
    case 738u: goto L_08A9F654;
    case 739u: goto L_08A9F65C;
    case 740u: goto L_08A9F660;
    case 741u: goto L_08A9F668;
    case 742u: goto L_08A9F678;
    case 743u: goto L_08A9F684;
    case 744u: goto L_08A9F68C;
    case 745u: goto L_08A9F694;
    case 746u: goto L_08A9F69C;
    case 747u: goto L_08A9F6CC;
    case 748u: goto L_08A9F6DC;
    case 749u: goto L_08A9F6E8;
    case 750u: goto L_08A9F6F4;
    case 751u: goto L_08A9F70C;
    case 752u: goto L_08A9F714;
    case 753u: goto L_08A9F71C;
    case 754u: goto L_08A9F734;
    case 755u: goto L_08A9F73C;
    case 756u: goto L_08A9F744;
    case 757u: goto L_08A9F74C;
    case 758u: goto L_08A9F754;
    case 759u: goto L_08A9F75C;
    case 760u: goto L_08A9F760;
    case 761u: goto L_08A9F768;
    case 762u: goto L_08A9F77C;
    case 763u: goto L_08A9F784;
    case 764u: goto L_08A9F78C;
    case 765u: goto L_08A9F7A4;
    case 766u: goto L_08A9F7AC;
    case 767u: goto L_08A9F7B8;
    case 768u: goto L_08A9F7BC;
    case 769u: goto L_08A9F7C0;
    case 770u: goto L_08A9F7CC;
    case 771u: goto L_08A9F7D4;
    case 772u: goto L_08A9F7E0;
    case 773u: goto L_08A9F7F8;
    case 774u: goto L_08A9F800;
    case 775u: goto L_08A9F808;
    case 776u: goto L_08A9F810;
    case 777u: goto L_08A9F81C;
    case 778u: goto L_08A9F838;
    case 779u: goto L_08A9F850;
    case 780u: goto L_08A9F860;
    case 781u: goto L_08A9F868;
    case 782u: goto L_08A9F87C;
    case 783u: goto L_08A9F894;
    case 784u: goto L_08A9F8A4;
    case 785u: goto L_08A9F8D8;
    case 786u: goto L_08A9F8E4;
    case 787u: goto L_08A9F930;
    case 788u: goto L_08A9F940;
    case 789u: goto L_08A9F950;
    case 790u: goto L_08A9F958;
    case 791u: goto L_08A9F96C;
    case 792u: goto L_08A9F9A0;
    case 793u: goto L_08A9F9B8;
    case 794u: goto L_08A9F9C0;
    case 795u: goto L_08A9F9D0;
    case 796u: goto L_08A9F9D8;
    case 797u: goto L_08A9F9E4;
    case 798u: goto L_08A9F9EC;
    case 799u: goto L_08A9FA00;
    case 800u: goto L_08A9FA20;
    case 801u: goto L_08A9FA28;
    case 802u: goto L_08A9FA3C;
    case 803u: goto L_08A9FA78;
    case 804u: goto L_08A9FA88;
    case 805u: goto L_08A9FA90;
    case 806u: goto L_08A9FAAC;
    case 807u: goto L_08A9FAC0;
    case 808u: goto L_08A9FAC8;
    case 809u: goto L_08A9FAD0;
    case 810u: goto L_08A9FADC;
    case 811u: goto L_08A9FAF8;
    case 812u: goto L_08A9FB00;
    case 813u: goto L_08A9FB30;
    case 814u: goto L_08A9FB38;
    case 815u: goto L_08A9FB44;
    case 816u: goto L_08A9FB60;
    case 817u: goto L_08A9FB68;
    case 818u: goto L_08A9FB98;
    case 819u: goto L_08A9FBA0;
    case 820u: goto L_08A9FBAC;
    case 821u: goto L_08A9FBC8;
    case 822u: goto L_08A9FBD0;
    case 823u: goto L_08A9FC00;
    case 824u: goto L_08A9FC08;
    case 825u: goto L_08A9FC38;
    case 826u: goto L_08A9FC40;
    case 827u: goto L_08A9FC50;
    case 828u: goto L_08A9FC64;
    case 829u: goto L_08A9FC7C;
    case 830u: goto L_08A9FC84;
    case 831u: goto L_08A9FC8C;
    case 832u: goto L_08A9FC94;
    case 833u: goto L_08A9FC9C;
    case 834u: goto L_08A9FCC0;
    case 835u: goto L_08A9FCD4;
    case 836u: goto L_08A9FCE8;
    case 837u: goto L_08A9FCF8;
    case 838u: goto L_08A9FCFC;
    case 839u: goto L_08A9FD04;
    case 840u: goto L_08A9FD14;
    case 841u: goto L_08A9FD18;
    case 842u: goto L_08A9FD38;
    case 843u: goto L_08A9FD44;
    case 844u: goto L_08A9FD4C;
    case 845u: goto L_08A9FD54;
    case 846u: goto L_08A9FD6C;
    case 847u: goto L_08A9FD74;
    case 848u: goto L_08A9FD7C;
    case 849u: goto L_08A9FD84;
    case 850u: goto L_08A9FD98;
    case 851u: goto L_08A9FDB0;
    case 852u: goto L_08A9FDC0;
    case 853u: goto L_08A9FDD4;
    case 854u: goto L_08A9FDDC;
    case 855u: goto L_08A9FDE4;
    case 856u: goto L_08A9FDE8;
    case 857u: goto L_08A9FDEC;
    case 858u: goto L_08A9FE20;
    case 859u: goto L_08A9FE28;
    case 860u: goto L_08A9FE30;
    case 861u: goto L_08A9FE64;
    case 862u: goto L_08A9FE80;
    case 863u: goto L_08A9FE84;
    case 864u: goto L_08A9FE98;
    case 865u: goto L_08A9FEAC;
    case 866u: goto L_08A9FEBC;
    case 867u: goto L_08A9FEC4;
    case 868u: goto L_08A9FEC8;
    case 869u: goto L_08A9FED0;
    case 870u: goto L_08A9FEE8;
    case 871u: goto L_08A9FEF8;
    case 872u: goto L_08A9FF08;
    case 873u: goto L_08A9FF0C;
    case 874u: goto L_08A9FF18;
    case 875u: goto L_08A9FF20;
    case 876u: goto L_08A9FF7C;
    case 877u: goto L_08A9FF88;
    case 878u: goto L_08A9FF98;
    case 879u: goto L_08A9FFA8;
    case 880u: goto L_08A9FFAC;
    case 881u: goto L_08A9FFBC;
    case 882u: goto L_08A9FFCC;
    case 883u: goto L_08A9FFE0;
    case 884u: goto L_08A9FFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A9C000:
    ctx.gpr[5] = (16475u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 34079u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (20352u << 16u);
    ctx.gpr[7] = (16968u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (15872u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[23] = (0u | 3u);
    ctx.gpr[21] = (0u | 5u);
    goto L_08A9C038;
L_08A9C038:
    ctx.gpr[31] = (0x08A9C040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 758u, 0x0891B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9C040u) goto L_08A9C040;
    return;
L_08A9C040:
    ctx.gpr[17] = (ctx.gpr[18] << 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A9C080;
      }
      goto L_08A9C04C;
    }
L_08A9C04C:
    ctx.gpr[4] = (ctx.gpr[18] & 3u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21924)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[23]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[30];
        goto L_08A9C074;
    }
    goto L_08A9C074;
L_08A9C074:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(17040), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A9C080;
L_08A9C080:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17040)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9C1F4;
      }
      goto L_08A9C094;
    }
L_08A9C094:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17040)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9C1F4;
      }
      goto L_08A9C0A8;
    }
L_08A9C0A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17040)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9C0C8;
      }
      goto L_08A9C0C0;
    }
L_08A9C0C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C1F4;
      }
      goto L_08A9C0C8;
    }
L_08A9C0C8:
    ctx.gpr[31] = (0x08A9C0D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 758u, 0x0891B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9C0D0u) goto L_08A9C0D0;
    return;
L_08A9C0D0:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17040)));
        goto L_08A9C0F0;
    }
    goto L_08A9C0D8;
L_08A9C0D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17040)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A9C100;
      }
      goto L_08A9C0F0;
    }
L_08A9C0F0:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A9C100;
L_08A9C100:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C1F4;
      }
      goto L_08A9C110;
    }
L_08A9C110:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17040)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9C128u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A9C128u) goto L_08A9C128;
    return;
L_08A9C128:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C1F4;
      }
      goto L_08A9C13C;
    }
L_08A9C13C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C1C8;
      }
      goto L_08A9C15C;
    }
L_08A9C15C:
    ctx.gpr[31] = (0x08A9C164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 758u, 0x0891B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9C164u) goto L_08A9C164;
    return;
L_08A9C164:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C190;
      }
      goto L_08A9C16C;
    }
L_08A9C16C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[21]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A9C1C8;
      }
      goto L_08A9C190;
    }
L_08A9C190:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9C1A0u);
    ctx.gpr[5] = (ctx.gpr[5] >> 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A9C1A0u) goto L_08A9C1A0;
    return;
L_08A9C1A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A9C1BC;
      }
      goto L_08A9C1AC;
    }
L_08A9C1AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A9C1C8;
      }
      goto L_08A9C1BC;
    }
L_08A9C1BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A9C1C8;
L_08A9C1C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16960));
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9C1F4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A9C1F4u) goto L_08A9C1F4;
    return;
L_08A9C1F4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C038;
      }
      goto L_08A9C208;
    }
L_08A9C208:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9C264:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A9C2AC;
      }
      goto L_08A9C29C;
    }
L_08A9C29C:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4024)));
      if (branch_taken) {
          goto L_08A9C2B8;
      }
      goto L_08A9C2AC;
    }
L_08A9C2AC:
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4024)));
    goto L_08A9C2B8;
L_08A9C2B8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] << 7u);
      if (branch_taken) {
          goto L_08A9C4FC;
      }
      goto L_08A9C2C8;
    }
L_08A9C2C8:
    ctx.gpr[6] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[19] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] << 4u);
    ctx.gpr[6] = (ctx.gpr[20] << 2u);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[16] + ctx.gpr[19]);
    ctx.gpr[20] = (ctx.gpr[16] + ctx.gpr[20]);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[17]);
    goto L_08A9C2FC;
L_08A9C2FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3984)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(73)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C328;
      }
      goto L_08A9C320;
    }
L_08A9C320:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C4E8;
      }
      goto L_08A9C328;
    }
L_08A9C328:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[9] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(4024)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[4] << 7u);
      if (branch_taken) {
          goto L_08A9C3D4;
      }
      goto L_08A9C34C;
    }
L_08A9C34C:
    ctx.gpr[11] = (0u - ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] << 4u);
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[11] = (ctx.gpr[4] << 4u);
    ctx.gpr[2] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.gpr[10] = (ctx.gpr[16] + ctx.gpr[10]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[10] + ctx.gpr[8]);
    goto L_08A9C374;
L_08A9C374:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3984)));
    ctx.gpr[2] = (ctx.gpr[2] << 5u);
    ctx.gpr[3] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(144));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A9C3A4;
      }
      goto L_08A9C398;
    }
L_08A9C398:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
      if (branch_taken) {
          goto L_08A9C3C8;
      }
      goto L_08A9C3A4;
    }
L_08A9C3A4:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A9C3C0;
      }
      goto L_08A9C3B4;
    }
L_08A9C3B4:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
      if (branch_taken) {
          goto L_08A9C3C8;
      }
      goto L_08A9C3C0;
    }
L_08A9C3C0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[21]));
      if (branch_taken) {
          goto L_08A9C3D4;
      }
      goto L_08A9C3C8;
    }
L_08A9C3C8:
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (ctx.gpr[10] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08A9C374;
      }
      goto L_08A9C3D4;
    }
L_08A9C3D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C4E8;
      }
      goto L_08A9C3E0;
    }
L_08A9C3E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C420;
      }
      goto L_08A9C3F0;
    }
L_08A9C3F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A9C420;
      }
      goto L_08A9C3FC;
    }
L_08A9C3FC:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A9C40Cu);
    ctx.gpr[6] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08A9C40Cu) goto L_08A9C40C;
    return;
L_08A9C40C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9C418u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A9C418u) goto L_08A9C418;
    return;
L_08A9C418:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4024)));
      if (branch_taken) {
          goto L_08A9C4E8;
      }
      goto L_08A9C420;
    }
L_08A9C420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C4E8;
      }
      goto L_08A9C42C;
    }
L_08A9C42C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C4C4;
      }
      goto L_08A9C438;
    }
L_08A9C438:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(80))))));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[23];
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08A9C468;
      }
      goto L_08A9C444;
    }
L_08A9C444:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(80))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A9C468;
      }
      goto L_08A9C460;
    }
L_08A9C460:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(80))))));
    goto L_08A9C468;
L_08A9C468:
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A9C4A0;
      }
      goto L_08A9C47C;
    }
L_08A9C47C:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C4AC;
      }
      goto L_08A9C498;
    }
L_08A9C498:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C4C4;
      }
      goto L_08A9C4A0;
    }
L_08A9C4A0:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(68), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4024)));
      if (branch_taken) {
          goto L_08A9C4E8;
      }
      goto L_08A9C4AC;
    }
L_08A9C4AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C4C4;
      }
      goto L_08A9C4BC;
    }
L_08A9C4BC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_08A9C4C4;
L_08A9C4C4:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A9C4D8u);
    ctx.gpr[6] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08A9C4D8u) goto L_08A9C4D8;
    return;
L_08A9C4D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9C4E4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A9C4E4u) goto L_08A9C4E4;
    return;
L_08A9C4E4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4024)));
    goto L_08A9C4E8;
L_08A9C4E8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A9C2FC;
      }
      goto L_08A9C4FC;
    }
L_08A9C4FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9C52C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9C5B8;
      }
      goto L_08A9C56C;
    }
L_08A9C56C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    goto L_08A9C570;
L_08A9C570:
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(216), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4104), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
        goto L_08A9C570;
    }
    goto L_08A9C5B8;
L_08A9C5B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4024)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CAE4;
      }
      goto L_08A9C5D4;
    }
L_08A9C5D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    goto L_08A9C5D8;
L_08A9C5D8:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[4] << 7u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3984)));
    ctx.gpr[6] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 5662u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9C630;
      }
      goto L_08A9C628;
    }
L_08A9C628:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CAC4;
      }
      goto L_08A9C630;
    }
L_08A9C630:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CAC4;
      }
      goto L_08A9C644;
    }
L_08A9C644:
    ctx.gpr[4] = (ctx.gpr[20] << 5u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4032));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9C688;
      }
      goto L_08A9C668;
    }
L_08A9C668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9C688;
      }
      goto L_08A9C678;
    }
L_08A9C678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9C690;
      }
      goto L_08A9C688;
    }
L_08A9C688:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CAAC;
      }
      goto L_08A9C690;
    }
L_08A9C690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C720;
      }
      goto L_08A9C69C;
    }
L_08A9C69C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C6C8;
      }
      goto L_08A9C6AC;
    }
L_08A9C6AC:
    ctx.gpr[4] = (ctx.gpr[20] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C6C0;
      }
      goto L_08A9C6B8;
    }
L_08A9C6B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A9C6E0;
      }
      goto L_08A9C6C0;
    }
L_08A9C6C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9C6E0;
      }
      goto L_08A9C6C8;
    }
L_08A9C6C8:
    ctx.gpr[4] = (ctx.gpr[20] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C6DC;
      }
      goto L_08A9C6D4;
    }
L_08A9C6D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9C6E0;
      }
      goto L_08A9C6DC;
    }
L_08A9C6DC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A9C6E0;
L_08A9C6E0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C720;
      }
      goto L_08A9C6E8;
    }
L_08A9C6E8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A9C6F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 362u, 0x088B6128u>(ctx, &aot_mem) && ctx.pc == 0x08A9C6F8u) goto L_08A9C6F8;
    return;
L_08A9C6F8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C720;
      }
      goto L_08A9C700;
    }
L_08A9C700:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A9CAAC;
      }
      goto L_08A9C720;
    }
L_08A9C720:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C74C;
      }
      goto L_08A9C740;
    }
L_08A9C740:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A9CAAC;
      }
      goto L_08A9C74C;
    }
L_08A9C74C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C77C;
      }
      goto L_08A9C758;
    }
L_08A9C758:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A9C768u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 362u, 0x088B6128u>(ctx, &aot_mem) && ctx.pc == 0x08A9C768u) goto L_08A9C768;
    return;
L_08A9C768:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C77C;
      }
      goto L_08A9C770;
    }
L_08A9C770:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A9CAAC;
      }
      goto L_08A9C77C;
    }
L_08A9C77C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A9C81C;
      }
      goto L_08A9C788;
    }
L_08A9C788:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C7B4;
      }
      goto L_08A9C794;
    }
L_08A9C794:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (0u | 63u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
        goto L_08A9C7A8;
    }
    goto L_08A9C7A8;
L_08A9C7A8:
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] << 1u);
      if (branch_taken) {
          goto L_08A9C7B8;
      }
      goto L_08A9C7B4;
    }
L_08A9C7B4:
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    goto L_08A9C7B8;
L_08A9C7B8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[23] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A9C7D0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 359u, 0x088B60FCu>(ctx, &aot_mem) && ctx.pc == 0x08A9C7D0u) goto L_08A9C7D0;
    return;
L_08A9C7D0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(66)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A9C7E0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 356u, 0x088B60CCu>(ctx, &aot_mem) && ctx.pc == 0x08A9C7E0u) goto L_08A9C7E0;
    return;
L_08A9C7E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A9C7F0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 330u, 0x088B5F1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9C7F0u) goto L_08A9C7F0;
    return;
L_08A9C7F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C7FC;
      }
      goto L_08A9C7F8;
    }
L_08A9C7F8:
    ctx.gpr[18] = (0u | 1u);
    goto L_08A9C7FC;
L_08A9C7FC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A9C814u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 339u, 0x088B5F94u>(ctx, &aot_mem) && ctx.pc == 0x08A9C814u) goto L_08A9C814;
    return;
L_08A9C814:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CAA4;
      }
      goto L_08A9C81C;
    }
L_08A9C81C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A9C838u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 851u, 0x08A9ADD4u>(ctx, &aot_mem) && ctx.pc == 0x08A9C838u) goto L_08A9C838;
    return;
L_08A9C838:
    ctx.gpr[31] = (0x08A9C840u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 758u, 0x0891B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9C840u) goto L_08A9C840;
    return;
L_08A9C840:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C848;
      }
      goto L_08A9C848;
    }
L_08A9C848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A9C8CC;
      }
      goto L_08A9C858;
    }
L_08A9C858:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C87C;
      }
      goto L_08A9C864;
    }
L_08A9C864:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6000));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
        goto L_08A9C874;
    }
    goto L_08A9C874;
L_08A9C874:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C88C;
      }
      goto L_08A9C87C;
    }
L_08A9C87C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6000));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
        goto L_08A9C88C;
    }
    goto L_08A9C88C;
L_08A9C88C:
    ctx.gpr[31] = (0x08A9C894u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 758u, 0x0891B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9C894u) goto L_08A9C894;
    return;
L_08A9C894:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C8B8;
      }
      goto L_08A9C89C;
    }
L_08A9C89C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A9C8B8;
L_08A9C8B8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A9C8CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 359u, 0x088B60FCu>(ctx, &aot_mem) && ctx.pc == 0x08A9C8CCu) goto L_08A9C8CC;
    return;
L_08A9C8CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9C918;
      }
      goto L_08A9C8DC;
    }
L_08A9C8DC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C900;
      }
      goto L_08A9C8E8;
    }
L_08A9C8E8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08A9C8F8;
    }
    goto L_08A9C8F8;
L_08A9C8F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A9C914;
      }
      goto L_08A9C900;
    }
L_08A9C900:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08A9C910;
    }
    goto L_08A9C910;
L_08A9C910:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08A9C914;
L_08A9C914:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A9C918;
L_08A9C918:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C93C;
      }
      goto L_08A9C924;
    }
L_08A9C924:
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08A9C934;
    }
    goto L_08A9C934;
L_08A9C934:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] << 1u);
      if (branch_taken) {
          goto L_08A9C93C;
      }
      goto L_08A9C93C;
    }
L_08A9C93C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C970;
      }
      goto L_08A9C94C;
    }
L_08A9C94C:
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[5]);
    goto L_08A9C950;
L_08A9C950:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(21918)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9C964;
      }
      goto L_08A9C95C;
    }
L_08A9C95C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A9C974;
      }
      goto L_08A9C964;
    }
L_08A9C964:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A9C950;
      }
      goto L_08A9C970;
    }
L_08A9C970:
    ctx.gpr[5] = (0u | 0u);
    goto L_08A9C974;
L_08A9C974:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C9BC;
      }
      goto L_08A9C97C;
    }
L_08A9C97C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21920)));
    ctx.gpr[6] = (0u | 127u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[31] = (0x08A9C9B4u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 339u, 0x088B5F94u>(ctx, &aot_mem) && ctx.pc == 0x08A9C9B4u) goto L_08A9C9B4;
    return;
L_08A9C9B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CA04;
      }
      goto L_08A9C9BC;
    }
L_08A9C9BC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21920)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 127 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C9EC;
      }
      goto L_08A9C9CC;
    }
L_08A9C9CC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21920)));
    ctx.gpr[6] = (0u | 127u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    goto L_08A9C9EC;
L_08A9C9EC:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25456));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A9CA04u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 339u, 0x088B5F94u>(ctx, &aot_mem) && ctx.pc == 0x08A9CA04u) goto L_08A9CA04;
    return;
L_08A9CA04:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9CA18u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 951u, 0x08A9B768u>(ctx, &aot_mem) && ctx.pc == 0x08A9CA18u) goto L_08A9CA18;
    return;
L_08A9CA18:
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(66)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9CA2Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 936u, 0x08A9B614u>(ctx, &aot_mem) && ctx.pc == 0x08A9CA2Cu) goto L_08A9CA2C;
    return;
L_08A9CA2C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A9CA90;
      }
      goto L_08A9CA38;
    }
L_08A9CA38:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CA60;
      }
      goto L_08A9CA44;
    }
L_08A9CA44:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
        goto L_08A9CA58;
    }
    goto L_08A9CA58;
L_08A9CA58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A9CA78;
      }
      goto L_08A9CA60;
    }
L_08A9CA60:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-10));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
        goto L_08A9CA74;
    }
    goto L_08A9CA74;
L_08A9CA74:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    goto L_08A9CA78;
L_08A9CA78:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[19] & 255u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A9CA8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 356u, 0x088B60CCu>(ctx, &aot_mem) && ctx.pc == 0x08A9CA8Cu) goto L_08A9CA8C;
    return;
L_08A9CA8C:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[19]));
    goto L_08A9CA90;
L_08A9CA90:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[19] & 255u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A9CAA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 356u, 0x088B60CCu>(ctx, &aot_mem) && ctx.pc == 0x08A9CAA4u) goto L_08A9CAA4;
    return;
L_08A9CAA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CAC4;
      }
      goto L_08A9CAAC;
    }
L_08A9CAAC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C644;
      }
      goto L_08A9CAC4;
    }
L_08A9CAC4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4024)));
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
        goto L_08A9C5D8;
    }
    goto L_08A9CAE4;
L_08A9CAE4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CB74;
      }
      goto L_08A9CAF8;
    }
L_08A9CAF8:
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4032));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (0u | 5662u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A9CB24;
      }
      goto L_08A9CB1C;
    }
L_08A9CB1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CB5C;
      }
      goto L_08A9CB24;
    }
L_08A9CB24:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CB5C;
      }
      goto L_08A9CB30;
    }
L_08A9CB30:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A9CB44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 368u, 0x088B61B8u>(ctx, &aot_mem) && ctx.pc == 0x08A9CB44u) goto L_08A9CB44;
    return;
L_08A9CB44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    goto L_08A9CB5C;
L_08A9CB5C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CAF8;
      }
      goto L_08A9CB74;
    }
L_08A9CB74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4024)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
        goto L_08A9CF9C;
    }
    goto L_08A9CB90;
L_08A9CB90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    goto L_08A9CB94;
L_08A9CB94:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] << 7u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3984)));
    ctx.gpr[6] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CF78;
      }
      goto L_08A9CBE0;
    }
L_08A9CBE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(73)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CF78;
      }
      goto L_08A9CBEC;
    }
L_08A9CBEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5960)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CC14;
      }
      goto L_08A9CC0C;
    }
L_08A9CC0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CF78;
      }
      goto L_08A9CC14;
    }
L_08A9CC14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(5662) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CC2C;
      }
      goto L_08A9CC24;
    }
L_08A9CC24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CF78;
      }
      goto L_08A9CC2C;
    }
L_08A9CC2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CC6C;
      }
      goto L_08A9CC3C;
    }
L_08A9CC3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CC6C;
      }
      goto L_08A9CC48;
    }
L_08A9CC48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A9CC6C;
      }
      goto L_08A9CC54;
    }
L_08A9CC54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A9CF78;
      }
      goto L_08A9CC6C;
    }
L_08A9CC6C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CF78;
      }
      goto L_08A9CC80;
    }
L_08A9CC80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    goto L_08A9CC84;
L_08A9CC84:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[22] = (ctx.hi);
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
    ctx.gpr[4] = (ctx.gpr[22] << 5u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4032));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CF60;
      }
      goto L_08A9CCB8;
    }
L_08A9CCB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CCFC;
      }
      goto L_08A9CCC4;
    }
L_08A9CCC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21944)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[23] = (ctx.lo);
    ctx.gpr[31] = (0x08A9CCE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 338u, 0x088B5F74u>(ctx, &aot_mem) && ctx.pc == 0x08A9CCE4u) goto L_08A9CCE4;
    return;
L_08A9CCE4:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CCF4;
      }
      goto L_08A9CCEC;
    }
L_08A9CCEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CF60;
      }
      goto L_08A9CCF4;
    }
L_08A9CCF4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A9CCFC;
L_08A9CCFC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A9CD0Cu);
    ctx.gpr[6] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08A9CD0Cu) goto L_08A9CD0C;
    return;
L_08A9CD0C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CD40;
      }
      goto L_08A9CD18;
    }
L_08A9CD18:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9CD2Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 951u, 0x08A9B768u>(ctx, &aot_mem) && ctx.pc == 0x08A9CD2Cu) goto L_08A9CD2C;
    return;
L_08A9CD2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9CD3Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 936u, 0x08A9B614u>(ctx, &aot_mem) && ctx.pc == 0x08A9CD3Cu) goto L_08A9CD3C;
    return;
L_08A9CD3C:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A9CD40;
L_08A9CD40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CD6C;
      }
      goto L_08A9CD4C;
    }
L_08A9CD4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (0u | 63u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
        goto L_08A9CD60;
    }
    goto L_08A9CD60;
L_08A9CD60:
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] << 1u);
      if (branch_taken) {
          goto L_08A9CD70;
      }
      goto L_08A9CD6C;
    }
L_08A9CD6C:
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    goto L_08A9CD70;
L_08A9CD70:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(81)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08A9CD98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 297u, 0x088B5D5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9CD98u) goto L_08A9CD98;
    return;
L_08A9CD98:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A9CE14;
      }
      goto L_08A9CDA4;
    }
L_08A9CDA4:
    ctx.gpr[31] = (0x08A9CDACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 758u, 0x0891B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9CDACu) goto L_08A9CDAC;
    return;
L_08A9CDAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CE14;
      }
      goto L_08A9CDB4;
    }
L_08A9CDB4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[23]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A9CDCC;
      }
      goto L_08A9CDC0;
    }
L_08A9CDC0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A9CDCC;
L_08A9CDCC:
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_08A9CDFC;
      }
      goto L_08A9CDF0;
    }
L_08A9CDF0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A9CE14;
      }
      goto L_08A9CDFC;
    }
L_08A9CDFC:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[23] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[23] = (ctx.gpr[4] + ctx.gpr[23]);
    goto L_08A9CE14;
L_08A9CE14:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A9CE28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 359u, 0x088B60FCu>(ctx, &aot_mem) && ctx.pc == 0x08A9CE28u) goto L_08A9CE28;
    return;
L_08A9CE28:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CE5C;
      }
      goto L_08A9CE38;
    }
L_08A9CE38:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[23]);
    goto L_08A9CE3C;
L_08A9CE3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(21918)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9CE50;
      }
      goto L_08A9CE48;
    }
L_08A9CE48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A9CE60;
      }
      goto L_08A9CE50;
    }
L_08A9CE50:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[23]);
      if (branch_taken) {
          goto L_08A9CE3C;
      }
      goto L_08A9CE5C;
    }
L_08A9CE5C:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A9CE60;
L_08A9CE60:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CEB4;
      }
      goto L_08A9CE68;
    }
L_08A9CE68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CEB4;
      }
      goto L_08A9CE74;
    }
L_08A9CE74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21920)));
    ctx.gpr[5] = (0u | 127u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[31] = (0x08A9CEACu);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 339u, 0x088B5F94u>(ctx, &aot_mem) && ctx.pc == 0x08A9CEACu) goto L_08A9CEAC;
    return;
L_08A9CEAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CEFC;
      }
      goto L_08A9CEB4;
    }
L_08A9CEB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21920)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 127 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CEE4;
      }
      goto L_08A9CEC4;
    }
L_08A9CEC4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21920)));
    ctx.gpr[5] = (0u | 127u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[21] = (ctx.lo);
    goto L_08A9CEE4;
L_08A9CEE4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[21] & 255u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A9CEFCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 339u, 0x088B5F94u>(ctx, &aot_mem) && ctx.pc == 0x08A9CEFCu) goto L_08A9CEFC;
    return;
L_08A9CEFC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(66)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A9CF10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 356u, 0x088B60CCu>(ctx, &aot_mem) && ctx.pc == 0x08A9CF10u) goto L_08A9CF10;
    return;
L_08A9CF10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CF30;
      }
      goto L_08A9CF1C;
    }
L_08A9CF1C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(67)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A9CF30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 358u, 0x088B60F4u>(ctx, &aot_mem) && ctx.pc == 0x08A9CF30u) goto L_08A9CF30;
    return;
L_08A9CF30:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A9CF40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 364u, 0x088B615Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9CF40u) goto L_08A9CF40;
    return;
L_08A9CF40:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A9CF78;
      }
      goto L_08A9CF60;
    }
L_08A9CF60:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
        goto L_08A9CC84;
    }
    goto L_08A9CF78;
L_08A9CF78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4024)));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
        goto L_08A9CB94;
    }
    goto L_08A9CF98;
L_08A9CF98:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    goto L_08A9CF9C;
L_08A9CF9C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9CFE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25420)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25416)));
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[6] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25424), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25444)));
    ctx.gpr[3] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(25456)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25452)));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[16] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(25460), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(25468), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[13] = (2229u << 16u);
    ctx.gpr[12] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(25432), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(25428), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[11] = (15744u << 16u);
    ctx.gpr[14] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[8] = (16281u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[15] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] | 39322u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(25436), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(25440), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[24] = (2229u << 16u);
    ctx.gpr[7] = (ctx.gpr[9] | 52429u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(25448), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[25] = (2229u << 16u);
    ctx.gpr[17] = (2233u << 16u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(10384));
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(25464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9D0E0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25472), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 682u, 0x08A9A2F8u>(ctx, &aot_mem) && ctx.pc == 0x08A9D0E0u) goto L_08A9D0E0;
    return;
L_08A9D0E0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A9D0ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25756));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x08A9D0ECu) goto L_08A9D0EC;
    return;
L_08A9D0EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9D100:
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
L_08A9D12C:
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
L_08A9D154:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9D168u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20168));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9D168u) goto L_08A9D168;
    return;
L_08A9D168:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6104), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6100), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6096), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6092), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6088), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6084), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6080), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6076), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6072), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6068), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6064), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6060), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6056), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6052), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6296), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6048), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6044), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6040), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7300), 0u);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6131), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6036), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(25812), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(25808), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A9D23Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20136));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9D23Cu) goto L_08A9D23C;
    return;
L_08A9D23C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9D248:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9D26Cu);
    ctx.gpr[16] = (ctx.gpr[4] & 255u);
    goto L_08A9D424;
L_08A9D26C:
    ctx.gpr[31] = (0x08A9D274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 242u, 0x08AA0E94u>(ctx, &aot_mem) && ctx.pc == 0x08A9D274u) goto L_08A9D274;
    return;
L_08A9D274:
    ctx.gpr[31] = (0x08A9D27Cu);
    // nop
    goto L_08A9D9BC;
L_08A9D27C:
    ctx.gpr[31] = (0x08A9D284u);
    // nop
    goto L_08A9F034;
L_08A9D284:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6131)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (2230u << 16u);
        goto L_08A9D2B8;
    }
    goto L_08A9D294;
L_08A9D294:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6131), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6131)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D404;
      }
      goto L_08A9D2A8;
    }
L_08A9D2A8:
    ctx.gpr[31] = (0x08A9D2B0u);
    // nop
    goto L_08A9D830;
L_08A9D2B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D404;
      }
      goto L_08A9D2B8;
    }
L_08A9D2B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6088)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6084)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6080)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6076)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6072)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6068)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6064)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6060)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6056)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6104)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6100)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6048), ctx.gpr[5]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6096)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6092)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-6044), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6052)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6296)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6040), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(680)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D404;
      }
      goto L_08A9D38C;
    }
L_08A9D38C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D404;
      }
      goto L_08A9D394;
    }
L_08A9D394:
    ctx.gpr[31] = (0x08A9D39Cu);
    // nop
    goto L_08A9F03C;
L_08A9D39C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A9D3BCu);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08A9F03C;
L_08A9D3BC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x08A9D3D4u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_08A9F03C;
L_08A9D3D4:
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A9D3F0u);
    ctx.fpr[26] = ctx.fpr[12] - ctx.fpr[13];
    goto L_08A9F03C;
L_08A9D3F0:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A9D404u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_08A9F178;
L_08A9D404:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9D424:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A9D42C;
      }
      goto L_08A9D42C;
    }
L_08A9D42C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9D434:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1184));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1148), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1152), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1156), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1160), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1164), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1168), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1172), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1176), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1180), ctx.gpr[31]);
    ctx.gpr[6] = (16384u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-720));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[6]);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_08A9D4B0;
      }
      goto L_08A9D4A8;
    }
L_08A9D4A8:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_08A9D4B0;
L_08A9D4B0:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A9D51C;
      }
      goto L_08A9D4BC;
    }
L_08A9D4BC:
    ctx.gpr[31] = (0x08A9D4C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9D4C4u) goto L_08A9D4C4;
    return;
L_08A9D4C4:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A9D4F8u);
    // nop
    goto L_08A9F03C;
L_08A9D4F8:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9D51C;
      }
      goto L_08A9D514;
    }
L_08A9D514:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9D7B0;
      }
      goto L_08A9D51C;
    }
L_08A9D51C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[22];
    ctx.gpr[31] = (0x08A9D53Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2F78u>(ctx, &aot_mem) && ctx.pc == 0x08A9D53Cu) goto L_08A9D53C;
    return;
L_08A9D53C:
    ctx.fpr[22] = ctx.fpr[0] + ctx.fpr[22];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D568;
      }
      goto L_08A9D54C;
    }
L_08A9D54C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[23] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A9D570;
      }
      goto L_08A9D560;
    }
L_08A9D560:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D574;
      }
      goto L_08A9D568;
    }
L_08A9D568:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9D7B0;
      }
      goto L_08A9D570;
    }
L_08A9D570:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08A9D574;
L_08A9D574:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A9D580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A9D580u) goto L_08A9D580;
    return;
L_08A9D580:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25836)));
    ctx.gpr[31] = (0x08A9D598u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25832)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08A9D598u) goto L_08A9D598;
    return;
L_08A9D598:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25844)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25840)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (0u | 66u);
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[22] = (ctx.gpr[19] << 2u);
    goto L_08A9D5D8;
L_08A9D5D8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A9D600;
      }
      goto L_08A9D5E8;
    }
L_08A9D5E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9D608;
      }
      goto L_08A9D5F8;
    }
L_08A9D5F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D618;
      }
      goto L_08A9D600;
    }
L_08A9D600:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9D7B0;
      }
      goto L_08A9D608;
    }
L_08A9D608:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    goto L_08A9D618;
L_08A9D618:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D660;
      }
      goto L_08A9D620;
    }
L_08A9D620:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9D63C;
      }
      goto L_08A9D630;
    }
L_08A9D630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A9D63C;
L_08A9D63C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A9D654u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A9D654u) goto L_08A9D654;
    return;
L_08A9D654:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D660;
      }
      goto L_08A9D65C;
    }
L_08A9D65C:
    ctx.gpr[18] = (0u | 1u);
    goto L_08A9D660;
L_08A9D660:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D5D8;
      }
      goto L_08A9D668;
    }
L_08A9D668:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A9D694u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 129u, 0x08AA0804u>(ctx, &aot_mem) && ctx.pc == 0x08A9D694u) goto L_08A9D694;
    return;
L_08A9D694:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A9D6B0u);
    ctx.gpr[5] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 156u, 0x089B0884u>(ctx, &aot_mem) && ctx.pc == 0x08A9D6B0u) goto L_08A9D6B0;
    return;
L_08A9D6B0:
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(1916), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1348), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(1348));
    ctx.gpr[31] = (0x08A9D6D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08A9D6D4u) goto L_08A9D6D4;
    return;
L_08A9D6D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A9D6F4u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 422u, 0x088A6CD4u>(ctx, &aot_mem) && ctx.pc == 0x08A9D6F4u) goto L_08A9D6F4;
    return;
L_08A9D6F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D740;
      }
      goto L_08A9D6FC;
    }
L_08A9D6FC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_08A9D704;
L_08A9D704:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D730;
      }
      goto L_08A9D710;
    }
L_08A9D710:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A9D730;
      }
      goto L_08A9D718;
    }
L_08A9D718:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A9D730;
      }
      goto L_08A9D720;
    }
L_08A9D720:
    ctx.gpr[31] = (0x08A9D728u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A9D7E4;
L_08A9D728:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9D7B0;
      }
      goto L_08A9D730;
    }
L_08A9D730:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9D704;
      }
      goto L_08A9D740;
    }
L_08A9D740:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08A9D788u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 331u, 0x088CE988u>(ctx, &aot_mem) && ctx.pc == 0x08A9D788u) goto L_08A9D788;
    return;
L_08A9D788:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D7A0;
      }
      goto L_08A9D790;
    }
L_08A9D790:
    ctx.gpr[31] = (0x08A9D798u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A9D7E4;
L_08A9D798:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9D7B0;
      }
      goto L_08A9D7A0;
    }
L_08A9D7A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08A9D7ACu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 313u, 0x08925FB4u>(ctx, &aot_mem) && ctx.pc == 0x08A9D7ACu) goto L_08A9D7AC;
    return;
L_08A9D7AC:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08A9D7B0;
L_08A9D7B0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1140)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1144)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1148)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1156)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1160)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1164)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1168)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1172)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1176)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1180)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1184));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9D7E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A9D7FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x08A9D7FCu) goto L_08A9D7FC;
    return;
L_08A9D7FC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D820;
      }
      goto L_08A9D804;
    }
L_08A9D804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A9D820u);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A9D820u) goto L_08A9D820;
    return;
L_08A9D820:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9D830:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[30] = (2230u << 16u);
    ctx.gpr[23] = (2230u << 16u);
    ctx.gpr[22] = (2230u << 16u);
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    goto L_08A9D8A0;
L_08A9D8A0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6104)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6100)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6048), ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6088)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6084)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-6080)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-6076)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6072)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-6068)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6064)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-6060)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-6056)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-6044), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-6096)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-6092)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-6052)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6296)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-6040), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A9D94Cu);
    // nop
    goto L_08A9F03C;
L_08A9D94C:
    ctx.gpr[31] = (0x08A9D954u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_08A9F03C;
L_08A9D954:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A9D968u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A9F178;
L_08A9D968:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A9D8A0;
      }
      goto L_08A9D980;
    }
L_08A9D980:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
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
L_08A9D9BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9DB24;
      }
      goto L_08A9DA04;
    }
L_08A9DA04:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08A9DA14u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 46u, 0x08B08478u>(ctx, &aot_mem) && ctx.pc == 0x08A9DA14u) goto L_08A9DA14;
    return;
L_08A9DA14:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DB24;
      }
      goto L_08A9DA20;
    }
L_08A9DA20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (19224u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 38528u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A9DAF0;
      }
      goto L_08A9DA40;
    }
L_08A9DA40:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3248));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[19] = (ctx.lo);
    goto L_08A9DA5C;
L_08A9DA5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
        goto L_08A9DA7C;
    }
    goto L_08A9DA74;
L_08A9DA74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9DA80;
      }
      goto L_08A9DA7C;
    }
L_08A9DA7C:
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[19]);
    goto L_08A9DA80;
L_08A9DA80:
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DADC;
      }
      goto L_08A9DA8C;
    }
L_08A9DA8C:
    ctx.gpr[31] = (0x08A9DA94u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 697u, 0x089A2E7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9DA94u) goto L_08A9DA94;
    return;
L_08A9DA94:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DADC;
      }
      goto L_08A9DA9C;
    }
L_08A9DA9C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9DADC;
      }
      goto L_08A9DAD4;
    }
L_08A9DAD4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (ctx.gpr[20] | 0u);
    goto L_08A9DADC;
L_08A9DADC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[21] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-3248));
      if (branch_taken) {
          goto L_08A9DA5C;
      }
      goto L_08A9DAF0;
    }
L_08A9DAF0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DB24;
      }
      goto L_08A9DAF8;
    }
L_08A9DAF8:
    ctx.gpr[31] = (0x08A9DB00u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x08A9DB00u) goto L_08A9DB00;
    return;
L_08A9DB00:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DB24;
      }
      goto L_08A9DB08;
    }
L_08A9DB08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A9DB24u);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A9DB24u) goto L_08A9DB24;
    return;
L_08A9DB24:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9DB58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-15300)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A9DBF8;
      }
      goto L_08A9DB8C;
    }
L_08A9DB8C:
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[16] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_08A9DB9C;
L_08A9DB9C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-15300)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08A9DBC0;
    }
    goto L_08A9DBB8;
L_08A9DBB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9DBC4;
      }
      goto L_08A9DBC0;
    }
L_08A9DBC0:
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[16]);
    goto L_08A9DBC4;
L_08A9DBC4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DBE4;
      }
      goto L_08A9DBCC;
    }
L_08A9DBCC:
    ctx.gpr[31] = (0x08A9DBD4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 244u, 0x0883D410u>(ctx, &aot_mem) && ctx.pc == 0x08A9DBD4u) goto L_08A9DBD4;
    return;
L_08A9DBD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DBE4;
      }
      goto L_08A9DBDC;
    }
L_08A9DBDC:
    ctx.gpr[31] = (0x08A9DBE4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08A9DE04;
L_08A9DBE4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-544));
      if (branch_taken) {
          goto L_08A9DB9C;
      }
      goto L_08A9DBF8;
    }
L_08A9DBF8:
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
L_08A9DC18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A9DC38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 407u, 0x08AA1C54u>(ctx, &aot_mem) && ctx.pc == 0x08A9DC38u) goto L_08A9DC38;
    return;
L_08A9DC38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DC60;
      }
      goto L_08A9DC40;
    }
L_08A9DC40:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A9DC4Cu);
    ctx.gpr[4] = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08A9DC4Cu) goto L_08A9DC4C;
    return;
L_08A9DC4C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A9DC68;
      }
      goto L_08A9DC58;
    }
L_08A9DC58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DC74;
      }
      goto L_08A9DC60;
    }
L_08A9DC60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DDEC;
      }
      goto L_08A9DC68;
    }
L_08A9DC68:
    ctx.gpr[31] = (0x08A9DC70u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 201u, 0x0883D15Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9DC70u) goto L_08A9DC70;
    return;
L_08A9DC70:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08A9DC74;
L_08A9DC74:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DDEC;
      }
      goto L_08A9DC7C;
    }
L_08A9DC7C:
    ctx.gpr[31] = (0x08A9DC84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x08A9DC84u) goto L_08A9DC84;
    return;
L_08A9DC84:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[18] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A9DCA8;
      }
      goto L_08A9DC8C;
    }
L_08A9DC8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A9DCA8u);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A9DCA8u) goto L_08A9DCA8;
    return;
L_08A9DCA8:
    ctx.gpr[31] = (0x08A9DCB0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9DCB0u) goto L_08A9DCB0;
    return;
L_08A9DCB0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9DCD8;
      }
      goto L_08A9DCC4;
    }
L_08A9DCC4:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A9DCD8;
L_08A9DCD8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 1u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(54)));
        goto L_08A9DD00;
    }
    goto L_08A9DCE8;
L_08A9DCE8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 3u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(54)));
        goto L_08A9DD00;
    }
    goto L_08A9DCF8;
L_08A9DCF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9DD24;
      }
      goto L_08A9DD00;
    }
L_08A9DD00:
    ctx.gpr[6] = (ctx.gpr[6] & 8192u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9DD1C;
      }
      goto L_08A9DD0C;
    }
L_08A9DD0C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(54)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A9DD24;
      }
      goto L_08A9DD1C;
    }
L_08A9DD1C:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A9DD24;
L_08A9DD24:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DD84;
      }
      goto L_08A9DD2C;
    }
L_08A9DD2C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9DD54;
      }
      goto L_08A9DD40;
    }
L_08A9DD40:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A9DD54;
L_08A9DD54:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(54)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DD84;
      }
      goto L_08A9DD6C;
    }
L_08A9DD6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A9DDEC;
      }
      goto L_08A9DD84;
    }
L_08A9DD84:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(346)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9DDEC;
      }
      goto L_08A9DD9C;
    }
L_08A9DD9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (47747u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A9DDECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 153u, 0x08A0D424u>(ctx, &aot_mem) && ctx.pc == 0x08A9DDECu) goto L_08A9DDEC;
    return;
L_08A9DDEC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9DE04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A9DE28u);
    ctx.gpr[4] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 119u, 0x08878924u>(ctx, &aot_mem) && ctx.pc == 0x08A9DE28u) goto L_08A9DE28;
    return;
L_08A9DE28:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A9DE40;
      }
      goto L_08A9DE34;
    }
L_08A9DE34:
    ctx.gpr[31] = (0x08A9DE3Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 470u, 0x08965F88u>(ctx, &aot_mem) && ctx.pc == 0x08A9DE3Cu) goto L_08A9DE3C;
    return;
L_08A9DE3C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08A9DE40;
L_08A9DE40:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(336));
    ctx.gpr[31] = (0x08A9DE4Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 527u, 0x08A06A44u>(ctx, &aot_mem) && ctx.pc == 0x08A9DE4Cu) goto L_08A9DE4C;
    return;
L_08A9DE4C:
    ctx.gpr[31] = (0x08A9DE54u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08A9DE54u) goto L_08A9DE54;
    return;
L_08A9DE54:
    ctx.gpr[31] = (0x08A9DE5Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F898u>(ctx, &aot_mem) && ctx.pc == 0x08A9DE5Cu) goto L_08A9DE5C;
    return;
L_08A9DE5C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9DE88;
      }
      goto L_08A9DE74;
    }
L_08A9DE74:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08A9DE88;
L_08A9DE88:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[8] = (0u | 3u);
      if (branch_taken) {
          goto L_08A9DEA8;
      }
      goto L_08A9DE98;
    }
L_08A9DE98:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A9DEAC;
      }
      goto L_08A9DEA0;
    }
L_08A9DEA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9DED0;
      }
      goto L_08A9DEA8;
    }
L_08A9DEA8:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    goto L_08A9DEAC;
L_08A9DEAC:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(54)));
    ctx.gpr[8] = (ctx.gpr[7] & 8192u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9DEC8;
      }
      goto L_08A9DEBC;
    }
L_08A9DEBC:
    ctx.gpr[7] = (ctx.gpr[7] & 16384u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A9DED0;
      }
      goto L_08A9DEC8;
    }
L_08A9DEC8:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A9DED0;
L_08A9DED0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9DF20;
      }
      goto L_08A9DED8;
    }
L_08A9DED8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9DEF4;
      }
      goto L_08A9DEE0;
    }
L_08A9DEE0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A9DEF4;
L_08A9DEF4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(54)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DF20;
      }
      goto L_08A9DF0C;
    }
L_08A9DF0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A9DF20;
L_08A9DF20:
    ctx.gpr[31] = (0x08A9DF28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x08A9DF28u) goto L_08A9DF28;
    return;
L_08A9DF28:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DF4C;
      }
      goto L_08A9DF30;
    }
L_08A9DF30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A9DF4Cu);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A9DF4Cu) goto L_08A9DF4C;
    return;
L_08A9DF4C:
    ctx.gpr[31] = (0x08A9DF54u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9DF54u) goto L_08A9DF54;
    return;
L_08A9DF54:
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
L_08A9DF6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(384));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08A9DFD8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 270u, 0x088C1B24u>(ctx, &aot_mem) && ctx.pc == 0x08A9DFD8u) goto L_08A9DFD8;
    return;
L_08A9DFD8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DFEC;
      }
      goto L_08A9DFE4;
    }
L_08A9DFE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9DFF0;
      }
      goto L_08A9DFEC;
    }
L_08A9DFEC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08A9DFF0;
L_08A9DFF0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9E000:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9E010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A9E010u) goto L_08A9E010;
    return;
L_08A9E010:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9E020:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A9E070;
      }
      goto L_08A9E044;
    }
L_08A9E044:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8088)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9E0A0;
      }
      goto L_08A9E068;
    }
L_08A9E068:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A9E080;
      }
      goto L_08A9E070;
    }
L_08A9E070:
    ctx.gpr[31] = (0x08A9E078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 8u, 0x089C8070u>(ctx, &aot_mem) && ctx.pc == 0x08A9E078u) goto L_08A9E078;
    return;
L_08A9E078:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E188;
      }
      goto L_08A9E080;
    }
L_08A9E080:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7256)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9E130;
      }
      goto L_08A9E0A0;
    }
L_08A9E0A0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 1u);
    goto L_08A9E0A8;
L_08A9E0A8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9E128;
      }
      goto L_08A9E0B0;
    }
L_08A9E0B0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E128;
      }
      goto L_08A9E0B8;
    }
L_08A9E0B8:
    ctx.gpr[31] = (0x08A9E0C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A9E0C0u) goto L_08A9E0C0;
    return;
L_08A9E0C0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25852)));
    ctx.gpr[31] = (0x08A9E0D8u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25848)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08A9E0D8u) goto L_08A9E0D8;
    return;
L_08A9E0D8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-14736), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 6u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25804)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08A9E11Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A9F108;
L_08A9E11C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E0A8;
      }
      goto L_08A9E128;
    }
L_08A9E128:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A9E188;
      }
      goto L_08A9E130;
    }
L_08A9E130:
    ctx.gpr[31] = (0x08A9E138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A9E138u) goto L_08A9E138;
    return;
L_08A9E138:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25852)));
    ctx.gpr[31] = (0x08A9E150u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25848)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08A9E150u) goto L_08A9E150;
    return;
L_08A9E150:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-14736), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 6u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25804)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A9E188;
L_08A9E188:
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
L_08A9E1A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A9E1F0;
      }
      goto L_08A9E1C4;
    }
L_08A9E1C4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8088)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9E220;
      }
      goto L_08A9E1E8;
    }
L_08A9E1E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A9E200;
      }
      goto L_08A9E1F0;
    }
L_08A9E1F0:
    ctx.gpr[31] = (0x08A9E1F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 8u, 0x089C8070u>(ctx, &aot_mem) && ctx.pc == 0x08A9E1F8u) goto L_08A9E1F8;
    return;
L_08A9E1F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E2E8;
      }
      goto L_08A9E200;
    }
L_08A9E200:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7256)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9E2A0;
      }
      goto L_08A9E220;
    }
L_08A9E220:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 1u);
    goto L_08A9E228;
L_08A9E228:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9E298;
      }
      goto L_08A9E230;
    }
L_08A9E230:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E298;
      }
      goto L_08A9E238;
    }
L_08A9E238:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14736)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-14736), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E25C;
      }
      goto L_08A9E254;
    }
L_08A9E254:
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-14736), 0u);
    goto L_08A9E25C;
L_08A9E25C:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25804)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14736)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08A9E28Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A9F108;
L_08A9E28C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E228;
      }
      goto L_08A9E298;
    }
L_08A9E298:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A9E2E8;
      }
      goto L_08A9E2A0;
    }
L_08A9E2A0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14736)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-14736), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E2C4;
      }
      goto L_08A9E2BC;
    }
L_08A9E2BC:
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-14736), 0u);
    goto L_08A9E2C4;
L_08A9E2C4:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25804)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14736)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A9E2E8;
L_08A9E2E8:
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
L_08A9E300:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9E318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A9E318u) goto L_08A9E318;
    return;
L_08A9E318:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25860)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25856)));
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A9E338u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08A9E338u) goto L_08A9E338;
    return;
L_08A9E338:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9E374:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x08A9E388u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 641u, 0x08AC3D2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9E388u) goto L_08A9E388;
    return;
L_08A9E388:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9E394:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[31] = (0x08A9E3CCu);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08A9E3CCu) goto L_08A9E3CC;
    return;
L_08A9E3CC:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (16042u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32506u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9E40C;
      }
      goto L_08A9E3F4;
    }
L_08A9E3F4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A9E404u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 526u, 0x08AA2700u>(ctx, &aot_mem) && ctx.pc == 0x08A9E404u) goto L_08A9E404;
    return;
L_08A9E404:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E41C;
      }
      goto L_08A9E40C;
    }
L_08A9E40C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A9E41Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 436u, 0x08AA1FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A9E41Cu) goto L_08A9E41C;
    return;
L_08A9E41C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9E43C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(25852)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(25848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[30] = (2230u << 16u);
    ctx.gpr[21] = (2229u << 16u);
    ctx.gpr[19] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    goto L_08A9E4A4;
L_08A9E4A4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9E554;
      }
      goto L_08A9E4AC;
    }
L_08A9E4AC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E554;
      }
      goto L_08A9E4B4;
    }
L_08A9E4B4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25804)));
    ctx.gpr[31] = (0x08A9E4C8u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A9E4C8u) goto L_08A9E4C8;
    return;
L_08A9E4C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A9E4DCu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08A9E4DCu) goto L_08A9E4DC;
    return;
L_08A9E4DC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A9E548;
      }
      goto L_08A9E508;
    }
L_08A9E508:
    ctx.gpr[31] = (0x08A9E510u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9E6A0;
L_08A9E510:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E548;
      }
      goto L_08A9E518;
    }
L_08A9E518:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9E538;
      }
      goto L_08A9E528;
    }
L_08A9E528:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A9E538;
L_08A9E538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A9E548;
      }
      goto L_08A9E544;
    }
L_08A9E544:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08A9E548;
L_08A9E548:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A9E4A4;
      }
      goto L_08A9E554;
    }
L_08A9E554:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A9E570;
      }
      goto L_08A9E55C;
    }
L_08A9E55C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (0u | 5u);
    ctx.gpr[17] = (0u | 39u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9E578;
      }
      goto L_08A9E570;
    }
L_08A9E570:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E670;
      }
      goto L_08A9E578;
    }
L_08A9E578:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25804)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A9E598u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9E7A0;
L_08A9E598:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E660;
      }
      goto L_08A9E5A0;
    }
L_08A9E5A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9E5C0;
      }
      goto L_08A9E5B0;
    }
L_08A9E5B0:
    ctx.gpr[6] = (ctx.gpr[16] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08A9E5C0;
L_08A9E5C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[22];
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A9E660;
      }
      goto L_08A9E5CC;
    }
L_08A9E5CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9E5EC;
      }
      goto L_08A9E5DC;
    }
L_08A9E5DC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A9E5EC;
L_08A9E5EC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9E604;
      }
      goto L_08A9E5F4;
    }
L_08A9E5F4:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A9E604;
L_08A9E604:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E660;
      }
      goto L_08A9E610;
    }
L_08A9E610:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E660;
      }
      goto L_08A9E618;
    }
L_08A9E618:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A9E630;
      }
      goto L_08A9E624;
    }
L_08A9E624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A9E640;
      }
      goto L_08A9E630;
    }
L_08A9E630:
    if (ctx.gpr[6] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
        goto L_08A9E64C;
    }
    goto L_08A9E638;
L_08A9E638:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E660;
      }
      goto L_08A9E640;
    }
L_08A9E640:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E670;
      }
      goto L_08A9E64C;
    }
L_08A9E64C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A9E660;
      }
      goto L_08A9E654;
    }
L_08A9E654:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E670;
      }
      goto L_08A9E660;
    }
L_08A9E660:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9E578;
      }
      goto L_08A9E670;
    }
L_08A9E670:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9E6A0:
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 10u);
      if (branch_taken) {
          goto L_08A9E78C;
      }
      goto L_08A9E6AC;
    }
L_08A9E6AC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 11u);
      if (branch_taken) {
          goto L_08A9E78C;
      }
      goto L_08A9E6B4;
    }
L_08A9E6B4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_08A9E78C;
      }
      goto L_08A9E6BC;
    }
L_08A9E6BC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 13u);
      if (branch_taken) {
          goto L_08A9E78C;
      }
      goto L_08A9E6C4;
    }
L_08A9E6C4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 14u);
      if (branch_taken) {
          goto L_08A9E78C;
      }
      goto L_08A9E6CC;
    }
L_08A9E6CC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 24u);
      if (branch_taken) {
          goto L_08A9E78C;
      }
      goto L_08A9E6D4;
    }
L_08A9E6D4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 25u);
      if (branch_taken) {
          goto L_08A9E78C;
      }
      goto L_08A9E6DC;
    }
L_08A9E6DC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 28u);
      if (branch_taken) {
          goto L_08A9E78C;
      }
      goto L_08A9E6E4;
    }
L_08A9E6E4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 29u);
      if (branch_taken) {
          goto L_08A9E78C;
      }
      goto L_08A9E6EC;
    }
L_08A9E6EC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 32u);
      if (branch_taken) {
          goto L_08A9E78C;
      }
      goto L_08A9E6F4;
    }
L_08A9E6F4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 33u);
      if (branch_taken) {
          goto L_08A9E78C;
      }
      goto L_08A9E6FC;
    }
L_08A9E6FC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 36u);
      if (branch_taken) {
          goto L_08A9E78C;
      }
      goto L_08A9E704;
    }
L_08A9E704:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 37u);
      if (branch_taken) {
          goto L_08A9E78C;
      }
      goto L_08A9E70C;
    }
L_08A9E70C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 38u);
      if (branch_taken) {
          goto L_08A9E78C;
      }
      goto L_08A9E714;
    }
L_08A9E714:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 40u);
      if (branch_taken) {
          goto L_08A9E78C;
      }
      goto L_08A9E71C;
    }
L_08A9E71C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 41u);
      if (branch_taken) {
          goto L_08A9E78C;
      }
      goto L_08A9E724;
    }
L_08A9E724:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 42u);
      if (branch_taken) {
          goto L_08A9E78C;
      }
      goto L_08A9E72C;
    }
L_08A9E72C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 43u);
      if (branch_taken) {
          goto L_08A9E78C;
      }
      goto L_08A9E734;
    }
L_08A9E734:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 44u);
      if (branch_taken) {
          goto L_08A9E78C;
      }
      goto L_08A9E73C;
    }
L_08A9E73C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 48u);
      if (branch_taken) {
          goto L_08A9E78C;
      }
      goto L_08A9E744;
    }
L_08A9E744:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 50u);
      if (branch_taken) {
          goto L_08A9E78C;
      }
      goto L_08A9E74C;
    }
L_08A9E74C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 52u);
      if (branch_taken) {
          goto L_08A9E78C;
      }
      goto L_08A9E754;
    }
L_08A9E754:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 53u);
      if (branch_taken) {
          goto L_08A9E78C;
      }
      goto L_08A9E75C;
    }
L_08A9E75C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 55u);
      if (branch_taken) {
          goto L_08A9E78C;
      }
      goto L_08A9E764;
    }
L_08A9E764:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 57u);
      if (branch_taken) {
          goto L_08A9E78C;
      }
      goto L_08A9E76C;
    }
L_08A9E76C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 58u);
      if (branch_taken) {
          goto L_08A9E78C;
      }
      goto L_08A9E774;
    }
L_08A9E774:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 62u);
      if (branch_taken) {
          goto L_08A9E78C;
      }
      goto L_08A9E77C;
    }
L_08A9E77C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 64u);
      if (branch_taken) {
          goto L_08A9E78C;
      }
      goto L_08A9E784;
    }
L_08A9E784:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9E794;
      }
      goto L_08A9E78C;
    }
L_08A9E78C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A9E798;
      }
      goto L_08A9E794;
    }
L_08A9E794:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A9E798;
L_08A9E798:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9E7A0:
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 18u);
      if (branch_taken) {
          goto L_08A9E874;
      }
      goto L_08A9E7AC;
    }
L_08A9E7AC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 19u);
      if (branch_taken) {
          goto L_08A9E874;
      }
      goto L_08A9E7B4;
    }
L_08A9E7B4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 20u);
      if (branch_taken) {
          goto L_08A9E874;
      }
      goto L_08A9E7BC;
    }
L_08A9E7BC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 21u);
      if (branch_taken) {
          goto L_08A9E874;
      }
      goto L_08A9E7C4;
    }
L_08A9E7C4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 22u);
      if (branch_taken) {
          goto L_08A9E874;
      }
      goto L_08A9E7CC;
    }
L_08A9E7CC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 23u);
      if (branch_taken) {
          goto L_08A9E874;
      }
      goto L_08A9E7D4;
    }
L_08A9E7D4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 26u);
      if (branch_taken) {
          goto L_08A9E874;
      }
      goto L_08A9E7DC;
    }
L_08A9E7DC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 27u);
      if (branch_taken) {
          goto L_08A9E874;
      }
      goto L_08A9E7E4;
    }
L_08A9E7E4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 30u);
      if (branch_taken) {
          goto L_08A9E874;
      }
      goto L_08A9E7EC;
    }
L_08A9E7EC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 31u);
      if (branch_taken) {
          goto L_08A9E874;
      }
      goto L_08A9E7F4;
    }
L_08A9E7F4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 34u);
      if (branch_taken) {
          goto L_08A9E874;
      }
      goto L_08A9E7FC;
    }
L_08A9E7FC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 35u);
      if (branch_taken) {
          goto L_08A9E874;
      }
      goto L_08A9E804;
    }
L_08A9E804:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 39u);
      if (branch_taken) {
          goto L_08A9E874;
      }
      goto L_08A9E80C;
    }
L_08A9E80C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 45u);
      if (branch_taken) {
          goto L_08A9E874;
      }
      goto L_08A9E814;
    }
L_08A9E814:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 46u);
      if (branch_taken) {
          goto L_08A9E874;
      }
      goto L_08A9E81C;
    }
L_08A9E81C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 47u);
      if (branch_taken) {
          goto L_08A9E874;
      }
      goto L_08A9E824;
    }
L_08A9E824:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 49u);
      if (branch_taken) {
          goto L_08A9E874;
      }
      goto L_08A9E82C;
    }
L_08A9E82C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 51u);
      if (branch_taken) {
          goto L_08A9E874;
      }
      goto L_08A9E834;
    }
L_08A9E834:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 54u);
      if (branch_taken) {
          goto L_08A9E874;
      }
      goto L_08A9E83C;
    }
L_08A9E83C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 56u);
      if (branch_taken) {
          goto L_08A9E874;
      }
      goto L_08A9E844;
    }
L_08A9E844:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 59u);
      if (branch_taken) {
          goto L_08A9E874;
      }
      goto L_08A9E84C;
    }
L_08A9E84C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 60u);
      if (branch_taken) {
          goto L_08A9E874;
      }
      goto L_08A9E854;
    }
L_08A9E854:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 61u);
      if (branch_taken) {
          goto L_08A9E874;
      }
      goto L_08A9E85C;
    }
L_08A9E85C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 63u);
      if (branch_taken) {
          goto L_08A9E874;
      }
      goto L_08A9E864;
    }
L_08A9E864:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 65u);
      if (branch_taken) {
          goto L_08A9E874;
      }
      goto L_08A9E86C;
    }
L_08A9E86C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9E87C;
      }
      goto L_08A9E874;
    }
L_08A9E874:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A9E880;
      }
      goto L_08A9E87C;
    }
L_08A9E87C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A9E880;
L_08A9E880:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9E888:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9E890:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08A9E908u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C075Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9E908u) goto L_08A9E908;
    return;
L_08A9E908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E92C;
      }
      goto L_08A9E914;
    }
L_08A9E914:
    ctx.gpr[31] = (0x08A9E91Cu);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(110)));
    goto L_08A9E948;
L_08A9E91C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E934;
      }
      goto L_08A9E924;
    }
L_08A9E924:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9E938;
      }
      goto L_08A9E92C;
    }
L_08A9E92C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9E938;
      }
      goto L_08A9E934;
    }
L_08A9E934:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08A9E938;
L_08A9E938:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9E948:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9E96C;
      }
      goto L_08A9E958;
    }
L_08A9E958:
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9E974;
      }
      goto L_08A9E964;
    }
L_08A9E964:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A9E978;
      }
      goto L_08A9E96C;
    }
L_08A9E96C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A9E978;
      }
      goto L_08A9E974;
    }
L_08A9E974:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A9E978;
L_08A9E978:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9E980:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5736));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A9EA60;
      }
      goto L_08A9E9D8;
    }
L_08A9E9D8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    goto L_08A9E9E4;
L_08A9E9E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A9EA34;
      }
      goto L_08A9E9F4;
    }
L_08A9E9F4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A9EA00u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 648u, 0x088A7DE0u>(ctx, &aot_mem) && ctx.pc == 0x08A9EA00u) goto L_08A9EA00;
    return;
L_08A9EA00:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EA34;
      }
      goto L_08A9EA0C;
    }
L_08A9EA0C:
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
    ctx.gpr[31] = (0x08A9EA24u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 142u, 0x08A34D58u>(ctx, &aot_mem) && ctx.pc == 0x08A9EA24u) goto L_08A9EA24;
    return;
L_08A9EA24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EA34;
      }
      goto L_08A9EA2C;
    }
L_08A9EA2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9EA64;
      }
      goto L_08A9EA34;
    }
L_08A9EA34:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E9E4;
      }
      goto L_08A9EA60;
    }
L_08A9EA60:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A9EA64;
L_08A9EA64:
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
L_08A9EA88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A9EAD8;
      }
      goto L_08A9EAC0;
    }
L_08A9EAC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16407)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9EAD8;
      }
      goto L_08A9EAD0;
    }
L_08A9EAD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9EC7C;
      }
      goto L_08A9EAD8;
    }
L_08A9EAD8:
    ctx.gpr[18] = (2276u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28216)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28216));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A9EB7C;
      }
      goto L_08A9EAF0;
    }
L_08A9EAF0:
    ctx.gpr[21] = (0u | 65535u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(17));
    goto L_08A9EAF8;
L_08A9EAF8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
        goto L_08A9EB2C;
    }
    goto L_08A9EB08;
L_08A9EB08:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A9EB18u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08A9EB18u) goto L_08A9EB18;
    return;
L_08A9EB18:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    goto L_08A9EB2C;
L_08A9EB2C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A9EB6C;
      }
      goto L_08A9EB34;
    }
L_08A9EB34:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(182)));
        goto L_08A9EB60;
    }
    goto L_08A9EB3C;
L_08A9EB3C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A9EB4Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08A9EB4Cu) goto L_08A9EB4C;
    return;
L_08A9EB4C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(182)));
    goto L_08A9EB60;
L_08A9EB60:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EB6C;
      }
      goto L_08A9EB68;
    }
L_08A9EB68:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A9EB6C;
L_08A9EB6C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A9EAF8;
      }
      goto L_08A9EB7C;
    }
L_08A9EB7C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A9EC04;
      }
      goto L_08A9EB98;
    }
L_08A9EB98:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3248));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[21] = (ctx.lo);
    goto L_08A9EBA4;
L_08A9EBA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08A9EBC4;
    }
    goto L_08A9EBBC;
L_08A9EBBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9EBC8;
      }
      goto L_08A9EBC4;
    }
L_08A9EBC4:
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[21]);
    goto L_08A9EBC8;
L_08A9EBC8:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EBF0;
      }
      goto L_08A9EBD0;
    }
L_08A9EBD0:
    ctx.gpr[31] = (0x08A9EBD8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x08A9EBD8u) goto L_08A9EBD8;
    return;
L_08A9EBD8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EBF0;
      }
      goto L_08A9EBE0;
    }
L_08A9EBE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EBF0;
      }
      goto L_08A9EBEC;
    }
L_08A9EBEC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A9EBF0;
L_08A9EBF0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-3248));
      if (branch_taken) {
          goto L_08A9EBA4;
      }
      goto L_08A9EC04;
    }
L_08A9EC04:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[16]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EC70;
      }
      goto L_08A9EC14;
    }
L_08A9EC14:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EC68;
      }
      goto L_08A9EC20;
    }
L_08A9EC20:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (0u | 15u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EC78;
      }
      goto L_08A9EC60;
    }
L_08A9EC60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9EC7C;
      }
      goto L_08A9EC68;
    }
L_08A9EC68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9EC7C;
      }
      goto L_08A9EC70;
    }
L_08A9EC70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9EC7C;
      }
      goto L_08A9EC78;
    }
L_08A9EC78:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A9EC7C;
L_08A9EC7C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9ECA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(23) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9EE74;
      }
      goto L_08A9ECB8;
    }
L_08A9ECB8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EE60;
      }
      goto L_08A9ECC0;
    }
L_08A9ECC0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-19952)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9ECD8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6104)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6104), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9ECF0;
    }
L_08A9ECF0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6100)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6100), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9ED08;
    }
L_08A9ED08:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6096)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6096), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9ED20;
    }
L_08A9ED20:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6092)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6092), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9ED38;
    }
L_08A9ED38:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6088)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6088), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9ED50;
    }
L_08A9ED50:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6084)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6084), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9ED68;
    }
L_08A9ED68:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6080)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6080), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9ED80;
    }
L_08A9ED80:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6076)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6076), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9ED98;
    }
L_08A9ED98:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6072)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6072), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9EDB0;
    }
L_08A9EDB0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6068)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6068), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9EDC8;
    }
L_08A9EDC8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6064)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6064), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9EDE0;
    }
L_08A9EDE0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6060)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6060), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9EDF8;
    }
L_08A9EDF8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6056)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6056), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9EE10;
    }
L_08A9EE10:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6104)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6104), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9EE28;
    }
L_08A9EE28:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6100)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6100), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9EE40;
    }
L_08A9EE40:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6052)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6052), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9EE58;
    }
L_08A9EE58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9EE60;
    }
L_08A9EE60:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A9EE6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20088));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 541u, 0x08AFA638u>(ctx, &aot_mem) && ctx.pc == 0x08A9EE6Cu) goto L_08A9EE6C;
    return;
L_08A9EE6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9EE74;
    }
L_08A9EE74:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F01C;
      }
      goto L_08A9EE7C;
    }
L_08A9EE7C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-19856)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9EE94:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6104)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6104), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9EEAC;
    }
L_08A9EEAC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6100)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6100), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9EEC4;
    }
L_08A9EEC4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6096)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6096), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9EEDC;
    }
L_08A9EEDC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6092)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6092), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9EEF4;
    }
L_08A9EEF4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6088)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6088), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9EF0C;
    }
L_08A9EF0C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6084)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6084), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9EF24;
    }
L_08A9EF24:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6080)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6080), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9EF3C;
    }
L_08A9EF3C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6076)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6076), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9EF54;
    }
L_08A9EF54:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6072)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6072), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9EF6C;
    }
L_08A9EF6C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6068)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6068), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9EF84;
    }
L_08A9EF84:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6064)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6064), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9EF9C;
    }
L_08A9EF9C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6060)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6060), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9EFB4;
    }
L_08A9EFB4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6056)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6056), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9EFCC;
    }
L_08A9EFCC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6104)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6104), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9EFE4;
    }
L_08A9EFE4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6100)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6100), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9EFFC;
    }
L_08A9EFFC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6052)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6052), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9F014;
    }
L_08A9F014:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F028;
      }
      goto L_08A9F01C;
    }
L_08A9F01C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A9F028u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20088));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 541u, 0x08AFA638u>(ctx, &aot_mem) && ctx.pc == 0x08A9F028u) goto L_08A9F028;
    return;
L_08A9F028:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9F034:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9F03C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9F054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A9F054u) goto L_08A9F054;
    return;
L_08A9F054:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F0EC;
      }
      goto L_08A9F05C;
    }
L_08A9F05C:
    ctx.gpr[31] = (0x08A9F064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A9F064u) goto L_08A9F064;
    return;
L_08A9F064:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A9F070u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A9F070u) goto L_08A9F070;
    return;
L_08A9F070:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A9F080u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A9F080u) goto L_08A9F080;
    return;
L_08A9F080:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A9F08Cu);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A9F08Cu) goto L_08A9F08C;
    return;
L_08A9F08C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A9F0CC;
    }
    goto L_08A9F0CC;
L_08A9F0CC:
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A9F0E4;
    }
    goto L_08A9F0E4;
L_08A9F0E4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A9F0F4;
      }
      goto L_08A9F0EC;
    }
L_08A9F0EC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A9F0F4;
L_08A9F0F4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9F108:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9F110:
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 18u);
      if (branch_taken) {
          goto L_08A9F134;
      }
      goto L_08A9F11C;
    }
L_08A9F11C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 19u);
      if (branch_taken) {
          goto L_08A9F134;
      }
      goto L_08A9F124;
    }
L_08A9F124:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 47u);
      if (branch_taken) {
          goto L_08A9F134;
      }
      goto L_08A9F12C;
    }
L_08A9F12C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9F13C;
      }
      goto L_08A9F134;
    }
L_08A9F134:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A9F140;
      }
      goto L_08A9F13C;
    }
L_08A9F13C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A9F140;
L_08A9F140:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9F148:
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 23u);
      if (branch_taken) {
          goto L_08A9F15C;
      }
      goto L_08A9F154;
    }
L_08A9F154:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9F164;
      }
      goto L_08A9F15C;
    }
L_08A9F15C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A9F168;
      }
      goto L_08A9F164;
    }
L_08A9F164:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A9F168;
L_08A9F168:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9F170:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9F178:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-480));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), ctx.gpr[31]);
    ctx.gpr[21] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(27452)));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08A9F1E8;
      }
      goto L_08A9F1D8;
    }
L_08A9F1D8:
    ctx.gpr[31] = (0x08A9F1E0u);
    // nop
    goto L_08A9EA88;
L_08A9F1E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F280;
      }
      goto L_08A9F1E8;
    }
L_08A9F1E8:
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08A9F234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 199u, 0x089D599Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F234u) goto L_08A9F234;
    return;
L_08A9F234:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[31] = (0x08A9F250u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 391u, 0x088724E0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F250u) goto L_08A9F250;
    return;
L_08A9F250:
    ctx.gpr[31] = (0x08A9F258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F258u) goto L_08A9F258;
    return;
L_08A9F258:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[23] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(400), static_cast<std::uint8_t>(ctx.gpr[20]));
      if (branch_taken) {
          goto L_08A9F288;
      }
      goto L_08A9F278;
    }
L_08A9F278:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F414;
      }
      goto L_08A9F280;
    }
L_08A9F280:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 47u, 0x08AA0258u>(ctx, &aot_mem); return;
      }
      goto L_08A9F288;
    }
L_08A9F288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-29520)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F2C0;
      }
      goto L_08A9F294;
    }
L_08A9F294:
    ctx.gpr[31] = (0x08A9F29Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A9F29Cu) goto L_08A9F29C;
    return;
L_08A9F29C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F2C0;
      }
      goto L_08A9F2AC;
    }
L_08A9F2AC:
    ctx.gpr[31] = (0x08A9F2B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A9F2B4u) goto L_08A9F2B4;
    return;
L_08A9F2B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F2C0;
      }
      goto L_08A9F2BC;
    }
L_08A9F2BC:
    ctx.gpr[20] = (0u | 1u);
    goto L_08A9F2C0;
L_08A9F2C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-29520)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F2D8;
      }
      goto L_08A9F2CC;
    }
L_08A9F2CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2089)));
      if (branch_taken) {
          goto L_08A9F304;
      }
      goto L_08A9F2D8;
    }
L_08A9F2D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2089)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16332u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A9F304;
L_08A9F304:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6096)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F320;
      }
      goto L_08A9F318;
    }
L_08A9F318:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(400), static_cast<std::uint8_t>(ctx.gpr[20]));
      if (branch_taken) {
          goto L_08A9F414;
      }
      goto L_08A9F320;
    }
L_08A9F320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F3E0;
      }
      goto L_08A9F330;
    }
L_08A9F330:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(400), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2090)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17452)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F3E8;
      }
      goto L_08A9F350;
    }
L_08A9F350:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(400), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17456)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(324)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[6] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17460)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] * lcs::spawn_count_scale();
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9F3E8;
      }
      goto L_08A9F38C;
    }
L_08A9F38C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(400), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17456)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17452)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17448)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17444)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17436)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17432)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17404)));
    ctx.gpr[5] = static_cast<std::uint32_t>(lcs::scale_spawn_count(static_cast<std::int32_t>(ctx.gpr[5])));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F3E8;
      }
      goto L_08A9F3E0;
    }
L_08A9F3E0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(400), static_cast<std::uint8_t>(ctx.gpr[20]));
      if (branch_taken) {
          goto L_08A9F414;
      }
      goto L_08A9F3E8;
    }
L_08A9F3E8:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[31] = (0x08A9F3F4u);
    // nop
    goto L_08A9F03C;
L_08A9F3F4:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.gpr[31] = (0x08A9F408u);
    // nop
    goto L_08A9F03C;
L_08A9F408:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    goto L_08A9F414;
L_08A9F414:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8088)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-7256)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-7256)));
        goto L_08A9F438;
    }
    goto L_08A9F430;
L_08A9F430:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8088)));
      if (branch_taken) {
          goto L_08A9F438;
      }
      goto L_08A9F438;
    }
L_08A9F438:
    ctx.fpr[12] = std::sqrt(ctx.fpr[24]);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[20] + ctx.fpr[24];
    ctx.gpr[31] = (0x08A9F45Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 33u, 0x08958280u>(ctx, &aot_mem) && ctx.pc == 0x08A9F45Cu) goto L_08A9F45C;
    return;
L_08A9F45C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F4C0;
      }
      goto L_08A9F464;
    }
L_08A9F464:
    ctx.gpr[31] = (0x08A9F46Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F46Cu) goto L_08A9F46C;
    return;
L_08A9F46C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F4C0;
      }
      goto L_08A9F478;
    }
L_08A9F478:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F4C0;
      }
      goto L_08A9F484;
    }
L_08A9F484:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F4C0;
      }
      goto L_08A9F490;
    }
L_08A9F490:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 151u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 166u);
      if (branch_taken) {
          goto L_08A9F4BC;
      }
      goto L_08A9F4A4;
    }
L_08A9F4A4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 181u);
      if (branch_taken) {
          goto L_08A9F4BC;
      }
      goto L_08A9F4AC;
    }
L_08A9F4AC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-967));
      if (branch_taken) {
          goto L_08A9F4BC;
      }
      goto L_08A9F4B4;
    }
L_08A9F4B4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9F4C0;
      }
      goto L_08A9F4BC;
    }
L_08A9F4BC:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A9F4C0;
L_08A9F4C0:
    ctx.gpr[31] = (0x08A9F4C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 83u, 0x0891857Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F4C8u) goto L_08A9F4C8;
    return;
L_08A9F4C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F4D4;
      }
      goto L_08A9F4D0;
    }
L_08A9F4D0:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A9F4D4;
L_08A9F4D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-29520)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F4F4;
      }
      goto L_08A9F4E0;
    }
L_08A9F4E0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25820)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
      if (branch_taken) {
          goto L_08A9F504;
      }
      goto L_08A9F4F4;
    }
L_08A9F4F4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25824)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    goto L_08A9F504;
L_08A9F504:
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31084)));
    ctx.gpr[31] = (0x08A9F514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 83u, 0x0891857Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F514u) goto L_08A9F514;
    return;
L_08A9F514:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_08A9F520;
      }
      goto L_08A9F51C;
    }
L_08A9F51C:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A9F520;
L_08A9F520:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(328)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25808)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    // Demand and cap together. A higher cap alone does nothing where the zone is the limit.
    ctx.fpr[12] = ctx.fpr[12] * lcs::spawn_count_scale();
    ctx.fpr[22] = ctx.fpr[22] * lcs::spawn_count_scale();
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_08A9F560;
    }
    goto L_08A9F560;
L_08A9F560:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6040)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F584;
      }
      goto L_08A9F57C;
    }
L_08A9F57C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 46u, 0x08AA0254u>(ctx, &aot_mem); return;
      }
      goto L_08A9F584;
    }
L_08A9F584:
    ctx.gpr[31] = (0x08A9F58Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A9F58Cu) goto L_08A9F58C;
    return;
L_08A9F58C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25876)));
    ctx.gpr[31] = (0x08A9F5A4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25872)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F5A4u) goto L_08A9F5A4;
    return;
L_08A9F5A4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(27452)));
        goto L_08A9F5D8;
    }
    goto L_08A9F5CC;
L_08A9F5CC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F5F4;
      }
      goto L_08A9F5D4;
    }
L_08A9F5D4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(27452)));
    goto L_08A9F5D8;
L_08A9F5D8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F5F4;
      }
      goto L_08A9F5E0;
    }
L_08A9F5E0:
    ctx.gpr[17] = (0u | 6u);
    ctx.gpr[31] = (0x08A9F5ECu);
    // nop
    goto L_08A9E000;
L_08A9F5EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A9F7A4;
      }
      goto L_08A9F5F4;
    }
L_08A9F5F4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_08A9F5FC;
L_08A9F5FC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(158)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F668;
      }
      goto L_08A9F60C;
    }
L_08A9F60C:
    ctx.gpr[31] = (0x08A9F614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A9F614u) goto L_08A9F614;
    return;
L_08A9F614:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25860)));
    ctx.gpr[31] = (0x08A9F62Cu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25856)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F62Cu) goto L_08A9F62C;
    return;
L_08A9F62C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F65C;
      }
      goto L_08A9F648;
    }
L_08A9F648:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(7));
    ctx.gpr[31] = (0x08A9F654u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A9E888;
L_08A9F654:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A9F660;
      }
      goto L_08A9F65C;
    }
L_08A9F65C:
    ctx.gpr[16] = (0u | 9u);
    goto L_08A9F660;
L_08A9F660:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F678;
      }
      goto L_08A9F668;
    }
L_08A9F668:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A9F5FC;
      }
      goto L_08A9F678;
    }
L_08A9F678:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A9F68C;
      }
      goto L_08A9F684;
    }
L_08A9F684:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F7A4;
      }
      goto L_08A9F68C;
    }
L_08A9F68C:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F73C;
      }
      goto L_08A9F694;
    }
L_08A9F694:
    ctx.gpr[31] = (0x08A9F69Cu);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08A9F69Cu) goto L_08A9F69C;
    return;
L_08A9F69C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (16243u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9F73C;
      }
      goto L_08A9F6CC;
    }
L_08A9F6CC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(178)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A9F6DCu);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    goto L_08A9E43C;
L_08A9F6DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A9F714;
      }
      goto L_08A9F6E8;
    }
L_08A9F6E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A9F714;
      }
      goto L_08A9F6F4;
    }
L_08A9F6F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9F71C;
      }
      goto L_08A9F70C;
    }
L_08A9F70C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F734;
      }
      goto L_08A9F714;
    }
L_08A9F714:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 47u, 0x08AA0258u>(ctx, &aot_mem); return;
      }
      goto L_08A9F71C;
    }
L_08A9F71C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A9F734;
L_08A9F734:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08A9F7A4;
      }
      goto L_08A9F73C;
    }
L_08A9F73C:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F754;
      }
      goto L_08A9F744;
    }
L_08A9F744:
    ctx.gpr[31] = (0x08A9F74Cu);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-7));
    goto L_08A9E374;
L_08A9F74C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A9F760;
      }
      goto L_08A9F754;
    }
L_08A9F754:
    ctx.gpr[31] = (0x08A9F75Cu);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(178)));
    goto L_08A9E020;
L_08A9F75C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08A9F760;
L_08A9F760:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A9F784;
      }
      goto L_08A9F768;
    }
L_08A9F768:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9F78C;
      }
      goto L_08A9F77C;
    }
L_08A9F77C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08A9F7A4;
      }
      goto L_08A9F784;
    }
L_08A9F784:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 47u, 0x08AA0258u>(ctx, &aot_mem); return;
      }
      goto L_08A9F78C;
    }
L_08A9F78C:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    goto L_08A9F7A4;
L_08A9F7A4:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A9F7BC;
      }
      goto L_08A9F7AC;
    }
L_08A9F7AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25812)));
    if (static_cast<std::int32_t>(ctx.gpr[5]) <= 0) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[17]);
        goto L_08A9F7C0;
    }
    goto L_08A9F7B8;
L_08A9F7B8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25812)));
    goto L_08A9F7BC;
L_08A9F7BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[17]);
    goto L_08A9F7C0;
L_08A9F7C0:
    ctx.gpr[23] = (static_cast<std::int32_t>(ctx.gpr[17]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[23] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9F81C;
      }
      goto L_08A9F7CC;
    }
L_08A9F7CC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A9F81C;
      }
      goto L_08A9F7D4;
    }
L_08A9F7D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F808;
      }
      goto L_08A9F7E0;
    }
L_08A9F7E0:
    ctx.gpr[21] = (2228u << 16u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
      if (branch_taken) {
          goto L_08A9F810;
      }
      goto L_08A9F7F8;
    }
L_08A9F7F8:
    ctx.gpr[31] = (0x08A9F800u);
    // nop
    goto L_08A9E300;
L_08A9F800:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A9F838;
      }
      goto L_08A9F808;
    }
L_08A9F808:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 47u, 0x08AA0258u>(ctx, &aot_mem); return;
      }
      goto L_08A9F810;
    }
L_08A9F810:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A9F838;
      }
      goto L_08A9F81C;
    }
L_08A9F81C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[21] = (2228u << 16u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    goto L_08A9F838;
L_08A9F838:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F8A4;
      }
      goto L_08A9F850;
    }
L_08A9F850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F8A4;
      }
      goto L_08A9F860;
    }
L_08A9F860:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F8A4;
      }
      goto L_08A9F868;
    }
L_08A9F868:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17008u << 16u);
    ctx.gpr[31] = (0x08A9F87Cu);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08A9F87Cu) goto L_08A9F87C;
    return;
L_08A9F87C:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[28];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[31] = (0x08A9F894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08A9F894u) goto L_08A9F894;
    return;
L_08A9F894:
    ctx.fpr[13] = ctx.fpr[30] - ctx.fpr[28];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[28] + ctx.fpr[13];
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[13];
    goto L_08A9F8A4;
L_08A9F8A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-26868)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9F8D8u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 171u, 0x089795D4u>(ctx, &aot_mem) && ctx.pc == 0x08A9F8D8u) goto L_08A9F8D8;
    return;
L_08A9F8D8:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 46u, 0x08AA0254u>(ctx, &aot_mem); return;
      }
      goto L_08A9F8E4;
    }
L_08A9F8E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[16] = (ctx.gpr[16] & 15u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
        goto L_08A9F930;
    }
    goto L_08A9F930;
L_08A9F930:
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    ctx.gpr[4] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A9F950;
      }
      goto L_08A9F940;
    }
L_08A9F940:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20028));
    ctx.gpr[31] = (0x08A9F950u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A9D100;
L_08A9F950:
    ctx.gpr[31] = (0x08A9F958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A9F958u) goto L_08A9F958;
    return;
L_08A9F958:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 46u, 0x08AA0254u>(ctx, &aot_mem); return;
      }
      goto L_08A9F96C;
    }
L_08A9F96C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08A9F9A0u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A9F9A0u) goto L_08A9F9A0;
    return;
L_08A9F9A0:
    ctx.gpr[6] = (ctx.gpr[2] & 65535u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A9F9B8u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 727u, 0x08977B48u>(ctx, &aot_mem) && ctx.pc == 0x08A9F9B8u) goto L_08A9F9B8;
    return;
L_08A9F9B8:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F9EC;
      }
      goto L_08A9F9C0;
    }
L_08A9F9C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F9EC;
      }
      goto L_08A9F9D0;
    }
L_08A9F9D0:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F9EC;
      }
      goto L_08A9F9D8;
    }
L_08A9F9D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[31] = (0x08A9F9E4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08A9E394;
L_08A9F9E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 46u, 0x08AA0254u>(ctx, &aot_mem); return;
      }
      goto L_08A9F9EC;
    }
L_08A9F9EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A9FA28;
      }
      goto L_08A9FA00;
    }
L_08A9FA00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x08A9FA20u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 598u, 0x08AA2C48u>(ctx, &aot_mem) && ctx.pc == 0x08A9FA20u) goto L_08A9FA20;
    return;
L_08A9FA20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 46u, 0x08AA0254u>(ctx, &aot_mem); return;
      }
      goto L_08A9FA28;
    }
L_08A9FA28:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[16] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 46u, 0x08AA0254u>(ctx, &aot_mem); return;
      }
      goto L_08A9FA3C;
    }
L_08A9FA3C:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (16179u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[4]);
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (2269u << 16u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-720));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[4]);
    goto L_08A9FA78;
L_08A9FA78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A9FC40;
      }
      goto L_08A9FA88;
    }
L_08A9FA88:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FAD0;
      }
      goto L_08A9FA90;
    }
L_08A9FA90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FAC8;
      }
      goto L_08A9FAAC;
    }
L_08A9FAAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[30];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FC8C;
      }
      goto L_08A9FAC0;
    }
L_08A9FAC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A9FD38;
      }
      goto L_08A9FAC8;
    }
L_08A9FAC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 47u, 0x08AA0258u>(ctx, &aot_mem); return;
      }
      goto L_08A9FAD0;
    }
L_08A9FAD0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A9FB38;
      }
      goto L_08A9FADC;
    }
L_08A9FADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FB30;
      }
      goto L_08A9FAF8;
    }
L_08A9FAF8:
    ctx.gpr[31] = (0x08A9FB00u);
    ctx.gpr[4] = (0u | 25u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FB00u) goto L_08A9FB00;
    return;
L_08A9FB00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FAAC;
      }
      goto L_08A9FB30;
    }
L_08A9FB30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 47u, 0x08AA0258u>(ctx, &aot_mem); return;
      }
      goto L_08A9FB38;
    }
L_08A9FB38:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A9FBA0;
      }
      goto L_08A9FB44;
    }
L_08A9FB44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FB98;
      }
      goto L_08A9FB60;
    }
L_08A9FB60:
    ctx.gpr[31] = (0x08A9FB68u);
    ctx.gpr[4] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FB68u) goto L_08A9FB68;
    return;
L_08A9FB68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FAAC;
      }
      goto L_08A9FB98;
    }
L_08A9FB98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 47u, 0x08AA0258u>(ctx, &aot_mem); return;
      }
      goto L_08A9FBA0;
    }
L_08A9FBA0:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A9FAAC;
      }
      goto L_08A9FBAC;
    }
L_08A9FBAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FC38;
      }
      goto L_08A9FBC8;
    }
L_08A9FBC8:
    ctx.gpr[31] = (0x08A9FBD0u);
    ctx.gpr[4] = (0u | 25u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FBD0u) goto L_08A9FBD0;
    return;
L_08A9FBD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FC38;
      }
      goto L_08A9FC00;
    }
L_08A9FC00:
    ctx.gpr[31] = (0x08A9FC08u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FC08u) goto L_08A9FC08;
    return;
L_08A9FC08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FAAC;
      }
      goto L_08A9FC38;
    }
L_08A9FC38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 47u, 0x08AA0258u>(ctx, &aot_mem); return;
      }
      goto L_08A9FC40;
    }
L_08A9FC40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9FC64;
      }
      goto L_08A9FC50;
    }
L_08A9FC50:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A9FC64;
L_08A9FC64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A9FC7Cu);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A9FC7Cu) goto L_08A9FC7C;
    return;
L_08A9FC7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FAAC;
      }
      goto L_08A9FC84;
    }
L_08A9FC84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 47u, 0x08AA0258u>(ctx, &aot_mem); return;
      }
      goto L_08A9FC8C;
    }
L_08A9FC8C:
    ctx.gpr[31] = (0x08A9FC94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A9FC94u) goto L_08A9FC94;
    return;
L_08A9FC94:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A9FD38;
      }
      goto L_08A9FC9C;
    }
L_08A9FC9C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08A9FCC0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08A9FCC0u) goto L_08A9FCC0;
    return;
L_08A9FCC0:
    ctx.fpr[14] = ctx.fpr[26] - ctx.fpr[20];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[20] + ctx.fpr[22];
    ctx.gpr[31] = (0x08A9FCD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08A9FCD4u) goto L_08A9FCD4;
    return;
L_08A9FCD4:
    ctx.fpr[13] = ctx.fpr[26] - ctx.fpr[20];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x08A9FCE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A9FCE8u) goto L_08A9FCE8;
    return;
L_08A9FCE8:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
      if (branch_taken) {
          goto L_08A9FCFC;
      }
      goto L_08A9FCF8;
    }
L_08A9FCF8:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    goto L_08A9FCFC;
L_08A9FCFC:
    ctx.gpr[31] = (0x08A9FD04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A9FD04u) goto L_08A9FD04;
    return;
L_08A9FD04:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FD18;
      }
      goto L_08A9FD14;
    }
L_08A9FD14:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    goto L_08A9FD18;
L_08A9FD18:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2229u << 16u);
    goto L_08A9FD38;
L_08A9FD38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FD54;
      }
      goto L_08A9FD44;
    }
L_08A9FD44:
    ctx.gpr[31] = (0x08A9FD4Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A9E980;
L_08A9FD4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FD7C;
      }
      goto L_08A9FD54;
    }
L_08A9FD54:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A9FD6Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 422u, 0x088A6CD4u>(ctx, &aot_mem) && ctx.pc == 0x08A9FD6Cu) goto L_08A9FD6C;
    return;
L_08A9FD6C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FD84;
      }
      goto L_08A9FD74;
    }
L_08A9FD74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 47u, 0x08AA0258u>(ctx, &aot_mem); return;
      }
      goto L_08A9FD7C;
    }
L_08A9FD7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 47u, 0x08AA0258u>(ctx, &aot_mem); return;
      }
      goto L_08A9FD84;
    }
L_08A9FD84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[23] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08A9FDEC;
      }
      goto L_08A9FD98;
    }
L_08A9FD98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[26];
    ctx.gpr[31] = (0x08A9FDB0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2F78u>(ctx, &aot_mem) && ctx.pc == 0x08A9FDB0u) goto L_08A9FDB0;
    return;
L_08A9FDB0:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[30];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FDDC;
      }
      goto L_08A9FDC0;
    }
L_08A9FDC0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
        goto L_08A9FDE4;
    }
    goto L_08A9FDD4;
L_08A9FDD4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A9FDE8;
      }
      goto L_08A9FDDC;
    }
L_08A9FDDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 47u, 0x08AA0258u>(ctx, &aot_mem); return;
      }
      goto L_08A9FDE4;
    }
L_08A9FDE4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A9FDE8;
L_08A9FDE8:
    ctx.gpr[16] = (0u | 1u);
    goto L_08A9FDEC;
L_08A9FDEC:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_08A9FE28;
      }
      goto L_08A9FE20;
    }
L_08A9FE20:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A9FE28;
L_08A9FE28:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FE84;
      }
      goto L_08A9FE30;
    }
L_08A9FE30:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A9FE64u);
    // nop
    goto L_08A9F03C;
L_08A9FE64:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9FE84;
      }
      goto L_08A9FE80;
    }
L_08A9FE80:
    ctx.gpr[16] = (0u | 0u);
    goto L_08A9FE84;
L_08A9FE84:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9FEAC;
      }
      goto L_08A9FE98;
    }
L_08A9FE98:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A9FEAC;
L_08A9FEAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9FEC8;
      }
      goto L_08A9FEBC;
    }
L_08A9FEBC:
    ctx.gpr[31] = (0x08A9FEC4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A9E890;
L_08A9FEC4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08A9FEC8;
L_08A9FEC8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 44u, 0x08AA0238u>(ctx, &aot_mem); return;
      }
      goto L_08A9FED0;
    }
L_08A9FED0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A9FEE8u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 129u, 0x08AA0804u>(ctx, &aot_mem) && ctx.pc == 0x08A9FEE8u) goto L_08A9FEE8;
    return;
L_08A9FEE8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FF0C;
      }
      goto L_08A9FEF8;
    }
L_08A9FEF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A9FF0C;
      }
      goto L_08A9FF08;
    }
L_08A9FF08:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2088), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A9FF0C;
L_08A9FF0C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08A9FF18u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08A9F108;
L_08A9FF18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 8u, 0x08AA0054u>(ctx, &aot_mem); return;
      }
      goto L_08A9FF20;
    }
L_08A9FF20:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08A9FF7Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C075Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FF7Cu) goto L_08A9FF7C;
    return;
L_08A9FF7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 8u, 0x08AA0054u>(ctx, &aot_mem); return;
      }
      goto L_08A9FF88;
    }
L_08A9FF88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(334)));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A9FFAC;
      }
      goto L_08A9FF98;
    }
L_08A9FF98:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(334)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 8u, 0x08AA0054u>(ctx, &aot_mem); return;
      }
      goto L_08A9FFA8;
    }
L_08A9FFA8:
    ctx.gpr[6] = (2230u << 16u);
    goto L_08A9FFAC;
L_08A9FFAC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-8048)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 8u, 0x08AA0054u>(ctx, &aot_mem); return;
      }
      goto L_08A9FFBC;
    }
L_08A9FFBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-8048)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 19 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 8u, 0x08AA0054u>(ctx, &aot_mem); return;
      }
      goto L_08A9FFCC;
    }
L_08A9FFCC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8088)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[24])) && ctx.fpr[12] == ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 8u, 0x08AA0054u>(ctx, &aot_mem); return;
      }
      goto L_08A9FFE0;
    }
L_08A9FFE0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7256)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[24])) && ctx.fpr[12] == ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 8u, 0x08AA0054u>(ctx, &aot_mem); return;
      }
      goto L_08A9FFF4;
    }
L_08A9FFF4:
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.pc = 0x08AA0000u; return;
}

void recomp_unit_0166(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0166_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_166(Runtime &runtime) {
    runtime.register_generated_unit(166u, 0x08A9C000u, 16384u, &recomp_unit_0166, &recomp_unit_0166_entry);
    runtime.register_function(0x08A9C000u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C038u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C040u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C04Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C074u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C080u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C094u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C0A8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C0C0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C0C8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C0D0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C0D8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C0F0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C100u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C110u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C128u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C13Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C15Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C164u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C16Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C190u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C1A0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C1ACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C1BCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C1C8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C1F4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C208u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C264u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C29Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C2ACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C2B8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C2C8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C2FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C320u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C328u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C34Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C374u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C398u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C3A4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C3B4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C3C0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C3C8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C3D4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C3E0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C3F0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C3FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C40Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C418u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C420u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C42Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C438u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C444u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C460u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C468u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C47Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C498u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C4A0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C4ACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C4BCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C4C4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C4D8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C4E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C4E8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C4FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C52Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C56Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C570u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C5B8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C5D4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C5D8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C628u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C630u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C644u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C668u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C678u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C688u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C690u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C69Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C6ACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C6B8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C6C0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C6C8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C6D4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C6DCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C6E0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C6E8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C6F8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C700u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C720u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C740u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C74Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C758u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C768u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C770u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C77Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C788u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C794u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C7A8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C7B4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C7B8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C7D0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C7E0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C7F0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C7F8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C7FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C814u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C81Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C838u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C840u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C848u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C858u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C864u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C874u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C87Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C88Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C894u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C89Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C8B8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C8CCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C8DCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C8E8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C8F8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C900u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C910u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C914u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C918u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C924u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C934u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C93Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C94Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C950u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C95Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C964u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C970u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C974u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C97Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C9B4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C9BCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C9CCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C9ECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CA04u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CA18u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CA2Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CA38u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CA44u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CA58u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CA60u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CA74u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CA78u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CA8Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CA90u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CAA4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CAACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CAC4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CAE4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CAF8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CB1Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CB24u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CB30u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CB44u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CB5Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CB74u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CB90u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CB94u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CBE0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CBECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CC0Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CC14u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CC24u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CC2Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CC3Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CC48u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CC54u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CC6Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CC80u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CC84u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CCB8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CCC4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CCE4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CCECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CCF4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CCFCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CD0Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CD18u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CD2Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CD3Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CD40u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CD4Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CD60u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CD6Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CD70u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CD98u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CDA4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CDACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CDB4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CDC0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CDCCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CDF0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CDFCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CE14u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CE28u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CE38u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CE3Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CE48u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CE50u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CE5Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CE60u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CE68u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CE74u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CEACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CEB4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CEC4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CEE4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CEFCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CF10u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CF1Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CF30u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CF40u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CF60u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CF78u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CF98u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CF9Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CFE4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D0E0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D0ECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D100u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D12Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D154u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D168u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D23Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D248u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D26Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D274u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D27Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D284u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D294u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D2A8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D2B0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D2B8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D38Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D394u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D39Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D3BCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D3D4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D3F0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D404u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D424u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D42Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D434u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D4A8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D4B0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D4BCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D4C4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D4F8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D514u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D51Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D53Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D54Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D560u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D568u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D570u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D574u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D580u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D598u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D5D8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D5E8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D5F8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D600u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D608u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D618u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D620u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D630u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D63Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D654u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D65Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D660u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D668u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D694u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D6B0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D6D4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D6F4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D6FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D704u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D710u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D718u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D720u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D728u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D730u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D740u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D788u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D790u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D798u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D7A0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D7ACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D7B0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D7E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D7FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D804u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D820u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D830u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D8A0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D94Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D954u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D968u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D980u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D9BCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DA04u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DA14u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DA20u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DA40u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DA5Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DA74u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DA7Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DA80u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DA8Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DA94u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DA9Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DAD4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DADCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DAF0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DAF8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DB00u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DB08u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DB24u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DB58u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DB8Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DB9Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DBB8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DBC0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DBC4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DBCCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DBD4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DBDCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DBE4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DBF8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC18u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC38u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC40u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC4Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC58u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC60u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC68u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC70u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC74u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC7Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC84u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC8Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DCA8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DCB0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DCC4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DCD8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DCE8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DCF8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DD00u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DD0Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DD1Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DD24u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DD2Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DD40u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DD54u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DD6Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DD84u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DD9Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DDECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DE04u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DE28u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DE34u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DE3Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DE40u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DE4Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DE54u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DE5Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DE74u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DE88u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DE98u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DEA0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DEA8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DEACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DEBCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DEC8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DED0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DED8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DEE0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DEF4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DF0Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DF20u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DF28u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DF30u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DF4Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DF54u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DF6Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DFD8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DFE4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DFECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DFF0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E000u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E010u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E020u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E044u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E068u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E070u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E078u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E080u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E0A0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E0A8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E0B0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E0B8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E0C0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E0D8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E11Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E128u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E130u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E138u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E150u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E188u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E1A0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E1C4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E1E8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E1F0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E1F8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E200u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E220u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E228u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E230u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E238u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E254u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E25Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E28Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E298u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E2A0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E2BCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E2C4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E2E8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E300u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E318u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E338u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E374u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E388u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E394u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E3CCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E3F4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E404u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E40Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E41Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E43Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E4A4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E4ACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E4B4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E4C8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E4DCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E508u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E510u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E518u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E528u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E538u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E544u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E548u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E554u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E55Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E570u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E578u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E598u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E5A0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E5B0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E5C0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E5CCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E5DCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E5ECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E5F4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E604u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E610u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E618u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E624u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E630u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E638u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E640u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E64Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E654u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E660u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E670u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E6A0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E6ACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E6B4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E6BCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E6C4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E6CCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E6D4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E6DCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E6E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E6ECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E6F4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E6FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E704u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E70Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E714u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E71Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E724u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E72Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E734u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E73Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E744u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E74Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E754u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E75Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E764u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E76Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E774u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E77Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E784u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E78Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E794u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E798u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E7A0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E7ACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E7B4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E7BCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E7C4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E7CCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E7D4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E7DCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E7E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E7ECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E7F4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E7FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E804u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E80Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E814u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E81Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E824u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E82Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E834u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E83Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E844u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E84Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E854u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E85Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E864u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E86Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E874u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E87Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E880u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E888u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E890u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E908u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E914u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E91Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E924u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E92Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E934u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E938u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E948u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E958u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E964u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E96Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E974u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E978u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E980u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E9D8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E9E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E9F4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EA00u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EA0Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EA24u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EA2Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EA34u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EA60u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EA64u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EA88u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EAC0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EAD0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EAD8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EAF0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EAF8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB08u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB18u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB2Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB34u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB3Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB4Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB60u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB68u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB6Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB7Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB98u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EBA4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EBBCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EBC4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EBC8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EBD0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EBD8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EBE0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EBECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EBF0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EC04u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EC14u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EC20u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EC60u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EC68u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EC70u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EC78u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EC7Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ECA4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ECB8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ECC0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ECD8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ECF0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ED08u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ED20u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ED38u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ED50u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ED68u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ED80u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ED98u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EDB0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EDC8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EDE0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EDF8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EE10u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EE28u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EE40u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EE58u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EE60u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EE6Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EE74u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EE7Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EE94u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EEACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EEC4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EEDCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EEF4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EF0Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EF24u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EF3Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EF54u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EF6Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EF84u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EF9Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EFB4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EFCCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EFE4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EFFCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F014u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F01Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F028u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F034u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F03Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F054u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F05Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F064u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F070u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F080u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F08Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F0CCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F0E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F0ECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F0F4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F108u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F110u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F11Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F124u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F12Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F134u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F13Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F140u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F148u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F154u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F15Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F164u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F168u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F170u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F178u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F1D8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F1E0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F1E8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F234u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F250u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F258u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F278u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F280u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F288u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F294u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F29Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F2ACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F2B4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F2BCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F2C0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F2CCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F2D8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F304u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F318u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F320u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F330u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F350u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F38Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F3E0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F3E8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F3F4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F408u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F414u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F430u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F438u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F45Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F464u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F46Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F478u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F484u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F490u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F4A4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F4ACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F4B4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F4BCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F4C0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F4C8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F4D0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F4D4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F4E0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F4F4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F504u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F514u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F51Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F520u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F560u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F57Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F584u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F58Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F5A4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F5CCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F5D4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F5D8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F5E0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F5ECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F5F4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F5FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F60Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F614u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F62Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F648u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F654u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F65Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F660u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F668u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F678u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F684u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F68Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F694u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F69Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F6CCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F6DCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F6E8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F6F4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F70Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F714u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F71Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F734u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F73Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F744u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F74Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F754u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F75Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F760u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F768u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F77Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F784u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F78Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F7A4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F7ACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F7B8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F7BCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F7C0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F7CCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F7D4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F7E0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F7F8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F800u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F808u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F810u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F81Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F838u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F850u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F860u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F868u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F87Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F894u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F8A4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F8D8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F8E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F930u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F940u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F950u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F958u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F96Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F9A0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F9B8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F9C0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F9D0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F9D8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F9E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F9ECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FA00u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FA20u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FA28u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FA3Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FA78u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FA88u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FA90u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FAACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FAC0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FAC8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FAD0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FADCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FAF8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FB00u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FB30u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FB38u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FB44u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FB60u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FB68u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FB98u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FBA0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FBACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FBC8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FBD0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC00u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC08u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC38u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC40u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC50u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC64u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC7Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC84u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC8Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC94u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC9Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FCC0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FCD4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FCE8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FCF8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FCFCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD04u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD14u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD18u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD38u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD44u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD4Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD54u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD6Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD74u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD7Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD84u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD98u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FDB0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FDC0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FDD4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FDDCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FDE4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FDE8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FDECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FE20u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FE28u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FE30u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FE64u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FE80u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FE84u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FE98u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FEACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FEBCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FEC4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FEC8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FED0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FEE8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FEF8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FF08u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FF0Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FF18u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FF20u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FF7Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FF88u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FF98u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FFA8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FFACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FFBCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FFCCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FFE0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FFF4u, &recomp_unit_0166, "recomp_unit_0166");
}
} // namespace psprecomp
