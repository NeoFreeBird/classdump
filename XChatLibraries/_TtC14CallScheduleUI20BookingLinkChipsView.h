//
#ifndef _TtC14CallScheduleUI20BookingLinkChipsView_h
#define _TtC14CallScheduleUI20BookingLinkChipsView_h
@import Foundation;

@class CallScheduleUI.BookingLinkChipsViewListener ?, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSa -> _$s13XDesignSystem6ButtonCMn;

@interface CallScheduleUI.BookingLinkChipsView : UIView { // (Swift)
    /* instance variables */
    CallScheduleUI.BookingLinkChipsViewListener ? listener;
    Swift.Array -> nominal type descriptor for XDesignSystem.Button buttons;
    nominal type descriptor for CoreGraphics.CGFloat lastLaidOutWidth;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC14CallScheduleUI20BookingLinkChipsView_h */
