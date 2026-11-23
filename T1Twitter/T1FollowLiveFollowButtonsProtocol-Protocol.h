//
#ifndef T1FollowLiveFollowButtonsProtocol_Protocol_h
#define T1FollowLiveFollowButtonsProtocol_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1FollowLiveFollowButtonsProtocol <NSObject>

@required

/* required instance methods */
- (void)followLiveFollowButtonsView:(id)view didTapFollowForUser:(id)user;
- (void)followLiveFollowButtonsView:(id)view didTapLiveFollowForUser:(id)user;
- (_Bool)followPromptViewCanShowLiveFollowButton:(id)button;

@optional

@end

#endif /* T1FollowLiveFollowButtonsProtocol_Protocol_h */
