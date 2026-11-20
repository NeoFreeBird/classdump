//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNPullToLoadTopControl_Protocol_h
#define TFNPullToLoadTopControl_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class UIColor;

@protocol TFNPullToLoadTopControl <NSObject>

@required

@property (nonatomic) _Bool loading;
@property (nonatomic) _Bool managesScrollViewContentInset;
@property (nonatomic) struct CGSize { double x0; double x1; } controlOffset;
@property (nonatomic) _Bool hideWhenNotInUse;
@property (nonatomic) double thresholdOffsetY;
@property (retain, nonatomic) UIColor *color;

/* required instance methods */
- (void)setLoading:(_Bool)loading completion:(id /* block */)completion;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(_Bool)decelerate;
- (void)scrollViewContentInsetDidReset:(id)reset;
- (void)startPullToRefreshAnimationInScrollView:(id)view;
- (void)updateScrollViewContentInset:(id)inset animated:(_Bool)animated;

@optional

@end

#endif /* TFNPullToLoadTopControl_Protocol_h */
