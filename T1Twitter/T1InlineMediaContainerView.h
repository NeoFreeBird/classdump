//
#ifndef T1InlineMediaContainerView_h
#define T1InlineMediaContainerView_h
@import Foundation;

#include "T1InlineMediaContainerViewDelegate-Protocol.h"
#include "T1InlineMediaView.h"
#include "T1InlineMediaViewPrerollDelegate-Protocol.h"
#include "T1PrerollCTAButton.h"
#include "T1PrerollCTAModel.h"
#include "T1StatusPhotoVideoDetailsView.h"

@class NSString, UIView;

@interface T1InlineMediaContainerView : UIView <T1InlineMediaViewPrerollDelegate>

@property (retain, nonatomic) T1PrerollCTAButton *button;
@property (nonatomic) _Bool buttonHidden;
@property (retain, nonatomic) T1PrerollCTAModel *ctaModel;
@property (retain, nonatomic) NSString *ctaTitle;
@property (weak, nonatomic) T1StatusPhotoVideoDetailsView *detailsView;
@property (retain, nonatomic) T1InlineMediaView *mediaView;
@property (weak, nonatomic) id <T1InlineMediaContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMediaView:(id)view detailsView:(id)view;
- (void)setIsAccessibilityElement:(_Bool)element;
- (void)inlineMediaViewDidEndPreroll:(id)preroll;
- (void)inlineMediaViewWillHideCTA;
- (void)inlineMediaView:(id)view didStartPrerollWithCTAModel:(id)ctamodel;
- (void)inlineMediaViewWillShowCTA;
- (void)inlineMediaViewWillPrepareForReuse;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)sizeToFit;
- (void)_t1_setup;
- (void)_t1_setupButton;
- (void)_t1_hideCTAButton;
- (void)_t1_showCTAButton;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_t1_updatedFrame;
- (void)_t1_handleCTAButtonTap:(id)tap;

@end

#endif /* T1InlineMediaContainerView_h */
