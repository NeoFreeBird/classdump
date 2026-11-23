//
#ifndef TFSAPISession_Protocol_h
#define TFSAPISession_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSAPISession <NSObject>

@required

/* required instance methods */
- (id)requestOperationWithAPIRequest:(id)apirequest delegate:(id)delegate;
- (id)requestOperationWithAPIRequest:(id)apirequest delegate:(id)delegate;
- (id)requestOperationWithAPIRequest:(id)apirequest delegate:(id)delegate enqueue:(_Bool)enqueue;
- (id)requestOperationWithAPIRequest:(id)apirequest delegate:(id)delegate enqueue:(_Bool)enqueue;
- (void)enqueueRequestOperation:(id)operation;
- (void)enqueueRequestOperation:(id)operation;

@optional

@end

#endif /* TFSAPISession_Protocol_h */
