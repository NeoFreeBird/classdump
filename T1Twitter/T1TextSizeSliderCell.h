//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
- (void)layoutSubviews;

@end

#endif /* T1TextSizeSliderCell_h */
