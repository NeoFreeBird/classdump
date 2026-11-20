//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1VideoCaptionsView_h
#define T1VideoCaptionsView_h
@import Foundation;

#include "T1VideoCaptionsViewDelegate-Protocol.h"
#include "TAVCaptionSink-Protocol.h"

@class NSArray, NSLayoutConstraint, TAVCaptionView, TFNSolidColorView, UIView;

@interface T1VideoCaptionsView : UIView <TAVCaptionSink>

@property (retain, nonatomic) TAVCaptionView *captionView;
@property (copy, nonatomic) NSArray *currentCaptionModels;
@property (retain, nonatomic) NSLayoutConstraint *verticalAlignmentConstraint;
@property (retain, nonatomic) NSLayoutConstraint *containerWidthConstraint;
@property (retain, nonatomic) UIView *captionContainer;
@property (retain, nonatomic) TFNSolidColorView *backgroundView;
@property (nonatomic) double minimumCaptionSize;
@property (nonatomic) double maximumCaptionSize;
@property (nonatomic) long long displayMode;
@property (nonatomic) _Bool usesFullContentWidth;
@property (nonatomic) long long alignment;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } captionInsets;
@property (weak, nonatomic) id <T1VideoCaptionsViewDelegate> delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)resetIfNeeded;
- (void)_t1_updateDisplayWithCaptionModels:(id)models;
- (void)_t1_setUpCaptionsViewIfNeeded;
- (void)_t1_enableCaptions;
- (void)_t1_updateContainerWidthConstraint;
- (void)_t1_updateAlignmentConstraint;
- (void)captionSourceDidUpdateWithCaptionModels:(id)models;
- (void)playbackStateDidChange:(id)change;
- (_Bool)_t1_shouldDisplayCaptionsForState:(id)state;
- (_Bool)_t1_isPlayingAudioWithState:(id)state;
- (void)_t1_resetCaptionsIfNeeded;

@end

#endif /* T1VideoCaptionsView_h */
