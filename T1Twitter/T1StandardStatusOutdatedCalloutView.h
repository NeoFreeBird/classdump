//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StandardStatusOutdatedCalloutView_h
#define T1StandardStatusOutdatedCalloutView_h
@import Foundation;

#include "T1OutdatedCalloutSeeLatestSourceRange.h"
#include "T1OutdatedCalloutViewDelegate-Protocol.h"
#include "T1OutdatedCalloutViewModel.h"
#include "TFNAttributedTextViewDelegate-Protocol.h"

@class NSArray, NSString, TFNAttributedTextView, UIImageView, UIStackView, UIView;

@interface T1StandardStatusOutdatedCalloutView : UIView <TFNAttributedTextViewDelegate>

@property (readonly, nonatomic) UIImageView *iconImageView;
@property (readonly, nonatomic) TFNAttributedTextView *calloutTextView;
@property (readonly, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSArray *currentConstraints;
@property (readonly, nonatomic) T1OutdatedCalloutViewModel *viewModel;
@property (weak, nonatomic) id <T1OutdatedCalloutViewDelegate> delegate;
@property (readonly, nonatomic) T1OutdatedCalloutSeeLatestSourceRange *activeRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_t1_updateContent;
- (void)_t1_updateConstraints;
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

@end

#endif /* T1StandardStatusOutdatedCalloutView_h */
