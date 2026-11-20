//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1PollingCardViewLayoutState_h
#define T1PollingCardViewLayoutState_h
@import Foundation;

@class NSMutableArray, TUICardViewLayoutState;

@interface T1PollingCardViewLayoutState : TUICardViewLayoutState

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } borderFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } choiceContainerFrame;
@property (retain, nonatomic) NSMutableArray *choiceButtonFrames;
@property (retain, nonatomic) NSMutableArray *choiceResultFrames;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } resultContainerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } pollImageFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } pollStatusContainerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } pollStatusLabelFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } eligibilityCalloutFrame;

/* instance methods */
- (id)init;

@end

#endif /* T1PollingCardViewLayoutState_h */
