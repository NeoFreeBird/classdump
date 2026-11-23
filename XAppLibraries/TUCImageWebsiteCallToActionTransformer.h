//
#ifndef TUCImageWebsiteCallToActionTransformer_h
#define TUCImageWebsiteCallToActionTransformer_h
@import Foundation;

#include "TUCTransformer-Protocol.h"

@class NSObject;

@interface TUCImageWebsiteCallToActionTransformer : NSObject <TUCTransformer> // (Swift)

/* class methods */
+ (_Bool)shouldTransformUnifiedCard:(id)card;
+ (id)transformUnifiedCard:(id)card features:(id)features;

/* instance methods */
- (id)init;

@end

#endif /* TUCImageWebsiteCallToActionTransformer_h */
