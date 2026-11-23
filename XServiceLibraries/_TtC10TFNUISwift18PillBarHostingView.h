//
#ifndef _TtC10TFNUISwift18PillBarHostingView_h
#define _TtC10TFNUISwift18PillBarHostingView_h
@import Foundation;

@class TFNUISwift.HostingView, TFNUISwift.PillBarState, UIView;

@interface TFNUISwift.PillBarHostingView : UIView { // (Swift)
    /* instance variables */
    TFNUISwift.PillBarState state;
    TFNUISwift.HostingView hostingView;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC10TFNUISwift18PillBarHostingView_h */
