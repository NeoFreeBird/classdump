//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCImageComponentView_h
#define TUCImageComponentView_h
@import Foundation;

#include "TFNPreviewable-Protocol.h"
#include "TUCComponentModel-Protocol.h"
#include "TUCImageView-Protocol.h"
#include "TUCMediaComponentView.h"
#include "TUCUnifiedCard.h"

@class UIImage, UIView;

@interface TUCImageComponentView : TUCMediaComponentView <TFNPreviewable> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 imageHighlightView;
    @40@0:8:16@24@32 overlayView;
    @40@0:8:16@24@32 titleLabel;
    @40@0:8:16@24@32 hideTitleForSalesWebCard;
    @40@0:8:16@24@32 overlayImageLoaded;
    @40@0:8:16@24@32 disableInteractionForSalesWebCard;
    @40@0:8:16@24@32 trimVanityZeroWidthCharacters;
    @40@0:8:16@24@32 overlayOperation;
    @40@0:8:16@24@32 mediaExpandEnabledForSalesWebCard;
}

@property (nonatomic, retain) UIView<TUCImageView> *imageView;
@property (nonatomic, retain) id <TUCComponentModel> component;
@property (nonatomic, retain) TUCUnifiedCard *unifiedCard;
@property (nonatomic, readonly) UIImage *previewImage;

/* instance methods */
- (id)initWithImageView:(id)view hideTitleForSalesWebCard:(_Bool)card disableInteractionForSalesWebCard:(_Bool)card trimVanityZeroWidthCharacters:(_Bool)characters mediaExpandEnabledForSalesWebCard:(_Bool)card;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)fetchImages;
- (void)cleanupMediaView;
- (void)setupActions;
- (_Bool)handlesTouchHighlighting;
- (id)previewConfigurationForLocation:(struct CGPoint { double x0; double x1; })location;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)_t1_didTapImage:(id)image;

@end

#endif /* TUCImageComponentView_h */
