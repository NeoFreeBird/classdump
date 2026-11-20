//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRComposerScheduledBannerView_h
#define TCRComposerScheduledBannerView_h
@import Foundation;

@class NSDate, UIView;

@interface TCRComposerScheduledBannerView : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 onEdit;
    @40@0:8:16@24@32 onSwipeDismiss;
    @40@0:8:16@24@32 panGesture;
}

@property (nonatomic, readonly) NSDate *scheduledAt;

/* instance methods */
- (id)initWithScheduledAt:(id)at onEdit:(id /* block */)edit onSwipeDismiss:(id /* block */)dismiss;
- (_Bool)accessibilityActivate;
- (id)initWithCoder:(id)coder;
- (void)didTapEdit;
- (void)handlePan:(id)pan;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* TCRComposerScheduledBannerView_h */
