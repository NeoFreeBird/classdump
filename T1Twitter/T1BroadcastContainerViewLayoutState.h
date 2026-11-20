//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1BroadcastContainerViewLayoutState_h
#define T1BroadcastContainerViewLayoutState_h
@import Foundation;

@class NSObject;

@interface T1BroadcastContainerViewLayoutState : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } playerViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } thumbnailImageViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } controlBarFrame;
@property (nonatomic) struct CGPoint { double x0; double x1; } playButtonViewCenter;
@property (nonatomic) struct CGPoint { double x0; double x1; } activityIndicatorViewCenter;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } dismissButtonFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } errorViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } blurViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } guestsViewFrame;

@end

#endif /* T1BroadcastContainerViewLayoutState_h */
