//
#ifndef TUCCollectionAdsBetaTransformer_h
#define TUCCollectionAdsBetaTransformer_h
@import Foundation;

#include "TUCTransformer-Protocol.h"

@class NSObject;

@interface TUCCollectionAdsBetaTransformer : NSObject <TUCTransformer> // (Swift)

/* class methods */
+ (_Bool)shouldTransformUnifiedCard:(id)card;
+ (id)transformUnifiedCard:(id)card features:(id)features;

/* instance methods */
- (id)init;

@end

#endif /* TUCCollectionAdsBetaTransformer_h */
