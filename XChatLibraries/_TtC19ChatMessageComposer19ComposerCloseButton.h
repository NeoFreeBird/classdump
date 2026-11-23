//
#ifndef _TtC19ChatMessageComposer19ComposerCloseButton_h
#define _TtC19ChatMessageComposer19ComposerCloseButton_h
@import Foundation;

@class UIButton;

@interface ChatMessageComposer.ComposerCloseButton : UIButton // (Swift)

@property (nonatomic) _Bool highlighted;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (_Bool)isHighlighted;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC19ChatMessageComposer19ComposerCloseButton_h */
