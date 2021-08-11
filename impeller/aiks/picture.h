// Copyright 2013 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#pragma once

#include <memory>
#include <vector>

#include "flutter/fml/macros.h"

namespace impeller {

class PictureOperation;

class Picture {
 public:
  Picture(std::vector<std::unique_ptr<PictureOperation>> operations);

  ~Picture();

 private:
  std::vector<std::unique_ptr<PictureOperation>> ops_;

  FML_DISALLOW_COPY_AND_ASSIGN(Picture);
};

}  // namespace impeller
