//
#ifndef AVRRenderView_h
#define AVRRenderView_h
@import Foundation;

#include "AVRInternalRenderView-Protocol.h"

@class NSDate, UIView;

@interface AVRRenderView : UIView

@property (retain, nonatomic) UIView<AVRInternalRenderView> *renderView;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cachedBounds;
@property double lastAspect;
@property (nonatomic) struct __CVBuffer * lastAcquiredPixelBuffer;
@property (retain, nonatomic) NSDate *lastRenderTime;
@property (nonatomic) unsigned long long bufferID;
@property (nonatomic) long long contentGravity;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } lastRenderedPixelBufferSize;
@property (nonatomic) _Bool readyForDisplay;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame isOpaque:(_Bool)opaque;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame technology:(long long)technology isOpaque:(_Bool)opaque;
- (void)dealloc;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)displayPixelBuffer:(struct __CVBuffer *)buffer;
- (void)displayPixelBuffer:(struct __CVBuffer *)buffer bufferID:(unsigned long long)id presentationTime:(double)time;
- (void)captureStillImageWithCompletion:(id /* block */)completion;
- (id)_createInternalViewWithTechnology:(long long)technology isOpaque:(_Bool)opaque;

@end

#endif /* AVRRenderView_h */
