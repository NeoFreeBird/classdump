//
#ifndef T1VoiceRoomEmojiMenuTooltip_h
#define T1VoiceRoomEmojiMenuTooltip_h
@import Foundation;

#include "TFNTooltipDelegate-Protocol.h"

@class NSString, TFNTooltip;

@interface T1VoiceRoomEmojiMenuTooltip : TFNTooltip <TFNTooltipDelegate>

@property (copy, nonatomic) id /* block */ presentBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTooltipView:(id)view;
- (void)tooltipDidPresent:(id)present;
- (void)tooltipDidDismiss:(id)dismiss;

@end

#endif /* T1VoiceRoomEmojiMenuTooltip_h */
