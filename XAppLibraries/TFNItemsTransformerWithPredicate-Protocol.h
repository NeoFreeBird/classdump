//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
