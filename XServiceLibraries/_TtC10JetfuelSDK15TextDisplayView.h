//
#ifndef _TtC10JetfuelSDK15TextDisplayView_h
#define _TtC10JetfuelSDK15TextDisplayView_h
@import Foundation;

@class JetfuelSDK.TextInkView ?, JetfuelSDK.TextPrepared, UIView, __C.UIEdgeInsets;

@interface JetfuelSDK.TextDisplayView : UIView { // (Swift)
    /* instance variables */
    __C.UIEdgeInsets contentInsets;
    JetfuelSDK.TextPrepared prepared;
    JetfuelSDK.TextInkView ? $__lazy_storage_$_inkView;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC10JetfuelSDK15TextDisplayView_h */
