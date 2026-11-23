//
#ifndef TFNViewHostCollectionViewCell_h
#define TFNViewHostCollectionViewCell_h
@import Foundation;

#include "TFNCollectionViewCell.h"

@class UIColor, UIView;

@interface TFNViewHostCollectionViewCell : TFNCollectionViewCell {
    /* instance variables */
    UIColor *_originalBackgroundColor;
}

@property (retain, nonatomic) UIView *hostedView;
@property (retain, nonatomic) UIColor *highlightedBackgroundColor;
@property (retain, nonatomic) UIColor *selectedBackgroundColor;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)highlighted;
- (void)setSelected:(_Bool)selected;
- (void)prepareForReuse;

@end

#endif /* TFNViewHostCollectionViewCell_h */
