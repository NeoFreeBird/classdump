//
#ifndef _TtC6ChatUI20AttachmentBorderView_h
#define _TtC6ChatUI20AttachmentBorderView_h
@import Foundation;

@class UIView, __C.UIUserInterfaceStyle ?;

@interface ChatUI.AttachmentBorderView : UIView { // (Swift)
    /* instance variables */
    __C.UIUserInterfaceStyle ? forcedUserInterfaceStyle;
}

/* class methods */
+ (Class)layerClass;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC6ChatUI20AttachmentBorderView_h */
