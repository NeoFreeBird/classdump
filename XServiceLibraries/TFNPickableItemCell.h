//
#ifndef TFNPickableItemCell_h
#define TFNPickableItemCell_h
@import Foundation;

#include "TFNTextCell.h"

@class UIImageView, UILabel;

@interface TFNPickableItemCell : TFNTextCell

@property (nonatomic) long long overrideAccessoryType;
@property (readonly, nonatomic) UIImageView *accessoryImageView;
@property (readonly, nonatomic) UILabel *unpickableLabel;

/* class methods */
+ (id)pickableItemCellForTableView:(id)view reuseIdentifier:(id)identifier indexPath:(id)path;

/* instance methods */
- (id)accessoryView;
- (void)updateAccessoryImageView:(_Bool)view;
- (void)_layoutAccessoryImageView;
- (void)_layoutUnpickableLabel;
- (void)layoutSubviews;
- (void)setEditing:(_Bool)editing animated:(_Bool)animated;

@end

#endif /* TFNPickableItemCell_h */
