//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
