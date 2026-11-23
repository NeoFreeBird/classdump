//
#ifndef T1ImagePipelineLoadSourceEventObserver_Protocol_h
#define T1ImagePipelineLoadSourceEventObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1ImagePipelineLoadSourceEventObserver <NSObject>

@required

@optional

/* optional instance methods */
- (void)imageFetchOperation:(id)operation didHit:(long long)hit;
- (void)imageFetchOperation:(id)operation didMiss:(long long)miss;
- (void)imageFetchOperation:(id)operation didCancel:(long long)cancel;
- (void)imageFetchOperation:(id)operation didFail:(long long)fail;

@end

#endif /* T1ImagePipelineLoadSourceEventObserver_Protocol_h */
