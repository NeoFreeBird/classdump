//
#ifndef TUCDPAOverlayOnFirstCardTransformer_h
#define TUCDPAOverlayOnFirstCardTransformer_h
@import Foundation;

#include "TUCTransformer-Protocol.h"

@class NSObject;

@interface TUCDPAOverlayOnFirstCardTransformer : NSObject <TUCTransformer> // (Swift)

/* class methods */
+ (_Bool)shouldTransformUnifiedCard:(id)card;
+ (id)transformUnifiedCard:(id)card features:(id)features;

/* instance methods */
- (id)init;

@end

#endif /* TUCDPAOverlayOnFirstCardTransformer_h */
