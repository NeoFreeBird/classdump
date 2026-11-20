//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCReminderComponentView_h
#define TUCReminderComponentView_h
@import Foundation;

#include "TFNPreviewable-Protocol.h"
#include "TUCComponentModel-Protocol.h"
#include "TUCComponentView-Protocol.h"
#include "TUCComponentViewEventDelegate-Protocol.h"
#include "TUCLayoutableView.h"
#include "TUCUnifiedCard.h"

@class NSString, TIPImagePipeline, UIView;

@interface TUCReminderComponentView : TUCLayoutableView <TUCComponentView, TFNPreviewable> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 $__lazy_storage_$_fallbackHighlightView;
    @40@0:8:16@24@32 account;
    @40@0:8:16@24@32 scribeContext;
    @40@0:8:16@24@32 hostingViewModel;
    @40@0:8:16@24@32 $__lazy_storage_$_viewModel;
    @40@0:8:16@24@32 $__lazy_storage_$_hostingController;
}

@property (nonatomic, retain) id <TUCComponentModel> component;
@property (nonatomic, retain) TUCUnifiedCard *unifiedCard;
@property (nonatomic, weak) id <TUCComponentViewEventDelegate> eventDelegate;
@property (nonatomic, retain) TIPImagePipeline *imagePipeline;
@property (nonatomic, retain) UIView *autoplayableContainerView;
@property (nonatomic, copy) NSString *accessibilityLabel;

/* class methods */
+ (id)sharedLayoutDelegate;

/* instance methods */
- (void)setupActions;
- (void)prepareForReuse;
- (id)supplementalParamsForEvent:(id)event;
- (id)updatedScribeContextForComponentViewEvent:(id)event sourceScribeContext:(id)context;
- (id)accessibilityCustomUCActions;
- (id)previewConfigurationForLocation:(struct CGPoint { double x0; double x1; })location;
- (id)initWithAccount:(id)account imagePipeline:(id)pipeline scribeContext:(id)context;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)willMoveToSuperview:(id)superview;
- (void)didMoveToSuperview;
- (void)dynamicColorsDidReloadWithNotification:(id)notification;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* TUCReminderComponentView_h */
