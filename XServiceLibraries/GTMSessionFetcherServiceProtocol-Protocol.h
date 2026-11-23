//
#ifndef GTMSessionFetcherServiceProtocol_Protocol_h
#define GTMSessionFetcherServiceProtocol_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSObject, NSOperationQueue;
@protocol OS_dispatch_queue;

@protocol GTMSessionFetcherServiceProtocol <NSObject>

@required

@property (readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property _Bool reuseSession;
@property (readonly) NSOperationQueue *delegateQueue;

/* required instance methods */
- (id)fetcherWithRequest:(id)request;

@optional

@end

#endif /* GTMSessionFetcherServiceProtocol_Protocol_h */
