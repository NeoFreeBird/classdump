//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok16GrokTopUpService_h
#define _TtC4Grok16GrokTopUpService_h
@import Foundation;

@class Grok.GrokTopUpStore, Grok0A13Authenticable_pSgXw, Grok0A18AccountPerspective_p, Swift.Bool, _$s7Combine14AnyCancellableCMn ?, _$s7Combine18PassthroughSubjectCMn Grok.GrokTopUpReturn _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn Grok.GrokTopUpState _$ss5NeverOMn, _$sScTyyt _$ss5NeverOMn ?, _$sSi, _TtCs12_SwiftObject;

@interface Grok.GrokTopUpService : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.CurrentValueSubject Grok.GrokTopUpState nominal type descriptor for Swift.Never state;
    nominal type descriptor for Combine.PassthroughSubject Grok.GrokTopUpReturn nominal type descriptor for Swift.Never topUpReturns;
    Grok0A18AccountPerspective_p account;
    Grok.GrokTopUpStore store;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? loadTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? loadRetryTask;
    Swift.Int loadRetryCount;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? activationTask;
    Grok0A13Authenticable_pSgXw authenticable;
    Swift.Bool isConfirmingWebTopUp;
    nominal type descriptor for Combine.AnyCancellable ? foregroundSubscription;
}

@end

#endif /* _TtC4Grok16GrokTopUpService_h */
