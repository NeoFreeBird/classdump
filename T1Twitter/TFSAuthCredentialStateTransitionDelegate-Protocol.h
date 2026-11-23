//
#ifndef TFSAuthCredentialStateTransitionDelegate_Protocol_h
#define TFSAuthCredentialStateTransitionDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSAuthCredentialStateTransitionDelegate <NSObject>

@required

/* required instance methods */
- (void)credentialStateDidChangeForAccountID:(id)id fromState:(long long)state toState:(long long)state stateInfo:(id)info;

@optional

@end

#endif /* TFSAuthCredentialStateTransitionDelegate_Protocol_h */
