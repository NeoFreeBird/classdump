//
#ifndef TNLAuthenticationChallengeHandler_Protocol_h
#define TNLAuthenticationChallengeHandler_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TNLAuthenticationChallengeHandler <NSObject>

@required

@optional

/* optional instance methods */
- (void)tnl_networkLayerDidReceiveAuthChallenge:(id)challenge requestOperation:(id)operation completion:(id /* block */)completion;

@end

#endif /* TNLAuthenticationChallengeHandler_Protocol_h */
