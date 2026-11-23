//
#ifndef TCRComposerToolbarView_h
#define TCRComposerToolbarView_h
@import Foundation;

#include "TCRComposerToolbarConfiguration.h"
#include "TCRComposerToolbarViewDelegate-Protocol.h"

@class UIView;

@interface TCRComposerToolbarView : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 $__lazy_storage_$_leadingStack;
    @40@0:8:16@24@32 $__lazy_storage_$_trailingStack;
    @40@0:8:16@24@32 $__lazy_storage_$_galleryButton;
    @40@0:8:16@24@32 $__lazy_storage_$_cameraButton;
    @40@0:8:16@24@32 $__lazy_storage_$_gifButton;
    @40@0:8:16@24@32 $__lazy_storage_$_liveButton;
    @40@0:8:16@24@32 $__lazy_storage_$_moreButton;
    @40@0:8:16@24@32 $__lazy_storage_$_audienceButton;
    @40@0:8:16@24@32 $__lazy_storage_$_postButton;
}

@property (nonatomic, weak) id <TCRComposerToolbarViewDelegate> delegate;
@property (nonatomic, retain) TCRComposerToolbarConfiguration *configuration;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) UIView *audienceSourceView;
@property (nonatomic, readonly) UIView *moreSourceView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didTapGallery;
- (void)didTapCamera;
- (void)didTapGIF;
- (void)didTapLive;
- (void)didTapAudience;
- (void)didTapPost;
- (void)updatePostButtonWithEnabled:(_Bool)enabled title:(id)title;

@end

#endif /* TCRComposerToolbarView_h */
