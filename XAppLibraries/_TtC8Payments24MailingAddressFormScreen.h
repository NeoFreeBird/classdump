//
#ifndef _TtC8Payments24MailingAddressFormScreen_h
#define _TtC8Payments24MailingAddressFormScreen_h
@import Foundation;

@class Payments.AddressResultsView, Payments.CollapsibleFields ?, Payments.MailingAddressAutocompleter, Payments.MailingAddressFormScreen.Configuration, Payments.MailingAddressFormScreen.Values ?, PaymentsModels.XPaymentsAddress _$s_Sbtc ->, Swift.Bool, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$s13XDesignSystem5InputCMn, _$s13XDesignSystem9ListItemsCMn, _$sSbSg, _$sSo7UILabelC;

@interface Payments.MailingAddressFormScreen : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    Payments.MailingAddressFormScreen.Configuration configuration;
    Payments.MailingAddressFormScreen.Values ? savedValues;
    PaymentsModels.XPaymentsAddress _$s_Sbtc -> onSubmit;
    __C.UILabel descriptionLabel;
    nominal type descriptor for XDesignSystem.Input streetInput;
    Payments.AddressResultsView results;
    Payments.MailingAddressAutocompleter autocompleter;
    nominal type descriptor for XDesignSystem.Input unitInput;
    nominal type descriptor for XDesignSystem.Input cityInput;
    nominal type descriptor for XDesignSystem.Input stateInput;
    nominal type descriptor for XDesignSystem.Input zipInput;
    nominal type descriptor for XDesignSystem.ListItems defaultSwitch;
    Payments.CollapsibleFields ? $__lazy_storage_$_restOfForm;
    Swift.Bool isExpanded;
    Swift.Bool isDefault;
    Swift.Bool isSubmitting;
    Swift.Bool? pushedEnablement;
    Swift.Bool hasFocusedOnAppearance;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidAppear:(_Bool)appear;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC8Payments24MailingAddressFormScreen_h */
