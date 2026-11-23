//
#ifndef TFNButtonDataViewAdapterTableViewCell_h
#define TFNButtonDataViewAdapterTableViewCell_h
@import Foundation;

#include "TFNTableViewCell.h"

@class UIView;

@interface TFNButtonDataViewAdapterTableViewCell : TFNTableViewCell

@property (retain, nonatomic) UIView *button;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)layoutSubviews;
- (void)cleanup;

@end

#endif /* TFNButtonDataViewAdapterTableViewCell_h */
