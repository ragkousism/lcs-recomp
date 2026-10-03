#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "lcs_widescreen.hpp"
#include "lcs_menu.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0111[4095] = {
    1, 0, 2, 0, 3, 0, 4, 0, 0, 0, 5, 0, 0, 6, 0, 7, 0, 8, 0, 9, 0, 0, 10, 0, 11, 0, 12, 0, 0, 13, 0, 0,
    14, 0, 15, 0, 16, 0, 0, 0, 17, 0, 0, 18, 0, 19, 0, 20, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0,
    0, 0, 0, 0, 0, 0, 0, 25, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 33, 0, 34, 0, 0, 35, 0, 36, 0, 0, 0,
    37, 38, 0, 39, 0, 0, 40, 0, 41, 0, 0, 42, 0, 43, 0, 0, 44, 0, 45, 0, 46, 0, 0, 47, 48, 0, 49, 0, 0, 0, 0, 0,
    0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52,
    53, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0,
    0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 66, 0, 0, 0,
    0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 71, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0,
    78, 0, 0, 0, 79, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 86, 87,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0,
    0, 0, 92, 0, 93, 0, 0, 0, 94, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 104, 0,
    0, 0, 105, 106, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 112, 113,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0,
    117, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0,
    0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 131, 0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0,
    0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 140, 0, 141, 0, 0, 142, 0, 143, 0, 144, 0, 145, 0,
    0, 0, 0, 146, 0, 0, 0, 147, 0, 148, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 153, 0,
    0, 154, 0, 155, 0, 156, 0, 157, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 164, 0, 165, 0, 0, 166, 0, 167, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170,
    0, 0, 171, 0, 0, 172, 0, 173, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 180, 0, 0, 181, 0, 182, 0, 183, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188,
    0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0,
    0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 201, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 207, 0, 208,
    0, 209, 0, 210, 0, 211, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0,
    0, 215, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0,
    0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227,
    0, 0, 228, 0, 229, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 234, 0, 235, 0, 0, 0, 236, 0, 0,
    0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 243, 0,
    244, 0, 0, 0, 245, 0, 246, 0, 247, 0, 0, 248, 0, 249, 0, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 253, 254, 255, 0, 256, 0, 0,
    257, 0, 0, 258, 0, 0, 259, 0, 260, 261, 262, 0, 263, 0, 264, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 270, 0, 271, 0, 272, 0, 273, 0, 274, 0, 275, 0, 0, 276, 0, 277,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 285, 0, 286, 0, 287, 0, 0, 0, 0, 288, 0, 0, 289, 0,
    0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0,
    0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 301, 0, 302, 0, 0, 303, 0, 0, 304,
    0, 305, 306, 307, 0, 308, 0, 309, 0, 0, 310, 0, 0, 311, 0, 0, 312, 0, 313, 314, 0, 315, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0,
    0, 318, 0, 319, 0, 320, 0, 321, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 325, 0, 326, 0, 327, 0, 328, 0, 329, 0, 330,
    0, 331, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 0, 0,
    0, 337, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 341, 0, 342, 0, 343, 0, 0, 0, 344, 0,
    0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 347, 0, 348, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 352, 0, 353, 0, 0, 0, 0,
    0, 0, 354, 0, 0, 0, 355, 0, 356, 0, 357, 0, 358, 0, 359, 0, 360, 0, 361, 0, 362, 0, 363, 0, 364, 0, 365, 0, 366, 0, 367, 0,
    368, 0, 0, 369, 0, 370, 0, 0, 371, 0, 372, 0, 0, 373, 0, 374, 0, 0, 375, 0, 376, 0, 0, 377, 0, 378, 0, 0, 379, 0, 380, 0,
    0, 381, 0, 382, 383, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 387, 0, 388, 0, 389, 0, 390, 0, 391, 392, 0,
    0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 397, 0, 398,
    0, 0, 399, 400, 0, 401, 0, 402, 0, 0, 403, 0, 404, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0,
    0, 409, 0, 410, 0, 0, 411, 0, 412, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 416, 0, 0, 0, 0, 0, 0, 0, 417, 0,
    0, 0, 418, 0, 419, 0, 420, 0, 0, 421, 0, 422, 0, 0, 0, 423, 424, 0, 425, 0, 0, 426, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 431, 0, 0, 0, 0, 432, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 435,
    0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 438, 0, 0, 0, 0, 0, 0, 439, 0,
    0, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 444,
    0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0,
    0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0,
    0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0,
    453, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 457, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 461, 0, 462, 0, 463, 0, 464, 0, 465,
    0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 471, 0,
    472, 0, 473, 0, 474, 0, 0, 0, 0, 0, 475, 0, 476, 0, 477, 0, 478, 0, 479, 0, 480, 0, 481, 0, 0, 482, 0, 0, 483, 0, 0, 484,
    0, 485, 0, 0, 0, 0, 0, 0, 486, 0, 0, 487, 0, 0, 0, 488, 0, 0, 489, 0, 0, 490, 0, 491, 492, 0, 493, 0, 0, 494, 0, 0,
    0, 0, 0, 495, 0, 496, 0, 497, 0, 0, 0, 498, 0, 0, 499, 0, 0, 500, 0, 501, 502, 0, 503, 0, 0, 504, 0, 0, 0, 0, 0, 0,
    505, 0, 506, 0, 0, 507, 0, 0, 0, 0, 0, 508, 0, 0, 509, 0, 0, 510, 0, 511, 512, 513, 0, 0, 0, 514, 0, 0, 0, 0, 0, 515,
    0, 0, 0, 516, 0, 0, 517, 0, 0, 518, 0, 0, 519, 0, 520, 521, 0, 522, 0, 0, 523, 0, 0, 524, 0, 0, 0, 0, 0, 525, 0, 526,
    0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 528, 0, 529, 0, 0, 530, 0, 0, 531, 0, 532, 0, 533, 0, 0, 0, 534, 0, 535, 0, 536,
    0, 537, 0, 0, 0, 0, 0, 538, 0, 539, 0, 540, 0, 541, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 544, 0, 545, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 547, 0, 548, 0, 0, 549, 0, 550, 0, 551, 0, 552, 0,
    553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 555, 0, 0, 556, 0, 0, 0, 0, 0, 557, 0, 0, 0,
    0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 561, 0, 562, 0, 563, 0, 0, 564, 0, 0, 565, 0, 566,
    0, 567, 0, 568, 0, 569, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 572, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0,
    574, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 576, 0, 577, 0, 0, 0, 578, 0, 0, 579, 580, 581, 0, 582, 0, 583, 0, 0, 584,
    0, 585, 0, 586, 587, 0, 588, 0, 589, 0, 590, 0, 591, 0, 0, 0, 592, 0, 0, 593, 594, 595, 0, 596, 0, 597, 0, 0, 598, 0, 599, 0,
    600, 0, 601, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 604, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0,
    0, 0, 0, 606, 0, 0, 0, 0, 0, 607, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0,
    0, 0, 610, 0, 611, 0, 0, 0, 0, 0, 0, 612, 0, 613, 0, 0, 614, 0, 0, 0, 0, 615, 0, 616, 0, 0, 617, 0, 618, 0, 0, 0,
    0, 619, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 621, 0, 622, 0, 623, 0, 0, 624, 0, 0, 0, 0, 0, 0, 625, 0, 626,
    0, 0, 627, 0, 0, 0, 628, 0, 629, 0, 0, 630, 0, 0, 631, 0, 0, 632, 0, 0, 0, 0, 0, 633, 0, 634, 0, 0, 635, 0, 0, 636,
    0, 637, 0, 638, 0, 0, 639, 0, 0, 640, 0, 641, 0, 642, 0, 643, 0, 644, 645, 0, 646, 0, 0, 647, 0, 648, 0, 649, 0, 650, 0, 651,
    0, 652, 0, 653, 0, 0, 654, 0, 655, 0, 656, 0, 0, 657, 0, 658, 0, 659, 0, 660, 0, 661, 0, 0, 0, 662, 0, 663, 0, 664, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 666, 0, 667, 0, 668, 0, 669, 0, 0, 0, 670, 0, 671, 0, 672, 0, 673, 0,
    0, 0, 674, 0, 675, 0, 0, 0, 0, 0, 676, 0, 677, 0, 678, 0, 679, 0, 680, 0, 681, 0, 682, 0, 0, 0, 683, 0, 684, 0, 0, 685,
    0, 0, 686, 0, 687, 0, 688, 0, 689, 0, 690, 0, 691, 0, 692, 0, 693, 0, 694, 0, 695, 0, 696, 0, 697, 0, 698, 0, 699, 0, 700, 0,
    701, 0, 702, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 705, 0, 0, 706, 0, 0, 707, 0, 0,
    708, 0, 0, 0, 0, 709, 0, 710, 0, 711, 0, 0, 712, 0, 713, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0,
    0, 0, 0, 716, 0, 0, 717, 0, 0, 718, 0, 719, 0, 720, 0, 721, 722, 0, 0, 723, 0, 724, 0, 725, 0, 726, 0, 0, 0, 0, 0, 0,
    0, 727, 0, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 730, 0, 0, 0, 0, 0, 0, 731, 0, 0, 0, 732,
    0, 733, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0,
    738, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 741, 0, 0, 742, 0, 743, 0, 0, 744, 0, 745, 0, 0, 746, 0, 747, 0,
    748, 0, 749, 0, 750, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 0, 0, 753, 0, 754, 0, 0, 0, 0, 0,
    0, 0, 0, 755, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0, 758, 0, 0, 759, 0, 0, 760, 0, 0,
    761, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 764, 0, 0, 0, 765, 0, 0, 0, 766,
    0, 767, 0, 768, 0, 0, 769, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 771, 0, 772, 0, 773, 0, 774, 0, 775, 0, 776, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 777, 0, 778, 0, 779, 0, 780, 0, 781, 0, 782, 0, 783, 0, 784,
    0, 785, 0, 786, 0, 787, 788, 0, 0, 0, 789, 0, 0, 790, 0, 0, 0, 0, 0, 791, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 793, 0,
    0, 0, 0, 0, 794, 0, 0, 0, 0, 0, 0, 0, 0, 0, 795, 0, 796, 0, 0, 797, 0, 0, 798, 0, 0, 0, 799, 0, 800, 0, 0, 801,
    0, 802, 0, 0, 803, 0, 804, 0, 0, 0, 805, 0, 0, 806, 0, 0, 807, 0, 0, 808, 0, 0, 809, 0, 0, 810, 0, 0, 811, 0, 0, 812,
    0, 0, 813, 0, 0, 814, 0, 0, 815, 0, 0, 816, 0, 0, 817, 0, 818, 0, 819, 0, 820, 0, 0, 821, 0, 822, 0, 0, 823, 0, 0, 0,
    0, 824, 0, 825, 0, 826, 0, 0, 0, 0, 0, 827, 0, 0, 0, 828, 0, 0, 0, 829, 0, 0, 0, 830, 0, 0, 0, 831, 0, 0, 0, 832,
    0, 0, 0, 833, 0, 0, 0, 834, 0, 0, 0, 835, 0, 0, 0, 0, 836, 0, 0, 0, 837, 0, 0, 0, 0, 838, 0, 0, 0, 0, 839, 0,
    0, 0, 840, 0, 0, 0, 841, 0, 842, 0, 843, 0, 844, 0, 0, 0, 845, 0, 846, 847, 0, 848, 0, 0, 0, 849, 0, 850, 0, 851, 0, 0,
    0, 852, 0, 853, 0, 854, 0, 855, 0, 0, 856, 0, 857, 0, 858, 0, 859, 0, 0, 0, 0, 0, 0, 860, 0, 0, 861, 0, 0, 0, 862, 0,
    0, 863, 0, 0, 864, 0, 865, 866, 0, 0, 867, 0, 868, 0, 0, 0, 0, 869, 0, 0, 0, 870, 0, 0, 871, 0, 0, 872, 0, 873, 874, 0,
    0, 875, 0, 0, 0, 0, 0, 876, 0, 0, 877, 0, 0, 878, 0, 0, 879, 0, 880, 881, 0, 0, 882, 0, 0, 0, 0, 0, 0, 883, 0, 0,
    0, 0, 0, 0, 0, 0, 884, 0, 885, 0, 0, 0, 0, 886, 0, 0, 0, 887, 0, 0, 888, 0, 0, 889, 0, 890, 891, 0, 0, 892, 0, 0,
    0, 0, 0, 893, 0, 0, 894, 0, 0, 895, 0, 0, 896, 0, 897, 898, 0, 0, 899, 0, 0, 0, 0, 0, 0, 900, 0, 0, 0, 0, 0, 0,
    0, 0, 901, 0, 902, 0, 0, 903, 0, 904, 0, 0, 905, 0, 906, 0, 0, 0, 0, 0, 0, 0, 907, 0, 908, 0, 0, 0, 0, 0, 909, 0,
    0, 910, 0, 0, 0, 0, 0, 911, 0, 912, 0, 0, 0, 0, 0, 0, 0, 913, 0, 0, 0, 0, 0, 0, 914, 0, 915, 0, 0, 0, 0, 0,
    916, 0, 917, 0, 0, 0, 918, 0, 0, 919, 0, 0, 920, 0, 921, 922, 0, 0, 923, 0, 924, 0, 925, 0, 0, 926, 0, 927, 0, 928, 0, 929,
    930, 0, 0, 0, 0, 931, 0, 0, 0, 0, 0, 0, 932, 0, 0, 933, 0, 934, 0, 935, 0, 0, 936, 0, 937, 0, 0, 938, 0, 0, 939, 0,
    0, 940, 0, 0, 941, 0, 0, 942, 0, 0, 943, 0, 0, 944, 0, 0, 945, 0, 0, 946, 0, 0, 947, 0, 0, 948, 0, 0, 949, 0, 0, 950,
    0, 0, 951, 0, 0, 952, 0, 0, 953, 0, 0, 954, 0, 0, 955, 0, 0, 956, 0, 0, 957, 0, 0, 958, 0, 0, 959, 0, 0, 960, 0, 0,
    961, 0, 0, 962, 0, 0, 963, 0, 0, 964, 0, 0, 965, 0, 0, 966, 0, 0, 967, 0, 0, 968, 0, 0, 969, 0, 0, 970, 0, 0, 971, 0,
    0, 972, 0, 0, 973, 0, 0, 974, 0, 0, 975, 0, 0, 976, 0, 0, 977, 0, 0, 978, 0, 0, 979, 0, 0, 980, 0, 0, 981, 0, 0, 982,
    0, 0, 983, 0, 0, 984, 0, 0, 985, 0, 0, 986, 0, 0, 987, 0, 0, 988, 0, 0, 989, 0, 0, 990, 0, 0, 991, 0, 0, 992, 0, 0,
    993, 0, 0, 994, 0, 0, 995, 0, 0, 996, 0, 0, 997, 0, 0, 998, 0, 0, 999, 0, 0, 1000, 0, 0, 1001, 0, 0, 1002, 0, 0, 1003, 0,
    0, 1004, 0, 0, 1005, 0, 0, 1006, 0, 0, 1007, 0, 0, 1008, 0, 0, 1009, 0, 0, 1010, 0, 0, 1011, 0, 0, 1012, 0, 0, 1013, 0, 0, 1014,
    0, 0, 1015, 0, 0, 1016, 0, 0, 1017, 0, 0, 1018, 0, 0, 1019, 0, 0, 1020, 0, 0, 1021, 0, 0, 1022, 0, 0, 1023, 0, 0, 1024, 0, 0,
    1025, 0, 0, 1026, 0, 0, 1027, 0, 0, 1028, 0, 0, 1029, 0, 0, 1030, 0, 0, 1031, 0, 0, 1032, 0, 0, 1033, 0, 0, 1034, 0, 0, 1035, 0,
    0, 1036, 0, 0, 1037, 0, 0, 1038, 0, 0, 1039, 0, 0, 1040, 0, 0, 1041, 0, 0, 1042, 0, 0, 1043, 0, 0, 1044, 0, 0, 1045, 0, 0, 1046,
    0, 0, 1047, 0, 0, 1048, 0, 0, 1049, 0, 0, 1050, 0, 0, 1051, 0, 0, 1052, 0, 0, 1053, 0, 0, 1054, 0, 0, 1055, 0, 0, 1056, 0, 0,
    1057, 0, 0, 1058, 0, 0, 0, 1059, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1060, 0, 0, 0, 0, 0, 1061, 0, 0,
    0, 0, 1062, 0, 1063, 0, 1064, 0, 0, 1065, 0, 0, 1066, 0, 0, 0, 0, 1067, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1068,
};
void recomp_unit_0111_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089C0000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0111[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089C0000;
    case 2u: goto L_089C0008;
    case 3u: goto L_089C0010;
    case 4u: goto L_089C0018;
    case 5u: goto L_089C0028;
    case 6u: goto L_089C0034;
    case 7u: goto L_089C003C;
    case 8u: goto L_089C0044;
    case 9u: goto L_089C004C;
    case 10u: goto L_089C0058;
    case 11u: goto L_089C0060;
    case 12u: goto L_089C0068;
    case 13u: goto L_089C0074;
    case 14u: goto L_089C0080;
    case 15u: goto L_089C0088;
    case 16u: goto L_089C0090;
    case 17u: goto L_089C00A0;
    case 18u: goto L_089C00AC;
    case 19u: goto L_089C00B4;
    case 20u: goto L_089C00BC;
    case 21u: goto L_089C00C4;
    case 22u: goto L_089C00D4;
    case 23u: goto L_089C014C;
    case 24u: goto L_089C0178;
    case 25u: goto L_089C019C;
    case 26u: goto L_089C01A0;
    case 27u: goto L_089C01BC;
    case 28u: goto L_089C01D0;
    case 29u: goto L_089C01E0;
    case 30u: goto L_089C0228;
    case 31u: goto L_089C0238;
    case 32u: goto L_089C0244;
    case 33u: goto L_089C0254;
    case 34u: goto L_089C025C;
    case 35u: goto L_089C0268;
    case 36u: goto L_089C0270;
    case 37u: goto L_089C0280;
    case 38u: goto L_089C0284;
    case 39u: goto L_089C028C;
    case 40u: goto L_089C0298;
    case 41u: goto L_089C02A0;
    case 42u: goto L_089C02AC;
    case 43u: goto L_089C02B4;
    case 44u: goto L_089C02C0;
    case 45u: goto L_089C02C8;
    case 46u: goto L_089C02D0;
    case 47u: goto L_089C02DC;
    case 48u: goto L_089C02E0;
    case 49u: goto L_089C02E8;
    case 50u: goto L_089C030C;
    case 51u: goto L_089C032C;
    case 52u: goto L_089C037C;
    case 53u: goto L_089C0380;
    case 54u: goto L_089C0390;
    case 55u: goto L_089C03A0;
    case 56u: goto L_089C03B0;
    case 57u: goto L_089C03C0;
    case 58u: goto L_089C03E4;
    case 59u: goto L_089C03F8;
    case 60u: goto L_089C0404;
    case 61u: goto L_089C041C;
    case 62u: goto L_089C0434;
    case 63u: goto L_089C0448;
    case 64u: goto L_089C0458;
    case 65u: goto L_089C0468;
    case 66u: goto L_089C0470;
    case 67u: goto L_089C0488;
    case 68u: goto L_089C049C;
    case 69u: goto L_089C04AC;
    case 70u: goto L_089C04BC;
    case 71u: goto L_089C04C4;
    case 72u: goto L_089C04C8;
    case 73u: goto L_089C04D0;
    case 74u: goto L_089C04F8;
    case 75u: goto L_089C052C;
    case 76u: goto L_089C0568;
    case 77u: goto L_089C0570;
    case 78u: goto L_089C0580;
    case 79u: goto L_089C0590;
    case 80u: goto L_089C0594;
    case 81u: goto L_089C059C;
    case 82u: goto L_089C05BC;
    case 83u: goto L_089C05CC;
    case 84u: goto L_089C05DC;
    case 85u: goto L_089C05EC;
    case 86u: goto L_089C05F8;
    case 87u: goto L_089C05FC;
    case 88u: goto L_089C062C;
    case 89u: goto L_089C063C;
    case 90u: goto L_089C066C;
    case 91u: goto L_089C0678;
    case 92u: goto L_089C0688;
    case 93u: goto L_089C0690;
    case 94u: goto L_089C06A0;
    case 95u: goto L_089C06AC;
    case 96u: goto L_089C06B4;
    case 97u: goto L_089C06D4;
    case 98u: goto L_089C0714;
    case 99u: goto L_089C0720;
    case 100u: goto L_089C072C;
    case 101u: goto L_089C0738;
    case 102u: goto L_089C0760;
    case 103u: goto L_089C0768;
    case 104u: goto L_089C0778;
    case 105u: goto L_089C0788;
    case 106u: goto L_089C078C;
    case 107u: goto L_089C0794;
    case 108u: goto L_089C07B4;
    case 109u: goto L_089C07C4;
    case 110u: goto L_089C07D4;
    case 111u: goto L_089C07E4;
    case 112u: goto L_089C07F8;
    case 113u: goto L_089C07FC;
    case 114u: goto L_089C082C;
    case 115u: goto L_089C0844;
    case 116u: goto L_089C0874;
    case 117u: goto L_089C0880;
    case 118u: goto L_089C088C;
    case 119u: goto L_089C08A0;
    case 120u: goto L_089C08C8;
    case 121u: goto L_089C08EC;
    case 122u: goto L_089C0910;
    case 123u: goto L_089C091C;
    case 124u: goto L_089C0928;
    case 125u: goto L_089C094C;
    case 126u: goto L_089C0960;
    case 127u: goto L_089C0974;
    case 128u: goto L_089C0980;
    case 129u: goto L_089C09AC;
    case 130u: goto L_089C09B4;
    case 131u: goto L_089C09BC;
    case 132u: goto L_089C09C4;
    case 133u: goto L_089C09D4;
    case 134u: goto L_089C09E0;
    case 135u: goto L_089C09F8;
    case 136u: goto L_089C0A04;
    case 137u: goto L_089C0A10;
    case 138u: goto L_089C0A2C;
    case 139u: goto L_089C0A44;
    case 140u: goto L_089C0A4C;
    case 141u: goto L_089C0A54;
    case 142u: goto L_089C0A60;
    case 143u: goto L_089C0A68;
    case 144u: goto L_089C0A70;
    case 145u: goto L_089C0A78;
    case 146u: goto L_089C0A8C;
    case 147u: goto L_089C0A9C;
    case 148u: goto L_089C0AA4;
    case 149u: goto L_089C0AAC;
    case 150u: goto L_089C0ABC;
    case 151u: goto L_089C0AE8;
    case 152u: goto L_089C0AF0;
    case 153u: goto L_089C0AF8;
    case 154u: goto L_089C0B04;
    case 155u: goto L_089C0B0C;
    case 156u: goto L_089C0B14;
    case 157u: goto L_089C0B1C;
    case 158u: goto L_089C0B30;
    case 159u: goto L_089C0B3C;
    case 160u: goto L_089C0B48;
    case 161u: goto L_089C0B60;
    case 162u: goto L_089C0B90;
    case 163u: goto L_089C0BA0;
    case 164u: goto L_089C0BA8;
    case 165u: goto L_089C0BB0;
    case 166u: goto L_089C0BBC;
    case 167u: goto L_089C0BC4;
    case 168u: goto L_089C0BCC;
    case 169u: goto L_089C0BD4;
    case 170u: goto L_089C0BFC;
    case 171u: goto L_089C0C08;
    case 172u: goto L_089C0C14;
    case 173u: goto L_089C0C1C;
    case 174u: goto L_089C0C24;
    case 175u: goto L_089C0C2C;
    case 176u: goto L_089C0C34;
    case 177u: goto L_089C0C50;
    case 178u: goto L_089C0C64;
    case 179u: goto L_089C0C80;
    case 180u: goto L_089C0C8C;
    case 181u: goto L_089C0C98;
    case 182u: goto L_089C0CA0;
    case 183u: goto L_089C0CA8;
    case 184u: goto L_089C0CB0;
    case 185u: goto L_089C0CB8;
    case 186u: goto L_089C0CD4;
    case 187u: goto L_089C0CE8;
    case 188u: goto L_089C0CFC;
    case 189u: goto L_089C0D04;
    case 190u: goto L_089C0D10;
    case 191u: goto L_089C0D30;
    case 192u: goto L_089C0D38;
    case 193u: goto L_089C0D50;
    case 194u: goto L_089C0D78;
    case 195u: goto L_089C0D90;
    case 196u: goto L_089C0D98;
    case 197u: goto L_089C0DA8;
    case 198u: goto L_089C0DC4;
    case 199u: goto L_089C0DD0;
    case 200u: goto L_089C0DD8;
    case 201u: goto L_089C0E08;
    case 202u: goto L_089C0E18;
    case 203u: goto L_089C0E20;
    case 204u: goto L_089C0E38;
    case 205u: goto L_089C0E64;
    case 206u: goto L_089C0E6C;
    case 207u: goto L_089C0E74;
    case 208u: goto L_089C0E7C;
    case 209u: goto L_089C0E84;
    case 210u: goto L_089C0E8C;
    case 211u: goto L_089C0E94;
    case 212u: goto L_089C0E9C;
    case 213u: goto L_089C0EA4;
    case 214u: goto L_089C0EEC;
    case 215u: goto L_089C0F04;
    case 216u: goto L_089C0F10;
    case 217u: goto L_089C0F18;
    case 218u: goto L_089C0F30;
    case 219u: goto L_089C0F3C;
    case 220u: goto L_089C0F44;
    case 221u: goto L_089C0F58;
    case 222u: goto L_089C0F74;
    case 223u: goto L_089C0F88;
    case 224u: goto L_089C0F94;
    case 225u: goto L_089C0FA8;
    case 226u: goto L_089C0FDC;
    case 227u: goto L_089C0FFC;
    case 228u: goto L_089C1008;
    case 229u: goto L_089C1010;
    case 230u: goto L_089C1014;
    case 231u: goto L_089C1030;
    case 232u: goto L_089C1048;
    case 233u: goto L_089C1050;
    case 234u: goto L_089C105C;
    case 235u: goto L_089C1064;
    case 236u: goto L_089C1074;
    case 237u: goto L_089C108C;
    case 238u: goto L_089C10A8;
    case 239u: goto L_089C10B4;
    case 240u: goto L_089C10C0;
    case 241u: goto L_089C10E4;
    case 242u: goto L_089C10F0;
    case 243u: goto L_089C10F8;
    case 244u: goto L_089C1100;
    case 245u: goto L_089C1110;
    case 246u: goto L_089C1118;
    case 247u: goto L_089C1120;
    case 248u: goto L_089C112C;
    case 249u: goto L_089C1134;
    case 250u: goto L_089C1144;
    case 251u: goto L_089C1150;
    case 252u: goto L_089C115C;
    case 253u: goto L_089C1164;
    case 254u: goto L_089C1168;
    case 255u: goto L_089C116C;
    case 256u: goto L_089C1174;
    case 257u: goto L_089C1180;
    case 258u: goto L_089C118C;
    case 259u: goto L_089C1198;
    case 260u: goto L_089C11A0;
    case 261u: goto L_089C11A4;
    case 262u: goto L_089C11A8;
    case 263u: goto L_089C11B0;
    case 264u: goto L_089C11B8;
    case 265u: goto L_089C11D0;
    case 266u: goto L_089C11D8;
    case 267u: goto L_089C122C;
    case 268u: goto L_089C12A4;
    case 269u: goto L_089C12AC;
    case 270u: goto L_089C12C0;
    case 271u: goto L_089C12C8;
    case 272u: goto L_089C12D0;
    case 273u: goto L_089C12D8;
    case 274u: goto L_089C12E0;
    case 275u: goto L_089C12E8;
    case 276u: goto L_089C12F4;
    case 277u: goto L_089C12FC;
    case 278u: goto L_089C1328;
    case 279u: goto L_089C1340;
    case 280u: goto L_089C1344;
    case 281u: goto L_089C1370;
    case 282u: goto L_089C1414;
    case 283u: goto L_089C1438;
    case 284u: goto L_089C1440;
    case 285u: goto L_089C1448;
    case 286u: goto L_089C1450;
    case 287u: goto L_089C1458;
    case 288u: goto L_089C146C;
    case 289u: goto L_089C1478;
    case 290u: goto L_089C1488;
    case 291u: goto L_089C1494;
    case 292u: goto L_089C14B4;
    case 293u: goto L_089C14B8;
    case 294u: goto L_089C14E8;
    case 295u: goto L_089C14F8;
    case 296u: goto L_089C1504;
    case 297u: goto L_089C1520;
    case 298u: goto L_089C1528;
    case 299u: goto L_089C153C;
    case 300u: goto L_089C1554;
    case 301u: goto L_089C155C;
    case 302u: goto L_089C1564;
    case 303u: goto L_089C1570;
    case 304u: goto L_089C157C;
    case 305u: goto L_089C1584;
    case 306u: goto L_089C1588;
    case 307u: goto L_089C158C;
    case 308u: goto L_089C1594;
    case 309u: goto L_089C159C;
    case 310u: goto L_089C15A8;
    case 311u: goto L_089C15B4;
    case 312u: goto L_089C15C0;
    case 313u: goto L_089C15C8;
    case 314u: goto L_089C15CC;
    case 315u: goto L_089C15D4;
    case 316u: goto L_089C15E0;
    case 317u: goto L_089C15E8;
    case 318u: goto L_089C1604;
    case 319u: goto L_089C160C;
    case 320u: goto L_089C1614;
    case 321u: goto L_089C161C;
    case 322u: goto L_089C1624;
    case 323u: goto L_089C1644;
    case 324u: goto L_089C164C;
    case 325u: goto L_089C1654;
    case 326u: goto L_089C165C;
    case 327u: goto L_089C1664;
    case 328u: goto L_089C166C;
    case 329u: goto L_089C1674;
    case 330u: goto L_089C167C;
    case 331u: goto L_089C1684;
    case 332u: goto L_089C168C;
    case 333u: goto L_089C16A4;
    case 334u: goto L_089C16D8;
    case 335u: goto L_089C16E4;
    case 336u: goto L_089C16F0;
    case 337u: goto L_089C1704;
    case 338u: goto L_089C170C;
    case 339u: goto L_089C1720;
    case 340u: goto L_089C1754;
    case 341u: goto L_089C1758;
    case 342u: goto L_089C1760;
    case 343u: goto L_089C1768;
    case 344u: goto L_089C1778;
    case 345u: goto L_089C1790;
    case 346u: goto L_089C17A0;
    case 347u: goto L_089C17A8;
    case 348u: goto L_089C17B0;
    case 349u: goto L_089C17B8;
    case 350u: goto L_089C17CC;
    case 351u: goto L_089C17DC;
    case 352u: goto L_089C17E4;
    case 353u: goto L_089C17EC;
    case 354u: goto L_089C1808;
    case 355u: goto L_089C1818;
    case 356u: goto L_089C1820;
    case 357u: goto L_089C1828;
    case 358u: goto L_089C1830;
    case 359u: goto L_089C1838;
    case 360u: goto L_089C1840;
    case 361u: goto L_089C1848;
    case 362u: goto L_089C1850;
    case 363u: goto L_089C1858;
    case 364u: goto L_089C1860;
    case 365u: goto L_089C1868;
    case 366u: goto L_089C1870;
    case 367u: goto L_089C1878;
    case 368u: goto L_089C1880;
    case 369u: goto L_089C188C;
    case 370u: goto L_089C1894;
    case 371u: goto L_089C18A0;
    case 372u: goto L_089C18A8;
    case 373u: goto L_089C18B4;
    case 374u: goto L_089C18BC;
    case 375u: goto L_089C18C8;
    case 376u: goto L_089C18D0;
    case 377u: goto L_089C18DC;
    case 378u: goto L_089C18E4;
    case 379u: goto L_089C18F0;
    case 380u: goto L_089C18F8;
    case 381u: goto L_089C1904;
    case 382u: goto L_089C190C;
    case 383u: goto L_089C1910;
    case 384u: goto L_089C191C;
    case 385u: goto L_089C1944;
    case 386u: goto L_089C194C;
    case 387u: goto L_089C1954;
    case 388u: goto L_089C195C;
    case 389u: goto L_089C1964;
    case 390u: goto L_089C196C;
    case 391u: goto L_089C1974;
    case 392u: goto L_089C1978;
    case 393u: goto L_089C198C;
    case 394u: goto L_089C1998;
    case 395u: goto L_089C19DC;
    case 396u: goto L_089C19EC;
    case 397u: goto L_089C19F4;
    case 398u: goto L_089C19FC;
    case 399u: goto L_089C1A08;
    case 400u: goto L_089C1A0C;
    case 401u: goto L_089C1A14;
    case 402u: goto L_089C1A1C;
    case 403u: goto L_089C1A28;
    case 404u: goto L_089C1A30;
    case 405u: goto L_089C1A40;
    case 406u: goto L_089C1A4C;
    case 407u: goto L_089C1A68;
    case 408u: goto L_089C1A74;
    case 409u: goto L_089C1A84;
    case 410u: goto L_089C1A8C;
    case 411u: goto L_089C1A98;
    case 412u: goto L_089C1AA0;
    case 413u: goto L_089C1AAC;
    case 414u: goto L_089C1ABC;
    case 415u: goto L_089C1AD0;
    case 416u: goto L_089C1AD8;
    case 417u: goto L_089C1AF8;
    case 418u: goto L_089C1B08;
    case 419u: goto L_089C1B10;
    case 420u: goto L_089C1B18;
    case 421u: goto L_089C1B24;
    case 422u: goto L_089C1B2C;
    case 423u: goto L_089C1B3C;
    case 424u: goto L_089C1B40;
    case 425u: goto L_089C1B48;
    case 426u: goto L_089C1B54;
    case 427u: goto L_089C1B58;
    case 428u: goto L_089C1B80;
    case 429u: goto L_089C1BA0;
    case 430u: goto L_089C1BB0;
    case 431u: goto L_089C1BB8;
    case 432u: goto L_089C1BCC;
    case 433u: goto L_089C1BD8;
    case 434u: goto L_089C1BE8;
    case 435u: goto L_089C1BFC;
    case 436u: goto L_089C1C14;
    case 437u: goto L_089C1C58;
    case 438u: goto L_089C1C5C;
    case 439u: goto L_089C1C78;
    case 440u: goto L_089C1C8C;
    case 441u: goto L_089C1CA4;
    case 442u: goto L_089C1CB4;
    case 443u: goto L_089C1D5C;
    case 444u: goto L_089C1D7C;
    case 445u: goto L_089C1D8C;
    case 446u: goto L_089C1DEC;
    case 447u: goto L_089C1E08;
    case 448u: goto L_089C1E18;
    case 449u: goto L_089C1E70;
    case 450u: goto L_089C1E8C;
    case 451u: goto L_089C1E9C;
    case 452u: goto L_089C1EE4;
    case 453u: goto L_089C1F00;
    case 454u: goto L_089C1F10;
    case 455u: goto L_089C1F48;
    case 456u: goto L_089C1F54;
    case 457u: goto L_089C1F8C;
    case 458u: goto L_089C1F94;
    case 459u: goto L_089C1FA8;
    case 460u: goto L_089C1FBC;
    case 461u: goto L_089C1FDC;
    case 462u: goto L_089C1FE4;
    case 463u: goto L_089C1FEC;
    case 464u: goto L_089C1FF4;
    case 465u: goto L_089C1FFC;
    case 466u: goto L_089C2004;
    case 467u: goto L_089C202C;
    case 468u: goto L_089C2048;
    case 469u: goto L_089C2058;
    case 470u: goto L_089C2068;
    case 471u: goto L_089C2078;
    case 472u: goto L_089C2080;
    case 473u: goto L_089C2088;
    case 474u: goto L_089C2090;
    case 475u: goto L_089C20A8;
    case 476u: goto L_089C20B0;
    case 477u: goto L_089C20B8;
    case 478u: goto L_089C20C0;
    case 479u: goto L_089C20C8;
    case 480u: goto L_089C20D0;
    case 481u: goto L_089C20D8;
    case 482u: goto L_089C20E4;
    case 483u: goto L_089C20F0;
    case 484u: goto L_089C20FC;
    case 485u: goto L_089C2104;
    case 486u: goto L_089C2120;
    case 487u: goto L_089C212C;
    case 488u: goto L_089C213C;
    case 489u: goto L_089C2148;
    case 490u: goto L_089C2154;
    case 491u: goto L_089C215C;
    case 492u: goto L_089C2160;
    case 493u: goto L_089C2168;
    case 494u: goto L_089C2174;
    case 495u: goto L_089C218C;
    case 496u: goto L_089C2194;
    case 497u: goto L_089C219C;
    case 498u: goto L_089C21AC;
    case 499u: goto L_089C21B8;
    case 500u: goto L_089C21C4;
    case 501u: goto L_089C21CC;
    case 502u: goto L_089C21D0;
    case 503u: goto L_089C21D8;
    case 504u: goto L_089C21E4;
    case 505u: goto L_089C2200;
    case 506u: goto L_089C2208;
    case 507u: goto L_089C2214;
    case 508u: goto L_089C222C;
    case 509u: goto L_089C2238;
    case 510u: goto L_089C2244;
    case 511u: goto L_089C224C;
    case 512u: goto L_089C2250;
    case 513u: goto L_089C2254;
    case 514u: goto L_089C2264;
    case 515u: goto L_089C227C;
    case 516u: goto L_089C228C;
    case 517u: goto L_089C2298;
    case 518u: goto L_089C22A4;
    case 519u: goto L_089C22B0;
    case 520u: goto L_089C22B8;
    case 521u: goto L_089C22BC;
    case 522u: goto L_089C22C4;
    case 523u: goto L_089C22D0;
    case 524u: goto L_089C22DC;
    case 525u: goto L_089C22F4;
    case 526u: goto L_089C22FC;
    case 527u: goto L_089C2314;
    case 528u: goto L_089C232C;
    case 529u: goto L_089C2334;
    case 530u: goto L_089C2340;
    case 531u: goto L_089C234C;
    case 532u: goto L_089C2354;
    case 533u: goto L_089C235C;
    case 534u: goto L_089C236C;
    case 535u: goto L_089C2374;
    case 536u: goto L_089C237C;
    case 537u: goto L_089C2384;
    case 538u: goto L_089C239C;
    case 539u: goto L_089C23A4;
    case 540u: goto L_089C23AC;
    case 541u: goto L_089C23B4;
    case 542u: goto L_089C23BC;
    case 543u: goto L_089C23E4;
    case 544u: goto L_089C2414;
    case 545u: goto L_089C241C;
    case 546u: goto L_089C242C;
    case 547u: goto L_089C244C;
    case 548u: goto L_089C2454;
    case 549u: goto L_089C2460;
    case 550u: goto L_089C2468;
    case 551u: goto L_089C2470;
    case 552u: goto L_089C2478;
    case 553u: goto L_089C2480;
    case 554u: goto L_089C24B0;
    case 555u: goto L_089C24CC;
    case 556u: goto L_089C24D8;
    case 557u: goto L_089C24F0;
    case 558u: goto L_089C250C;
    case 559u: goto L_089C251C;
    case 560u: goto L_089C2530;
    case 561u: goto L_089C254C;
    case 562u: goto L_089C2554;
    case 563u: goto L_089C255C;
    case 564u: goto L_089C2568;
    case 565u: goto L_089C2574;
    case 566u: goto L_089C257C;
    case 567u: goto L_089C2584;
    case 568u: goto L_089C258C;
    case 569u: goto L_089C2594;
    case 570u: goto L_089C25A0;
    case 571u: goto L_089C25C8;
    case 572u: goto L_089C25D0;
    case 573u: goto L_089C25E8;
    case 574u: goto L_089C2600;
    case 575u: goto L_089C2624;
    case 576u: goto L_089C2634;
    case 577u: goto L_089C263C;
    case 578u: goto L_089C264C;
    case 579u: goto L_089C2658;
    case 580u: goto L_089C265C;
    case 581u: goto L_089C2660;
    case 582u: goto L_089C2668;
    case 583u: goto L_089C2670;
    case 584u: goto L_089C267C;
    case 585u: goto L_089C2684;
    case 586u: goto L_089C268C;
    case 587u: goto L_089C2690;
    case 588u: goto L_089C2698;
    case 589u: goto L_089C26A0;
    case 590u: goto L_089C26A8;
    case 591u: goto L_089C26B0;
    case 592u: goto L_089C26C0;
    case 593u: goto L_089C26CC;
    case 594u: goto L_089C26D0;
    case 595u: goto L_089C26D4;
    case 596u: goto L_089C26DC;
    case 597u: goto L_089C26E4;
    case 598u: goto L_089C26F0;
    case 599u: goto L_089C26F8;
    case 600u: goto L_089C2700;
    case 601u: goto L_089C2708;
    case 602u: goto L_089C2720;
    case 603u: goto L_089C2744;
    case 604u: goto L_089C2750;
    case 605u: goto L_089C2768;
    case 606u: goto L_089C278C;
    case 607u: goto L_089C27A4;
    case 608u: goto L_089C27AC;
    case 609u: goto L_089C27E4;
    case 610u: goto L_089C2808;
    case 611u: goto L_089C2810;
    case 612u: goto L_089C282C;
    case 613u: goto L_089C2834;
    case 614u: goto L_089C2840;
    case 615u: goto L_089C2854;
    case 616u: goto L_089C285C;
    case 617u: goto L_089C2868;
    case 618u: goto L_089C2870;
    case 619u: goto L_089C2884;
    case 620u: goto L_089C28A0;
    case 621u: goto L_089C28BC;
    case 622u: goto L_089C28C4;
    case 623u: goto L_089C28CC;
    case 624u: goto L_089C28D8;
    case 625u: goto L_089C28F4;
    case 626u: goto L_089C28FC;
    case 627u: goto L_089C2908;
    case 628u: goto L_089C2918;
    case 629u: goto L_089C2920;
    case 630u: goto L_089C292C;
    case 631u: goto L_089C2938;
    case 632u: goto L_089C2944;
    case 633u: goto L_089C295C;
    case 634u: goto L_089C2964;
    case 635u: goto L_089C2970;
    case 636u: goto L_089C297C;
    case 637u: goto L_089C2984;
    case 638u: goto L_089C298C;
    case 639u: goto L_089C2998;
    case 640u: goto L_089C29A4;
    case 641u: goto L_089C29AC;
    case 642u: goto L_089C29B4;
    case 643u: goto L_089C29BC;
    case 644u: goto L_089C29C4;
    case 645u: goto L_089C29C8;
    case 646u: goto L_089C29D0;
    case 647u: goto L_089C29DC;
    case 648u: goto L_089C29E4;
    case 649u: goto L_089C29EC;
    case 650u: goto L_089C29F4;
    case 651u: goto L_089C29FC;
    case 652u: goto L_089C2A04;
    case 653u: goto L_089C2A0C;
    case 654u: goto L_089C2A18;
    case 655u: goto L_089C2A20;
    case 656u: goto L_089C2A28;
    case 657u: goto L_089C2A34;
    case 658u: goto L_089C2A3C;
    case 659u: goto L_089C2A44;
    case 660u: goto L_089C2A4C;
    case 661u: goto L_089C2A54;
    case 662u: goto L_089C2A64;
    case 663u: goto L_089C2A6C;
    case 664u: goto L_089C2A74;
    case 665u: goto L_089C2AA4;
    case 666u: goto L_089C2AB8;
    case 667u: goto L_089C2AC0;
    case 668u: goto L_089C2AC8;
    case 669u: goto L_089C2AD0;
    case 670u: goto L_089C2AE0;
    case 671u: goto L_089C2AE8;
    case 672u: goto L_089C2AF0;
    case 673u: goto L_089C2AF8;
    case 674u: goto L_089C2B08;
    case 675u: goto L_089C2B10;
    case 676u: goto L_089C2B28;
    case 677u: goto L_089C2B30;
    case 678u: goto L_089C2B38;
    case 679u: goto L_089C2B40;
    case 680u: goto L_089C2B48;
    case 681u: goto L_089C2B50;
    case 682u: goto L_089C2B58;
    case 683u: goto L_089C2B68;
    case 684u: goto L_089C2B70;
    case 685u: goto L_089C2B7C;
    case 686u: goto L_089C2B88;
    case 687u: goto L_089C2B90;
    case 688u: goto L_089C2B98;
    case 689u: goto L_089C2BA0;
    case 690u: goto L_089C2BA8;
    case 691u: goto L_089C2BB0;
    case 692u: goto L_089C2BB8;
    case 693u: goto L_089C2BC0;
    case 694u: goto L_089C2BC8;
    case 695u: goto L_089C2BD0;
    case 696u: goto L_089C2BD8;
    case 697u: goto L_089C2BE0;
    case 698u: goto L_089C2BE8;
    case 699u: goto L_089C2BF0;
    case 700u: goto L_089C2BF8;
    case 701u: goto L_089C2C00;
    case 702u: goto L_089C2C08;
    case 703u: goto L_089C2C1C;
    case 704u: goto L_089C2C4C;
    case 705u: goto L_089C2C5C;
    case 706u: goto L_089C2C68;
    case 707u: goto L_089C2C74;
    case 708u: goto L_089C2C80;
    case 709u: goto L_089C2C94;
    case 710u: goto L_089C2C9C;
    case 711u: goto L_089C2CA4;
    case 712u: goto L_089C2CB0;
    case 713u: goto L_089C2CB8;
    case 714u: goto L_089C2CC4;
    case 715u: goto L_089C2CF0;
    case 716u: goto L_089C2D0C;
    case 717u: goto L_089C2D18;
    case 718u: goto L_089C2D24;
    case 719u: goto L_089C2D2C;
    case 720u: goto L_089C2D34;
    case 721u: goto L_089C2D3C;
    case 722u: goto L_089C2D40;
    case 723u: goto L_089C2D4C;
    case 724u: goto L_089C2D54;
    case 725u: goto L_089C2D5C;
    case 726u: goto L_089C2D64;
    case 727u: goto L_089C2D84;
    case 728u: goto L_089C2DA0;
    case 729u: goto L_089C2DC0;
    case 730u: goto L_089C2DD0;
    case 731u: goto L_089C2DEC;
    case 732u: goto L_089C2DFC;
    case 733u: goto L_089C2E04;
    case 734u: goto L_089C2E24;
    case 735u: goto L_089C2E34;
    case 736u: goto L_089C2E50;
    case 737u: goto L_089C2E60;
    case 738u: goto L_089C2E80;
    case 739u: goto L_089C2E90;
    case 740u: goto L_089C2EAC;
    case 741u: goto L_089C2EBC;
    case 742u: goto L_089C2EC8;
    case 743u: goto L_089C2ED0;
    case 744u: goto L_089C2EDC;
    case 745u: goto L_089C2EE4;
    case 746u: goto L_089C2EF0;
    case 747u: goto L_089C2EF8;
    case 748u: goto L_089C2F00;
    case 749u: goto L_089C2F08;
    case 750u: goto L_089C2F10;
    case 751u: goto L_089C2F18;
    case 752u: goto L_089C2F40;
    case 753u: goto L_089C2F60;
    case 754u: goto L_089C2F68;
    case 755u: goto L_089C2F8C;
    case 756u: goto L_089C2FA0;
    case 757u: goto L_089C2FCC;
    case 758u: goto L_089C2FDC;
    case 759u: goto L_089C2FE8;
    case 760u: goto L_089C2FF4;
    case 761u: goto L_089C3000;
    case 762u: goto L_089C301C;
    case 763u: goto L_089C304C;
    case 764u: goto L_089C305C;
    case 765u: goto L_089C306C;
    case 766u: goto L_089C307C;
    case 767u: goto L_089C3084;
    case 768u: goto L_089C308C;
    case 769u: goto L_089C3098;
    case 770u: goto L_089C30B0;
    case 771u: goto L_089C30C8;
    case 772u: goto L_089C30D0;
    case 773u: goto L_089C30D8;
    case 774u: goto L_089C30E0;
    case 775u: goto L_089C30E8;
    case 776u: goto L_089C30F0;
    case 777u: goto L_089C3144;
    case 778u: goto L_089C314C;
    case 779u: goto L_089C3154;
    case 780u: goto L_089C315C;
    case 781u: goto L_089C3164;
    case 782u: goto L_089C316C;
    case 783u: goto L_089C3174;
    case 784u: goto L_089C317C;
    case 785u: goto L_089C3184;
    case 786u: goto L_089C318C;
    case 787u: goto L_089C3194;
    case 788u: goto L_089C3198;
    case 789u: goto L_089C31A8;
    case 790u: goto L_089C31B4;
    case 791u: goto L_089C31CC;
    case 792u: goto L_089C31DC;
    case 793u: goto L_089C31F8;
    case 794u: goto L_089C3210;
    case 795u: goto L_089C3238;
    case 796u: goto L_089C3240;
    case 797u: goto L_089C324C;
    case 798u: goto L_089C3258;
    case 799u: goto L_089C3268;
    case 800u: goto L_089C3270;
    case 801u: goto L_089C327C;
    case 802u: goto L_089C3284;
    case 803u: goto L_089C3290;
    case 804u: goto L_089C3298;
    case 805u: goto L_089C32A8;
    case 806u: goto L_089C32B4;
    case 807u: goto L_089C32C0;
    case 808u: goto L_089C32CC;
    case 809u: goto L_089C32D8;
    case 810u: goto L_089C32E4;
    case 811u: goto L_089C32F0;
    case 812u: goto L_089C32FC;
    case 813u: goto L_089C3308;
    case 814u: goto L_089C3314;
    case 815u: goto L_089C3320;
    case 816u: goto L_089C332C;
    case 817u: goto L_089C3338;
    case 818u: goto L_089C3340;
    case 819u: goto L_089C3348;
    case 820u: goto L_089C3350;
    case 821u: goto L_089C335C;
    case 822u: goto L_089C3364;
    case 823u: goto L_089C3370;
    case 824u: goto L_089C3384;
    case 825u: goto L_089C338C;
    case 826u: goto L_089C3394;
    case 827u: goto L_089C33AC;
    case 828u: goto L_089C33BC;
    case 829u: goto L_089C33CC;
    case 830u: goto L_089C33DC;
    case 831u: goto L_089C33EC;
    case 832u: goto L_089C33FC;
    case 833u: goto L_089C340C;
    case 834u: goto L_089C341C;
    case 835u: goto L_089C342C;
    case 836u: goto L_089C3440;
    case 837u: goto L_089C3450;
    case 838u: goto L_089C3464;
    case 839u: goto L_089C3478;
    case 840u: goto L_089C3488;
    case 841u: goto L_089C3498;
    case 842u: goto L_089C34A0;
    case 843u: goto L_089C34A8;
    case 844u: goto L_089C34B0;
    case 845u: goto L_089C34C0;
    case 846u: goto L_089C34C8;
    case 847u: goto L_089C34CC;
    case 848u: goto L_089C34D4;
    case 849u: goto L_089C34E4;
    case 850u: goto L_089C34EC;
    case 851u: goto L_089C34F4;
    case 852u: goto L_089C3504;
    case 853u: goto L_089C350C;
    case 854u: goto L_089C3514;
    case 855u: goto L_089C351C;
    case 856u: goto L_089C3528;
    case 857u: goto L_089C3530;
    case 858u: goto L_089C3538;
    case 859u: goto L_089C3540;
    case 860u: goto L_089C355C;
    case 861u: goto L_089C3568;
    case 862u: goto L_089C3578;
    case 863u: goto L_089C3584;
    case 864u: goto L_089C3590;
    case 865u: goto L_089C3598;
    case 866u: goto L_089C359C;
    case 867u: goto L_089C35A8;
    case 868u: goto L_089C35B0;
    case 869u: goto L_089C35C4;
    case 870u: goto L_089C35D4;
    case 871u: goto L_089C35E0;
    case 872u: goto L_089C35EC;
    case 873u: goto L_089C35F4;
    case 874u: goto L_089C35F8;
    case 875u: goto L_089C3604;
    case 876u: goto L_089C361C;
    case 877u: goto L_089C3628;
    case 878u: goto L_089C3634;
    case 879u: goto L_089C3640;
    case 880u: goto L_089C3648;
    case 881u: goto L_089C364C;
    case 882u: goto L_089C3658;
    case 883u: goto L_089C3674;
    case 884u: goto L_089C3698;
    case 885u: goto L_089C36A0;
    case 886u: goto L_089C36B4;
    case 887u: goto L_089C36C4;
    case 888u: goto L_089C36D0;
    case 889u: goto L_089C36DC;
    case 890u: goto L_089C36E4;
    case 891u: goto L_089C36E8;
    case 892u: goto L_089C36F4;
    case 893u: goto L_089C370C;
    case 894u: goto L_089C3718;
    case 895u: goto L_089C3724;
    case 896u: goto L_089C3730;
    case 897u: goto L_089C3738;
    case 898u: goto L_089C373C;
    case 899u: goto L_089C3748;
    case 900u: goto L_089C3764;
    case 901u: goto L_089C3788;
    case 902u: goto L_089C3790;
    case 903u: goto L_089C379C;
    case 904u: goto L_089C37A4;
    case 905u: goto L_089C37B0;
    case 906u: goto L_089C37B8;
    case 907u: goto L_089C37D8;
    case 908u: goto L_089C37E0;
    case 909u: goto L_089C37F8;
    case 910u: goto L_089C3804;
    case 911u: goto L_089C381C;
    case 912u: goto L_089C3824;
    case 913u: goto L_089C3844;
    case 914u: goto L_089C3860;
    case 915u: goto L_089C3868;
    case 916u: goto L_089C3880;
    case 917u: goto L_089C3888;
    case 918u: goto L_089C3898;
    case 919u: goto L_089C38A4;
    case 920u: goto L_089C38B0;
    case 921u: goto L_089C38B8;
    case 922u: goto L_089C38BC;
    case 923u: goto L_089C38C8;
    case 924u: goto L_089C38D0;
    case 925u: goto L_089C38D8;
    case 926u: goto L_089C38E4;
    case 927u: goto L_089C38EC;
    case 928u: goto L_089C38F4;
    case 929u: goto L_089C38FC;
    case 930u: goto L_089C3900;
    case 931u: goto L_089C3914;
    case 932u: goto L_089C3930;
    case 933u: goto L_089C393C;
    case 934u: goto L_089C3944;
    case 935u: goto L_089C394C;
    case 936u: goto L_089C3958;
    case 937u: goto L_089C3960;
    case 938u: goto L_089C396C;
    case 939u: goto L_089C3978;
    case 940u: goto L_089C3984;
    case 941u: goto L_089C3990;
    case 942u: goto L_089C399C;
    case 943u: goto L_089C39A8;
    case 944u: goto L_089C39B4;
    case 945u: goto L_089C39C0;
    case 946u: goto L_089C39CC;
    case 947u: goto L_089C39D8;
    case 948u: goto L_089C39E4;
    case 949u: goto L_089C39F0;
    case 950u: goto L_089C39FC;
    case 951u: goto L_089C3A08;
    case 952u: goto L_089C3A14;
    case 953u: goto L_089C3A20;
    case 954u: goto L_089C3A2C;
    case 955u: goto L_089C3A38;
    case 956u: goto L_089C3A44;
    case 957u: goto L_089C3A50;
    case 958u: goto L_089C3A5C;
    case 959u: goto L_089C3A68;
    case 960u: goto L_089C3A74;
    case 961u: goto L_089C3A80;
    case 962u: goto L_089C3A8C;
    case 963u: goto L_089C3A98;
    case 964u: goto L_089C3AA4;
    case 965u: goto L_089C3AB0;
    case 966u: goto L_089C3ABC;
    case 967u: goto L_089C3AC8;
    case 968u: goto L_089C3AD4;
    case 969u: goto L_089C3AE0;
    case 970u: goto L_089C3AEC;
    case 971u: goto L_089C3AF8;
    case 972u: goto L_089C3B04;
    case 973u: goto L_089C3B10;
    case 974u: goto L_089C3B1C;
    case 975u: goto L_089C3B28;
    case 976u: goto L_089C3B34;
    case 977u: goto L_089C3B40;
    case 978u: goto L_089C3B4C;
    case 979u: goto L_089C3B58;
    case 980u: goto L_089C3B64;
    case 981u: goto L_089C3B70;
    case 982u: goto L_089C3B7C;
    case 983u: goto L_089C3B88;
    case 984u: goto L_089C3B94;
    case 985u: goto L_089C3BA0;
    case 986u: goto L_089C3BAC;
    case 987u: goto L_089C3BB8;
    case 988u: goto L_089C3BC4;
    case 989u: goto L_089C3BD0;
    case 990u: goto L_089C3BDC;
    case 991u: goto L_089C3BE8;
    case 992u: goto L_089C3BF4;
    case 993u: goto L_089C3C00;
    case 994u: goto L_089C3C0C;
    case 995u: goto L_089C3C18;
    case 996u: goto L_089C3C24;
    case 997u: goto L_089C3C30;
    case 998u: goto L_089C3C3C;
    case 999u: goto L_089C3C48;
    case 1000u: goto L_089C3C54;
    case 1001u: goto L_089C3C60;
    case 1002u: goto L_089C3C6C;
    case 1003u: goto L_089C3C78;
    case 1004u: goto L_089C3C84;
    case 1005u: goto L_089C3C90;
    case 1006u: goto L_089C3C9C;
    case 1007u: goto L_089C3CA8;
    case 1008u: goto L_089C3CB4;
    case 1009u: goto L_089C3CC0;
    case 1010u: goto L_089C3CCC;
    case 1011u: goto L_089C3CD8;
    case 1012u: goto L_089C3CE4;
    case 1013u: goto L_089C3CF0;
    case 1014u: goto L_089C3CFC;
    case 1015u: goto L_089C3D08;
    case 1016u: goto L_089C3D14;
    case 1017u: goto L_089C3D20;
    case 1018u: goto L_089C3D2C;
    case 1019u: goto L_089C3D38;
    case 1020u: goto L_089C3D44;
    case 1021u: goto L_089C3D50;
    case 1022u: goto L_089C3D5C;
    case 1023u: goto L_089C3D68;
    case 1024u: goto L_089C3D74;
    case 1025u: goto L_089C3D80;
    case 1026u: goto L_089C3D8C;
    case 1027u: goto L_089C3D98;
    case 1028u: goto L_089C3DA4;
    case 1029u: goto L_089C3DB0;
    case 1030u: goto L_089C3DBC;
    case 1031u: goto L_089C3DC8;
    case 1032u: goto L_089C3DD4;
    case 1033u: goto L_089C3DE0;
    case 1034u: goto L_089C3DEC;
    case 1035u: goto L_089C3DF8;
    case 1036u: goto L_089C3E04;
    case 1037u: goto L_089C3E10;
    case 1038u: goto L_089C3E1C;
    case 1039u: goto L_089C3E28;
    case 1040u: goto L_089C3E34;
    case 1041u: goto L_089C3E40;
    case 1042u: goto L_089C3E4C;
    case 1043u: goto L_089C3E58;
    case 1044u: goto L_089C3E64;
    case 1045u: goto L_089C3E70;
    case 1046u: goto L_089C3E7C;
    case 1047u: goto L_089C3E88;
    case 1048u: goto L_089C3E94;
    case 1049u: goto L_089C3EA0;
    case 1050u: goto L_089C3EAC;
    case 1051u: goto L_089C3EB8;
    case 1052u: goto L_089C3EC4;
    case 1053u: goto L_089C3ED0;
    case 1054u: goto L_089C3EDC;
    case 1055u: goto L_089C3EE8;
    case 1056u: goto L_089C3EF4;
    case 1057u: goto L_089C3F00;
    case 1058u: goto L_089C3F0C;
    case 1059u: goto L_089C3F1C;
    case 1060u: goto L_089C3F5C;
    case 1061u: goto L_089C3F74;
    case 1062u: goto L_089C3F88;
    case 1063u: goto L_089C3F90;
    case 1064u: goto L_089C3F98;
    case 1065u: goto L_089C3FA4;
    case 1066u: goto L_089C3FB0;
    case 1067u: goto L_089C3FC4;
    case 1068u: goto L_089C3FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089C0000:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2204u << 16u);
      if (branch_taken) {
          goto L_089C0018;
      }
      goto L_089C0008;
    }
