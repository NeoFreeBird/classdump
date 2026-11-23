//
#ifndef PTVPreBroadcastControlsViewDelegate_Protocol_h
#define PTVPreBroadcastControlsViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVPreBroadcastControlsViewDelegate <NSObject>

@required

/* required instance methods */
- (void)preBroadcastControlsViewDidPressChatTypeButton:(id)button;
- (void)preBroadcastControlsViewDidPressShareOnTwitterButton:(id)button;
- (void)preBroadcastControlsViewDidPressShareOnTwitterButtonWhileDisabled:(id)disabled;
- (void)preBroadcastControlsViewDidPressAcceptGifts:(id)gifts;
- (void)preBroadcastControlsViewDidPressGuestBroadcastingButton:(id)button;
- (void)preBroadcastControlsViewDidPressAudioScopeButton:(id)button;

@optional

/* optional instance methods */
- (_Bool)preBroadcastControlsView:(id)view didChangeShareLocationTo:(_Bool)to;

@end

#endif /* PTVPreBroadcastControlsViewDelegate_Protocol_h */
