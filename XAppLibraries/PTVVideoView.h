//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVVideoView_h
#define PTVVideoView_h
@import Foundation;

#include "PTVLoadingBarsView.h"
#include "PTVVideoViewDelegate-Protocol.h"
#include "PTVVideoViewProtocol-Protocol.h"

@class NSString, NSTimer, UILabel, UITextView, UIView;

@interface PTVVideoView : UIView <PTVVideoViewProtocol> {
    /* instance variables */
    id _weakSelf;
    struct CGSize { double width; double height; } _videoSize;
    UILabel *_ntpLabel;
    unsigned long long _ntpValue;
    UILabel *_bitrateLabel;
    double _indicatedBitrate;
    UILabel *_protocolLabel;
    UITextView *_overlayNameLabel;
}

@property (retain, nonatomic) NSTimer *checkRenderingTimer;
@property (nonatomic) double lastRenderingTimestamp;
@property (retain, nonatomic) PTVLoadingBarsView *loadingBarsView;
@property (readonly, weak, nonatomic) id <PTVVideoViewDelegate> delegate;
@property (readonly, nonatomic) UIView *videoAreaView;
@property (readonly, nonatomic) _Bool readyForDisplay;
@property (nonatomic) _Bool is360;
@property (nonatomic) _Bool aspectFill;
@property (nonatomic) _Bool isRendering;
@property (nonatomic) _Bool areLoadingBarsAnimating;
@property (nonatomic) unsigned long long loadingBarsStyle;
@property (readonly, nonatomic) double videoAspect;
@property (readonly, nonatomic) double rotation;
@property (nonatomic) double chatSectionBottomBarHeight;
@property (nonatomic) _Bool shouldAdjustFrameBasedOnNotch;
@property (retain, nonatomic) NSString *overlayName;
@property (readonly, nonatomic) _Bool canShowVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)layoutSubviews;
- (void)layoutInternalVideoView;
- (void)layoutLoadingBarsView;
- (void)layoutProtocolLabel;
- (void)layoutNTPLabel;
- (void)layoutBitrateLabel;
- (void)layoutOverlayNameLabel;
- (void)setVideoRotation:(double)rotation size:(struct CGSize { double x0; double x1; })size animated:(_Bool)animated;
- (void)setCanShowVideo:(_Bool)video animated:(_Bool)animated completion:(id /* block */)completion;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })notchAdjustedFrameFromVideoFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame isVideoOrientationPortrait:(_Bool)portrait;
- (void)setProtocolLabel:(id)label;
- (void)setNTPValue:(unsigned long long)ntpvalue;
- (void)setIndicatedBitrate:(double)bitrate;
- (void)displayPixelBuffer:(struct __CVBuffer *)buffer;
- (void)startToCheckRenderingWithDelegate:(id)delegate;

@end

#endif /* PTVVideoView_h */
