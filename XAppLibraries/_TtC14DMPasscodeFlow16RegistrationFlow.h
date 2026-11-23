//
#ifndef _TtC14DMPasscodeFlow16RegistrationFlow_h
#define _TtC14DMPasscodeFlow16RegistrationFlow_h
@import Foundation;

@class DMPasscodeFlow.EnterPasscodeBuilder, DMPasscodeFlow.PasscodeFlowPresenter, DMPasscodeFlow.RegistrationFlowState, Swift.Bool, _$s10ChatKotlin19ObjectGraphProviderCMn, _$s13ChatSyncState0A12ActionStreamCMn, _$s13ChatSyncState0A16AccountProvidingMp, _TtCs12_SwiftObject;

@interface DMPasscodeFlow.RegistrationFlow : Swift._SwiftObject { // (Swift)
    /* instance variables */
    DMPasscodeFlow.EnterPasscodeBuilder enterPasscodeBuilder;
    Swift.Bool isAutoEnrollManagedEnabled;
    Swift.Bool isNativeRewrite;
    nominal type descriptor for ChatKotlin.ObjectGraphProvider objectGraphProvider;
    DMPasscodeFlow.PasscodeFlowPresenter presenter;
    nominal type descriptor for ChatSyncState.ChatActionStream actionStream;
    protocol descriptor for ChatSyncState.ChatAccountProviding accountProvider;
    DMPasscodeFlow.RegistrationFlowState state;
}

@end

#endif /* _TtC14DMPasscodeFlow16RegistrationFlow_h */
