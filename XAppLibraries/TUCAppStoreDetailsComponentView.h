//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCAppStoreDetailsComponentView_h
#define TUCAppStoreDetailsComponentView_h
@import Foundation;

#include "TFNPreviewable-Protocol.h"
#include "TUCComponentModel-Protocol.h"
#include "TUCComponentView-Protocol.h"
#include "TUCComponentViewEventDelegate-Protocol.h"
#include "TUCLayoutableView.h"
#include "TUCUnifiedCard.h"

@class NSString, TIPImagePipeline, UIView;

@interface TUCAppStoreDetailsComponentView : TUCLayoutableView <TUCComponentView, TFNPreviewable> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 $__lazy_storage_$_fallbackHighlightView;
    @40@0:8:16@24@32 $__lazy_storage_$_titleHighlightView;
    @40@0:8:16@24@32 $__lazy_storage_$_subtitleHighlightView;
    @40@0:8:16@24@32 titleLabel;
    @40@0:8:16@24@32 subtitleLabel;
    @40@0:8:16@24@32 appIconView;
    @40@0:8:16@24@32 button;
    @40@0:8:16@24@32 $__lazy_storage_$_appRatingsView;
}

@property (nonatomic, retain) id <TUCComponentModel> component;
@property (nonatomic, retain) TUCUnifiedCard *unifiedCard;
@property (nonatomic, weak) id <TUCComponentViewEventDelegate> eventDelegate;
@property (nonatomic, retain) TIPImagePipeline *imagePipeline;
@property (nonatomic, retain) UIView *autoplayableContainerView;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, readonly) id /* block */ iconView;

/* class methods */
+ (id)sharedLayoutDelegate;

/* instance methods */
- (void)setupActions;
- (void)didTapDetailWithDetailView:(id)view;
- (void)prepareForReuse;
- (id)supplementalParamsForEvent:(id)event;
- (id)updatedScribeContextForComponentViewEvent:(id)event sourceScribeContext:(id)context;
- (id)accessibilityCustomUCActions;
- (id)previewConfigurationForLocation:(struct CGPoint { double x0; double x1; })location;
- (id)initWithIconView:(id /* block */)view;
- (id)initWithCoder:(id)coder;
- (void)didTapDetail;
- (void)didTapButton:(id)button;
- (void)didTapButtonAsComponentTap:(id)tap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* TUCAppStoreDetailsComponentView_h */
