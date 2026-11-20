//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LoginChallengeProtocol_Protocol_h
#define T1LoginChallengeProtocol_Protocol_h
@import Foundation;

#include "T1AccountAdder-Protocol.h"

@protocol T1LoginChallengeProtocol <T1AccountAdder>

@required

/* class methods */
+ (_Bool)isAuthenticationInProgress;

/* required instance methods */
- (void)presentLoginChallengeFromViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;

@optional

@end

#endif /* T1LoginChallengeProtocol_Protocol_h */
