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
