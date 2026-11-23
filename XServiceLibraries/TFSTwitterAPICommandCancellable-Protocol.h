//
#ifndef TFSTwitterAPICommandCancellable_Protocol_h
#define TFSTwitterAPICommandCancellable_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSTwitterAPICommandCancellable <NSObject>

@required

/* required instance methods */
- (void)cancel;
- (void)cancelWithDescription:(id)description;
- (void)cancelWithDescription:(id)description;
- (void)cancelWithError:(id)error;

@optional

@end

#endif /* TFSTwitterAPICommandCancellable_Protocol_h */