L_089C0008:
    ctx.gpr[31] = (0x089C0010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x089C0010u) goto L_089C0010;
    return;
L_089C0010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[5] = (2204u << 16u);
    goto L_089C0018;
L_089C0018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089C0028u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-528));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BDECu>(ctx, &aot_mem) && ctx.pc == 0x089C0028u) goto L_089C0028;
    return;
L_089C0028:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_089C0044;
    }
    goto L_089C0034;
L_089C0034:
    ctx.gpr[31] = (0x089C003Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x089C003Cu) goto L_089C003C;
    return;
L_089C003C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_089C0044;
L_089C0044:
    ctx.gpr[31] = (0x089C004Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 25u, 0x0890C210u>(ctx, &aot_mem) && ctx.pc == 0x089C004Cu) goto L_089C004C;
    return;
L_089C004C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2226u << 16u);
      if (branch_taken) {
          goto L_089C0068;
      }
      goto L_089C0058;
    }
L_089C0058:
    ctx.gpr[31] = (0x089C0060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x089C0060u) goto L_089C0060;
    return;
L_089C0060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[5] = (2226u << 16u);
    goto L_089C0068;
L_089C0068:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089C0074u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16028));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x089C0074u) goto L_089C0074;
    return;
L_089C0074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2204u << 16u);
      if (branch_taken) {
          goto L_089C0090;
      }
      goto L_089C0080;
    }
