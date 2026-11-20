//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNLRequestDelegate_Protocol_h
#define TNLRequestDelegate_Protocol_h
@import Foundation;

#include "TNLRequestAuthenticationChallengeHandler-Protocol.h"
#include "TNLRequestAuthorizer-Protocol.h"
#include "TNLRequestEventHandler-Protocol.h"
#include "TNLRequestHydrater-Protocol.h"
#include "TNLRequestRedirecter-Protocol.h"

@protocol TNLRequestDelegate <TNLRequestAuthorizer, TNLRequestEventHandler, TNLRequestHydrater, TNLRequestRedirecter, TNLRequestAuthenticationChallengeHandler>

@required

@optional

/* optional instance methods */
- (id)tnl_delegateQueueForRequestOperation:(id)operation;
- (id)tnl_completionQueueForRequestOperation:(id)operation;

@end

#endif /* TNLRequestDelegate_Protocol_h */
