//
#ifndef T1VoiceRoomJoiningModeSelectionView_h
#define T1VoiceRoomJoiningModeSelectionView_h
@import Foundation;

#include "T1VoiceRoomJoiningModeSelectionViewDelegate-Protocol.h"

@class TFNButton, UIImageView, UIView;

@interface T1VoiceRoomJoiningModeSelectionView : UIView

@property (weak, nonatomic) id <T1VoiceRoomJoiningModeSelectionViewDelegate> delegate;
@property (retain, nonatomic) UIImageView *checkmarkView;
@property (retain, nonatomic) TFNButton *button;
@property (nonatomic) _Bool selected;

/* instance methods */
- (id)initWithTitle:(id)title imageNamed:(id)named;
- (void)_t1_updateCheckmarkView;
- (void)_t1_buttonDidTap:(id)tap;
- (_Bool)isSelected;

@end

#endif /* T1VoiceRoomJoiningModeSelectionView_h */