L_089C0080:
    ctx.gpr[31] = (0x089C0088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x089C0088u) goto L_089C0088;
    return;
L_089C0088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[5] = (2204u << 16u);
    goto L_089C0090;
L_089C0090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089C00A0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-320));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BDECu>(ctx, &aot_mem) && ctx.pc == 0x089C00A0u) goto L_089C00A0;
    return;
L_089C00A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_089C00BC;
    }
    goto L_089C00AC;
L_089C00AC:
    ctx.gpr[31] = (0x089C00B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x089C00B4u) goto L_089C00B4;
    return;
L_089C00B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_089C00BC;
L_089C00BC:
    ctx.gpr[31] = (0x089C00C4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 25u, 0x0890C210u>(ctx, &aot_mem) && ctx.pc == 0x089C00C4u) goto L_089C00C4;
    return;
L_089C00C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C00D4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28844)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28848)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[11] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-28840), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-28832), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-28836), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-28828), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-28824), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C014C:
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
L_089C0178:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C01D0;
      }
      goto L_089C019C;
    }
L_089C019C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089C01A0;
L_089C01A0:
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089C01BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 310u, 0x08A59C1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C01BCu) goto L_089C01BC;
    return;
L_089C01BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089C01A0;
    }
    goto L_089C01D0;
L_089C01D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C01E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C030C;
      }
      goto L_089C0228;
    }
L_089C0228:
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[18] = (2226u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5736));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-16008));
    goto L_089C0238;
L_089C0238:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C02E0;
      }
      goto L_089C0244;
    }
L_089C0244:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C025C;
      }
      goto L_089C0254;
    }
L_089C0254:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C0284;
      }
      goto L_089C025C;
    }
L_089C025C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0270;
      }
      goto L_089C0268;
    }
L_089C0268:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089C0284;
      }
      goto L_089C0270;
    }
L_089C0270:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C0280u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DC4u>(ctx, &aot_mem) && ctx.pc == 0x089C0280u) goto L_089C0280;
    return;
L_089C0280:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089C0284;
L_089C0284:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C02B4;
      }
      goto L_089C028C;
    }
L_089C028C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089C0298u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 426u, 0x08A5A380u>(ctx, &aot_mem) && ctx.pc == 0x089C0298u) goto L_089C0298;
    return;
L_089C0298:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C02DC;
      }
      goto L_089C02A0;
    }
L_089C02A0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089C02ACu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 355u, 0x08A59E08u>(ctx, &aot_mem) && ctx.pc == 0x089C02ACu) goto L_089C02AC;
    return;
L_089C02AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C02DC;
      }
      goto L_089C02B4;
    }
L_089C02B4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089C02C0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 426u, 0x08A5A380u>(ctx, &aot_mem) && ctx.pc == 0x089C02C0u) goto L_089C02C0;
    return;
L_089C02C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C02DC;
      }
      goto L_089C02C8;
    }
L_089C02C8:
    ctx.gpr[31] = (0x089C02D0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C014C;
L_089C02D0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089C02DCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 380u, 0x08A59FF4u>(ctx, &aot_mem) && ctx.pc == 0x089C02DCu) goto L_089C02DC;
    return;
L_089C02DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089C02E0;
L_089C02E0:
    ctx.gpr[31] = (0x089C02E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 888u, 0x08AFBD8Cu>(ctx, &aot_mem) && ctx.pc == 0x089C02E8u) goto L_089C02E8;
    return;
L_089C02E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[4] ^ ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C0238;
      }
      goto L_089C030C;
    }
L_089C030C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C032C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C03C0;
      }
      goto L_089C037C;
    }
L_089C037C:
    ctx.gpr[21] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    goto L_089C0380;
L_089C0380:
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[23] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C03B0;
      }
      goto L_089C0390;
    }
L_089C0390:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C03A0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_089C06D4;
L_089C03A0:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[23] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0390;
      }
      goto L_089C03B0;
    }
L_089C03B0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0380;
      }
      goto L_089C03C0;
    }
L_089C03C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C04F8;
      }
      goto L_089C03E4;
    }
L_089C03E4:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[19] = (32768u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_089C03F8;
L_089C03F8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x089C0404u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 888u, 0x08AFBD8Cu>(ctx, &aot_mem) && ctx.pc == 0x089C0404u) goto L_089C0404;
    return;
L_089C0404:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089C04C4;
      }
      goto L_089C041C;
    }
L_089C041C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[17] - ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (static_cast<std::int32_t>(ctx.gpr[6]) < 0) {
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
        goto L_089C0434;
    }
    goto L_089C0434;
L_089C0434:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
        goto L_089C0458;
    }
    goto L_089C0448;
L_089C0448:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_089C0468;
      }
      goto L_089C0458;
    }
L_089C0458:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    goto L_089C0468;
L_089C0468:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C04C8;
      }
      goto L_089C0470;
    }
L_089C0470:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (static_cast<std::int32_t>(ctx.gpr[6]) < 0) {
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
        goto L_089C0488;
    }
    goto L_089C0488;
L_089C0488:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
        goto L_089C04AC;
    }
    goto L_089C049C;
L_089C049C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_089C04BC;
      }
      goto L_089C04AC;
    }
L_089C04AC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    goto L_089C04BC;
L_089C04BC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C04C8;
      }
      goto L_089C04C4;
    }
L_089C04C4:
    ctx.gpr[5] = (0u | 1u);
    goto L_089C04C8;
L_089C04C8:
    ctx.gpr[31] = (0x089C04D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 485u, 0x08A5A854u>(ctx, &aot_mem) && ctx.pc == 0x089C04D0u) goto L_089C04D0;
    return;
L_089C04D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C03F8;
      }
      goto L_089C04F8;
    }
L_089C04F8:
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
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C052C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C059C;
      }
      goto L_089C0568;
    }
L_089C0568:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    goto L_089C0570;
L_089C0570:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
        goto L_089C0590;
    }
    goto L_089C0580;
L_089C0580:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089C0594;
      }
      goto L_089C0590;
    }
L_089C0590:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089C0594;
L_089C0594:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
        goto L_089C0570;
    }
    goto L_089C059C;
L_089C059C:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089C05CC;
      }
      goto L_089C05BC;
    }
L_089C05BC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089C06B4;
      }
      goto L_089C05CC;
    }
L_089C05CC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089C05DCu);
    ctx.gpr[4] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089C05DCu) goto L_089C05DC;
    return;
L_089C05DC:
    ctx.gpr[20] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(5736));
      if (branch_taken) {
          goto L_089C05FC;
      }
      goto L_089C05EC;
    }
L_089C05EC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C05F8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 308u, 0x08A59B80u>(ctx, &aot_mem) && ctx.pc == 0x089C05F8u) goto L_089C05F8;
    return;
L_089C05F8:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_089C05FC;
L_089C05FC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x089C062Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 826u, 0x08B03C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089C062Cu) goto L_089C062C;
    return;
L_089C062C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    goto L_089C063C;
L_089C063C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_089C066C;
    }
    goto L_089C066C;
L_089C066C:
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C06AC;
      }
      goto L_089C0678;
    }
L_089C0678:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C0688u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DC4u>(ctx, &aot_mem) && ctx.pc == 0x089C0688u) goto L_089C0688;
    return;
L_089C0688:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C06A0;
      }
      goto L_089C0690;
    }
L_089C0690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C06A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 355u, 0x08A59E08u>(ctx, &aot_mem) && ctx.pc == 0x089C06A0u) goto L_089C06A0;
    return;
L_089C06A0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_089C063C;
      }
      goto L_089C06AC;
    }
L_089C06AC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    goto L_089C06B4;
L_089C06B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C06D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089C0720;
      }
      goto L_089C0714;
    }
L_089C0714:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089C0720;
L_089C0720:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_089C0738;
      }
      goto L_089C072C;
    }
L_089C072C:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_089C0738;
L_089C0738:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (17280u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089C0794;
      }
      goto L_089C0760;
    }
L_089C0760:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_089C0768;
L_089C0768:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_089C0788;
    }
    goto L_089C0778;
L_089C0778:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089C078C;
      }
      goto L_089C0788;
    }
L_089C0788:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_089C078C;
L_089C078C:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_089C0768;
    }
    goto L_089C0794;
L_089C0794:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089C07C4;
      }
      goto L_089C07B4;
    }
L_089C07B4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089C08A0;
      }
      goto L_089C07C4;
    }
L_089C07C4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x089C07D4u);
    ctx.gpr[4] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089C07D4u) goto L_089C07D4;
    return;
L_089C07D4:
    ctx.gpr[22] = (2232u << 16u);
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(5736));
      if (branch_taken) {
          goto L_089C07FC;
      }
      goto L_089C07E4;
    }
L_089C07E4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C07F8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 309u, 0x08A59BC8u>(ctx, &aot_mem) && ctx.pc == 0x089C07F8u) goto L_089C07F8;
    return;
L_089C07F8:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_089C07FC;
L_089C07FC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x089C082Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 826u, 0x08B03C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089C082Cu) goto L_089C082C;
    return;
L_089C082C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(100)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    goto L_089C0844;
L_089C0844:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_089C0874;
    }
    goto L_089C0874;
L_089C0874:
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C08A0;
      }
      goto L_089C0880;
    }
L_089C0880:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C088Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 355u, 0x08A59E08u>(ctx, &aot_mem) && ctx.pc == 0x089C088Cu) goto L_089C088C;
    return;
L_089C088C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_089C0844;
      }
      goto L_089C08A0;
    }
L_089C08A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C08C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C08ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15948));
    goto L_089C014C;
L_089C08EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C094C;
      }
      goto L_089C0910;
    }
L_089C0910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x089C091Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 380u, 0x08A59FF4u>(ctx, &aot_mem) && ctx.pc == 0x089C091Cu) goto L_089C091C;
    return;
L_089C091C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x089C0928u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 888u, 0x08AFBD8Cu>(ctx, &aot_mem) && ctx.pc == 0x089C0928u) goto L_089C0928;
    return;
L_089C0928:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[4] ^ ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C0910;
      }
      goto L_089C094C;
    }
L_089C094C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0960:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C0974u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 754u, 0x08B036A8u>(ctx, &aot_mem) && ctx.pc == 0x089C0974u) goto L_089C0974;
    return;
L_089C0974:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0980:
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
L_089C09AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C09B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C09BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C09C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C09D4u);
    // nop
    ctx.pc = 0x08B0B9A4u;
    return;
L_089C09D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C09E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-28720)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0A04;
      }
      goto L_089C09F8;
    }
L_089C09F8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C0A04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15896));
    goto L_089C0980;
L_089C0A04:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0A10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-28700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C0AA4;
      }
      goto L_089C0A2C;
    }
L_089C0A2C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15872));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[31] = (0x089C0A44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C0980;
L_089C0A44:
    ctx.gpr[31] = (0x089C0A4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C0980;
L_089C0A4C:
    ctx.gpr[31] = (0x089C0A54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C0980;
L_089C0A54:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C0A60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15824));
    goto L_089C0980;
L_089C0A60:
    ctx.gpr[31] = (0x089C0A68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C0980;
L_089C0A68:
    ctx.gpr[31] = (0x089C0A70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C0980;
L_089C0A70:
    ctx.gpr[31] = (0x089C0A78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C0980;
L_089C0A78:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[16] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-28700), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x089C0A8Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 745u, 0x089C71ACu>(ctx, &aot_mem) && ctx.pc == 0x089C0A8Cu) goto L_089C0A8C;
    return;
L_089C0A8C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-28700), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089C0A9Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x089C0A9Cu) goto L_089C0A9C;
    return;
