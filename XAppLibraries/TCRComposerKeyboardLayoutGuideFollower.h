//
#ifndef TCRComposerKeyboardLayoutGuideFollower_h
#define TCRComposerKeyboardLayoutGuideFollower_h
@import Foundation;

@class UIView;

@interface TCRComposerKeyboardLayoutGuideFollower : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 keyboardFrameDidChange;
    @40@0:8:16@24@32 guideView;
    @40@0:8:16@24@32 placedGuideFrame;
}

@property (nonatomic, readonly) _Bool isFollowing;

/* instance methods */
- (id)initWithKeyboardFrameDidChange:(id /* block */)change;
- (id)initWithCoder:(id)coder;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dockedKeyboardFrameInView:(id)view;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* TCRComposerKeyboardLayoutGuideFollower_h */
