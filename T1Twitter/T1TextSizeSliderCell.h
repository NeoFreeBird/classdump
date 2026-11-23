//
#ifndef T1TextSizeSliderCell_h
#define T1TextSizeSliderCell_h
@import Foundation;

#include "T1TextSizeSliderView.h"

@class TFNTableViewCell;

@interface T1TextSizeSliderCell : TFNTableViewCell

@property (retain, nonatomic) T1TextSizeSliderView *textSizeSliderView;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end

#endif /* T1TextSizeSliderCell_h */
