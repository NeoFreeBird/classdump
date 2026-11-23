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
