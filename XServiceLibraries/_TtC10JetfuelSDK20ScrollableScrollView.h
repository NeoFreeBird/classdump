//
#ifndef _TtC10JetfuelSDK20ScrollableScrollView_h
#define _TtC10JetfuelSDK20ScrollableScrollView_h
@import Foundation;

@class JetfuelSDK.RenderingDelegate ?, JetfuelSDK.ScrollDirection, JetfuelSDK.VDOMRenderer ?, JetfuelSDK.ViewContext, UIScrollView, _$ss13OpaquePointerVMn ?, __C.CGSize;

@interface JetfuelSDK.ScrollableScrollView : UIScrollView { // (Swift)
    /* instance variables */
    nominal type descriptor for Swift.OpaquePointer ? node;
    JetfuelSDK.RenderingDelegate ? renderingDelegate;
    JetfuelSDK.ViewContext context;
    JetfuelSDK.VDOMRenderer ? vdom;
    JetfuelSDK.ScrollDirection direction;
    __C.CGSize lastSize;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC10JetfuelSDK20ScrollableScrollView_h */
