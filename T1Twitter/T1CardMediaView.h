//
#ifndef T1CardMediaView_h
#define T1CardMediaView_h
@import Foundation;

#include "T1CardImageView.h"
#include "T1CardMediaViewDataSource-Protocol.h"
#include "T1CardMediaViewDelegate-Protocol.h"
#include "T1CardMediaViewModel.h"
#include "T1InlineMediaView.h"
#include "T1PlayerCardPlayerContainerViewDelegate-Protocol.h"
#include "TAVAutoplayViewContainer-Protocol.h"
#include "TUIImageViewFetchHelperDelegate-Protocol.h"

@class TIPImagePipeline, UIView;

@interface T1CardMediaView : UIView <TUIImageViewFetchHelperDelegate, T1PlayerCardPlayerContainerViewDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *$__lazy_storage_$_mediaHighlightView;
    NSNumber"16@0:8 *$__lazy_storage_$_storedImageView;
    NSNumber"16@0:8 *$__lazy_storage_$_storedPlayerView;
    NSNumber"16@0:8 *lastGeneratedPlaceholderImage;
}

@property (nonatomic, readonly) T1InlineMediaView *inlineMediaView;
@property (nonatomic, readonly) id <TAVAutoplayViewContainer> playerViewContainer;
@property (nonatomic, retain) T1CardMediaViewModel *viewModel;
@property (nonatomic, weak) id <T1CardMediaViewDataSource> mediaViewDataSource;
@property (nonatomic, weak) id <T1CardMediaViewDelegate> mediaViewDelegate;
@property (nonatomic, readonly) T1CardImageView *imageView;
@property (nonatomic, retain) TIPImagePipeline *imagePipeline;

/* instance methods */
- (void)tui_fetchHelper:(id)helper didUpdateImageFromSource:(long long)source isFinal:(_Bool)final;
- (void)cardPlayerContainerView:(id)view didTapPlayButtonOverlayWithEvent:(id)event;
- (_Bool)cardPlayerContainerViewCanPlayStreamInline:(id)_inline;
- (void)presentFullscreenPlayerFromMediaView:(id)view withPreviewImage:(id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)fetchImages;
- (void)layoutSubviews;
- (void)cleanup;
- (void)restartAnimationsIfNeeded;

@end

#endif /* T1CardMediaView_h */
