//
#ifndef _TtC14T1TwitterSwift16SummaryMediaView_h
#define _TtC14T1TwitterSwift16SummaryMediaView_h
@import Foundation;

#include "T1AutoplayableContainer-Protocol.h"
#include "TAVAutoplayViewContainer-Protocol.h"
#include "TAVPlaybackObserver-Protocol.h"
#include "TAVUIAutoplayable-Protocol.h"
#include "TVPPlayerSessionSource-Protocol.h"

@class Swift.Bool, T1TwitterSwift.SummaryMediaView.State ?, T1TwitterSwift.SummaryMediaViewModel ?, UIImage, UIView, _$sSo11UIImageViewCSg, _$sSo13TAVPlayerViewCSg, _$sSo16TIPImagePipelineCSg;

@interface T1TwitterSwift.SummaryMediaView : UIView <TAVPlaybackObserver, TAVUIAutoplayable, T1AutoplayableContainer, TAVAutoplayViewContainer> { // (Swift)
    /* instance variables */
    T1TwitterSwift.SummaryMediaView.State ? state;
    T1TwitterSwift.SummaryMediaViewModel ? viewModel;
    __C.TIPImagePipeline? imagePipeline;
    __C.TAVPlayerView? playerView;
    Swift.Bool isPlaybackDesired;
    __C.UIImageView? $__lazy_storage_$_backgroundImageView;
}

@property (nonatomic, readonly) UIView *autoplayableView;
@property (nonatomic, readonly) long long autoplayableType;
@property (nonatomic, readonly) UIView *playerContainerView;
@property (nonatomic, readonly) id <TVPPlayerSessionSource> playerSessionSource;
@property (nonatomic, readonly) UIImage *playerPreviewImage;

/* instance methods */
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (void)observerDidAttachToPlayer:(id)player;
- (id)autoplayable;
- (void)didBecomeActiveAutoplayableWithManager:(id)manager;
- (void)willResignAsActiveAutoplayableWithManager:(id)manager;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC14T1TwitterSwift16SummaryMediaView_h */
