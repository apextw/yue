// Copyright 2016 Cheng Zhao. All rights reserved.
// Use of this source code is governed by the license that can be found in the
// LICENSE file.

#ifndef NATIVEUI_GFX_MAC_IMAGE_MAC_H_
#define NATIVEUI_GFX_MAC_IMAGE_MAC_H_

#include <string>

#include "base/mac/scoped_nsobject.h"
#include "nativeui/gfx/image.h"

namespace nu {

NATIVEUI_EXPORT class ImageMac : public Image {
 public:
  ImageMac(const std::string& path);

  // Image:
  Size GetSize() const override;
  NativeImage GetNative() const override;

 private:
  ~ImageMac() override;

  base::scoped_nsobject<NSImage> image_;
};

}  // namespace nu

#endif  // NATIVEUI_GFX_MAC_IMAGE_MAC_H_