//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBasePreBroadcastViewDelegate_Protocol_h
#define PTVBasePreBroadcastViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVBasePreBroadcastViewDelegate <NSObject>

@required

/* required instance methods */
- (void)preBroadcastView:(id)view didStartBroadcastWithText:(id)text sharingLocation:(_Bool)location;
- (void)preBroadcastViewDidPressChatTypeButton:(id)button withChatType:(unsigned long long)type;
- (void)preBroadcastViewDidPressShareTwitterButton:(id)button;

@optional

/* optional instance methods */
- (void)preBroadcastViewDidPressAcceptGifts:(id)gifts;
- (_Bool)preBroadcastView:(id)view didChangeLocationServicesTo:(_Bool)to;
- (void)preBroadcastViewDidPressAudienceSelector:(id)selector;
- (void)preBroadcastViewDidPressExitButton:(id)button;
- (void)preBroadcastViewDidEditBroadcastTitle;
- (void)preBroadcastViewDidChangeSelectionOfBroadcastTitleTextView:(id)view;
- (void)preBroadcastViewDidPressAcceptGuestBroadcasting:(id)broadcasting;
- (void)preBroadcastViewDidPressAudioScope:(id)scope;

@end

#endif /* PTVBasePreBroadcastViewDelegate_Protocol_h */
