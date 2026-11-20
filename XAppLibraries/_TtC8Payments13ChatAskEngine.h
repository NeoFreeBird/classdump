//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8Payments13ChatAskEngine_h
#define _TtC8Payments13ChatAskEngine_h
@import Foundation;

@class Payments.ChatAskEngine.PollSettings, Payments.PaymentsActionService, Payments.PaymentsLogging, Swift.Bool, _$s7Combine19CurrentValueSubjectCMn _$sySa -> Payments.ChatSection _$sG _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySb _$ss5NeverOMn, _$sSa -> Payments.ChatMessage, _$sScTyyt _$ss5NeverOMn ?, _TtCs12_SwiftObject;

@interface Payments.ChatAskEngine : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Payments.PaymentsActionService actionService;
    Payments.PaymentsLogging logger;
    Payments.ChatAskEngine.PollSettings pollSettings;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Array -> Payments.ChatSection _$sG nominal type descriptor for Swift.Never sectionsSubject;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Bool nominal type descriptor for Swift.Never typingSubject;
    Swift.Array -> Payments.ChatMessage messages;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? recommendationsTask;
    Swift.Bool isSearchInFlight;
}

@end

#endif /* _TtC8Payments13ChatAskEngine_h */
