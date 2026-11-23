//
#ifndef TCRComposerAddToThreadView_h
#define TCRComposerAddToThreadView_h
@import Foundation;

#include "TCRComposerAddToThreadViewDelegate-Protocol.h"

@class UIView;

@interface TCRComposerAddToThreadView : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 smallAvatarCenterXConstraint;
    @40@0:8:16@24@32 $__lazy_storage_$_smallAvatarView;
    @40@0:8:16@24@32 $__lazy_storage_$_addLabel;
    @40@0:8:16@24@32 $__lazy_storage_$_tapGesture;
}

@property (nonatomic, weak) id <TCRComposerAddToThreadViewDelegate> delegate;
@property (nonatomic) double lineCenterX;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)setAvatarImage:(id)image;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })smallAvatarFrameIn:(id)in;
- (void)didTap;

@end

#endif /* TCRComposerAddToThreadView_h */
