//
#ifndef TUCMixedMediaCarouselsAutoAdvanceTransformer_h
#define TUCMixedMediaCarouselsAutoAdvanceTransformer_h
@import Foundation;

#include "TUCTransformer-Protocol.h"

@class NSObject;

@interface TUCMixedMediaCarouselsAutoAdvanceTransformer : NSObject <TUCTransformer> // (Swift)

/* class methods */
+ (_Bool)shouldTransformUnifiedCard:(id)card;
+ (id)transformUnifiedCard:(id)card features:(id)features;

/* instance methods */
- (id)init;

@end

#endif /* TUCMixedMediaCarouselsAutoAdvanceTransformer_h */
