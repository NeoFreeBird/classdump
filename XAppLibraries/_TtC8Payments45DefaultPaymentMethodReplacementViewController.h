//
#ifndef _TtC8Payments45DefaultPaymentMethodReplacementViewController_h
#define _TtC8Payments45DefaultPaymentMethodReplacementViewController_h
@import Foundation;

@class MoneyProtos.XMoneyPaymentMethod ?, Payments.DefaultPaymentMethodReplacementViewController.Reason, Payments.PaymentsContext, Swift.Bool, _$s13XDesignSystem29TrayListContentViewControllerCN, _$sSa -> MoneyProtos.XMoneyPaymentMethod;

@interface Payments.DefaultPaymentMethodReplacementViewController : type metadata for XDesignSystem.TrayListContentViewController { // (Swift)
    /* instance variables */
    Swift.Array -> MoneyProtos.XMoneyPaymentMethod candidates;
    MoneyProtos.XMoneyPaymentMethod ? soleCandidate;
    Payments.DefaultPaymentMethodReplacementViewController.Reason reason;
    Payments.PaymentsContext context;
    Swift.Bool isSubmitting;
    Swift.Bool hasConfirmedUnlinking;
}

/* instance methods */

@end

#endif /* _TtC8Payments45DefaultPaymentMethodReplacementViewController_h */