L_089C0A9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0AAC;
      }
      goto L_089C0AA4;
    }
L_089C0AA4:
    // Outer sweep still owns the flag. Clearing it lets a second sweep start.
    ctx.gpr[2] = (0u | 0u);
    goto L_089C0AAC;
L_089C0AAC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0ABC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15872));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C0AE8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C0980;
L_089C0AE8:
    ctx.gpr[31] = (0x089C0AF0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C0980;
L_089C0AF0:
    ctx.gpr[31] = (0x089C0AF8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C0980;
L_089C0AF8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C0B04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15780));
    goto L_089C0980;
L_089C0B04:
    ctx.gpr[31] = (0x089C0B0Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C0980;
L_089C0B0C:
    ctx.gpr[31] = (0x089C0B14u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C0980;
L_089C0B14:
    ctx.gpr[31] = (0x089C0B1Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C0980;
L_089C0B1C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26464));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C0B30u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 146u, 0x089D5578u>(ctx, &aot_mem) && ctx.pc == 0x089C0B30u) goto L_089C0B30;
    return;
L_089C0B30:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C0B3Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 131u, 0x089D5468u>(ctx, &aot_mem) && ctx.pc == 0x089C0B3Cu) goto L_089C0B3C;
    return;
L_089C0B3C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C0B48u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x089C0B48u) goto L_089C0B48;
    return;
L_089C0B48:
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
L_089C0B60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-28699)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089C0D04;
      }
      goto L_089C0B90;
    }
L_089C0B90:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15872));
    ctx.gpr[31] = (0x089C0BA0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C0980;
L_089C0BA0:
    ctx.gpr[31] = (0x089C0BA8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C0980;
L_089C0BA8:
    ctx.gpr[31] = (0x089C0BB0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C0980;
L_089C0BB0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C0BBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15736));
    goto L_089C0980;
L_089C0BBC:
    ctx.gpr[31] = (0x089C0BC4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C0980;
L_089C0BC4:
    ctx.gpr[31] = (0x089C0BCCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C0980;
L_089C0BCC:
    ctx.gpr[31] = (0x089C0BD4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C0980;
L_089C0BD4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-28699), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0C64;
      }
      goto L_089C0BFC;
    }
L_089C0BFC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089C0C08u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089C0C08u) goto L_089C0C08;
    return;
L_089C0C08:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0C50;
      }
      goto L_089C0C14;
    }
L_089C0C14:
    ctx.gpr[31] = (0x089C0C1Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 697u, 0x089A2E7Cu>(ctx, &aot_mem) && ctx.pc == 0x089C0C1Cu) goto L_089C0C1C;
    return;
L_089C0C1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0C50;
      }
      goto L_089C0C24;
    }
L_089C0C24:
    ctx.gpr[31] = (0x089C0C2Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x089C0C2Cu) goto L_089C0C2C;
    return;
L_089C0C2C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0C50;
      }
      goto L_089C0C34;
    }
L_089C0C34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089C0C50u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C0C50u) goto L_089C0C50;
    return;
L_089C0C50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C0BFC;
      }
      goto L_089C0C64;
    }
L_089C0C64:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0CE8;
      }
      goto L_089C0C80;
    }
L_089C0C80:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089C0C8Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089C0C8Cu) goto L_089C0C8C;
    return;
L_089C0C8C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0CD4;
      }
      goto L_089C0C98;
    }
L_089C0C98:
    ctx.gpr[31] = (0x089C0CA0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 541u, 0x0889EB14u>(ctx, &aot_mem) && ctx.pc == 0x089C0CA0u) goto L_089C0CA0;
    return;
L_089C0CA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0CD4;
      }
      goto L_089C0CA8;
    }
L_089C0CA8:
    ctx.gpr[31] = (0x089C0CB0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x089C0CB0u) goto L_089C0CB0;
    return;
L_089C0CB0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0CD4;
      }
      goto L_089C0CB8;
    }
L_089C0CB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089C0CD4u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C0CD4u) goto L_089C0CD4;
    return;
L_089C0CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C0C80;
      }
      goto L_089C0CE8;
    }
L_089C0CE8:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-28699), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C0CFCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x089C0CFCu) goto L_089C0CFC;
    return;
L_089C0CFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0D10;
      }
      goto L_089C0D04;
    }
L_089C0D04:
    // Outer sweep still owns the flag. Clearing it lets a second sweep start.
    ctx.gpr[2] = (0u | 0u);
    goto L_089C0D10;
L_089C0D10:
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
L_089C0D30:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0D38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31996)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C0D50u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0BC0Cu;
    return;
L_089C0D50:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16376)));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (2204u << 16u);
    ctx.gpr[8] = (0u | 16384u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15696));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12792));
    ctx.gpr[31] = (0x089C0D78u);
    ctx.gpr[7] = (2u << 16u);
    ctx.pc = 0x08B0BBA4u;
    return;
L_089C0D78:
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-32000), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089C0D90u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BBACu;
    return;
L_089C0D90:
    ctx.gpr[31] = (0x089C0D98u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BBBCu;
    return;
L_089C0D98:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0DA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C0DC4u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_089C0D30;
L_089C0DC4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C0DD0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089C09E0;
L_089C0DD0:
    ctx.gpr[31] = (0x089C0DD8u);
    // nop
    ctx.pc = 0x08B0BBDCu;
    return;
L_089C0DD8:
    ctx.gpr[16] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-31996), ctx.gpr[2]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16376)));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (2204u << 16u);
    ctx.gpr[7] = (0u | 2048u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15684));
    ctx.gpr[31] = (0x089C0E08u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3384));
    ctx.pc = 0x08B0BBA4u;
    return;
L_089C0E08:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089C0E18u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BBACu;
    return;
L_089C0E18:
    ctx.gpr[31] = (0x089C0E20u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31996)));
    ctx.pc = 0x08B0BBBCu;
    return;
L_089C0E20:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0E38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C0E64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 159u, 0x088E8CF4u>(ctx, &aot_mem) && ctx.pc == 0x089C0E64u) goto L_089C0E64;
    return;
L_089C0E64:
    ctx.gpr[31] = (0x089C0E6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 221u, 0x088B92B8u>(ctx, &aot_mem) && ctx.pc == 0x089C0E6Cu) goto L_089C0E6C;
    return;
L_089C0E6C:
    ctx.gpr[31] = (0x089C0E74u);
    // nop
    goto L_089C09BC;
L_089C0E74:
    ctx.gpr[31] = (0x089C0E7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 222u, 0x088B92C0u>(ctx, &aot_mem) && ctx.pc == 0x089C0E7Cu) goto L_089C0E7C;
    return;
L_089C0E7C:
    ctx.gpr[31] = (0x089C0E84u);
    // nop
    goto L_089C09AC;
L_089C0E84:
    ctx.gpr[31] = (0x089C0E8Cu);
    // nop
    goto L_089C09B4;
L_089C0E8C:
    ctx.gpr[31] = (0x089C0E94u);
    // nop
    goto L_089C11D0;
L_089C0E94:
    ctx.gpr[31] = (0x089C0E9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A963ACu>(ctx, &aot_mem) && ctx.pc == 0x089C0E9Cu) goto L_089C0E9C;
    return;
L_089C0E9C:
    ctx.gpr[31] = (0x089C0EA4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x089C0EA4u) goto L_089C0EA4;
    return;
L_089C0EA4:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(130), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25760), 0u);
    ctx.gpr[17] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-29515), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-29514), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[20] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-29516), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[21] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(-25756), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[22] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[22]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089C0EECu);
    ctx.gpr[4] = (0u | 8u);
    ctx.pc = 0x08B0B864u;
    return;
L_089C0EEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-29516), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C0F30;
      }
      goto L_089C0F04;
    }
L_089C0F04:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C0F88;
      }
      goto L_089C0F10;
    }
L_089C0F10:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0F74;
      }
      goto L_089C0F18;
    }
L_089C0F18:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25764), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25760), ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-29515), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(-25756), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-25812), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_089C0F94;
      }
      goto L_089C0F30;
    }
L_089C0F30:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C0F58;
      }
      goto L_089C0F3C;
    }
L_089C0F3C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0F88;
      }
      goto L_089C0F44;
    }
L_089C0F44:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25764), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25760), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-25812), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_089C0F94;
      }
      goto L_089C0F58;
    }
L_089C0F58:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25764), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25760), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-29514), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(-25756), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-25812), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_089C0F94;
      }
      goto L_089C0F74;
    }
L_089C0F74:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25764), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25760), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-25812), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_089C0F94;
      }
      goto L_089C0F88;
    }
L_089C0F88:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25764), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25760), 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-25812), static_cast<std::uint8_t>(0u));
    goto L_089C0F94;
L_089C0F94:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25810), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[31] = (0x089C0FA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6320));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 178u, 0x089F9680u>(ctx, &aot_mem) && ctx.pc == 0x089C0FA8u) goto L_089C0FA8;
    return;
L_089C0FA8:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-29516), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-29514), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(-25756), static_cast<std::uint8_t>(0u));
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
L_089C0FDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (90u << 16u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C0FFCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089C0FFCu) goto L_089C0FFC;
    return;
L_089C0FFC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1014;
      }
      goto L_089C1008;
    }
L_089C1008:
    ctx.gpr[31] = (0x089C1010u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 172u, 0x08AD5234u>(ctx, &aot_mem) && ctx.pc == 0x089C1010u) goto L_089C1010;
    return;
L_089C1010:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089C1014;
L_089C1014:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[7] = (2u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15668));
    ctx.gpr[31] = (0x089C1030u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-31072));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 268u, 0x08AD58B4u>(ctx, &aot_mem) && ctx.pc == 0x089C1030u) goto L_089C1030;
    return;
L_089C1030:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089C1048u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15628));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 268u, 0x08AD58B4u>(ctx, &aot_mem) && ctx.pc == 0x089C1048u) goto L_089C1048;
    return;
L_089C1048:
    ctx.gpr[31] = (0x089C1050u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 213u, 0x08AD5548u>(ctx, &aot_mem) && ctx.pc == 0x089C1050u) goto L_089C1050;
    return;
L_089C1050:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C105Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 174u, 0x08AD525Cu>(ctx, &aot_mem) && ctx.pc == 0x089C105Cu) goto L_089C105C;
    return;
L_089C105C:
    ctx.gpr[31] = (0x089C1064u);
    // nop
    ctx.pc = 0x08B0BBDCu;
    return;
L_089C1064:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16376)));
    ctx.gpr[31] = (0x089C1074u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BBD4u;
    return;
L_089C1074:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C108C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (90u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15584));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C10A8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(512));
    goto L_089C0980;
L_089C10A8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x089C10B4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089C0FDC;
L_089C10B4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C10C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C10E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6320));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 183u, 0x089F96A8u>(ctx, &aot_mem) && ctx.pc == 0x089C10E4u) goto L_089C10E4;
    return;
L_089C10E4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C1110;
      }
      goto L_089C10F0;
    }
L_089C10F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089C1100;
      }
      goto L_089C10F8;
    }
L_089C10F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C11B8;
      }
      goto L_089C1100;
    }
L_089C1100:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-28740), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C11B8;
      }
      goto L_089C1110;
    }
L_089C1110:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C112C;
      }
      goto L_089C1118;
    }
L_089C1118:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C10F8;
      }
      goto L_089C1120;
    }
L_089C1120:
    ctx.gpr[4] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28740), 0u);
      if (branch_taken) {
          goto L_089C11B8;
      }
      goto L_089C112C;
    }
L_089C112C:
    ctx.gpr[31] = (0x089C1134u);
    ctx.gpr[4] = (0u | 1u);
    goto L_089C3914;
L_089C1134:
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C116C;
      }
      goto L_089C1144;
    }
L_089C1144:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C1150u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089C1150u) goto L_089C1150;
    return;
L_089C1150:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1168;
      }
      goto L_089C115C;
    }
L_089C115C:
    ctx.gpr[31] = (0x089C1164u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089C1164u) goto L_089C1164;
    return;
L_089C1164:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089C1168;
L_089C1168:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    goto L_089C116C;
L_089C116C:
    ctx.gpr[31] = (0x089C1174u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 407u, 0x08913B04u>(ctx, &aot_mem) && ctx.pc == 0x089C1174u) goto L_089C1174;
    return;
L_089C1174:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C11A8;
      }
      goto L_089C1180;
    }
L_089C1180:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C118Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089C118Cu) goto L_089C118C;
    return;
L_089C118C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C11A4;
      }
      goto L_089C1198;
    }
L_089C1198:
    ctx.gpr[31] = (0x089C11A0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089C11A0u) goto L_089C11A0;
    return;
L_089C11A0:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089C11A4;
L_089C11A4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    goto L_089C11A8;
L_089C11A8:
    ctx.gpr[31] = (0x089C11B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 442u, 0x08913D64u>(ctx, &aot_mem) && ctx.pc == 0x089C11B0u) goto L_089C11B0;
    return;
L_089C11B0:
    ctx.gpr[31] = (0x089C11B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 32u, 0x08A54404u>(ctx, &aot_mem) && ctx.pc == 0x089C11B8u) goto L_089C11B8;
    return;
L_089C11B8:
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
L_089C11D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C11D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[10] | 0u);
    ctx.gpr[18] = (ctx.gpr[9] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    ctx.gpr[21] = (ctx.gpr[6] | 0u);
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[16] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[31] = (0x089C122Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 163u, 0x0883CBF8u>(ctx, &aot_mem) && ctx.pc == 0x089C122Cu) goto L_089C122C;
    return;
L_089C122C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3172)));
    ctx.gpr[4] = (15374u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 64053u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vrot(1u, 64u, 2u, 4u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<33u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] / vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (16355u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 36409u);
    ctx.fpr[13] = lcs::lcs_widescreen_aspect(std::bit_cast<float>(ctx.gpr[5]));
    ctx.fpr[12] = lcs::lcs_widescreen_extent(ctx.fpr[12]);
    ctx.gpr[31] = (0x089C12A4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 276u, 0x08839298u>(ctx, &aot_mem) && ctx.pc == 0x089C12A4u) goto L_089C12A4;
    return;
L_089C12A4:
    ctx.gpr[31] = (0x089C12ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 517u, 0x08926F84u>(ctx, &aot_mem) && ctx.pc == 0x089C12ACu) goto L_089C12AC;
    return;
L_089C12AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C12C0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 633u, 0x088738A8u>(ctx, &aot_mem) && ctx.pc == 0x089C12C0u) goto L_089C12C0;
    return;
L_089C12C0:
    ctx.gpr[31] = (0x089C12C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 575u, 0x0891736Cu>(ctx, &aot_mem) && ctx.pc == 0x089C12C8u) goto L_089C12C8;
    return;
L_089C12C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C12E8;
      }
      goto L_089C12D0;
    }
L_089C12D0:
    ctx.gpr[31] = (0x089C12D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 878u, 0x08AD37E0u>(ctx, &aot_mem) && ctx.pc == 0x089C12D8u) goto L_089C12D8;
    return;
L_089C12D8:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (2229u << 16u);
      if (branch_taken) {
          goto L_089C12FC;
      }
      goto L_089C12E0;
    }
L_089C12E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1340;
      }
      goto L_089C12E8;
    }
L_089C12E8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C12F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15556));
    goto L_089C0980;
L_089C12F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C1344;
      }
      goto L_089C12FC;
    }
L_089C12FC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x089C1328u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x089C1328u) goto L_089C1328;
    return;
L_089C1328:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C1340u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 15u, 0x08AD40B0u>(ctx, &aot_mem) && ctx.pc == 0x089C1340u) goto L_089C1340;
    return;
L_089C1340:
    ctx.gpr[2] = (0u | 1u);
    goto L_089C1344;
L_089C1344:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1370:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[23] = (ctx.gpr[4] << 16u);
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 16u));
    ctx.gpr[22] = (ctx.gpr[5] << 16u);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 16u));
    ctx.gpr[21] = (ctx.gpr[6] << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    ctx.gpr[20] = (ctx.gpr[7] << 16u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 16u));
    ctx.gpr[19] = (ctx.gpr[8] << 16u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
    ctx.gpr[18] = (ctx.gpr[9] << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[17] = (ctx.gpr[10] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3172)));
    ctx.gpr[4] = (15374u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 64053u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vrot(1u, 64u, 2u, 4u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<33u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] / vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089C1414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 163u, 0x0883CBF8u>(ctx, &aot_mem) && ctx.pc == 0x089C1414u) goto L_089C1414;
    return;
L_089C1414:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-7960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (16355u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 36409u);
    ctx.fpr[13] = lcs::lcs_widescreen_aspect(std::bit_cast<float>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089C1438u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = lcs::lcs_widescreen_extent(ctx.fpr[12]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 276u, 0x08839298u>(ctx, &aot_mem) && ctx.pc == 0x089C1438u) goto L_089C1438;
    return;
L_089C1438:
    ctx.gpr[31] = (0x089C1440u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 517u, 0x08926F84u>(ctx, &aot_mem) && ctx.pc == 0x089C1440u) goto L_089C1440;
    return;
L_089C1440:
    ctx.gpr[31] = (0x089C1448u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 575u, 0x0891736Cu>(ctx, &aot_mem) && ctx.pc == 0x089C1448u) goto L_089C1448;
    return;
L_089C1448:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C1458;
      }
      goto L_089C1450;
    }
L_089C1450:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C14B8;
      }
      goto L_089C1458;
    }
L_089C1458:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089C146Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6288));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 633u, 0x088738A8u>(ctx, &aot_mem) && ctx.pc == 0x089C146Cu) goto L_089C146C;
    return;
L_089C146C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089C1478u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 271u, 0x088EDEB8u>(ctx, &aot_mem) && ctx.pc == 0x089C1478u) goto L_089C1478;
    return;
L_089C1478:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24084)));
    ctx.gpr[31] = (0x089C1488u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089C1488u) goto L_089C1488;
    return;
L_089C1488:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x089C1494u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089C1494u) goto L_089C1494;
    return;
L_089C1494:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C14B4u);
    ctx.gpr[10] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 548u, 0x08837860u>(ctx, &aot_mem) && ctx.pc == 0x089C14B4u) goto L_089C14B4;
    return;
L_089C14B4:
    ctx.gpr[2] = (0u | 1u);
    goto L_089C14B8;
L_089C14B8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C14E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C14F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 422u, 0x088366ACu>(ctx, &aot_mem) && ctx.pc == 0x089C14F8u) goto L_089C14F8;
    return;
L_089C14F8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1504:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C1520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 592u, 0x08AB358Cu>(ctx, &aot_mem) && ctx.pc == 0x089C1520u) goto L_089C1520;
    return;
L_089C1520:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089C155C;
      }
      goto L_089C1528;
    }
L_089C1528:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26956)));
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31992)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089C155C;
      }
      goto L_089C153C;
    }
L_089C153C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26956)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-31992), ctx.gpr[4]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1564;
      }
      goto L_089C1554;
    }
L_089C1554:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C158C;
      }
      goto L_089C155C;
    }
L_089C155C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C168C;
      }
      goto L_089C1564;
    }
L_089C1564:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C1570u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089C1570u) goto L_089C1570;
    return;
L_089C1570:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1588;
      }
      goto L_089C157C;
    }
L_089C157C:
    ctx.gpr[31] = (0x089C1584u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089C1584u) goto L_089C1584;
    return;
L_089C1584:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089C1588;
L_089C1588:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    goto L_089C158C;
L_089C158C:
    ctx.gpr[31] = (0x089C1594u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 406u, 0x08913AF8u>(ctx, &aot_mem) && ctx.pc == 0x089C1594u) goto L_089C1594;
    return;
L_089C1594:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C160C;
      }
      goto L_089C159C;
    }
L_089C159C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (2226u << 16u);
      if (branch_taken) {
          goto L_089C15D4;
      }
      goto L_089C15A8;
    }
L_089C15A8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C15B4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089C15B4u) goto L_089C15B4;
    return;
L_089C15B4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C15CC;
      }
      goto L_089C15C0;
    }
L_089C15C0:
    ctx.gpr[31] = (0x089C15C8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089C15C8u) goto L_089C15C8;
    return;
L_089C15C8:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089C15CC;
L_089C15CC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2226u << 16u);
    goto L_089C15D4;
L_089C15D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C15E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15524));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 436u, 0x08913CE8u>(ctx, &aot_mem) && ctx.pc == 0x089C15E0u) goto L_089C15E0;
    return;
L_089C15E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C160C;
      }
      goto L_089C15E8;
    }
L_089C15E8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28716)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1624;
      }
      goto L_089C1604;
    }
L_089C1604:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1614;
      }
      goto L_089C160C;
    }
L_089C160C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C168C;
      }
      goto L_089C1614;
    }
L_089C1614:
    ctx.gpr[31] = (0x089C161Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 512u, 0x08AC75E8u>(ctx, &aot_mem) && ctx.pc == 0x089C161Cu) goto L_089C161C;
    return;
L_089C161C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1684;
      }
      goto L_089C1624;
    }
L_089C1624:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089C1644u);
    ctx.gpr[10] = (0u | 255u);
    goto L_089C11D8;
L_089C1644:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C168C;
      }
      goto L_089C164C;
    }
L_089C164C:
    ctx.gpr[31] = (0x089C1654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 877u, 0x08AD37D8u>(ctx, &aot_mem) && ctx.pc == 0x089C1654u) goto L_089C1654;
    return;
L_089C1654:
    ctx.gpr[31] = (0x089C165Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 878u, 0x08AD37E0u>(ctx, &aot_mem) && ctx.pc == 0x089C165Cu) goto L_089C165C;
    return;
L_089C165C:
    ctx.gpr[31] = (0x089C1664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 77u, 0x08A54684u>(ctx, &aot_mem) && ctx.pc == 0x089C1664u) goto L_089C1664;
    return;
L_089C1664:
    ctx.gpr[31] = (0x089C166Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 216u, 0x08A4CE28u>(ctx, &aot_mem) && ctx.pc == 0x089C166Cu) goto L_089C166C;
    return;
L_089C166C:
    ctx.gpr[31] = (0x089C1674u);
    // nop
    goto L_089C3F1C;
L_089C1674:
    ctx.gpr[31] = (0x089C167Cu);
    // nop
    goto L_089C306C;
L_089C167C:
    ctx.gpr[31] = (0x089C1684u);
    ctx.gpr[4] = (0u | 1u);
    goto L_089C16A4;
L_089C1684:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C168C;
      }
      goto L_089C168C;
    }
L_089C168C:
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
L_089C16A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-7960));
    ctx.gpr[18] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2229u << 16u);
      if (branch_taken) {
          goto L_089C1754;
      }
      goto L_089C16D8;
    }
L_089C16D8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089C16E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 137u, 0x088ED164u>(ctx, &aot_mem) && ctx.pc == 0x089C16E4u) goto L_089C16E4;
    return;
L_089C16E4:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C1754;
      }
      goto L_089C16F0;
    }
L_089C16F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28716)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1758;
      }
      goto L_089C1704;
    }
L_089C1704:
    ctx.gpr[31] = (0x089C170Cu);
    // nop
    ctx.pc = 0x08B0BCBCu;
    return;
L_089C170C:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089C1720u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BCACu;
    return;
L_089C1720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (13702u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14269u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-28716), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089C1758;
      }
      goto L_089C1754;
    }
L_089C1754:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-28716), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089C1758;
L_089C1758:
    ctx.gpr[31] = (0x089C1760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 73u, 0x08A28A60u>(ctx, &aot_mem) && ctx.pc == 0x089C1760u) goto L_089C1760;
    return;
L_089C1760:
    ctx.gpr[31] = (0x089C1768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 215u, 0x08A4CE20u>(ctx, &aot_mem) && ctx.pc == 0x089C1768u) goto L_089C1768;
    return;
L_089C1768:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1790;
      }
      goto L_089C1778;
    }
L_089C1778:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(27036), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089C17DC;
      }
      goto L_089C1790;
    }
L_089C1790:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20436)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C17A8;
      }
      goto L_089C17A0;
    }
L_089C17A0:
    ctx.gpr[31] = (0x089C17A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x089C17A8u) goto L_089C17A8;
    return;
L_089C17A8:
    ctx.gpr[31] = (0x089C17B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20436)));
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 67u, 0x089504D0u>(ctx, &aot_mem) && ctx.pc == 0x089C17B0u) goto L_089C17B0;
    return;
