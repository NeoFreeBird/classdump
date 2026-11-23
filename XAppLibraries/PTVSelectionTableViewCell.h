//
#ifndef PTVSelectionTableViewCell_h
#define PTVSelectionTableViewCell_h
@import Foundation;

#include "PTVTableViewCell.h"

@class UIImageView, UIView;

@interface PTVSelectionTableViewCell : PTVTableViewCell {
    /* instance variables */
    UIView *_circleView;
}

@property (nonatomic) _Bool accessoryVisible;
@property (readonly, nonatomic) UIImageView *accessoryImage;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInsets;
@property (nonatomic) _Bool showsEmptyCircleWhenAccessoryInvisible;

/* class methods */
+ (id)SelectionAccessoryImage;

/* instance methods */
- (void)layoutSubviews;
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;

@end

#endif /* PTVSelectionTableViewCell_h */
