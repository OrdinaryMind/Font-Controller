﻿#ifndef FONT_SIZE_GENERATOR_H
#define FONT_SIZE_GENERATOR_H

#include <QSize>

class FontSizeGenerator {
 public:
  FontSizeGenerator(int initial_widget_font_pixel_size,
                    double font_scale_coefficient,
                    const QSize& initial_widget_size);
};

#endif  // FONT_SIZE_GENERATOR_H
