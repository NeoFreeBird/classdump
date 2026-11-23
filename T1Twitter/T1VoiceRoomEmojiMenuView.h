//
#ifndef T1VoiceRoomEmojiMenuView_h
#define T1VoiceRoomEmojiMenuView_h
@import Foundation;

#include "TFNTooltipContentView-Protocol.h"

@class NSArray, NSString, UIView;

@interface T1VoiceRoomEmojiMenuView : UIView <TFNTooltipContentView>

@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSArray *views;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ contentSizeChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame title:(id)title sections:(id)sections;
- (id)EmojiRowView:(id)view views:(id)views items:(id)items constraints:(id)constraints;
- (void)didPresent;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_t1_didTapEmoji:(id)emoji;

@end

#endif /* T1VoiceRoomEmojiMenuView_h */
