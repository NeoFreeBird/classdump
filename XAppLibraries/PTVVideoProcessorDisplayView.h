//
#ifndef PTVVideoProcessorDisplayView_h
#define PTVVideoProcessorDisplayView_h
@import Foundation;

#include "PTVDisplayView-Protocol.h"
#include "PTVVideoProcessorDisplayLayer.h"

@class UIView;

@interface PTVVideoProcessorDisplayView : UIView <PTVDisplayView>

@property (nonatomic) long long interfaceOrientation;
@property (readonly, nonatomic) PTVVideoProcessorDisplayLayer *overlayLayer;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } sourceSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } videoRect;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)videoProcessorContext;
- (void)layoutSubviews;
- (void)didMoveToWindow;

@end

#endif /* PTVVideoProcessorDisplayView_h */
