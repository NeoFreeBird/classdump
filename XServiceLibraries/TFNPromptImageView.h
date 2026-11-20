//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNPromptImageView_h
#define TFNPromptImageView_h
@import Foundation;

#include "TFNPromptImageSpec.h"
#include "TFNTappableHighlightView.h"

@class UIImageView;

@interface TFNPromptImageView : UIImageView

@property (retain, nonatomic) TFNTappableHighlightView *highlightView;
@property (readonly, nonatomic) TFNPromptImageSpec *imageSpec;

/* instance methods */
- (id)initWithImageSpec:(id)spec;
- (void)didMoveToSuperview;
- (void)_tfn_didTap:(id)tap;

@end

#endif /* TFNPromptImageView_h */
