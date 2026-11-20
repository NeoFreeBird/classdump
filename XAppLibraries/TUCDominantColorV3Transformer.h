//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCDominantColorV3Transformer_h
#define TUCDominantColorV3Transformer_h
@import Foundation;

#include "TUCTransformer-Protocol.h"

@class NSObject;

@interface TUCDominantColorV3Transformer : NSObject <TUCTransformer> // (Swift)

/* class methods */
+ (_Bool)shouldTransformUnifiedCard:(id)card;
+ (id)transformUnifiedCard:(id)card features:(id)features;

/* instance methods */
- (id)init;

@end

#endif /* TUCDominantColorV3Transformer_h */
