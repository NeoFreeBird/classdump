//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSAPISession_Protocol_h
#define TFSAPISession_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSAPISession <NSObject>

@required

/* required instance methods */
- (id)requestOperationWithAPIRequest:(id)apirequest delegate:(id)delegate;
- (id)requestOperationWithAPIRequest:(id)apirequest delegate:(id)delegate enqueue:(_Bool)enqueue;
- (void)enqueueRequestOperation:(id)operation;

@optional

@end

#endif /* TFSAPISession_Protocol_h */
