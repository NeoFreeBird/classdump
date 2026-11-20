//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTAFeedbackInlineTip_h
#define TTAFeedbackInlineTip_h
@import Foundation;

@class UIView;

@interface TTAFeedbackInlineTip : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 barFillLayer;
    @40@0:8:16@24@32 outlineLayer;
    @40@0:8:16@24@32 titleLabel;
    @40@0:8:16@24@32 confirmationLabel;
    @40@0:8:16@24@32 optionButtons;
    @40@0:8:16@24@32 viewModel;
    @40@0:8:16@24@32 options;
    @40@0:8:16@24@32 accountID;
    @40@0:8:16@24@32 hasSubmitted;
}

@property (nonatomic, copy) id /* block */ onSubmit;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } horizontalSafeAreaInsets;

/* class methods */
+ (double)staticHeightWithMaximumWidth:(double)width viewModel:(id)model accountID:(id)id;

/* instance methods */
- (id)initWithViewModel:(id)model accountID:(id)id;
- (id)initWithCoder:(id)coder;
- (void)didTapOptionButton:(id)button;
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* TTAFeedbackInlineTip_h */