L_089C17B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089C17CC;
      }
      goto L_089C17B8;
    }
L_089C17B8:
    ctx.gpr[5] = (14979u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(27036), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089C17DC;
      }
      goto L_089C17CC;
    }
L_089C17CC:
    ctx.gpr[5] = (14545u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 46871u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(27036), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089C17DC;
L_089C17DC:
    ctx.gpr[31] = (0x089C17E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 611u, 0x08873610u>(ctx, &aot_mem) && ctx.pc == 0x089C17E4u) goto L_089C17E4;
    return;
L_089C17E4:
    ctx.gpr[31] = (0x089C17ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 573u, 0x0891734Cu>(ctx, &aot_mem) && ctx.pc == 0x089C17ECu) goto L_089C17EC;
    return;
L_089C17EC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1808:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C1818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 6u, 0x08878110u>(ctx, &aot_mem) && ctx.pc == 0x089C1818u) goto L_089C1818;
    return;
L_089C1818:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C18F8;
      }
      goto L_089C1820;
    }
L_089C1820:
    ctx.gpr[31] = (0x089C1828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 133u, 0x0890CB60u>(ctx, &aot_mem) && ctx.pc == 0x089C1828u) goto L_089C1828;
    return;
L_089C1828:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C18E4;
      }
      goto L_089C1830;
    }
L_089C1830:
    ctx.gpr[31] = (0x089C1838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 153u, 0x0890CDA4u>(ctx, &aot_mem) && ctx.pc == 0x089C1838u) goto L_089C1838;
    return;
L_089C1838:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C18D0;
      }
      goto L_089C1840;
    }
L_089C1840:
    ctx.gpr[31] = (0x089C1848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 259u, 0x08A25738u>(ctx, &aot_mem) && ctx.pc == 0x089C1848u) goto L_089C1848;
    return;
L_089C1848:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C18BC;
      }
      goto L_089C1850;
    }
L_089C1850:
    ctx.gpr[31] = (0x089C1858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 241u, 0x08925AA4u>(ctx, &aot_mem) && ctx.pc == 0x089C1858u) goto L_089C1858;
    return;
L_089C1858:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C18A8;
      }
      goto L_089C1860;
    }
L_089C1860:
    ctx.gpr[31] = (0x089C1868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 236u, 0x08925A50u>(ctx, &aot_mem) && ctx.pc == 0x089C1868u) goto L_089C1868;
    return;
L_089C1868:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1894;
      }
      goto L_089C1870;
    }
L_089C1870:
    ctx.gpr[31] = (0x089C1878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 557u, 0x08AD69A8u>(ctx, &aot_mem) && ctx.pc == 0x089C1878u) goto L_089C1878;
    return;
L_089C1878:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C190C;
      }
      goto L_089C1880;
    }
L_089C1880:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C188Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15288));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C188Cu) goto L_089C188C;
    return;
L_089C188C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C1910;
      }
      goto L_089C1894;
    }
L_089C1894:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C18A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15328));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C18A0u) goto L_089C18A0;
    return;
L_089C18A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C1910;
      }
      goto L_089C18A8;
    }
L_089C18A8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C18B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15368));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C18B4u) goto L_089C18B4;
    return;
L_089C18B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C1910;
      }
      goto L_089C18BC;
    }
L_089C18BC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C18C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15408));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C18C8u) goto L_089C18C8;
    return;
L_089C18C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C1910;
      }
      goto L_089C18D0;
    }
L_089C18D0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C18DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15444));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C18DCu) goto L_089C18DC;
    return;
L_089C18DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C1910;
      }
      goto L_089C18E4;
    }
L_089C18E4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C18F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15480));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C18F0u) goto L_089C18F0;
    return;
L_089C18F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C1910;
      }
      goto L_089C18F8;
    }
L_089C18F8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C1904u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15516));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C1904u) goto L_089C1904;
    return;
L_089C1904:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C1910;
      }
      goto L_089C190C;
    }
L_089C190C:
    ctx.gpr[2] = (0u | 1u);
    goto L_089C1910;
L_089C1910:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C191C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2275u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1824));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C1944u);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 173u, 0x088E8DF4u>(ctx, &aot_mem) && ctx.pc == 0x089C1944u) goto L_089C1944;
    return;
L_089C1944:
    ctx.gpr[31] = (0x089C194Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 614u, 0x08917538u>(ctx, &aot_mem) && ctx.pc == 0x089C194Cu) goto L_089C194C;
    return;
L_089C194C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C196C;
      }
      goto L_089C1954;
    }
L_089C1954:
    ctx.gpr[31] = (0x089C195Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 174u, 0x088E8DFCu>(ctx, &aot_mem) && ctx.pc == 0x089C195Cu) goto L_089C195C;
    return;
L_089C195C:
    ctx.gpr[31] = (0x089C1964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 127u, 0x08AD0A2Cu>(ctx, &aot_mem) && ctx.pc == 0x089C1964u) goto L_089C1964;
    return;
L_089C1964:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1978;
      }
      goto L_089C196C;
    }
L_089C196C:
    ctx.gpr[31] = (0x089C1974u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 174u, 0x088E8DFCu>(ctx, &aot_mem) && ctx.pc == 0x089C1974u) goto L_089C1974;
    return;
L_089C1974:
    ctx.gpr[2] = (0u | 0u);
    goto L_089C1978;
L_089C1978:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C198C:
    ctx.gpr[4] = (2229u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-28742)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1998:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-28742), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28712));
      if (branch_taken) {
          goto L_089C19F4;
      }
      goto L_089C19DC;
    }
L_089C19DC:
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28708)));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C19FC;
      }
      goto L_089C19EC;
    }
L_089C19EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1A0C;
      }
      goto L_089C19F4;
    }
L_089C19F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089C1B58;
      }
      goto L_089C19FC;
    }
L_089C19FC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089C1A08u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 71u, 0x08A0CF68u>(ctx, &aot_mem) && ctx.pc == 0x089C1A08u) goto L_089C1A08;
    return;
L_089C1A08:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089C1A0C;
L_089C1A0C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C1B54;
      }
      goto L_089C1A14;
    }
L_089C1A14:
    ctx.gpr[31] = (0x089C1A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 776u, 0x089C7330u>(ctx, &aot_mem) && ctx.pc == 0x089C1A1Cu) goto L_089C1A1C;
    return;
L_089C1A1C:
    ctx.gpr[20] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-21288));
      if (branch_taken) {
          goto L_089C1A4C;
      }
      goto L_089C1A28;
    }
L_089C1A28:
    ctx.gpr[31] = (0x089C1A30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 638u, 0x08AB3900u>(ctx, &aot_mem) && ctx.pc == 0x089C1A30u) goto L_089C1A30;
    return;
L_089C1A30:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(-32));
    ctx.gpr[31] = (0x089C1A40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x089C1A40u) goto L_089C1A40;
    return;
L_089C1A40:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C1A4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15252));
    goto L_089C0980;
L_089C1A4C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089C1A68u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15224));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 807u, 0x08AFB79Cu>(ctx, &aot_mem) && ctx.pc == 0x089C1A68u) goto L_089C1A68;
    return;
L_089C1A68:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089C1A74u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 807u, 0x08AFB79Cu>(ctx, &aot_mem) && ctx.pc == 0x089C1A74u) goto L_089C1A74;
    return;
L_089C1A74:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089C1A84u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15196));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 807u, 0x08AFB79Cu>(ctx, &aot_mem) && ctx.pc == 0x089C1A84u) goto L_089C1A84;
    return;
L_089C1A84:
    ctx.gpr[31] = (0x089C1A8Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 448u, 0x08AC70E8u>(ctx, &aot_mem) && ctx.pc == 0x089C1A8Cu) goto L_089C1A8C;
    return;
L_089C1A8C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1B2C;
      }
      goto L_089C1A98;
    }
L_089C1A98:
    ctx.gpr[31] = (0x089C1AA0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 460u, 0x08AC71E0u>(ctx, &aot_mem) && ctx.pc == 0x089C1AA0u) goto L_089C1AA0;
    return;
L_089C1AA0:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C1AACu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 745u, 0x089C71ACu>(ctx, &aot_mem) && ctx.pc == 0x089C1AACu) goto L_089C1AAC;
    return;
L_089C1AAC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089C1ABCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x089C1ABCu) goto L_089C1ABC;
    return;
L_089C1ABC:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C1AD0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 468u, 0x08AC7270u>(ctx, &aot_mem) && ctx.pc == 0x089C1AD0u) goto L_089C1AD0;
    return;
L_089C1AD0:
    ctx.gpr[31] = (0x089C1AD8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 452u, 0x08AC7130u>(ctx, &aot_mem) && ctx.pc == 0x089C1AD8u) goto L_089C1AD8;
    return;
L_089C1AD8:
    ctx.gpr[4] = (116u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25976));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x089C1AF8u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 559u, 0x0886AFD0u>(ctx, &aot_mem) && ctx.pc == 0x089C1AF8u) goto L_089C1AF8;
    return;
L_089C1AF8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-28708), ctx.gpr[2]);
    ctx.gpr[31] = (0x089C1B08u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 63u, 0x08A0CECCu>(ctx, &aot_mem) && ctx.pc == 0x089C1B08u) goto L_089C1B08;
    return;
L_089C1B08:
    ctx.gpr[31] = (0x089C1B10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 90u, 0x08A0D08Cu>(ctx, &aot_mem) && ctx.pc == 0x089C1B10u) goto L_089C1B10;
    return;
L_089C1B10:
    ctx.gpr[31] = (0x089C1B18u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-28712), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 778u, 0x089C7354u>(ctx, &aot_mem) && ctx.pc == 0x089C1B18u) goto L_089C1B18;
    return;
L_089C1B18:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C1B24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15188));
    goto L_089C0980;
L_089C1B24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089C1B40;
      }
      goto L_089C1B2C;
    }
L_089C1B2C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x089C1B3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15160));
    goto L_089C0980;
L_089C1B3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089C1B40;
L_089C1B40:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[20];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089C1B54;
      }
      goto L_089C1B48;
    }
L_089C1B48:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C1B54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x089C1B54u) goto L_089C1B54;
    return;
L_089C1B54:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_089C1B58;
L_089C1B58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1B80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-28742), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C1BA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15252));
    goto L_089C0980;
L_089C1BA0:
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28708)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1BD8;
      }
      goto L_089C1BB0;
    }
L_089C1BB0:
    ctx.gpr[31] = (0x089C1BB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 638u, 0x08AB3900u>(ctx, &aot_mem) && ctx.pc == 0x089C1BB8u) goto L_089C1BB8;
    return;
L_089C1BB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28708)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    ctx.gpr[31] = (0x089C1BCCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x089C1BCCu) goto L_089C1BCC;
    return;
L_089C1BCC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-28708), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28712), 0u);
    goto L_089C1BD8;
L_089C1BD8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1BE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C1BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089C1BFCu) goto L_089C1BFC;
    return;
L_089C1BFC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28676)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28680)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C1C14u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x089C1C14u) goto L_089C1C14;
    return;
L_089C1C14:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28684)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-28698));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-28684), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089C1C5C;
      }
      goto L_089C1C58;
    }
L_089C1C58:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-28684), 0u);
    goto L_089C1C5C;
L_089C1C5C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31988));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C1C78u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15140));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x089C1C78u) goto L_089C1C78;
    return;
L_089C1C78:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1C8C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28672));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1CA4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2229u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28724), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1CB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (16448u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    ctx.gpr[17] = (2229u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[5] = (16000u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[5] = (17294u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.gpr[6] = (17299u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (16896u << 16u);
    ctx.gpr[8] = (17379u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[31] = (0x089C1D5Cu);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x089C1D5Cu) goto L_089C1D5C;
    return;
L_089C1D5C:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089C1D7Cu);
    ctx.gpr[8] = (0u | 204u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x089C1D7Cu) goto L_089C1D7C;
    return;
L_089C1D7C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C1D8Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x089C1D8Cu) goto L_089C1D8C;
    return;
L_089C1D8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17292u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.gpr[4] = (17297u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] | 32768u);
    ctx.gpr[4] = (17377u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] | 32768u);
    ctx.gpr[8] = (16872u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[31] = (0x089C1DECu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x089C1DECu) goto L_089C1DEC;
    return;
L_089C1DEC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089C1E08u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x089C1E08u) goto L_089C1E08;
    return;
L_089C1E08:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C1E18u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x089C1E18u) goto L_089C1E18;
    return;
L_089C1E18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17293u << 16u);
    ctx.gpr[6] = (17297u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = ctx.fpr[26] / ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[28] / ctx.fpr[12];
    ctx.gpr[7] = (16880u << 16u);
    ctx.gpr[8] = (17377u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[31] = (0x089C1E70u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x089C1E70u) goto L_089C1E70;
    return;
L_089C1E70:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 200u);
    ctx.gpr[6] = (0u | 200u);
    ctx.gpr[7] = (0u | 200u);
    ctx.gpr[31] = (0x089C1E8Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x089C1E8Cu) goto L_089C1E8C;
    return;
L_089C1E8C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C1E9Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x089C1E9Cu) goto L_089C1E9C;
    return;
L_089C1E9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[26] / ctx.fpr[15];
    ctx.gpr[5] = (17362u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[15] = ctx.fpr[28] / ctx.fpr[15];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[30];
    ctx.gpr[31] = (0x089C1EE4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x089C1EE4u) goto L_089C1EE4;
    return;
L_089C1EE4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 219u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (0u | 20u);
    ctx.gpr[31] = (0x089C1F00u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x089C1F00u) goto L_089C1F00;
    return;
L_089C1F00:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C1F10u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x089C1F10u) goto L_089C1F10;
    return;
L_089C1F10:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1F48:
    ctx.gpr[5] = (2229u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-28704), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1F54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-512));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C1F8Cu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BB54u;
    return;
L_089C1F8C:
    ctx.gpr[31] = (0x089C1F94u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089C1998;
L_089C1F94:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C1FA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15096));
    goto L_089C0980;
L_089C1FA8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2152));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C2088;
      }
      goto L_089C1FBC;
    }
L_089C1FBC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089C1FDCu);
    ctx.gpr[10] = (0u | 255u);
    goto L_089C11D8;
L_089C1FDC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2080;
      }
      goto L_089C1FE4;
    }
L_089C1FE4:
    ctx.gpr[31] = (0x089C1FECu);
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 877u, 0x08AD37D8u>(ctx, &aot_mem) && ctx.pc == 0x089C1FECu) goto L_089C1FEC;
    return;
L_089C1FEC:
    ctx.gpr[31] = (0x089C1FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 878u, 0x08AD37E0u>(ctx, &aot_mem) && ctx.pc == 0x089C1FF4u) goto L_089C1FF4;
    return;
L_089C1FF4:
    ctx.gpr[31] = (0x089C1FFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 77u, 0x08A54684u>(ctx, &aot_mem) && ctx.pc == 0x089C1FFCu) goto L_089C1FFC;
    return;
L_089C1FFC:
    ctx.gpr[31] = (0x089C2004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 216u, 0x08A4CE28u>(ctx, &aot_mem) && ctx.pc == 0x089C2004u) goto L_089C2004;
    return;
L_089C2004:
    ctx.gpr[5] = (17392u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[5] = (17288u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089C202Cu);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x089C202Cu) goto L_089C202C;
    return;
L_089C202C:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089C2048u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x089C2048u) goto L_089C2048;
    return;
L_089C2048:
    ctx.gpr[18] = (0u | 2u);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x089C2058u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089C2058u) goto L_089C2058;
    return;
L_089C2058:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089C2068u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 920u, 0x08AD3BD4u>(ctx, &aot_mem) && ctx.pc == 0x089C2068u) goto L_089C2068;
    return;
L_089C2068:
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28704)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C2090;
      }
      goto L_089C2078;
    }
L_089C2078:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C22F4;
      }
      goto L_089C2080;
    }
L_089C2080:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C23BC;
      }
      goto L_089C2088;
    }
L_089C2088:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C23BC;
      }
      goto L_089C2090;
    }
L_089C2090:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(212));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089C20A8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x089C20A8u) goto L_089C20A8;
    return;
L_089C20A8:
    ctx.gpr[31] = (0x089C20B0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x089C20B0u) goto L_089C20B0;
    return;
L_089C20B0:
    ctx.gpr[31] = (0x089C20B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x089C20B8u) goto L_089C20B8;
    return;
L_089C20B8:
    ctx.gpr[31] = (0x089C20C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x089C20C0u) goto L_089C20C0;
    return;
L_089C20C0:
    ctx.gpr[31] = (0x089C20C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A55044u>(ctx, &aot_mem) && ctx.pc == 0x089C20C8u) goto L_089C20C8;
    return;
L_089C20C8:
    ctx.gpr[31] = (0x089C20D0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A5505Cu>(ctx, &aot_mem) && ctx.pc == 0x089C20D0u) goto L_089C20D0;
    return;
L_089C20D0:
    ctx.gpr[31] = (0x089C20D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 224u, 0x08A55150u>(ctx, &aot_mem) && ctx.pc == 0x089C20D8u) goto L_089C20D8;
    return;
L_089C20D8:
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[31] = (0x089C20E4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x089C20E4u) goto L_089C20E4;
    return;
L_089C20E4:
    ctx.gpr[4] = (17352u << 16u);
    ctx.gpr[31] = (0x089C20F0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A550DCu>(ctx, &aot_mem) && ctx.pc == 0x089C20F0u) goto L_089C20F0;
    return;
L_089C20F0:
    ctx.gpr[4] = (17224u << 16u);
    ctx.gpr[31] = (0x089C20FCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x089C20FCu) goto L_089C20FC;
    return;
L_089C20FC:
    ctx.gpr[31] = (0x089C2104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54FFCu>(ctx, &aot_mem) && ctx.pc == 0x089C2104u) goto L_089C2104;
    return;
L_089C2104:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x089C2120u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x089C2120u) goto L_089C2120;
    return;
L_089C2120:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28704)));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089C2194;
      }
      goto L_089C212C;
    }
L_089C212C:
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (2226u << 16u);
      if (branch_taken) {
          goto L_089C2168;
      }
      goto L_089C213C;
    }
L_089C213C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089C2148u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089C2148u) goto L_089C2148;
    return;
L_089C2148:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2160;
      }
      goto L_089C2154;
    }
L_089C2154:
    ctx.gpr[31] = (0x089C215Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089C215Cu) goto L_089C215C;
    return;
L_089C215C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_089C2160;
L_089C2160:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[5] = (2226u << 16u);
    goto L_089C2168;
L_089C2168:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C2174u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15068));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089C2174u) goto L_089C2174;
    return;
L_089C2174:
    ctx.gpr[6] = (17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089C218Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x089C218Cu) goto L_089C218C;
    return;
L_089C218C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C22F4;
      }
      goto L_089C2194;
    }
L_089C2194:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C2208;
      }
      goto L_089C219C;
    }
L_089C219C:
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (2226u << 16u);
      if (branch_taken) {
          goto L_089C21D8;
      }
      goto L_089C21AC;
    }
L_089C21AC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089C21B8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089C21B8u) goto L_089C21B8;
    return;
L_089C21B8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C21D0;
      }
      goto L_089C21C4;
    }
L_089C21C4:
    ctx.gpr[31] = (0x089C21CCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089C21CCu) goto L_089C21CC;
    return;
L_089C21CC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_089C21D0;
L_089C21D0:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[5] = (2226u << 16u);
    goto L_089C21D8;
L_089C21D8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C21E4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15060));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089C21E4u) goto L_089C21E4;
    return;
L_089C21E4:
    ctx.gpr[6] = (17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (17088u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089C2200u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x089C2200u) goto L_089C2200;
    return;
L_089C2200:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C22F4;
      }
      goto L_089C2208;
    }
L_089C2208:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C22F4;
      }
      goto L_089C2214;
    }
L_089C2214:
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(216));
      if (branch_taken) {
          goto L_089C2254;
      }
      goto L_089C222C;
    }
L_089C222C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x089C2238u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089C2238u) goto L_089C2238;
    return;
L_089C2238:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2250;
      }
      goto L_089C2244;
    }
L_089C2244:
    ctx.gpr[31] = (0x089C224Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089C224Cu) goto L_089C224C;
    return;
L_089C224C:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_089C2250;
L_089C2250:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[19]);
    goto L_089C2254;
L_089C2254:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C2264u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15052));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089C2264u) goto L_089C2264;
    return;
L_089C2264:
    ctx.gpr[6] = (17088u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089C227Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x089C227Cu) goto L_089C227C;
    return;
L_089C227C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089C228Cu);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x089C228Cu) goto L_089C228C;
    return;
L_089C228C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[5] = (2226u << 16u);
      if (branch_taken) {
          goto L_089C22C4;
      }
      goto L_089C2298;
    }
L_089C2298:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x089C22A4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089C22A4u) goto L_089C22A4;
    return;
L_089C22A4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C22BC;
      }
      goto L_089C22B0;
    }
L_089C22B0:
    ctx.gpr[31] = (0x089C22B8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089C22B8u) goto L_089C22B8;
    return;
L_089C22B8:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_089C22BC;
L_089C22BC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[19]);
    ctx.gpr[5] = (2226u << 16u);
    goto L_089C22C4;
L_089C22C4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C22D0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15044));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089C22D0u) goto L_089C22D0;
    return;
L_089C22D0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C22DCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 329u, 0x08879E7Cu>(ctx, &aot_mem) && ctx.pc == 0x089C22DCu) goto L_089C22DC;
    return;
L_089C22DC:
    ctx.gpr[6] = (17174u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089C22F4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x089C22F4u) goto L_089C22F4;
    return;
L_089C22F4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089C23AC;
      }
      goto L_089C22FC;
    }
L_089C22FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28724)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28724), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089C2340;
      }
      goto L_089C2314;
    }
L_089C2314:
    ctx.gpr[5] = (16688u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C2334;
      }
      goto L_089C232C;
    }
L_089C232C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28724), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089C2334;
L_089C2334:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C234C;
      }
      goto L_089C2340;
    }
L_089C2340:
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    goto L_089C234C;
L_089C234C:
    ctx.gpr[31] = (0x089C2354u);
    // nop
    goto L_089C1CB4;
L_089C2354:
    ctx.gpr[31] = (0x089C235Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x089C235Cu) goto L_089C235C;
    return;
L_089C235C:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089C236Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x089C236Cu) goto L_089C236C;
    return;
L_089C236C:
    ctx.gpr[31] = (0x089C2374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x089C2374u) goto L_089C2374;
    return;
L_089C2374:
    ctx.gpr[31] = (0x089C237Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A55028u>(ctx, &aot_mem) && ctx.pc == 0x089C237Cu) goto L_089C237C;
    return;
L_089C237C:
    ctx.gpr[31] = (0x089C2384u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x089C2384u) goto L_089C2384;
    return;
L_089C2384:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(472));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089C239Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x089C239Cu) goto L_089C239C;
    return;
L_089C239C:
    ctx.gpr[31] = (0x089C23A4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x089C23A4u) goto L_089C23A4;
    return;
L_089C23A4:
    ctx.gpr[31] = (0x089C23ACu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x089C23ACu) goto L_089C23AC;
    return;
L_089C23AC:
    ctx.gpr[31] = (0x089C23B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 194u, 0x08A54EFCu>(ctx, &aot_mem) && ctx.pc == 0x089C23B4u) goto L_089C23B4;
    return;
L_089C23B4:
    ctx.gpr[31] = (0x089C23BCu);
    ctx.gpr[4] = (0u | 0u);
    goto L_089C16A4;
L_089C23BC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C23E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C2414u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7340)));
    goto L_089C1C8C;
L_089C2414:
    ctx.gpr[31] = (0x089C241Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089C1998;
L_089C241C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C242Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15036));
    goto L_089C0980;
L_089C242C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089C244Cu);
    ctx.gpr[10] = (0u | 255u);
    goto L_089C11D8;
L_089C244C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2554;
      }
      goto L_089C2454;
    }
L_089C2454:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C2460u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14992));
    goto L_089C0980;
L_089C2460:
    ctx.gpr[31] = (0x089C2468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 877u, 0x08AD37D8u>(ctx, &aot_mem) && ctx.pc == 0x089C2468u) goto L_089C2468;
    return;
L_089C2468:
    ctx.gpr[31] = (0x089C2470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 878u, 0x08AD37E0u>(ctx, &aot_mem) && ctx.pc == 0x089C2470u) goto L_089C2470;
    return;
