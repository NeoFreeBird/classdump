//
#ifndef TUCExpiredReminderComponentTransformer_h
#define TUCExpiredReminderComponentTransformer_h
@import Foundation;

#include "TUCTransformer-Protocol.h"

@class NSObject;

@interface TUCExpiredReminderComponentTransformer : NSObject <TUCTransformer> // (Swift)

/* class methods */
+ (_Bool)shouldTransformUnifiedCard:(id)card;
+ (id)transformUnifiedCard:(id)card features:(id)features;

/* instance methods */
- (id)init;

@end

#endif /* TUCExpiredReminderComponentTransformer_h */
