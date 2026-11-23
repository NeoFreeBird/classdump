//
#ifndef _TtC19ChatMessageComposer33MessageComposerPresentationWindow_h
#define _TtC19ChatMessageComposer33MessageComposerPresentationWindow_h
@import Foundation;

@class Swift.Bool, UIWindow, __C.Level;

@interface ChatMessageComposer.MessageComposerPresentationWindow : UIWindow { // (Swift)
    /* instance variables */
    Swift.Bool isPassthrough;
    __C.Level level;
}

@property (nonatomic) double windowLevel;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)initWithWindowScene:(id)scene;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC19ChatMessageComposer33MessageComposerPresentationWindow_h */
