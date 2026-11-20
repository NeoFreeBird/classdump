//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1VoiceRoomGuestsHeaderViewDelegate_Protocol_h
#define T1VoiceRoomGuestsHeaderViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1VoiceRoomGuestsHeaderViewDelegate <NSObject>

@required

/* required instance methods */
- (void)guestsHeaderViewDidTapDismiss:(id)dismiss;
- (void)guestsHeaderViewDidBeginSearch:(id)search;
- (void)guestsHeaderViewDidUpdateSearch:(id)search;
- (void)guestsHeaderViewDidEndSearch:(id)search;

@optional

@end

#endif /* T1VoiceRoomGuestsHeaderViewDelegate_Protocol_h */
