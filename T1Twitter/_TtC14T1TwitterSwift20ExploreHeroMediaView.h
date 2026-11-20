//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift20ExploreHeroMediaView_h
#define _TtC14T1TwitterSwift20ExploreHeroMediaView_h
@import Foundation;

#include "T1AutoplayableContainer-Protocol.h"
#include "TAVAutoplayViewContainer-Protocol.h"
#include "TAVPlaybackObserver-Protocol.h"
#include "TAVUIAutoplayable-Protocol.h"
#include "TFNImageColorExtractorDelegate-Protocol.h"
#include "TUIImageViewFetchHelperDelegate-Protocol.h"
#include "TVPPlayerSessionSource-Protocol.h"

@class Swift.Bool, T1TwitterSwift.BroadcastServiceProviding, T1TwitterSwift.ExploreHeroMediaViewModel ?, UIImage, UIView, _$s13TFSObservable15ObservableInputVMn _$sSo7UIColorCSg, _$s13TFSObservable16ObservableEntityCMn _$sSo7UIColorCSg, _$sSS, _$sSo11UIImageViewC, _$sSo13TAVPlayerViewCSg, _$sSo16TIPImagePipelineCSg, _$sSo22TFNImageColorExtractorCSg, _$sSo23TUIImageViewFetchHelperCSg, _$sSo9TFNButtonCSgXw;

@interface T1TwitterSwift.ExploreHeroMediaView : UIView <TFNImageColorExtractorDelegate, TAVPlaybackObserver, TUIImageViewFetchHelperDelegate, TAVUIAutoplayable, T1AutoplayableContainer, TAVAutoplayViewContainer> { // (Swift)
    /* instance variables */
    nominal type descriptor for TFSObservable.ObservableEntity __C.UIColor? backgroundColorObservable;
    weak __C.TFNButton? muteButton;
    nominal type descriptor for TFSObservable.ObservableInput __C.UIColor? backgroundColorInput;
    Swift.String imageIdentifier;
    __C.TFNImageColorExtractor? $__lazy_storage_$_colorExtractor;
    __C.TIPImagePipeline? imagePipeline;
    Swift.Bool playbackDesired;
    Swift.Bool playbackMuted;
    __C.TUIImageViewFetchHelper? imageViewFetchHelper;
    T1TwitterSwift.BroadcastServiceProviding broadcastService;
    T1TwitterSwift.ExploreHeroMediaViewModel ? viewModel;
    __C.UIImageView imageView;
    __C.TAVPlayerView? playerView;
}

@property (nonatomic, readonly) id <TVPPlayerSessionSource> playerSessionSource;
@property (nonatomic, readonly) UIView *playerContainerView;
@property (nonatomic, readonly) UIImage *playerPreviewImage;
@property (nonatomic, readonly) UIView *autoplayableView;
@property (nonatomic, readonly) long long autoplayableType;

/* instance methods */
- (void)imageColorExtractor:(id)extractor didFinishExtractingColors:(id)colors image:(id)image identifier:(id)identifier;
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (void)observerDidAttachToPlayer:(id)player;
- (long long)tui_scaleAspectFillFocusModeForFetchHelper:(id)helper;
- (id)autoplayable;
- (void)didBecomeActiveAutoplayableWithManager:(id)manager;
- (void)willResignAsActiveAutoplayableWithManager:(id)manager;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC14T1TwitterSwift20ExploreHeroMediaView_h */
