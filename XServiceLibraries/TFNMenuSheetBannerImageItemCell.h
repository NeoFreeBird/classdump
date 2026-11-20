//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNMenuSheetBannerImageItemCell_h
#define TFNMenuSheetBannerImageItemCell_h
@import Foundation;

#include "TFNTableViewCell.h"

@class UIImageView;

@interface TFNMenuSheetBannerImageItemCell : TFNTableViewCell

@property (retain, nonatomic) UIImageView *bannerView;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;

@end

#endif /* TFNMenuSheetBannerImageItemCell_h */
