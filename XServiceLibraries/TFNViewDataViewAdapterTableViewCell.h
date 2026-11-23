//
#ifndef TFNViewDataViewAdapterTableViewCell_h
#define TFNViewDataViewAdapterTableViewCell_h
@import Foundation;

#include "TFNTableViewCell.h"

@class UIView;

@interface TFNViewDataViewAdapterTableViewCell : TFNTableViewCell

@property (retain, nonatomic) UIView *view;
@property (nonatomic) _Bool viewIncludesContentEdgeInsets;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)layoutSubviews;
- (void)setAccessoryType:(long long)type;
- (void)cleanup;

@end

#endif /* TFNViewDataViewAdapterTableViewCell_h */
