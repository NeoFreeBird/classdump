//
#ifndef TASVoiceRoomPromptView_h
#define TASVoiceRoomPromptView_h
@import Foundation;

#include "TASVoiceRoomPromptViewDelegate-Protocol.h"

@class UIView;

@interface TASVoiceRoomPromptView : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 spaceModel;
    @40@0:8:16@24@32 behindView;
    @40@0:8:16@24@32 safeAreaAnimationMaskingView;
    @40@0:8:16@24@32 promptType;
    @40@0:8:16@24@32 footerButton;
}

@property (nonatomic, weak) id <TASVoiceRoomPromptViewDelegate> delegate;

/* class methods */
+ (id)addPromptViewToView:(id)view behindView:(id)view spaceModel:(id)model promptType:(long long)type;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)didTapFooter;
- (void)didTapDismissButton;
- (void)dismissAnimated;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* TASVoiceRoomPromptView_h */
