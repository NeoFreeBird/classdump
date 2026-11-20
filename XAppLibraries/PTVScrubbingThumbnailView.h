//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVScrubbingThumbnailView_h
#define PTVScrubbingThumbnailView_h
@import Foundation;

#include "PTVLoadingImageView.h"
#include "PTVLoadingImageViewDelegate-Protocol.h"
#include "PTVScrubbingThumbnailViewDelegate-Protocol.h"

@class NSString, NSURL, UILabel, UIView;

@interface PTVScrubbingThumbnailView : UIView <PTVLoadingImageViewDelegate> {
    /* instance variables */
    UIView *_timecodeContainerView;
    UILabel *_timecodeLabel;
}

@property (weak, nonatomic) id <PTVScrubbingThumbnailViewDelegate> delegate;
@property (retain, nonatomic) NSURL *thumbnailURL;
@property (readonly, nonatomic) PTVLoadingImageView *thumbnailImageView;
@property (retain, nonatomic) NSString *timeString;
@property (nonatomic) _Bool shouldShowBlackPlaceholderThumbnail;
@property (nonatomic) struct CGSize { double x0; double x1; } placeholderThumbnailSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (struct CGSize { double x0; double x1; })MaxContainerSizeForTraitCollection:(id)collection;

/* instance methods */
- (void)loadingImageViewLoadedImageDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)traitCollectionDidChange:(id)change;
- (void)layoutThumbnailView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbnailRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGSize { double x0; double x1; })maxContainerSize;
- (struct CGSize { double x0; double x1; })containerSize;
- (struct CGSize { double x0; double x1; })thumbnailSizeFromImageSize:(struct CGSize { double x0; double x1; })size;
- (void)hideTimeLabel;
- (void)showTimeLabel;

@end

#endif /* PTVScrubbingThumbnailView_h */
