//
#ifndef _TtC10CallEngine22CallKitIntegrationImpl_h
#define _TtC10CallEngine22CallKitIntegrationImpl_h
@import Foundation;

@class CallEngine.CallKitCallIDHistory, CallEngine.CallKitLiveCallRegistry, CallEngine.CallRTCAudioSessionEventStream, CallEngine.CallScribing, CallEngine.CallStream, CallKitHost.CallKitProviderHost, CallModels.CallRingReportStream, CallModels.CallSessionOwner, XCallContacts.XCallContactsIntegrating, _$s7Combine14AnyCancellableCMn, _$s7Combine18PassthroughSubjectCMn CallModels.CallKitAction _$ss5NeverOMn, _$s7Combine18PassthroughSubjectCMn CallModels.RingingIncomingCall _$ss5NeverOMn, _$sSbSSc, _TtCs12_SwiftObject;

@interface CallEngine.CallKitIntegrationImpl : Swift._SwiftObject { // (Swift)
    /* instance variables */
    CallKitHost.CallKitProviderHost host;
    CallModels.CallRingReportStream callRingReportStream;
    CallEngine.CallStream callStream;
    nominal type descriptor for Combine.PassthroughSubject CallModels.CallKitAction nominal type descriptor for Swift.Never actionSubject;
    nominal type descriptor for Combine.PassthroughSubject CallModels.RingingIncomingCall nominal type descriptor for Swift.Never ringingSubject;
    CallEngine.CallScribing callScriber;
    XCallContacts.XCallContactsIntegrating callContacts;
    CallEngine.CallKitLiveCallRegistry liveCalls;
    CallEngine.CallRTCAudioSessionEventStream rtcAudioSessionEventStream;
    CallEngine.CallKitCallIDHistory callIDHistory;
    nominal type descriptor for Combine.AnyCancellable audioDiagnostics;
    nominal type descriptor for Combine.AnyCancellable callIDRecording;
    (Swift.String) -> Swift.Bool configuresAudioBeforeReport;
    CallModels.CallSessionOwner audioSessionOwner;
}

@end

#endif /* _TtC10CallEngine22CallKitIntegrationImpl_h */
