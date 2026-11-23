//
#ifndef XDSHingeAvoidance_h
#define XDSHingeAvoidance_h
@import Foundation;

@class NSObject;

@interface XDSHingeAvoidance : NSObject // (Swift)

/* class methods */
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })composerFrameInContainerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds divisionFrames:(id)frames layoutDirection:(long long)direction;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })horizontallyFittedFrameForPreferredFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame containerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets divisionFrames:(id)frames layoutDirection:(long long)direction;
+ (void)installUpdatesOnView:(id)view handler:(id /* block */)handler;
+ (id)activeDivisionFramesInView:(id)view;
+ (_Bool)framesMeaningfullyChangedFrom:(id)from to:(id)to;

/* instance methods */
- (id)init;

@end

#endif /* XDSHingeAvoidance_h */