L_089C2470:
    ctx.gpr[31] = (0x089C2478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 77u, 0x08A54684u>(ctx, &aot_mem) && ctx.pc == 0x089C2478u) goto L_089C2478;
    return;
L_089C2478:
    ctx.gpr[31] = (0x089C2480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 216u, 0x08A4CE28u>(ctx, &aot_mem) && ctx.pc == 0x089C2480u) goto L_089C2480;
    return;
L_089C2480:
    ctx.gpr[5] = (17392u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (17288u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089C24B0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x089C24B0u) goto L_089C24B0;
    return;
L_089C24B0:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089C24CCu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x089C24CCu) goto L_089C24CC;
    return;
L_089C24CC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C24D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14952));
    goto L_089C0980;
L_089C24D8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089C24F0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x089C24F0u) goto L_089C24F0;
    return;
L_089C24F0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089C250Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x089C250Cu) goto L_089C250C;
    return;
L_089C250C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C251Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x089C251Cu) goto L_089C251C;
    return;
L_089C251C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(322)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C255C;
      }
      goto L_089C2530;
    }
L_089C2530:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C254Cu);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 924u, 0x08AD3C28u>(ctx, &aot_mem) && ctx.pc == 0x089C254Cu) goto L_089C254C;
    return;
L_089C254C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2568;
      }
      goto L_089C2554;
    }
L_089C2554:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C25A0;
      }
      goto L_089C255C;
    }
L_089C255C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C2568u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14912));
    goto L_089C0980;
L_089C2568:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C2574u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14876));
    goto L_089C0980;
L_089C2574:
    ctx.gpr[31] = (0x089C257Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 194u, 0x08A54EFCu>(ctx, &aot_mem) && ctx.pc == 0x089C257Cu) goto L_089C257C;
    return;
L_089C257C:
    ctx.gpr[31] = (0x089C2584u);
    ctx.gpr[4] = (0u | 0u);
    goto L_089C16A4;
L_089C2584:
    ctx.gpr[31] = (0x089C258Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 638u, 0x08AB3900u>(ctx, &aot_mem) && ctx.pc == 0x089C258Cu) goto L_089C258C;
    return;
L_089C258C:
    ctx.gpr[31] = (0x089C2594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 595u, 0x08AB35BCu>(ctx, &aot_mem) && ctx.pc == 0x089C2594u) goto L_089C2594;
    return;
L_089C2594:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C25A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14828));
    goto L_089C0980;
L_089C25A0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C25C8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C25D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C25E8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x089C25E8u) goto L_089C25E8;
    return;
L_089C25E8:
    ctx.gpr[8] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[17] = (ctx.gpr[29] | 0u);
    goto L_089C2600;
L_089C2600:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[29] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089C2600;
      }
      goto L_089C2624;
    }
L_089C2624:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-7960));
    goto L_089C2634;
L_089C2634:
    ctx.gpr[31] = (0x089C263Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x089C263Cu) goto L_089C263C;
    return;
L_089C263C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(36))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C265C;
      }
      goto L_089C264C;
    }
L_089C264C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089C2660;
      }
      goto L_089C2658;
    }
L_089C2658:
    ctx.gpr[4] = (0u | 1u);
    goto L_089C265C;
L_089C265C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089C2660;
L_089C2660:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C2700;
      }
      goto L_089C2668;
    }
L_089C2668:
    ctx.gpr[31] = (0x089C2670u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x089C2670u) goto L_089C2670;
    return;
L_089C2670:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(34))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C2700;
      }
      goto L_089C267C;
    }
L_089C267C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2690;
      }
      goto L_089C2684;
    }
L_089C2684:
    ctx.gpr[31] = (0x089C268Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 718u, 0x0891B398u>(ctx, &aot_mem) && ctx.pc == 0x089C268Cu) goto L_089C268C;
    return;
L_089C268C:
    ctx.gpr[17] = (0u | 0u);
    goto L_089C2690;
L_089C2690:
    ctx.gpr[31] = (0x089C2698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 525u, 0x08A964D4u>(ctx, &aot_mem) && ctx.pc == 0x089C2698u) goto L_089C2698;
    return;
L_089C2698:
    ctx.gpr[31] = (0x089C26A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 609u, 0x088735F0u>(ctx, &aot_mem) && ctx.pc == 0x089C26A0u) goto L_089C26A0;
    return;
L_089C26A0:
    ctx.gpr[31] = (0x089C26A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 611u, 0x08873610u>(ctx, &aot_mem) && ctx.pc == 0x089C26A8u) goto L_089C26A8;
    return;
L_089C26A8:
    ctx.gpr[31] = (0x089C26B0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x089C26B0u) goto L_089C26B0;
    return;
L_089C26B0:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(36))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C26D0;
      }
      goto L_089C26C0;
    }
L_089C26C0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089C26D4;
      }
      goto L_089C26CC;
    }
L_089C26CC:
    ctx.gpr[4] = (0u | 1u);
    goto L_089C26D0;
L_089C26D0:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089C26D4;
L_089C26D4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C26F0;
      }
      goto L_089C26DC;
    }
L_089C26DC:
    ctx.gpr[31] = (0x089C26E4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x089C26E4u) goto L_089C26E4;
    return;
L_089C26E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(34))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C26F8;
      }
      goto L_089C26F0;
    }
L_089C26F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2700;
      }
      goto L_089C26F8;
    }
L_089C26F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2634;
      }
      goto L_089C2700;
    }
L_089C2700:
    ctx.gpr[31] = (0x089C2708u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x089C2708u) goto L_089C2708;
    return;
L_089C2708:
    ctx.gpr[9] = (ctx.gpr[2] + static_cast<std::uint32_t>(52));
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (0u | 12u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
    goto L_089C2720;
L_089C2720:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_089C2720;
      }
      goto L_089C2744;
    }
L_089C2744:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x089C2750u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x089C2750u) goto L_089C2750;
    return;
L_089C2750:
    ctx.gpr[9] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (0u | 12u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    goto L_089C2768;
L_089C2768:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_089C2768;
      }
      goto L_089C278C;
    }
L_089C278C:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C27A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C27AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C27E4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-28728), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 348u, 0x088B1978u>(ctx, &aot_mem) && ctx.pc == 0x089C27E4u) goto L_089C27E4;
    return;
L_089C27E4:
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[23] = (2230u << 16u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-4832));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[21] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[30] = (2229u << 16u);
      if (branch_taken) {
          goto L_089C28F4;
      }
      goto L_089C2808;
    }
L_089C2808:
    ctx.gpr[31] = (0x089C2810u);
    ctx.gpr[4] = (0u | 2u);
    goto L_089C1F48;
L_089C2810:
    ctx.gpr[19] = (2226u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-14792));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C282Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_089C1F54;
L_089C282C:
    ctx.gpr[31] = (0x089C2834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 335u, 0x088B18B0u>(ctx, &aot_mem) && ctx.pc == 0x089C2834u) goto L_089C2834;
    return;
L_089C2834:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-28728)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C285C;
      }
      goto L_089C2840;
    }
L_089C2840:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1133), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[4] = (31u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-28728), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x089C2854u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31616));
    ctx.pc = 0x08B0BC14u;
    return;
L_089C2854:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C28F4;
      }
      goto L_089C285C;
    }
L_089C285C:
    ctx.gpr[4] = (15u << 16u);
    ctx.gpr[31] = (0x089C2868u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16960));
    ctx.pc = 0x08B0BC14u;
    return;
L_089C2868:
    ctx.gpr[31] = (0x089C2870u);
    ctx.gpr[4] = (0u | 3u);
    goto L_089C1F48;
L_089C2870:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C2884u);
    ctx.gpr[7] = (0u | 0u);
    goto L_089C1F54;
L_089C2884:
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-31860));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28652)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C28A0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0B9C4u;
    return;
L_089C28A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-28652), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C28F4;
      }
      goto L_089C28BC;
    }
L_089C28BC:
    ctx.gpr[31] = (0x089C28C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 595u, 0x08AB35BCu>(ctx, &aot_mem) && ctx.pc == 0x089C28C4u) goto L_089C28C4;
    return;
L_089C28C4:
    ctx.gpr[31] = (0x089C28CCu);
    ctx.gpr[4] = (0u | 1000u);
    ctx.pc = 0x08B0BC14u;
    return;
L_089C28CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C28D8u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0B9C4u;
    return;
L_089C28D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-28652), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C28BC;
      }
      goto L_089C28F4;
    }
L_089C28F4:
    ctx.gpr[31] = (0x089C28FCu);
    ctx.gpr[4] = (0u | 0u);
    goto L_089C1F48;
L_089C28FC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C2908u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14784));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2908u) goto L_089C2908;
    return;
L_089C2908:
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089C2918u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1824));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 173u, 0x088E8DF4u>(ctx, &aot_mem) && ctx.pc == 0x089C2918u) goto L_089C2918;
    return;
L_089C2918:
    ctx.gpr[31] = (0x089C2920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 699u, 0x0891B228u>(ctx, &aot_mem) && ctx.pc == 0x089C2920u) goto L_089C2920;
    return;
L_089C2920:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C292Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14764));
    goto L_089C0980;
L_089C292C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C2938u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14744));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 348u, 0x08AD1598u>(ctx, &aot_mem) && ctx.pc == 0x089C2938u) goto L_089C2938;
    return;
L_089C2938:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C2944u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14728));
    goto L_089C0980;
L_089C2944:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089C295Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14708));
    goto L_089C1F54;
L_089C295C:
    ctx.gpr[31] = (0x089C2964u);
    // nop
    goto L_089C25C8;
L_089C2964:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(16500)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2984;
      }
      goto L_089C2970;
    }
L_089C2970:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x089C297Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7340)));
    goto L_089C1C8C;
L_089C297C:
    ctx.gpr[31] = (0x089C2984u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089C1998;
L_089C2984:
    ctx.gpr[31] = (0x089C298Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 719u, 0x0891B3ACu>(ctx, &aot_mem) && ctx.pc == 0x089C298Cu) goto L_089C298C;
    return;
L_089C298C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x089C2998u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 221u, 0x088B589Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2998u) goto L_089C2998;
    return;
L_089C2998:
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(27452)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-14692));
    goto L_089C29A4;
L_089C29A4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C29C4;
      }
      goto L_089C29AC;
    }
L_089C29AC:
    ctx.gpr[31] = (0x089C29B4u);
    // nop
    goto L_089C1BE8;
L_089C29B4:
    ctx.gpr[31] = (0x089C29BCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089C1998;
L_089C29BC:
    ctx.gpr[31] = (0x089C29C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C0980;
L_089C29C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(308)));
    goto L_089C29C8;
L_089C29C8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089C29FC;
      }
      goto L_089C29D0;
    }
L_089C29D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(16500)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089C29FC;
      }
      goto L_089C29DC;
    }
L_089C29DC:
    ctx.gpr[31] = (0x089C29E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 138u, 0x089C4904u>(ctx, &aot_mem) && ctx.pc == 0x089C29E4u) goto L_089C29E4;
    return;
L_089C29E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C29F4;
      }
      goto L_089C29EC;
    }
L_089C29EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C29FC;
      }
      goto L_089C29F4;
    }
L_089C29F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(308)));
      if (branch_taken) {
          goto L_089C29C8;
      }
      goto L_089C29FC;
    }
L_089C29FC:
    ctx.gpr[31] = (0x089C2A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 590u, 0x08A9693Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2A04u) goto L_089C2A04;
    return;
L_089C2A04:
    ctx.gpr[31] = (0x089C2A0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 540u, 0x08A96588u>(ctx, &aot_mem) && ctx.pc == 0x089C2A0Cu) goto L_089C2A0C;
    return;
L_089C2A0C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089C2A18u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 151u, 0x08864AD0u>(ctx, &aot_mem) && ctx.pc == 0x089C2A18u) goto L_089C2A18;
    return;
L_089C2A18:
    ctx.gpr[31] = (0x089C2A20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 162u, 0x08AD0C38u>(ctx, &aot_mem) && ctx.pc == 0x089C2A20u) goto L_089C2A20;
    return;
L_089C2A20:
    ctx.gpr[31] = (0x089C2A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 718u, 0x0891B398u>(ctx, &aot_mem) && ctx.pc == 0x089C2A28u) goto L_089C2A28;
    return;
L_089C2A28:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(16500)));
      if (branch_taken) {
          goto L_089C2A3C;
      }
      goto L_089C2A34;
    }
L_089C2A34:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089C2A6C;
      }
      goto L_089C2A3C;
    }
L_089C2A3C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089C2A4C;
      }
      goto L_089C2A44;
    }
L_089C2A44:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(308), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1133), static_cast<std::uint8_t>(ctx.gpr[22]));
    goto L_089C2A4C;
L_089C2A4C:
    ctx.gpr[31] = (0x089C2A54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 185u, 0x08AD0D4Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2A54u) goto L_089C2A54;
    return;
L_089C2A54:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(308), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089C2A64u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 151u, 0x08864AD0u>(ctx, &aot_mem) && ctx.pc == 0x089C2A64u) goto L_089C2A64;
    return;
L_089C2A64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(27452)));
      if (branch_taken) {
          goto L_089C29A4;
      }
      goto L_089C2A6C;
    }
L_089C2A6C:
    ctx.gpr[31] = (0x089C2A74u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 92u, 0x088646D8u>(ctx, &aot_mem) && ctx.pc == 0x089C2A74u) goto L_089C2A74;
    return;
L_089C2A74:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C2AA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C2AB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 431u, 0x088368DCu>(ctx, &aot_mem) && ctx.pc == 0x089C2AB8u) goto L_089C2AB8;
    return;
L_089C2AB8:
    ctx.gpr[31] = (0x089C2AC0u);
    // nop
    goto L_089C14E8;
L_089C2AC0:
    ctx.gpr[31] = (0x089C2AC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 113u, 0x088B4760u>(ctx, &aot_mem) && ctx.pc == 0x089C2AC8u) goto L_089C2AC8;
    return;
L_089C2AC8:
    ctx.gpr[31] = (0x089C2AD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 216u, 0x08A4CE28u>(ctx, &aot_mem) && ctx.pc == 0x089C2AD0u) goto L_089C2AD0;
    return;
L_089C2AD0:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-19824)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C2AE8;
      }
      goto L_089C2AE0;
    }
L_089C2AE0:
    ctx.gpr[31] = (0x089C2AE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 144u, 0x08B00A0Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2AE8u) goto L_089C2AE8;
    return;
L_089C2AE8:
    ctx.gpr[31] = (0x089C2AF0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-19824)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 166u, 0x088B4CF0u>(ctx, &aot_mem) && ctx.pc == 0x089C2AF0u) goto L_089C2AF0;
    return;
L_089C2AF0:
    ctx.gpr[31] = (0x089C2AF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 285u, 0x08AA9E60u>(ctx, &aot_mem) && ctx.pc == 0x089C2AF8u) goto L_089C2AF8;
    return;
L_089C2AF8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C2B08:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C2B10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C2B28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 685u, 0x08806CF4u>(ctx, &aot_mem) && ctx.pc == 0x089C2B28u) goto L_089C2B28;
    return;
L_089C2B28:
    ctx.gpr[31] = (0x089C2B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 229u, 0x08929DACu>(ctx, &aot_mem) && ctx.pc == 0x089C2B30u) goto L_089C2B30;
    return;
L_089C2B30:
    ctx.gpr[31] = (0x089C2B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 559u, 0x08AAB320u>(ctx, &aot_mem) && ctx.pc == 0x089C2B38u) goto L_089C2B38;
    return;
L_089C2B38:
    ctx.gpr[31] = (0x089C2B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 454u, 0x0892B7A0u>(ctx, &aot_mem) && ctx.pc == 0x089C2B40u) goto L_089C2B40;
    return;
L_089C2B40:
    ctx.gpr[31] = (0x089C2B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 262u, 0x08AE5580u>(ctx, &aot_mem) && ctx.pc == 0x089C2B48u) goto L_089C2B48;
    return;
L_089C2B48:
    ctx.gpr[31] = (0x089C2B50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 199u, 0x08A89104u>(ctx, &aot_mem) && ctx.pc == 0x089C2B50u) goto L_089C2B50;
    return;
L_089C2B50:
    ctx.gpr[31] = (0x089C2B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 349u, 0x08AAA360u>(ctx, &aot_mem) && ctx.pc == 0x089C2B58u) goto L_089C2B58;
    return;
L_089C2B58:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20436)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C2B70;
      }
      goto L_089C2B68;
    }
L_089C2B68:
    ctx.gpr[31] = (0x089C2B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x089C2B70u) goto L_089C2B70;
    return;
L_089C2B70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[31] = (0x089C2B7Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 62u, 0x089543D4u>(ctx, &aot_mem) && ctx.pc == 0x089C2B7Cu) goto L_089C2B7C;
    return;
L_089C2B7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-19824)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C2B90;
      }
      goto L_089C2B88;
    }
L_089C2B88:
    ctx.gpr[31] = (0x089C2B90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 144u, 0x08B00A0Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2B90u) goto L_089C2B90;
    return;
L_089C2B90:
    ctx.gpr[31] = (0x089C2B98u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-19824)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 166u, 0x088B4CF0u>(ctx, &aot_mem) && ctx.pc == 0x089C2B98u) goto L_089C2B98;
    return;
L_089C2B98:
    ctx.gpr[31] = (0x089C2BA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 173u, 0x08934AD0u>(ctx, &aot_mem) && ctx.pc == 0x089C2BA0u) goto L_089C2BA0;
    return;
L_089C2BA0:
    ctx.gpr[31] = (0x089C2BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 233u, 0x08935044u>(ctx, &aot_mem) && ctx.pc == 0x089C2BA8u) goto L_089C2BA8;
    return;
L_089C2BA8:
    ctx.gpr[31] = (0x089C2BB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 12u, 0x089FC148u>(ctx, &aot_mem) && ctx.pc == 0x089C2BB0u) goto L_089C2BB0;
    return;
L_089C2BB0:
    ctx.gpr[31] = (0x089C2BB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 703u, 0x0886BD00u>(ctx, &aot_mem) && ctx.pc == 0x089C2BB8u) goto L_089C2BB8;
    return;
L_089C2BB8:
    ctx.gpr[31] = (0x089C2BC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 513u, 0x08932824u>(ctx, &aot_mem) && ctx.pc == 0x089C2BC0u) goto L_089C2BC0;
    return;
L_089C2BC0:
    ctx.gpr[31] = (0x089C2BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 328u, 0x08826030u>(ctx, &aot_mem) && ctx.pc == 0x089C2BC8u) goto L_089C2BC8;
    return;
L_089C2BC8:
    ctx.gpr[31] = (0x089C2BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 122u, 0x089F8EA4u>(ctx, &aot_mem) && ctx.pc == 0x089C2BD0u) goto L_089C2BD0;
    return;
L_089C2BD0:
    ctx.gpr[31] = (0x089C2BD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 489u, 0x089FB18Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2BD8u) goto L_089C2BD8;
    return;
L_089C2BD8:
    ctx.gpr[31] = (0x089C2BE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 613u, 0x0899BA14u>(ctx, &aot_mem) && ctx.pc == 0x089C2BE0u) goto L_089C2BE0;
    return;
L_089C2BE0:
    ctx.gpr[31] = (0x089C2BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 303u, 0x08A829B0u>(ctx, &aot_mem) && ctx.pc == 0x089C2BE8u) goto L_089C2BE8;
    return;
L_089C2BE8:
    ctx.gpr[31] = (0x089C2BF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 205u, 0x0886935Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2BF0u) goto L_089C2BF0;
    return;
L_089C2BF0:
    ctx.gpr[31] = (0x089C2BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 388u, 0x08AE63C8u>(ctx, &aot_mem) && ctx.pc == 0x089C2BF8u) goto L_089C2BF8;
    return;
L_089C2BF8:
    ctx.gpr[31] = (0x089C2C00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 366u, 0x08AB9E90u>(ctx, &aot_mem) && ctx.pc == 0x089C2C00u) goto L_089C2C00;
    return;
L_089C2C00:
    ctx.gpr[31] = (0x089C2C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 309u, 0x08AAA0B0u>(ctx, &aot_mem) && ctx.pc == 0x089C2C08u) goto L_089C2C08;
    return;
L_089C2C08:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C2C1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C2C4Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089C2C4Cu) goto L_089C2C4C;
    return;
L_089C2C4C:
    ctx.gpr[18] = (0u | 8u);
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x089C2C5Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089C2C5Cu) goto L_089C2C5C;
    return;
L_089C2C5C:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x089C2C68u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089C2C68u) goto L_089C2C68;
    return;
L_089C2C68:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x089C2C74u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089C2C74u) goto L_089C2C74;
    return;
L_089C2C74:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x089C2C80u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089C2C80u) goto L_089C2C80;
    return;
L_089C2C80:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1412)));
    ctx.gpr[16] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12960));
      if (branch_taken) {
          goto L_089C2C9C;
      }
      goto L_089C2C94;
    }
L_089C2C94:
    ctx.gpr[31] = (0x089C2C9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 267u, 0x0882A8E0u>(ctx, &aot_mem) && ctx.pc == 0x089C2C9Cu) goto L_089C2C9C;
    return;
L_089C2C9C:
    ctx.gpr[31] = (0x089C2CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 404u, 0x08A863E0u>(ctx, &aot_mem) && ctx.pc == 0x089C2CA4u) goto L_089C2CA4;
    return;
L_089C2CA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2CB8;
      }
      goto L_089C2CB0;
    }
L_089C2CB0:
    ctx.gpr[31] = (0x089C2CB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 189u, 0x088ED758u>(ctx, &aot_mem) && ctx.pc == 0x089C2CB8u) goto L_089C2CB8;
    return;
L_089C2CB8:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C2CC4u);
    ctx.gpr[16] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2CC4u) goto L_089C2CC4;
    return;
L_089C2CC4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
      if (branch_taken) {
          goto L_089C2D0C;
      }
      goto L_089C2CF0;
    }
L_089C2CF0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[7] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1428));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089C2D0C;
L_089C2D0C:
    ctx.gpr[6] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089C2D3C;
      }
      goto L_089C2D18;
    }
L_089C2D18:
    ctx.gpr[6] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089C2D3C;
      }
      goto L_089C2D24;
    }
L_089C2D24:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[6] = (0u | 40u);
      if (branch_taken) {
          goto L_089C2D3C;
      }
      goto L_089C2D2C;
    }
L_089C2D2C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 46u);
      if (branch_taken) {
          goto L_089C2D3C;
      }
      goto L_089C2D34;
    }
L_089C2D34:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089C2D40;
      }
      goto L_089C2D3C;
    }
L_089C2D3C:
    ctx.gpr[5] = (0u | 1u);
    goto L_089C2D40;
L_089C2D40:
    ctx.gpr[4] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 16u);
      if (branch_taken) {
          goto L_089C2D5C;
      }
      goto L_089C2D4C;
    }
L_089C2D4C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 29u);
      if (branch_taken) {
          goto L_089C2D5C;
      }
      goto L_089C2D54;
    }
L_089C2D54:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C2EBC;
      }
      goto L_089C2D5C;
    }
L_089C2D5C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2EBC;
      }
      goto L_089C2D64;
    }
L_089C2D64:
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089C2D84u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x089C2D84u) goto L_089C2D84;
    return;
L_089C2D84:
    ctx.gpr[5] = (17392u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[5] = (17288u << 16u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089C2E04;
      }
      goto L_089C2DA0;
    }
L_089C2DA0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (49712u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089C2DC0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x089C2DC0u) goto L_089C2DC0;
    return;
L_089C2DC0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C2DD0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x089C2DD0u) goto L_089C2DD0;
    return;
L_089C2DD0:
    ctx.gpr[5] = (17305u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x089C2DECu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x089C2DECu) goto L_089C2DEC;
    return;
L_089C2DEC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C2DFCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x089C2DFCu) goto L_089C2DFC;
    return;
L_089C2DFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2E60;
      }
      goto L_089C2E04;
    }
L_089C2E04:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (49812u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089C2E24u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x089C2E24u) goto L_089C2E24;
    return;
L_089C2E24:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C2E34u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x089C2E34u) goto L_089C2E34;
    return;
L_089C2E34:
    ctx.gpr[5] = (17325u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x089C2E50u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x089C2E50u) goto L_089C2E50;
    return;
L_089C2E50:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C2E60u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x089C2E60u) goto L_089C2E60;
    return;
