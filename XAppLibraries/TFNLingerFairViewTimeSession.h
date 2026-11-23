//
#ifndef TFNLingerFairViewTimeSession_h
#define TFNLingerFairViewTimeSession_h
@import Foundation;

#include "TFNLingerFairViewTimeTracker.h"

@class NSObject, UIScrollView, UIView;

@interface TFNLingerFairViewTimeSession : NSObject {
    /* instance variables */
    TFNLingerFairViewTimeTracker *_tracker;
    UIView *_view;
    UIScrollView *_dataView;
    _Bool _isFullScreen;
    double _logicalViewportUpperBound;
    double _logicalViewportLowerBound;
}

@property (readonly, nonatomic) double accumulatedFairViewTime;

/* class methods */
+ (double)coverageOfRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inContentViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewport logicalViewportUpperBound:(double)bound lowerBound:(double)bound;

/* instance methods */
- (id)init;
- (id)initWithLogicalViewportUpperBound:(double)bound lowerBound:(double)bound;
- (void)dealloc;
- (void)trackView:(id)view dataView:(id)view;
- (void)stopTrackingView;
- (void)beginFullScreen;
- (void)endFullScreen;
- (double)_currentVisibleShare;

@end

#endif /* TFNLingerFairViewTimeSession_h */
