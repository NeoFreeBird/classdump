//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVAVRVideoView_h
#define PTVAVRVideoView_h
@import Foundation;

#include "AVRRenderView.h"
#include "PTVVideoView.h"
#include "RTCVideoRenderer-Protocol.h"

@class NSString;

@interface PTVAVRVideoView : PTVVideoView <RTCVideoRenderer> {
    /* instance variables */
    id _weakSelf;
}

@property (readonly, nonatomic) AVRRenderView *videoRendererView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)internalVideoView;
- (_Bool)readyForDisplay;
- (void)updateVideoFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setIs360:(_Bool)is360;
- (void)setAspectFill:(_Bool)fill;
- (void)_updateVideoConfig;
- (void)displayPixelBuffer:(struct __CVBuffer *)buffer;
- (void)setSize:(struct CGSize { double x0; double x1; })size;
- (void)renderFrame:(id)frame;

@end

#endif /* PTVAVRVideoView_h */