L_089C2E60:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089C2E80u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x089C2E80u) goto L_089C2E80;
    return;
L_089C2E80:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C2E90u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x089C2E90u) goto L_089C2E90;
    return;
L_089C2E90:
    ctx.gpr[5] = (17377u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x089C2EACu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x089C2EACu) goto L_089C2EAC;
    return;
L_089C2EAC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C2EBCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x089C2EBCu) goto L_089C2EBC;
    return;
L_089C2EBC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x089C2EC8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3080));
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 248u, 0x088BD038u>(ctx, &aot_mem) && ctx.pc == 0x089C2EC8u) goto L_089C2EC8;
    return;
L_089C2EC8:
    ctx.gpr[31] = (0x089C2ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 89u, 0x089889F4u>(ctx, &aot_mem) && ctx.pc == 0x089C2ED0u) goto L_089C2ED0;
    return;
L_089C2ED0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1412)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C2EE4;
      }
      goto L_089C2EDC;
    }
L_089C2EDC:
    ctx.gpr[31] = (0x089C2EE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 267u, 0x0882A8E0u>(ctx, &aot_mem) && ctx.pc == 0x089C2EE4u) goto L_089C2EE4;
    return;
L_089C2EE4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x089C2EF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8840));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 351u, 0x08AC6A00u>(ctx, &aot_mem) && ctx.pc == 0x089C2EF0u) goto L_089C2EF0;
    return;
L_089C2EF0:
    ctx.gpr[31] = (0x089C2EF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 227u, 0x08879350u>(ctx, &aot_mem) && ctx.pc == 0x089C2EF8u) goto L_089C2EF8;
    return;
L_089C2EF8:
    ctx.gpr[31] = (0x089C2F00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 161u, 0x08918990u>(ctx, &aot_mem) && ctx.pc == 0x089C2F00u) goto L_089C2F00;
    return;
L_089C2F00:
    ctx.gpr[31] = (0x089C2F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 711u, 0x0893BA0Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2F08u) goto L_089C2F08;
    return;
L_089C2F08:
    ctx.gpr[31] = (0x089C2F10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 541u, 0x08A96590u>(ctx, &aot_mem) && ctx.pc == 0x089C2F10u) goto L_089C2F10;
    return;
L_089C2F10:
    ctx.gpr[31] = (0x089C2F18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 194u, 0x08A54EFCu>(ctx, &aot_mem) && ctx.pc == 0x089C2F18u) goto L_089C2F18;
    return;
L_089C2F18:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
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
L_089C2F40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(305)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C305C;
      }
      goto L_089C2F60;
    }
L_089C2F60:
    lcs::lcs_menu_begin();
    ctx.gpr[31] = (0x089C2F68u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 767u, 0x08ADEE88u>(ctx, &aot_mem) && ctx.pc == 0x089C2F68u) goto L_089C2F68;
    return;
L_089C2F68:
    lcs::lcs_menu_end();
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-25816)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-288));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C2FA0;
      }
      goto L_089C2F8C;
    }
L_089C2F8C:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (0u | 255u);
        goto L_089C2FA0;
    }
    goto L_089C2FA0;
L_089C2FA0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-288));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(255));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089C2FDC;
      }
      goto L_089C2FCC;
    }
L_089C2FCC:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (0u | 255u);
        goto L_089C2FDC;
    }
    goto L_089C2FDC;
L_089C2FDC:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089C3000;
      }
      goto L_089C2FE8;
    }
L_089C2FE8:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3000;
      }
      goto L_089C2FF4;
    }
L_089C2FF4:
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (0u | 0u);
    goto L_089C3000;
L_089C3000:
    ctx.gpr[8] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x089C301Cu);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x089C301Cu) goto L_089C301C;
    return;
L_089C301C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x089C304Cu);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x089C304Cu) goto L_089C304C;
    return;
L_089C304C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C305Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x089C305Cu) goto L_089C305C;
    return;
L_089C305C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C306C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C307Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 479u, 0x0898E6D8u>(ctx, &aot_mem) && ctx.pc == 0x089C307Cu) goto L_089C307C;
    return;
L_089C307C:
    ctx.gpr[31] = (0x089C3084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 20u, 0x089C4248u>(ctx, &aot_mem) && ctx.pc == 0x089C3084u) goto L_089C3084;
    return;
L_089C3084:
    ctx.gpr[31] = (0x089C308Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 194u, 0x08A54EFCu>(ctx, &aot_mem) && ctx.pc == 0x089C308Cu) goto L_089C308C;
    return;
L_089C308C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C3098:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(22) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3194;
      }
      goto L_089C30B0;
    }
L_089C30B0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-10664)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C30C8:
    ctx.gpr[31] = (0x089C30D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 119u, 0x08AD09B4u>(ctx, &aot_mem) && ctx.pc == 0x089C30D0u) goto L_089C30D0;
    return;
L_089C30D0:
    ctx.gpr[31] = (0x089C30D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 641u, 0x08917648u>(ctx, &aot_mem) && ctx.pc == 0x089C30D8u) goto L_089C30D8;
    return;
L_089C30D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C30E8;
      }
      goto L_089C30E0;
    }
L_089C30E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C3198;
      }
      goto L_089C30E8;
    }
L_089C30E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C3198;
      }
      goto L_089C30F0;
    }
L_089C30F0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3172)));
    ctx.gpr[4] = (15374u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 64053u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vrot(1u, 64u, 2u, 4u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<33u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] / vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (16355u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 36409u);
    ctx.gpr[31] = (0x089C3144u);
    ctx.fpr[13] = lcs::lcs_widescreen_aspect(std::bit_cast<float>(ctx.gpr[6]));
    ctx.fpr[12] = lcs::lcs_widescreen_extent(ctx.fpr[12]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 276u, 0x08839298u>(ctx, &aot_mem) && ctx.pc == 0x089C3144u) goto L_089C3144;
    return;
L_089C3144:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C3198;
      }
      goto L_089C314C;
    }
L_089C314C:
    ctx.gpr[31] = (0x089C3154u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_089C191C;
L_089C3154:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3164;
      }
      goto L_089C315C;
    }
L_089C315C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C3198;
      }
      goto L_089C3164;
    }
L_089C3164:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C3198;
      }
      goto L_089C316C;
    }
L_089C316C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C3198;
      }
      goto L_089C3174;
    }
L_089C3174:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C3198;
      }
      goto L_089C317C;
    }
L_089C317C:
    ctx.gpr[31] = (0x089C3184u);
    ctx.gpr[16] = (0u | 0u);
    goto L_089C1808;
L_089C3184:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_089C318C;
    }
    goto L_089C318C;
L_089C318C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089C3198;
      }
      goto L_089C3194;
    }
L_089C3194:
    ctx.gpr[2] = (0u | 2u);
    goto L_089C3198;
L_089C3198:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C31A8:
    ctx.gpr[4] = (2229u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-28718), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C31B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C31CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14620));
    goto L_089C0980;
L_089C31CC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C31DC:
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[12] - ctx.fpr[0];
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C31F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-816));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(800), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(804), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(808), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C3210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 409u, 0x08935DDCu>(ctx, &aot_mem) && ctx.pc == 0x089C3210u) goto L_089C3210;
    return;
L_089C3210:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1792), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (ctx.fcr31);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-3969));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[9]);
    ctx.fcr31 = ctx.gpr[8] & 0x0181FFFFu;
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16380)));
    ctx.gpr[31] = (0x089C3238u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.pc = 0x08B0BDE4u;
    return;
L_089C3238:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C324C;
      }
      goto L_089C3240;
    }
L_089C3240:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C324Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14608));
    goto L_089C0980;
L_089C324C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3258u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14576));
    goto L_089C0980;
L_089C3258:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x089C3268u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14540));
    ctx.pc = 0x08B0B88Cu;
    return;
L_089C3268:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089C3284;
      }
      goto L_089C3270;
    }
L_089C3270:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C327Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14532));
    goto L_089C0980;
L_089C327C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C327C;
      }
      goto L_089C3284;
    }
L_089C3284:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3290u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14516));
    goto L_089C0980;
L_089C3290:
    ctx.gpr[31] = (0x089C3298u);
    // nop
    ctx.pc = 0x08B0B8A4u;
    return;
L_089C3298:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C32A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14504));
    goto L_089C0980;
L_089C32A8:
    ctx.gpr[4] = (ctx.gpr[16] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C32C0;
      }
      goto L_089C32B4;
    }
L_089C32B4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C32C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14488));
    goto L_089C0980;
L_089C32C0:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C32D8;
      }
      goto L_089C32CC;
    }
L_089C32CC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C32D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14476));
    goto L_089C0980;
L_089C32D8:
    ctx.gpr[4] = (ctx.gpr[16] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C32F0;
      }
      goto L_089C32E4;
    }
L_089C32E4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C32F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14464));
    goto L_089C0980;
L_089C32F0:
    ctx.gpr[4] = (ctx.gpr[16] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3308;
      }
      goto L_089C32FC;
    }
L_089C32FC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3308u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14456));
    goto L_089C0980;
L_089C3308:
    ctx.gpr[4] = (ctx.gpr[16] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3320;
      }
      goto L_089C3314;
    }
L_089C3314:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3320u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14444));
    goto L_089C0980;
L_089C3320:
    ctx.gpr[4] = (ctx.gpr[16] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3338;
      }
      goto L_089C332C;
    }
L_089C332C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3338u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14432));
    goto L_089C0980;
L_089C3338:
    ctx.gpr[31] = (0x089C3340u);
    ctx.gpr[4] = (0u | 32u);
    ctx.pc = 0x08B0B894u;
    return;
L_089C3340:
    ctx.gpr[31] = (0x089C3348u);
    // nop
    ctx.pc = 0x08B0B884u;
    return;
L_089C3348:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3364;
      }
      goto L_089C3350;
    }
L_089C3350:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C335Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14420));
    goto L_089C0980;
L_089C335C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3370;
      }
      goto L_089C3364;
    }
L_089C3364:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3370u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14400));
    goto L_089C0980;
L_089C3370:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089C3384u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14376));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 108u, 0x08A58A14u>(ctx, &aot_mem) && ctx.pc == 0x089C3384u) goto L_089C3384;
    return;
L_089C3384:
    ctx.gpr[31] = (0x089C338Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 380u, 0x08A2D8F0u>(ctx, &aot_mem) && ctx.pc == 0x089C338Cu) goto L_089C338C;
    return;
L_089C338C:
    ctx.gpr[31] = (0x089C3394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 289u, 0x08AF56BCu>(ctx, &aot_mem) && ctx.pc == 0x089C3394u) goto L_089C3394;
    return;
L_089C3394:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x089C33ACu);
    ctx.gpr[6] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 834u, 0x08AA3EFCu>(ctx, &aot_mem) && ctx.pc == 0x089C33ACu) goto L_089C33AC;
    return;
L_089C33AC:
    ctx.gpr[6] = (0u | 45056u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C33BCu);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 834u, 0x08AA3EFCu>(ctx, &aot_mem) && ctx.pc == 0x089C33BCu) goto L_089C33BC;
    return;
L_089C33BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[31] = (0x089C33CCu);
    ctx.gpr[6] = (0u | 5120u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 834u, 0x08AA3EFCu>(ctx, &aot_mem) && ctx.pc == 0x089C33CCu) goto L_089C33CC;
    return;
L_089C33CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 56u);
    ctx.gpr[31] = (0x089C33DCu);
    ctx.gpr[6] = (0u | 24576u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 834u, 0x08AA3EFCu>(ctx, &aot_mem) && ctx.pc == 0x089C33DCu) goto L_089C33DC;
    return;
L_089C33DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 64u);
    ctx.gpr[31] = (0x089C33ECu);
    ctx.gpr[6] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 834u, 0x08AA3EFCu>(ctx, &aot_mem) && ctx.pc == 0x089C33ECu) goto L_089C33EC;
    return;
L_089C33EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[31] = (0x089C33FCu);
    ctx.gpr[6] = (0u | 4096u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 834u, 0x08AA3EFCu>(ctx, &aot_mem) && ctx.pc == 0x089C33FCu) goto L_089C33FC;
    return;
L_089C33FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 96u);
    ctx.gpr[31] = (0x089C340Cu);
    ctx.gpr[6] = (0u | 12288u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 834u, 0x08AA3EFCu>(ctx, &aot_mem) && ctx.pc == 0x089C340Cu) goto L_089C340C;
    return;
L_089C340C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 112u);
    ctx.gpr[31] = (0x089C341Cu);
    ctx.gpr[6] = (0u | 12288u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 834u, 0x08AA3EFCu>(ctx, &aot_mem) && ctx.pc == 0x089C341Cu) goto L_089C341C;
    return;
L_089C341C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[31] = (0x089C342Cu);
    ctx.gpr[6] = (0u | 5120u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 834u, 0x08AA3EFCu>(ctx, &aot_mem) && ctx.pc == 0x089C342Cu) goto L_089C342C;
    return;
L_089C342C:
    ctx.gpr[6] = (3u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 176u);
    ctx.gpr[31] = (0x089C3440u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8192));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 834u, 0x08AA3EFCu>(ctx, &aot_mem) && ctx.pc == 0x089C3440u) goto L_089C3440;
    return;
L_089C3440:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 192u);
    ctx.gpr[31] = (0x089C3450u);
    ctx.gpr[6] = (0u | 8192u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 834u, 0x08AA3EFCu>(ctx, &aot_mem) && ctx.pc == 0x089C3450u) goto L_089C3450;
    return;
L_089C3450:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26464));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C3464u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 131u, 0x089D5468u>(ctx, &aot_mem) && ctx.pc == 0x089C3464u) goto L_089C3464;
    return;
L_089C3464:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (2204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    ctx.gpr[31] = (0x089C3478u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2576));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 843u, 0x08AA3FB8u>(ctx, &aot_mem) && ctx.pc == 0x089C3478u) goto L_089C3478;
    return;
L_089C3478:
    ctx.gpr[5] = (2204u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C3488u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2748));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 843u, 0x08AA3FB8u>(ctx, &aot_mem) && ctx.pc == 0x089C3488u) goto L_089C3488;
    return;
L_089C3488:
    ctx.gpr[5] = (2204u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C3498u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2912));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 843u, 0x08AA3FB8u>(ctx, &aot_mem) && ctx.pc == 0x089C3498u) goto L_089C3498;
    return;
L_089C3498:
    ctx.gpr[31] = (0x089C34A0u);
    // nop
    ctx.pc = 0x08B0BCC4u;
    return;
L_089C34A0:
    ctx.gpr[31] = (0x089C34A8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 299u, 0x0894DADCu>(ctx, &aot_mem) && ctx.pc == 0x089C34A8u) goto L_089C34A8;
    return;
L_089C34A8:
    ctx.gpr[31] = (0x089C34B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 504u, 0x08AC7578u>(ctx, &aot_mem) && ctx.pc == 0x089C34B0u) goto L_089C34B0;
    return;
L_089C34B0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20436)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C34CC;
      }
      goto L_089C34C0;
    }
L_089C34C0:
    ctx.gpr[31] = (0x089C34C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x089C34C8u) goto L_089C34C8;
    return;
L_089C34C8:
    ctx.gpr[4] = (2230u << 16u);
    goto L_089C34CC;
L_089C34CC:
    ctx.gpr[31] = (0x089C34D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20436)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 769u, 0x0894FFE0u>(ctx, &aot_mem) && ctx.pc == 0x089C34D4u) goto L_089C34D4;
    return;
L_089C34D4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20932)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C34EC;
      }
      goto L_089C34E4;
    }
L_089C34E4:
    ctx.gpr[31] = (0x089C34ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x089C34ECu) goto L_089C34EC;
    return;
L_089C34EC:
    ctx.gpr[31] = (0x089C34F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 496u, 0x08AFA364u>(ctx, &aot_mem) && ctx.pc == 0x089C34F4u) goto L_089C34F4;
    return;
L_089C34F4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C350C;
      }
      goto L_089C3504;
    }
L_089C3504:
    ctx.gpr[31] = (0x089C350Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x089C350Cu) goto L_089C350C;
    return;
L_089C350C:
    ctx.gpr[31] = (0x089C3514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 104u, 0x08B007ECu>(ctx, &aot_mem) && ctx.pc == 0x089C3514u) goto L_089C3514;
    return;
L_089C3514:
    ctx.gpr[31] = (0x089C351Cu);
    // nop
    goto L_089C0E38;
L_089C351C:
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[31] = (0x089C3528u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 584u, 0x089173ECu>(ctx, &aot_mem) && ctx.pc == 0x089C3528u) goto L_089C3528;
    return;
L_089C3528:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C3538;
      }
      goto L_089C3530;
    }
L_089C3530:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C3900;
      }
      goto L_089C3538;
    }
L_089C3538:
    ctx.gpr[31] = (0x089C3540u);
    // nop
    goto L_089C10C0;
L_089C3540:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6512));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6448));
    ctx.gpr[31] = (0x089C355Cu);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6292));
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 313u, 0x088B1760u>(ctx, &aot_mem) && ctx.pc == 0x089C355Cu) goto L_089C355C;
    return;
L_089C355C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6292)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C38D0;
      }
      goto L_089C3568;
    }
L_089C3568:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089C35A8;
      }
      goto L_089C3578;
    }
L_089C3578:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C3584u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089C3584u) goto L_089C3584;
    return;
L_089C3584:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C359C;
      }
      goto L_089C3590;
    }
L_089C3590:
    ctx.gpr[31] = (0x089C3598u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089C3598u) goto L_089C3598;
    return;
L_089C3598:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089C359C;
L_089C359C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_089C35A8;
L_089C35A8:
    ctx.gpr[31] = (0x089C35B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 442u, 0x08913D64u>(ctx, &aot_mem) && ctx.pc == 0x089C35B0u) goto L_089C35B0;
    return;
L_089C35B0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6292)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C36A0;
      }
      goto L_089C35C4;
    }
L_089C35C4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (2227u << 16u);
      if (branch_taken) {
          goto L_089C3604;
      }
      goto L_089C35D4;
    }
L_089C35D4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C35E0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089C35E0u) goto L_089C35E0;
    return;
L_089C35E0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C35F8;
      }
      goto L_089C35EC;
    }
L_089C35EC:
    ctx.gpr[31] = (0x089C35F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089C35F4u) goto L_089C35F4;
    return;
L_089C35F4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089C35F8;
L_089C35F8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[16] = (2227u << 16u);
    goto L_089C3604;
L_089C3604:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089C361Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14356));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 421u, 0x08913BE8u>(ctx, &aot_mem) && ctx.pc == 0x089C361Cu) goto L_089C361C;
    return;
L_089C361C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089C3658;
      }
      goto L_089C3628;
    }
L_089C3628:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C3634u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089C3634u) goto L_089C3634;
    return;
L_089C3634:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C364C;
      }
      goto L_089C3640;
    }
L_089C3640:
    ctx.gpr[31] = (0x089C3648u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089C3648u) goto L_089C3648;
    return;
L_089C3648:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089C364C;
L_089C364C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_089C3658;
L_089C3658:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089C3674u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14348));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 421u, 0x08913BE8u>(ctx, &aot_mem) && ctx.pc == 0x089C3674u) goto L_089C3674;
    return;
L_089C3674:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7024));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14340));
    ctx.gpr[31] = (0x089C3698u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-6448));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3698u) goto L_089C3698;
    return;
L_089C3698:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089C379C;
      }
      goto L_089C36A0;
    }
L_089C36A0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6292)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C3790;
      }
      goto L_089C36B4;
    }
L_089C36B4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (2227u << 16u);
      if (branch_taken) {
          goto L_089C36F4;
      }
      goto L_089C36C4;
    }
L_089C36C4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C36D0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089C36D0u) goto L_089C36D0;
    return;
L_089C36D0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C36E8;
      }
      goto L_089C36DC;
    }
L_089C36DC:
    ctx.gpr[31] = (0x089C36E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089C36E4u) goto L_089C36E4;
    return;
L_089C36E4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089C36E8;
L_089C36E8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[16] = (2227u << 16u);
    goto L_089C36F4;
L_089C36F4:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089C370Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14328));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 421u, 0x08913BE8u>(ctx, &aot_mem) && ctx.pc == 0x089C370Cu) goto L_089C370C;
    return;
L_089C370C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089C3748;
      }
      goto L_089C3718;
    }
L_089C3718:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C3724u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089C3724u) goto L_089C3724;
    return;
L_089C3724:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C373C;
      }
      goto L_089C3730;
    }
L_089C3730:
    ctx.gpr[31] = (0x089C3738u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089C3738u) goto L_089C3738;
    return;
L_089C3738:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089C373C;
L_089C373C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_089C3748;
L_089C3748:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089C3764u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14320));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 421u, 0x08913BE8u>(ctx, &aot_mem) && ctx.pc == 0x089C3764u) goto L_089C3764;
    return;
L_089C3764:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7024));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14340));
    ctx.gpr[31] = (0x089C3788u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-6448));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3788u) goto L_089C3788;
    return;
L_089C3788:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089C379C;
      }
      goto L_089C3790;
    }
L_089C3790:
    ctx.gpr[4] = (2277u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7024), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 0u);
    goto L_089C379C;
L_089C379C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3888;
      }
      goto L_089C37A4;
    }
L_089C37A4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089C37B0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 539u, 0x088B7078u>(ctx, &aot_mem) && ctx.pc == 0x089C37B0u) goto L_089C37B0;
    return;
L_089C37B0:
    ctx.gpr[31] = (0x089C37B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 552u, 0x08AB3028u>(ctx, &aot_mem) && ctx.pc == 0x089C37B8u) goto L_089C37B8;
    return;
L_089C37B8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5168));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089C37D8u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 414u, 0x08A7F3A8u>(ctx, &aot_mem) && ctx.pc == 0x089C37D8u) goto L_089C37D8;
    return;
L_089C37D8:
    ctx.gpr[31] = (0x089C37E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 571u, 0x08AB332Cu>(ctx, &aot_mem) && ctx.pc == 0x089C37E0u) goto L_089C37E0;
    return;
L_089C37E0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14312));
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7024));
    ctx.gpr[31] = (0x089C37F8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089C0980;
L_089C37F8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089C3804u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 455u, 0x088B1FA8u>(ctx, &aot_mem) && ctx.pc == 0x089C3804u) goto L_089C3804;
    return;
L_089C3804:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16504)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3880;
      }
      goto L_089C381C;
    }
L_089C381C:
    ctx.gpr[31] = (0x089C3824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 552u, 0x08AB3028u>(ctx, &aot_mem) && ctx.pc == 0x089C3824u) goto L_089C3824;
    return;
L_089C3824:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5168));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089C3844u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 414u, 0x08A7F3A8u>(ctx, &aot_mem) && ctx.pc == 0x089C3844u) goto L_089C3844;
    return;
L_089C3844:
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27036), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089C3860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 571u, 0x08AB332Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3860u) goto L_089C3860;
    return;
L_089C3860:
    ctx.gpr[31] = (0x089C3868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 638u, 0x08AB3900u>(ctx, &aot_mem) && ctx.pc == 0x089C3868u) goto L_089C3868;
    return;
L_089C3868:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16504)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C381C;
      }
      goto L_089C3880;
    }
L_089C3880:
    ctx.gpr[31] = (0x089C3888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 539u, 0x08AB2F98u>(ctx, &aot_mem) && ctx.pc == 0x089C3888u) goto L_089C3888;
    return;
L_089C3888:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089C38C8;
      }
      goto L_089C3898;
    }
L_089C3898:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C38A4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089C38A4u) goto L_089C38A4;
    return;
L_089C38A4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C38BC;
      }
      goto L_089C38B0;
    }
L_089C38B0:
    ctx.gpr[31] = (0x089C38B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089C38B8u) goto L_089C38B8;
    return;
L_089C38B8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089C38BC;
L_089C38BC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_089C38C8;
L_089C38C8:
    ctx.gpr[31] = (0x089C38D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 407u, 0x08913B04u>(ctx, &aot_mem) && ctx.pc == 0x089C38D0u) goto L_089C38D0;
    return;
L_089C38D0:
    ctx.gpr[31] = (0x089C38D8u);
    // nop
    goto L_089C108C;
L_089C38D8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x089C38E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 778u, 0x08A0B87Cu>(ctx, &aot_mem) && ctx.pc == 0x089C38E4u) goto L_089C38E4;
    return;
L_089C38E4:
    ctx.gpr[31] = (0x089C38ECu);
    ctx.gpr[4] = (0u | 0u);
    goto L_089C3914;
