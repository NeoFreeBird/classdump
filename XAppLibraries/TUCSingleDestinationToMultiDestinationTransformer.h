//
#ifndef TUCSingleDestinationToMultiDestinationTransformer_h
#define TUCSingleDestinationToMultiDestinationTransformer_h
@import Foundation;

#include "TUCTransformer-Protocol.h"

@class NSObject;

@interface TUCSingleDestinationToMultiDestinationTransformer : NSObject <TUCTransformer> // (Swift)

/* class methods */
+ (_Bool)shouldTransformUnifiedCard:(id)card;
+ (id)transformUnifiedCard:(id)card features:(id)features;

/* instance methods */
- (id)init;

@end

#endif /* TUCSingleDestinationToMultiDestinationTransformer_h */
