//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFCCustomerFeedbackBaseRatingView_h
#define TFCCustomerFeedbackBaseRatingView_h
@import Foundation;

#include "TFCCustomerFeedbackRatingViewDelegate-Protocol.h"

@class UIView;

@interface TFCCustomerFeedbackBaseRatingView : UIView

@property (weak, nonatomic) id <TFCCustomerFeedbackRatingViewDelegate> delegate;
@property (readonly, nonatomic) unsigned long long minValue;
@property (readonly, nonatomic) unsigned long long maxValue;

/* class methods */
+ (_Bool)shouldDisplayWideFormatForWidth:(double)width;
+ (double)intrinsicHeightForWidth:(double)width;

/* instance methods */
- (void)resetSelection;
- (double)currentAvailableWidth;

@end

#endif /* TFCCustomerFeedbackBaseRatingView_h */
