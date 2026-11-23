//
#ifndef TFNItemsTransformerWithPredicate_Protocol_h
#define TFNItemsTransformerWithPredicate_Protocol_h
@import Foundation;

#include "TFNItemsTransformer-Protocol.h"

@protocol TFNItemsTransformerWithPredicate <TFNItemsTransformer>

@required

/* required instance methods */
- (id)itemsPredicate;

@optional

@end

#endif /* TFNItemsTransformerWithPredicate_Protocol_h */
