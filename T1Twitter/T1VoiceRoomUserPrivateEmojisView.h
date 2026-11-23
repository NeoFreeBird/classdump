//
#ifndef T1VoiceRoomUserPrivateEmojisView_h
#define T1VoiceRoomUserPrivateEmojisView_h
@import Foundation;

#include "T1VoiceRoomUserPrivateEmojisViewDelegate-Protocol.h"

@class UILabel, UIStackView, UIView;

@interface T1VoiceRoomUserPrivateEmojisView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIStackView *buttonsStackView;
@property (weak, nonatomic) id <T1VoiceRoomUserPrivateEmojisViewDelegate> delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_t1_handleTapEvent:(id)event;

@end

#endif /* T1VoiceRoomUserPrivateEmojisView_h */
