//
#ifndef TNLRequestAuthenticationChallengeHandler_Protocol_h
#define TNLRequestAuthenticationChallengeHandler_Protocol_h
@import Foundation;

#include "TNLAuthenticationChallengeHandler-Protocol.h"

@protocol TNLRequestAuthenticationChallengeHandler <TNLAuthenticationChallengeHandler>

@required

@optional

/* optional instance methods */
- (void)tnl_networkLayerDidReceiveAuthChallenge:(id)challenge requestOperation:(id)operation completion:(id /* block */)completion;

@end

#endif /* TNLRequestAuthenticationChallengeHandler_Protocol_h */
