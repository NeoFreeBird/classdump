//
#ifndef T1LiveEventMetadataSubheaderViewController_h
#define T1LiveEventMetadataSubheaderViewController_h
@import Foundation;

#include "T1LiveEvent.h"
#include "T1LiveEventAuthorAttributionView.h"
#include "T1LiveEventCarouselEntry.h"
#include "T1LiveEventMetadataSubheaderViewControllerDelegate-Protocol.h"
#include "T1LiveEventRemindMeViewModel.h"
#include "T1LiveEventRemindMeViewModelDelegate-Protocol.h"
#include "T1ResizableHeaderSubheader-Protocol.h"
#include "TFNAttributedTextViewDelegate-Protocol.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"

@class NSLayoutConstraint, NSString, TFNAttributedTextView, TFNButton, TFNTwitterAccount, TFNViewController, TIPImagePipeline, UILabel, UIStackView;

@interface T1LiveEventMetadataSubheaderViewController : TFNViewController <TFNLayoutMetricsEnvironment, TFNAttributedTextViewDelegate, T1LiveEventRemindMeViewModelDelegate, T1ResizableHeaderSubheader>

@property (retain, nonatomic) UIStackView *verticalContentStackView;
@property (retain, nonatomic) UIStackView *timestampStackView;
@property (retain, nonatomic) UILabel *categoryLabel;
@property (retain, nonatomic) UILabel *midDotLabel;
@property (retain, nonatomic) UILabel *timestampLabel;
@property (retain, nonatomic) T1LiveEventAuthorAttributionView *authorAttributionView;
@property (retain, nonatomic) TFNAttributedTextView *titleTextView;
@property (retain, nonatomic) TFNAttributedTextView *descriptionTextView;
@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (nonatomic) double desiredHeight;
@property (retain, nonatomic) NSLayoutConstraint *verticalContentStackViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *verticalContentStackViewTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *verticalContentStackViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (retain, nonatomic) TFNButton *remindMeButton;
@property (retain, nonatomic) NSLayoutConstraint *remindMeButtonWidthConstraint;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) T1LiveEvent *liveEvent;
@property (weak, nonatomic) id <T1LiveEventMetadataSubheaderViewControllerDelegate> delegate;
@property (nonatomic) _Bool displaysBottomPadding;
@property (retain, nonatomic) T1LiveEventCarouselEntry *activeCarouselEntry;
@property (retain, nonatomic) T1LiveEventRemindMeViewModel *remindMeViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id subheaderInfo;
@property (copy, nonatomic) id /* block */ preferredHeightCheckBlock;

/* instance methods */
- (id)init;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithCoder:(id)coder;
- (id)initWithLiveEvent:(id)event account:(id)account;
- (void)viewDidLayoutSubviews;
- (void)_t1_updateRemindMeViewModel;
- (void)_t1_configureForActiveCarouselEntry;
- (void)updateRemindMeView;
- (void)_t1_didTapRemindMeButton;
- (void)_t1_updateSubviews;
- (double)_t1_bottomPaddingConstant;
- (void)viewDidLoad;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (double)preferredHeight;
- (void)_t1_setupVerticalStackViewIfNeeded;
- (void)_t1_setupViewIfReady;
- (void)_t1_setupRemindMeButtonIfNeeded;
- (void)_t1_handleAuthorAttributionTap:(id)tap;
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)_t1_titleAttributedString;
- (id)_t1_titleText;
- (id)_t1_categoryAttributedString;
- (id)_t1_categoryAttributesDictionary;
- (id)_t1_categoryText;
- (id)_t1_timestampAttributedString;
- (id)_t1_timestampAttributesDictionary;
- (id)_t1_descriptionAttributedString;
- (id)_t1_descriptionText;
- (void)tfn_fontSizeChanged;
- (void)liveEventReminderViewModelDidUpdate:(id)update;

@end

#endif /* T1LiveEventMetadataSubheaderViewController_h */
