//
#ifndef _TtC8Payments32ActivateCardNoticeViewController_h
#define _TtC8Payments32ActivateCardNoticeViewController_h
@import Foundation;

@class MoneyProtos.XMoneyCustomerNotice, Payments.ActivateCardNoticeViewController.Phase, Payments.PaymentsContext, Payments.PaymentsContextPresenter ?, Payments.PaymentsScribeSection ?, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$sSo31UINotificationFeedbackGeneratorC, _$sSo6UIViewCSg;

@interface Payments.ActivateCardNoticeViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    MoneyProtos.XMoneyCustomerNotice notice;
    Payments.PaymentsScribeSection ? scribeSection;
    Payments.PaymentsContext context;
    __C.UIView? videoView;
    __C.UINotificationFeedbackGenerator feedbackGenerator;
    Payments.PaymentsContextPresenter ? $__lazy_storage_$_presenter;
    Payments.ActivateCardNoticeViewController.Phase phase;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC8Payments32ActivateCardNoticeViewController_h */
