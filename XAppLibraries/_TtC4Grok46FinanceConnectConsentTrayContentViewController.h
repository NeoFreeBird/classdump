//
#ifndef _TtC4Grok46FinanceConnectConsentTrayContentViewController_h
#define _TtC4Grok46FinanceConnectConsentTrayContentViewController_h
@import Foundation;

@class Grok.FinanceConnectionsModel, _$s13XDesignSystem16TrayFootnoteViewCMn ?, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$s13XDesignSystem9ListItemsCMn, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo7UILabelC, _$syycSg;

@interface Grok.FinanceConnectConsentTrayContentViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    (() -> ())? onConnect;
    Grok.FinanceConnectionsModel model;
    __C.UILabel descriptionLabel;
    nominal type descriptor for XDesignSystem.ListItems consentList;
    nominal type descriptor for XDesignSystem.TrayFootnoteView ? $__lazy_storage_$_footnoteView;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC4Grok46FinanceConnectConsentTrayContentViewController_h */
