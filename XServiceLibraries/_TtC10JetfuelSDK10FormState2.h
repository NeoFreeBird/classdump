//
#ifndef _TtC10JetfuelSDK10FormState2_h
#define _TtC10JetfuelSDK10FormState2_h
@import Foundation;

@class JetfuelSDK.FormValidator2, Swift.Bool, _$s10Foundation3URLVMn ?, _$s7Combine9PublishedVMn JetfuelSDK.NavItem ?, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$sSDyS2SG, _$sSDySS JetfuelSDK.FormValidationOptions, _$sSS, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sShySSG, _$ss5Int64VMn, _TtCs12_SwiftObject;

@interface JetfuelSDK.FormState2 : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Swift.Int64 id;
    nominal type descriptor for Foundation.URL ? action;
    Swift.Bool needsValidation;
    Swift.String defaultErrorKey;
    nominal type descriptor for Combine.Published Swift.Bool _canSubmit;
    nominal type descriptor for Combine.Published JetfuelSDK.NavItem ? _result;
    nominal type descriptor for Combine.Published [Swift.String : Swift.String] _values;
    nominal type descriptor for Combine.Published [Swift.String : Swift.String] _errors;
    Swift.Set<Swift.String> required;
    Swift.Bool isSubmitting;
    JetfuelSDK.FormValidator2 validator;
    Swift.Dictionary empty-list Swift.String JetfuelSDK.FormValidationOptions validations;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    Swift.Bool validated;
}

@end

#endif /* _TtC10JetfuelSDK10FormState2_h */
