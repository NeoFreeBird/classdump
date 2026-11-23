//
#ifndef T1LiveEventVideoContainerViewLayoutState_h
#define T1LiveEventVideoContainerViewLayoutState_h
@import Foundation;

@class NSObject;

@interface T1LiveEventVideoContainerViewLayoutState : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } playerBlurViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } playerViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } thumbnailImageViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } controlBarFrame;
@property (nonatomic) struct CGPoint { double x0; double x1; } playButtonCenter;
@property (nonatomic) struct CGPoint { double x0; double x1; } activityIndicatorViewCenter;

@end

#endif /* T1LiveEventVideoContainerViewLayoutState_h */
