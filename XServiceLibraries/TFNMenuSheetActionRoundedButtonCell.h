//
#ifndef TFNMenuSheetActionRoundedButtonCell_h
#define TFNMenuSheetActionRoundedButtonCell_h
@import Foundation;

#include "TFNButton.h"
#include "TFNTableViewCell.h"

@class UIColor;

@interface TFNMenuSheetActionRoundedButtonCell : TFNTableViewCell

@property (retain, nonatomic) UIColor *buttonBackgroundColor;
@property (retain, nonatomic) UIColor *buttonHighlightColor;
@property (retain, nonatomic) TFNButton *button;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } overrideContentEdgeInsets;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)highlighted animated:(_Bool)animated;

@end

#endif /* TFNMenuSheetActionRoundedButtonCell_h */
