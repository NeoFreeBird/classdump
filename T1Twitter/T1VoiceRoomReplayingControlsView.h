//
#ifndef T1VoiceRoomReplayingControlsView_h
#define T1VoiceRoomReplayingControlsView_h
@import Foundation;

#include "T1VoiceRoomReplayingControlsViewDelegate-Protocol.h"
#include "TASSpaceModel-Protocol.h"
#include "TASSpaceModelObserver-Protocol.h"
#include "TAVPlaybackObserver-Protocol.h"
#include "TFNTooltipDelegate-Protocol.h"

@class UIView;

@interface T1VoiceRoomReplayingControlsView : UIView <TFNTooltipDelegate, TAVPlaybackObserver, TASSpaceModelObserver> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *playback;
    NSNumber"16@0:8 *lastPlaybackState;
    NSNumber"16@0:8 *sliderView;
    NSNumber"16@0:8 *playPauseView;
    NSNumber"16@0:8 *skipBackSeconds;
    NSNumber"16@0:8 *skipAheadSeconds;
    NSNumber"16@0:8 *clippingEnabled;
    NSNumber"16@0:8 *$__lazy_storage_$_startTimeTooltip;
    NSNumber"16@0:8 *closedCaptionsOnImage;
    NSNumber"16@0:8 *closedCaptionsOffImage;
    NSNumber"16@0:8 *$__lazy_storage_$_closedCaptionsButton;
    NSNumber"16@0:8 *$__lazy_storage_$_skipBackButton;
    NSNumber"16@0:8 *$__lazy_storage_$_skipAheadButton;
    NSNumber"16@0:8 *$__lazy_storage_$_clippingButton;
    NSNumber"16@0:8 *$__lazy_storage_$_controlsStackView;
    NSNumber"16@0:8 *$__lazy_storage_$_sliderSubtitleLabel;
}

@property (nonatomic, weak) id <T1VoiceRoomReplayingControlsViewDelegate> delegate;
@property (nonatomic, retain) id <TASSpaceModel> spaceModel;

/* instance methods */
- (void)tooltipDidTap:(id)tap;
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (void)spaceModel:(id)model didUpdatePlayback:(id)playback;
- (void)spaceModel:(id)model didUpdateSettings:(id)settings;
- (void)spaceModel:(id)model didUpdateIsCaptionsVisible:(_Bool)visible;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)didTapOnClippingButton:(id)button;
- (void)didTapOnClosedCaptionsButton:(id)button;
- (void)didTapOnSkipBackButton:(id)button;
- (void)didTapOnSkipAheadButton:(id)button;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* T1VoiceRoomReplayingControlsView_h */
