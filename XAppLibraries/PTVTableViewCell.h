//
#ifndef PTVTableViewCell_h
#define PTVTableViewCell_h
@import Foundation;

#include "PTVDividerView.h"

@class UITableViewCell, UIView;

@interface PTVTableViewCell : UITableViewCell {
    /* instance variables */
    UIView *_highlightedShade;
    _Bool _isHighlighted;
}

@property (readonly, nonatomic) PTVDividerView *topBorder;
@property (readonly, nonatomic) PTVDividerView *bottomBorder;
@property (nonatomic) unsigned long long bottomBorderState;
@property (nonatomic) _Bool usesCustomHighlightShade;

/* class methods */
+ (id)emptyCell;
+ (id)emptyCellForRowAtIndexPath:(id)path tableView:(id)view reuseIdentifier:(id)identifier;

/* instance methods */
- (void)layoutSubviews;
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)setHighlighted:(_Bool)highlighted animated:(_Bool)animated;
- (double)bottomBorderInsetLeft;
- (double)bottomBorderInsetRight;
- (void)highlightedState;

@end

#endif /* PTVTableViewCell_h */
