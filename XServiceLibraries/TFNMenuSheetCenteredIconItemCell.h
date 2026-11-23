//
#ifndef TFNMenuSheetCenteredIconItemCell_h
#define TFNMenuSheetCenteredIconItemCell_h
@import Foundation;

#include "TFNTableViewCell.h"

@class UIColor, UIImageView;

@interface TFNMenuSheetCenteredIconItemCell : TFNTableViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (nonatomic) struct CGSize { double x0; double x1; } iconBackgroundSize;
@property (nonatomic) long long iconContentMode;
@property (retain, nonatomic) UIColor *iconBackgroundColor;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)layoutSubviews;

@end

#endif /* TFNMenuSheetCenteredIconItemCell_h */
