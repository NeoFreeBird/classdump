//
#ifndef _TtC11CallKitHost19CallKitProviderHost_h
#define _TtC11CallKitHost19CallKitProviderHost_h
@import Foundation;

#include "CXProviderDelegate-Protocol.h"

@class CallKitHost.CallAudioSessionApplying, CallKitHost.CallKitCallControlling, CallKitHost.CallKitCallPresenceStream, CallKitHost.CallKitCallTable, CallKitHost.CallKitHostConfiguration, CallKitHost.CallKitHostScribing, CallKitHost.CallKitProviderFactory, CallKitHost.CallKitProviding, CallModels.CallAudioSessionActivationStream, CallModels.CallAudioSessionAvailabilityStream, NSObject, Swift.Bool, _$s10Foundation4DateVMn ?, _$s10Foundation4UUIDVMn ?, _$sSD -> CallModels.CallKitHandlerID CallKitHost.CallKitProviderHost.WeakHandler, _$sSD -> _$s10Foundation4UUIDVMn _$sScTyyt _$ss5NeverOMn, _$sSaySo8NSObject_pG, _$sSd, _$sSh -> _$s10Foundation4UUIDVMn, _$sSi;

@interface CallKitHost.CallKitProviderHost : NSObject <CXProviderDelegate> { // (Swift)
    /* instance variables */
    CallModels.CallAudioSessionActivationStream activationStream;
    CallModels.CallAudioSessionAvailabilityStream availabilityStream;
    CallKitHost.CallKitCallPresenceStream presenceStream;
    Swift.Int providerGeneration;
    Swift.Int audioGeneration;
    CallKitHost.CallKitHostConfiguration configuration;
    CallKitHost.CallKitProviderFactory providerFactory;
    CallKitHost.CallAudioSessionApplying audioApplier;
    CallKitHost.CallKitHostScribing scriber;
    Swift.Double audioExpectationGrace;
    Swift.Double audioActivationTimeout;
    Swift.Double forcedActivationDelay;
    CallKitHost.CallKitProviding provider;
    CallKitHost.CallKitCallControlling callController;
    Swift.Bool supportsVideo;
    CallKitHost.CallKitCallTable table;
    Swift.Dictionary -> CallModels.CallKitHandlerID CallKitHost.CallKitProviderHost.WeakHandler handlers;
    Swift.Dictionary -> nominal type descriptor for Foundation.UUID Swift.Task empty-list () nominal type descriptor for Swift.Never audioExpectationLapses;
    Swift.Dictionary -> nominal type descriptor for Foundation.UUID Swift.Task empty-list () nominal type descriptor for Swift.Never audioRecoveryTimers;
    [__C.NSObject] retryTriggerObservers;
    nominal type descriptor for Foundation.UUID ? lastAudioOwnerUUID;
    Swift.Set -> nominal type descriptor for Foundation.UUID mutedCallUUIDs;
    Swift.Set -> nominal type descriptor for Foundation.UUID muteBounceActionUUIDs;
    nominal type descriptor for Foundation.Date ? audioInterruptedAt;
}

/* instance methods */
- (void)providerDidReset:(id)reset;
- (void)provider:(id)provider performStartCallAction:(id)action;
- (void)provider:(id)provider performAnswerCallAction:(id)action;
- (void)provider:(id)provider performEndCallAction:(id)action;
- (void)provider:(id)provider performSetMutedCallAction:(id)action;
- (void)provider:(id)provider performSetHeldCallAction:(id)action;
- (void)provider:(id)provider timedOutPerformingAction:(id)action;
- (void)provider:(id)provider didActivateAudioSession:(id)session;
- (void)provider:(id)provider didDeactivateAudioSession:(id)session;
- (void)dealloc;
- (id)init;

@end

#endif /* _TtC11CallKitHost19CallKitProviderHost_h */
