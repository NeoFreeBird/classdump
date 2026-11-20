//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
