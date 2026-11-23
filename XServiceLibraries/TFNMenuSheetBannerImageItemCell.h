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
