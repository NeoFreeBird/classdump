//
#ifndef TUCMediaDetailVanityURLTransformer_h
#define TUCMediaDetailVanityURLTransformer_h
@import Foundation;

#include "TUCTransformer-Protocol.h"

@class NSObject;

@interface TUCMediaDetailVanityURLTransformer : NSObject <TUCTransformer> // (Swift)

/* class methods */
+ (_Bool)shouldTransformUnifiedCard:(id)card;
+ (id)transformUnifiedCard:(id)card features:(id)features;

/* instance methods */
- (id)init;

@end

#endif /* TUCMediaDetailVanityURLTransformer_h */
