//
#ifndef TUCProductExplorerRotationTypeTransformer_h
#define TUCProductExplorerRotationTypeTransformer_h
@import Foundation;

#include "TUCTransformer-Protocol.h"

@class NSObject;

@interface TUCProductExplorerRotationTypeTransformer : NSObject <TUCTransformer> // (Swift)

/* class methods */
+ (_Bool)shouldTransformUnifiedCard:(id)card;
+ (id)transformUnifiedCard:(id)card features:(id)features;

/* instance methods */
- (id)init;

@end

#endif /* TUCProductExplorerRotationTypeTransformer_h */
