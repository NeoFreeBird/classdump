//
#ifndef _TtC18TwitterAudiospaces42VoiceRoomToastViewModelWithAlternateAction_h
#define _TtC18TwitterAudiospaces42VoiceRoomToastViewModelWithAlternateAction_h
@import Foundation;

#include "TFNToastViewModel-Protocol.h"

@class NSObject, NSString, TFNToastAction, _$sSS, _$sSSSg, _$sSo14TFNToastActionCSg;

@interface TwitterAudiospaces.VoiceRoomToastViewModelWithAlternateAction : NSObject <TFNToastViewModel> // (Swift)

@property (nonatomic, readonly) NSString *messageText;
@property (nonatomic, readonly) NSString *iconName;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) TFNToastAction *alternateAction;

/* instance methods */
- (id)init;

@end

#endif /* _TtC18TwitterAudiospaces42VoiceRoomToastViewModelWithAlternateAction_h */
