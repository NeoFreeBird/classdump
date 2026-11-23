//
#ifndef TUCDetailComponentRemoveSubtitleTransformer_h
#define TUCDetailComponentRemoveSubtitleTransformer_h
@import Foundation;

#include "TUCTransformer-Protocol.h"

@class NSObject;

@interface TUCDetailComponentRemoveSubtitleTransformer : NSObject <TUCTransformer> // (Swift)

/* class methods */
+ (_Bool)shouldTransformUnifiedCard:(id)card;
+ (id)transformUnifiedCard:(id)card features:(id)features;

/* instance methods */
- (id)init;

@end

#endif /* TUCDetailComponentRemoveSubtitleTransformer_h */