L_089C38EC:
    ctx.gpr[31] = (0x089C38F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 151u, 0x08AD0BA8u>(ctx, &aot_mem) && ctx.pc == 0x089C38F4u) goto L_089C38F4;
    return;
L_089C38F4:
    ctx.gpr[31] = (0x089C38FCu);
    // nop
    goto L_089C27AC;
L_089C38FC:
    ctx.gpr[2] = (0u | 0u);
    goto L_089C3900;
L_089C3900:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(800)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(804)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(808)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C3914:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[16] = (2229u << 16u);
      if (branch_taken) {
          goto L_089C3944;
      }
      goto L_089C3930;
    }
L_089C3930:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-28727)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3958;
      }
      goto L_089C393C;
    }
L_089C393C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3960;
      }
      goto L_089C3944;
    }
L_089C3944:
    ctx.gpr[31] = (0x089C394Cu);
    ctx.gpr[4] = (0u | 0u);
    goto L_089C191C;
L_089C394C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-28727), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089C3F0C;
      }
      goto L_089C3958;
    }
L_089C3958:
    ctx.gpr[31] = (0x089C3960u);
    ctx.gpr[4] = (0u | 0u);
    goto L_089C191C;
L_089C3960:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C396Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14284));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C396Cu) goto L_089C396C;
    return;
L_089C396C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3978u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14264));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3978u) goto L_089C3978;
    return;
L_089C3978:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3984u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14244));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3984u) goto L_089C3984;
    return;
L_089C3984:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3990u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14228));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3990u) goto L_089C3990;
    return;
L_089C3990:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C399Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14204));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C399Cu) goto L_089C399C;
    return;
L_089C399C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C39A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14180));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C39A8u) goto L_089C39A8;
    return;
L_089C39A8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C39B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14160));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C39B4u) goto L_089C39B4;
    return;
L_089C39B4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C39C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14140));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C39C0u) goto L_089C39C0;
    return;
L_089C39C0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C39CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14116));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C39CCu) goto L_089C39CC;
    return;
L_089C39CC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C39D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14096));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C39D8u) goto L_089C39D8;
    return;
L_089C39D8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C39E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14072));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C39E4u) goto L_089C39E4;
    return;
L_089C39E4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C39F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14052));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C39F0u) goto L_089C39F0;
    return;
L_089C39F0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C39FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14028));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C39FCu) goto L_089C39FC;
    return;
L_089C39FC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3A08u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14008));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3A08u) goto L_089C3A08;
    return;
L_089C3A08:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3A14u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13988));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3A14u) goto L_089C3A14;
    return;
L_089C3A14:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3A20u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13968));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3A20u) goto L_089C3A20;
    return;
L_089C3A20:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3A2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13948));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3A2Cu) goto L_089C3A2C;
    return;
L_089C3A2C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3A38u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13920));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3A38u) goto L_089C3A38;
    return;
L_089C3A38:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3A44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13892));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3A44u) goto L_089C3A44;
    return;
L_089C3A44:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3A50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13868));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3A50u) goto L_089C3A50;
    return;
L_089C3A50:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3A5Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13840));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3A5Cu) goto L_089C3A5C;
    return;
L_089C3A5C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3A68u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13808));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3A68u) goto L_089C3A68;
    return;
L_089C3A68:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3A74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13776));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3A74u) goto L_089C3A74;
    return;
L_089C3A74:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3A80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13748));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3A80u) goto L_089C3A80;
    return;
L_089C3A80:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3A8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13716));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3A8Cu) goto L_089C3A8C;
    return;
L_089C3A8C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3A98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13692));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3A98u) goto L_089C3A98;
    return;
L_089C3A98:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3AA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13672));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3AA4u) goto L_089C3AA4;
    return;
L_089C3AA4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3AB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13648));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3AB0u) goto L_089C3AB0;
    return;
L_089C3AB0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3ABCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13628));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3ABCu) goto L_089C3ABC;
    return;
L_089C3ABC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3AC8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13604));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3AC8u) goto L_089C3AC8;
    return;
L_089C3AC8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3AD4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13584));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3AD4u) goto L_089C3AD4;
    return;
L_089C3AD4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3AE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13564));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3AE0u) goto L_089C3AE0;
    return;
L_089C3AE0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3AECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13544));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3AECu) goto L_089C3AEC;
    return;
L_089C3AEC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3AF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13524));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3AF8u) goto L_089C3AF8;
    return;
L_089C3AF8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3B04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13508));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3B04u) goto L_089C3B04;
    return;
L_089C3B04:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3B10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13488));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3B10u) goto L_089C3B10;
    return;
L_089C3B10:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3B1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13468));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3B1Cu) goto L_089C3B1C;
    return;
L_089C3B1C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3B28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13444));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3B28u) goto L_089C3B28;
    return;
L_089C3B28:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3B34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13424));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3B34u) goto L_089C3B34;
    return;
L_089C3B34:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3B40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13404));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3B40u) goto L_089C3B40;
    return;
L_089C3B40:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3B4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13388));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3B4Cu) goto L_089C3B4C;
    return;
L_089C3B4C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3B58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13364));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3B58u) goto L_089C3B58;
    return;
L_089C3B58:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3B64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13344));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3B64u) goto L_089C3B64;
    return;
L_089C3B64:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3B70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13324));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3B70u) goto L_089C3B70;
    return;
L_089C3B70:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3B7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13296));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3B7Cu) goto L_089C3B7C;
    return;
L_089C3B7C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3B88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13268));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3B88u) goto L_089C3B88;
    return;
L_089C3B88:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3B94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13240));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3B94u) goto L_089C3B94;
    return;
L_089C3B94:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3BA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13212));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3BA0u) goto L_089C3BA0;
    return;
L_089C3BA0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3BACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13176));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3BACu) goto L_089C3BAC;
    return;
L_089C3BAC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3BB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13140));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3BB8u) goto L_089C3BB8;
    return;
L_089C3BB8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3BC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13104));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3BC4u) goto L_089C3BC4;
    return;
L_089C3BC4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3BD0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13072));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3BD0u) goto L_089C3BD0;
    return;
L_089C3BD0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3BDCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13036));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3BDCu) goto L_089C3BDC;
    return;
L_089C3BDC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3BE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13000));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3BE8u) goto L_089C3BE8;
    return;
L_089C3BE8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3BF4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12964));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3BF4u) goto L_089C3BF4;
    return;
L_089C3BF4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3C00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12928));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3C00u) goto L_089C3C00;
    return;
L_089C3C00:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3C0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12900));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3C0Cu) goto L_089C3C0C;
    return;
L_089C3C0C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3C18u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12868));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3C18u) goto L_089C3C18;
    return;
L_089C3C18:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3C24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12832));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3C24u) goto L_089C3C24;
    return;
L_089C3C24:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3C30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12796));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3C30u) goto L_089C3C30;
    return;
L_089C3C30:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3C3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12760));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3C3Cu) goto L_089C3C3C;
    return;
L_089C3C3C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3C48u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12728));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3C48u) goto L_089C3C48;
    return;
L_089C3C48:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3C54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12700));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3C54u) goto L_089C3C54;
    return;
L_089C3C54:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3C60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12672));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3C60u) goto L_089C3C60;
    return;
L_089C3C60:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3C6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12640));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3C6Cu) goto L_089C3C6C;
    return;
L_089C3C6C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3C78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12604));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3C78u) goto L_089C3C78;
    return;
L_089C3C78:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3C84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12576));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3C84u) goto L_089C3C84;
    return;
L_089C3C84:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3C90u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12544));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3C90u) goto L_089C3C90;
    return;
L_089C3C90:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3C9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12508));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3C9Cu) goto L_089C3C9C;
    return;
L_089C3C9C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3CA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12472));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3CA8u) goto L_089C3CA8;
    return;
L_089C3CA8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3CB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12436));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3CB4u) goto L_089C3CB4;
    return;
L_089C3CB4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3CC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12404));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3CC0u) goto L_089C3CC0;
    return;
L_089C3CC0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3CCCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12372));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3CCCu) goto L_089C3CCC;
    return;
L_089C3CCC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3CD8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12336));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3CD8u) goto L_089C3CD8;
    return;
L_089C3CD8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3CE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12300));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3CE4u) goto L_089C3CE4;
    return;
L_089C3CE4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3CF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12264));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3CF0u) goto L_089C3CF0;
    return;
L_089C3CF0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3CFCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12228));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3CFCu) goto L_089C3CFC;
    return;
L_089C3CFC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3D08u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12192));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3D08u) goto L_089C3D08;
    return;
L_089C3D08:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3D14u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12156));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3D14u) goto L_089C3D14;
    return;
L_089C3D14:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3D20u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12124));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3D20u) goto L_089C3D20;
    return;
L_089C3D20:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3D2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12088));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3D2Cu) goto L_089C3D2C;
    return;
L_089C3D2C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3D38u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12052));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3D38u) goto L_089C3D38;
    return;
L_089C3D38:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3D44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12016));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3D44u) goto L_089C3D44;
    return;
L_089C3D44:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3D50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11980));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3D50u) goto L_089C3D50;
    return;
L_089C3D50:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3D5Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11952));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3D5Cu) goto L_089C3D5C;
    return;
L_089C3D5C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3D68u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11920));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3D68u) goto L_089C3D68;
    return;
L_089C3D68:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3D74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11884));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3D74u) goto L_089C3D74;
    return;
L_089C3D74:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3D80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11848));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3D80u) goto L_089C3D80;
    return;
L_089C3D80:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3D8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11816));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3D8Cu) goto L_089C3D8C;
    return;
L_089C3D8C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3D98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11780));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3D98u) goto L_089C3D98;
    return;
L_089C3D98:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3DA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11744));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3DA4u) goto L_089C3DA4;
    return;
L_089C3DA4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3DB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11708));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3DB0u) goto L_089C3DB0;
    return;
L_089C3DB0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3DBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11676));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3DBCu) goto L_089C3DBC;
    return;
L_089C3DBC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3DC8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11644));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3DC8u) goto L_089C3DC8;
    return;
L_089C3DC8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3DD4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11608));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3DD4u) goto L_089C3DD4;
    return;
L_089C3DD4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3DE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11580));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3DE0u) goto L_089C3DE0;
    return;
L_089C3DE0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3DECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11552));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3DECu) goto L_089C3DEC;
    return;
L_089C3DEC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3DF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11520));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3DF8u) goto L_089C3DF8;
    return;
L_089C3DF8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3E04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11492));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3E04u) goto L_089C3E04;
    return;
L_089C3E04:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3E10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11460));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3E10u) goto L_089C3E10;
    return;
L_089C3E10:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3E1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11424));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3E1Cu) goto L_089C3E1C;
    return;
L_089C3E1C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3E28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11388));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3E28u) goto L_089C3E28;
    return;
L_089C3E28:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3E34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11352));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3E34u) goto L_089C3E34;
    return;
L_089C3E34:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3E40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11316));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3E40u) goto L_089C3E40;
    return;
L_089C3E40:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3E4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11288));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3E4Cu) goto L_089C3E4C;
    return;
L_089C3E4C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3E58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11268));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3E58u) goto L_089C3E58;
    return;
L_089C3E58:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3E64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11244));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3E64u) goto L_089C3E64;
    return;
L_089C3E64:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3E70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11224));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3E70u) goto L_089C3E70;
    return;
L_089C3E70:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3E7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11204));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3E7Cu) goto L_089C3E7C;
    return;
L_089C3E7C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3E88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11184));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3E88u) goto L_089C3E88;
    return;
L_089C3E88:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3E94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11164));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3E94u) goto L_089C3E94;
    return;
L_089C3E94:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3EA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11144));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3EA0u) goto L_089C3EA0;
    return;
L_089C3EA0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3EACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11124));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3EACu) goto L_089C3EAC;
    return;
L_089C3EAC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3EB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11104));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3EB8u) goto L_089C3EB8;
    return;
L_089C3EB8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3EC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11084));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3EC4u) goto L_089C3EC4;
    return;
L_089C3EC4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3ED0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11064));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3ED0u) goto L_089C3ED0;
    return;
L_089C3ED0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3EDCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11044));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3EDCu) goto L_089C3EDC;
    return;
L_089C3EDC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3EE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11024));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3EE8u) goto L_089C3EE8;
    return;
L_089C3EE8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3EF4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11004));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3EF4u) goto L_089C3EF4;
    return;
L_089C3EF4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3F00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10984));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3F00u) goto L_089C3F00;
    return;
L_089C3F00:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3F0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10964));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872F04u>(ctx, &aot_mem) && ctx.pc == 0x089C3F0Cu) goto L_089C3F0C;
    return;
L_089C3F0C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C3F1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    ctx.gpr[16] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-28742)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C3F74;
      }
      goto L_089C3F5C;
    }
L_089C3F5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7200)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7168)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C3F90;
      }
      goto L_089C3F74;
    }
L_089C3F74:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3183)));
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C3FA4;
      }
      goto L_089C3F88;
    }
L_089C3F88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-25816)));
      if (branch_taken) {
          goto L_089C3F98;
      }
      goto L_089C3F90;
    }
L_089C3F90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 19u, 0x089C4214u>(ctx, &aot_mem); return;
      }
      goto L_089C3F98;
    }
L_089C3F98:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 19u, 0x089C4214u>(ctx, &aot_mem); return;
      }
      goto L_089C3FA4;
    }
L_089C3FA4:
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C3FB0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_089C1998;
L_089C3FB0:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3183)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C3FC4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 136u, 0x089FD404u>(ctx, &aot_mem) && ctx.pc == 0x089C3FC4u) goto L_089C3FC4;
    return;
L_089C3FC4:
    ctx.gpr[7] = (17392u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-25816)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 256u);
    ctx.gpr[21] = (2232u << 16u);
    ctx.gpr[7] = (17288u << 16u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(12960));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_089C3FF8;
    }
    goto L_089C3FF8;
L_089C3FF8:
    ctx.gpr[4] = (0u | 50u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.pc = 0x089C4000u; return;
}

void recomp_unit_0111(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0111_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_111(Runtime &runtime) {
    runtime.register_generated_unit(111u, 0x089C0000u, 16384u, &recomp_unit_0111, &recomp_unit_0111_entry);
    runtime.register_function(0x089C0000u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0008u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0010u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0018u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0028u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0034u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C003Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0044u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C004Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0058u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0060u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0068u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0074u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0080u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0088u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0090u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C00A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C00ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C00B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C00BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C00C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C00D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C014Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0178u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C019Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C01A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C01BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C01D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C01E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0228u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0238u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0244u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0254u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C025Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0268u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0270u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0280u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0284u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C028Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0298u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C02A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C02ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C02B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C02C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C02C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C02D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C02DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C02E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C02E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C030Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C032Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C037Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0380u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0390u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C03A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C03B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C03C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C03E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C03F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0404u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C041Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0434u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0448u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0458u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0468u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0470u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0488u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C049Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C04ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C04BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C04C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C04C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C04D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C04F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C052Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0568u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0570u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0580u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0590u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0594u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C059Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C05BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C05CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C05DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C05ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C05F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C05FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C062Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C063Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C066Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0678u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0688u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0690u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C06A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C06ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C06B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C06D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0714u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0720u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C072Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0738u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0760u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0768u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0778u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0788u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C078Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0794u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C07B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C07C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C07D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C07E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C07F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C07FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C082Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0844u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0874u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0880u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C088Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C08A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C08C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C08ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0910u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C091Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0928u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C094Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0960u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0974u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0980u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C09ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C09B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C09BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C09C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C09D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C09E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C09F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A04u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A10u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A2Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A44u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A4Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A54u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A60u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A68u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A70u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A78u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A8Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A9Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0AA4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0AACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0ABCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0AE8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0AF0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0AF8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B04u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B0Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B14u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B1Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B30u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B3Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B48u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B60u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B90u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0BA0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0BA8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0BB0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0BBCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0BC4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0BCCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0BD4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0BFCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0C08u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0C14u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0C1Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0C24u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0C2Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0C34u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0C50u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0C64u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0C80u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0C8Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0C98u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0CA0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0CA8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0CB0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0CB8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0CD4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0CE8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0CFCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0D04u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0D10u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0D30u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0D38u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0D50u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0D78u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0D90u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0D98u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0DA8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0DC4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0DD0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0DD8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0E08u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0E18u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0E20u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0E38u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0E64u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0E6Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0E74u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0E7Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0E84u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0E8Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0E94u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0E9Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0EA4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0EECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F04u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F10u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F18u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F30u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F3Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F44u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F58u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F74u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F88u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F94u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0FA8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0FDCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0FFCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1008u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1010u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1014u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1030u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1048u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1050u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C105Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1064u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1074u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C108Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C10A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C10B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C10C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C10E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C10F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C10F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1100u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1110u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1118u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1120u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C112Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1134u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1144u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1150u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C115Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1164u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1168u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C116Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1174u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1180u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C118Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1198u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C11A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C11A4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C11A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C11B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C11B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C11D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C11D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C122Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C12A4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C12ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C12C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C12C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C12D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C12D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C12E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C12E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C12F4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C12FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1328u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1340u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1344u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1370u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1414u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1438u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1440u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1448u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1450u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1458u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C146Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1478u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1488u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1494u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C14B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C14B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C14E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C14F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1504u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1520u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1528u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C153Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1554u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C155Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1564u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1570u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C157Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1584u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1588u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C158Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1594u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C159Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C15A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C15B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C15C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C15C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C15CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C15D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C15E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C15E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1604u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C160Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1614u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C161Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1624u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1644u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C164Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1654u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C165Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1664u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C166Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1674u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C167Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1684u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C168Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C16A4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C16D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C16E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C16F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1704u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C170Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1720u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1754u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1758u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1760u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1768u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1778u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1790u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C17A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C17A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C17B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C17B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C17CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C17DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C17E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C17ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1808u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1818u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1820u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1828u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1830u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1838u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1840u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1848u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1850u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1858u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1860u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1868u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1870u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1878u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1880u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C188Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1894u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C18A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C18A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C18B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C18BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C18C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C18D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C18DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C18E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C18F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C18F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1904u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C190Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1910u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C191Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1944u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C194Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1954u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C195Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1964u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C196Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1974u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1978u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C198Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1998u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C19DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C19ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C19F4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C19FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A08u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A0Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A14u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A1Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A28u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A30u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A40u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A4Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A68u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A74u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A84u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A8Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A98u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1AA0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1AACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1ABCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1AD0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1AD8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1AF8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B08u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B10u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B18u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B24u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B2Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B3Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B40u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B48u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B54u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B58u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B80u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1BA0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1BB0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1BB8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1BCCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1BD8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1BE8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1BFCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1C14u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1C58u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1C5Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1C78u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1C8Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1CA4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1CB4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1D5Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1D7Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1D8Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1DECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1E08u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1E18u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1E70u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1E8Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1E9Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1EE4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F00u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F10u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F48u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F54u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F8Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F94u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1FA8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1FBCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1FDCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1FE4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1FECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1FF4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1FFCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2004u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C202Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2048u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2058u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2068u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2078u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2080u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2088u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2090u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C20A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C20B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C20B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C20C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C20C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C20D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C20D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C20E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C20F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C20FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2104u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2120u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C212Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C213Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2148u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2154u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C215Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2160u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2168u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2174u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C218Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2194u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C219Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C21ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C21B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C21C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C21CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C21D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C21D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C21E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2200u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2208u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2214u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C222Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2238u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2244u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C224Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2250u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2254u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2264u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C227Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C228Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2298u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22A4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22F4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2314u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C232Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2334u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2340u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C234Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2354u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C235Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C236Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2374u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C237Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2384u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C239Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C23A4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C23ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C23B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C23BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C23E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2414u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C241Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C242Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C244Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2454u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2460u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2468u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2470u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2478u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2480u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C24B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C24CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C24D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C24F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C250Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C251Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2530u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C254Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2554u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C255Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2568u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2574u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C257Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2584u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C258Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2594u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C25A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C25C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C25D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C25E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2600u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2624u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2634u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C263Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C264Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2658u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C265Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2660u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2668u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2670u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C267Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2684u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C268Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2690u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2698u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C26A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C26A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C26B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C26C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C26CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C26D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C26D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C26DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C26E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C26F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C26F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2700u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2708u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2720u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2744u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2750u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2768u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C278Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C27A4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C27ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C27E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2808u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2810u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C282Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2834u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2840u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2854u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C285Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2868u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2870u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2884u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C28A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C28BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C28C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C28CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C28D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C28F4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C28FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2908u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2918u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2920u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C292Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2938u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2944u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C295Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2964u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2970u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C297Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2984u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C298Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2998u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C29A4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C29ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C29B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C29BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C29C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C29C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C29D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C29DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C29E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C29ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C29F4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C29FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A04u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A0Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A18u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A20u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A28u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A34u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A3Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A44u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A4Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A54u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A64u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A6Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A74u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2AA4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2AB8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2AC0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2AC8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2AD0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2AE0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2AE8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2AF0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2AF8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B08u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B10u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B28u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B30u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B38u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B40u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B48u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B50u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B58u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B68u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B70u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B7Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B88u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B90u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B98u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BA0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BA8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BB0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BB8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BC0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BC8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BD0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BD8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BE0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BE8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BF0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BF8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C00u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C08u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C1Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C4Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C5Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C68u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C74u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C80u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C94u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C9Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2CA4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2CB0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2CB8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2CC4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2CF0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D0Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D18u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D24u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D2Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D34u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D3Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D40u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D4Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D54u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D5Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D64u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D84u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2DA0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2DC0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2DD0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2DECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2DFCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E04u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E24u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E34u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E50u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E60u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E80u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E90u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2EACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2EBCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2EC8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2ED0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2EDCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2EE4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2EF0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2EF8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F00u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F08u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F10u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F18u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F40u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F60u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F68u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F8Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2FA0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2FCCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2FDCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2FE8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2FF4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3000u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C301Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C304Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C305Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C306Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C307Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3084u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C308Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3098u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3144u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C314Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3154u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C315Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3164u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C316Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3174u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C317Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3184u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C318Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3194u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3198u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C31A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C31B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C31CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C31DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C31F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3210u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3238u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3240u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C324Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3258u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3268u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3270u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C327Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3284u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3290u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3298u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C32A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C32B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C32C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C32CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C32D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C32E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C32F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C32FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3308u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3314u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3320u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C332Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3338u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3340u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3348u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3350u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C335Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3364u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3370u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3384u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C338Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3394u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C33ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C33BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C33CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C33DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C33ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C33FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C340Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C341Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C342Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3440u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3450u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3464u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3478u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3488u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3498u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34F4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3504u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C350Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3514u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C351Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3528u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3530u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3538u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3540u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C355Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3568u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3578u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3584u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3590u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3598u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C359Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C35A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C35B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C35C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C35D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C35E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C35ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C35F4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C35F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3604u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C361Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3628u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3634u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3640u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3648u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C364Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3658u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3674u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3698u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C36A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C36B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C36C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C36D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C36DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C36E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C36E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C36F4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C370Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3718u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3724u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3730u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3738u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C373Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3748u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3764u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3788u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3790u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C379Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C37A4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C37B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C37B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C37D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C37E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C37F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3804u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C381Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3824u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3844u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3860u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3868u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3880u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3888u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3898u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C38A4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C38B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C38B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C38BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C38C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C38D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C38D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C38E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C38ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C38F4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C38FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3900u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3914u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3930u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C393Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3944u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C394Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3958u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3960u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C396Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3978u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3984u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3990u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C399Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C39A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C39B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C39C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C39CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C39D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C39E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C39F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C39FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A08u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A14u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A20u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A2Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A38u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A44u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A50u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A5Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A68u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A74u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A80u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A8Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A98u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3AA4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3AB0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3ABCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3AC8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3AD4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3AE0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3AECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3AF8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B04u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B10u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B1Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B28u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B34u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B40u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B4Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B58u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B64u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B70u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B7Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B88u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B94u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3BA0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3BACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3BB8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3BC4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3BD0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3BDCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3BE8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3BF4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C00u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C0Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C18u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C24u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C30u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C3Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C48u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C54u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C60u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C6Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C78u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C84u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C90u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C9Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3CA8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3CB4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3CC0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3CCCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3CD8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3CE4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3CF0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3CFCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D08u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D14u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D20u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D2Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D38u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D44u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D50u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D5Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D68u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D74u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D80u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D8Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D98u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3DA4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3DB0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3DBCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3DC8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3DD4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3DE0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3DECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3DF8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E04u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E10u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E1Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E28u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E34u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E40u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E4Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E58u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E64u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E70u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E7Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E88u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E94u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3EA0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3EACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3EB8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3EC4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3ED0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3EDCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3EE8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3EF4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3F00u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3F0Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3F1Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3F5Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3F74u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3F88u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3F90u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3F98u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3FA4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3FB0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3FC4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3FF8u, &recomp_unit_0111, "recomp_unit_0111");
}
} // namespace psprecomp
