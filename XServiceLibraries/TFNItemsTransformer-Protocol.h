//
#ifndef TFNItemsTransformer_Protocol_h
#define TFNItemsTransformer_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNItemsTransformer <NSObject>

@required

/* required instance methods */
- (id)transformItem:(id)item;

@optional

@end

#endif /* TFNItemsTransformer_Protocol_h */
