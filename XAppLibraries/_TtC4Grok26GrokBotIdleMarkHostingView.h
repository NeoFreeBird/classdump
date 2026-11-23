//
#ifndef _TtC4Grok26GrokBotIdleMarkHostingView_h
#define _TtC4Grok26GrokBotIdleMarkHostingView_h
@import Foundation;

@class Swift.Bool, _$s10TFNUISwift11HostingViewCN, _$s12CoreGraphics7CGFloatVMn;

@interface Grok.GrokBotIdleMarkHostingView : type metadata for TFNUISwift.HostingView { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat size;
    Swift.Bool isAppearing;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithSize:(double)size color:(id)color eyeColor:(id)color animated:(_Bool)animated animationDuration:(double)duration;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)didMoveToWindow;

@end

#endif /* _TtC4Grok26GrokBotIdleMarkHostingView_h */
