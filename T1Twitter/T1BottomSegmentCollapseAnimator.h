//
#ifndef T1BottomSegmentCollapseAnimator_h
#define T1BottomSegmentCollapseAnimator_h
@import Foundation;

@class NSObject;

@interface T1BottomSegmentCollapseAnimator : NSObject // (Swift)

/* class methods */
+ (void)startAnimationWith:(id)with tabBar:(id)bar bottomSegmentFinalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame tabBarFinalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame isExpansion:(_Bool)expansion completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* T1BottomSegmentCollapseAnimator_h */
