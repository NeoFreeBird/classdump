//
#ifndef _TtC4Grok22GrokComposerSendButton_h
#define _TtC4Grok22GrokComposerSendButton_h
@import Foundation;

@class UIButton;

@interface Grok.GrokComposerSendButton : UIButton // (Swift)

@property (nonatomic) _Bool enabled;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (_Bool)isEnabled;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC4Grok22GrokComposerSendButton_h */
