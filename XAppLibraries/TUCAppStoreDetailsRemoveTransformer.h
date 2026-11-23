//
#ifndef TUCAppStoreDetailsRemoveTransformer_h
#define TUCAppStoreDetailsRemoveTransformer_h
@import Foundation;

#include "TUCTransformer-Protocol.h"

@class NSObject;

@interface TUCAppStoreDetailsRemoveTransformer : NSObject <TUCTransformer> // (Swift)

/* class methods */
+ (_Bool)shouldTransformUnifiedCard:(id)card;
+ (id)transformUnifiedCard:(id)card features:(id)features;

/* instance methods */
- (id)init;

@end

#endif /* TUCAppStoreDetailsRemoveTransformer_h */
