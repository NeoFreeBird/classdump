//
#ifndef T1LiveEventCarouselChromeView_h
#define T1LiveEventCarouselChromeView_h
@import Foundation;

#include "T1LiveEventCarouselEntryCellViewModel.h"
#include "T1LiveEventRoundedCornerView.h"
#include "T1LiveEventRoundedPaddedView.h"

@class UIImageView, UILabel, UIView;

@interface T1LiveEventCarouselChromeView : UIView

@property (readonly, nonatomic) T1LiveEventRoundedPaddedView *badgeView;
@property (readonly, nonatomic) UILabel *contentTypeLabel;
@property (readonly, nonatomic) UIView *socialProofView;
@property (readonly, nonatomic) UIImageView *viewersImageView;
@property (readonly, nonatomic) UILabel *viewersCountLabel;
@property (readonly, nonatomic) T1LiveEventRoundedCornerView *socialProofRoundedCornerView;
@property (retain, nonatomic) T1LiveEventCarouselEntryCellViewModel *viewModel;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)_t1_updateSubviews;
- (id)_t1_darkBackgroundColor;
- (id)_t1_badgeFont;
- (id)_t1_viewersFont;

@end

#endif /* T1LiveEventCarouselChromeView_h */
