//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVChatActionSheetView_h
#define PTVChatActionSheetView_h
@import Foundation;

#include "PTVActionSheetButton.h"
#include "PTVActionSheetView.h"
#include "PTVChatActionSheetViewDelegate-Protocol.h"

@class UIView;

@interface PTVChatActionSheetView : PTVActionSheetView {
    /* instance variables */
    UIView *_buttonsContainerView;
    PTVActionSheetButton *_abuseButton;
    PTVActionSheetButton *_spamButton;
    PTVActionSheetButton *_sexualButton;
    PTVActionSheetButton *_otherReasonButton;
}

@property (nonatomic) _Bool reportButtonsVisible;
@property (weak, nonatomic) id <PTVChatActionSheetViewDelegate> chatActionSheetDelegate;

/* class methods */
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ButtonsContainerFrameWithActionSheetScrollViewContentSize:(struct CGSize { double x0; double x1; })size HeaderViewHeight:(double)height TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })PrimaryButtonFrame:(struct CGSize { double x0; double x1; })frame AtIndex:(long long)index ReportButtonsVisible:(_Bool)visible PrimaryButtonsHeight:(double)height TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ReportButtonFrame:(struct CGSize { double x0; double x1; })frame AtIndex:(long long)index ReportButtonsVisible:(_Bool)visible ReportButtonsHeight:(double)height TraitCollection:(id)collection;

/* instance methods */
- (void)layoutSubviews;
- (void)layoutButtons;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })maxButtonSizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithDelegate:(id)delegate attributedMessage:(id)message attributedDismissTitle:(id)title otherButtonTitles:(id)titles abuseTitle:(id)title spamTitle:(id)title sexualTitle:(id)title otherReasonTitle:(id)title messageViews:(id)views hasReply:(_Bool)reply hasAcceptCallIn:(_Bool)in currentMessageIndex:(unsigned long long)index;
- (void)reportButtonPressed:(id)pressed;
- (id)primaryButtons;
- (void)updateButtonAlphaForReportButtonsVisible:(_Bool)visible;

@end

#endif /* PTVChatActionSheetView_h */
