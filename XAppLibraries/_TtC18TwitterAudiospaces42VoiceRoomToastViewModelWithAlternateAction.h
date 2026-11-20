//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
