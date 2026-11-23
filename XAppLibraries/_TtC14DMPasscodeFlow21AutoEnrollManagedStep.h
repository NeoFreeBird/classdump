//
#ifndef _TtC14DMPasscodeFlow21AutoEnrollManagedStep_h
#define _TtC14DMPasscodeFlow21AutoEnrollManagedStep_h
@import Foundation;

@class DMPasscodeFlow.PasscodeFlowStepListener ?, DMPasscodeFlow.RegistrationFlowState, Swift.Bool, _$s10ChatKotlin19ObjectGraphProviderCMn, _$s13ChatSyncState0A12ActionStreamCMn, _$s13ChatSyncState0A16AccountProvidingMp, _TtCs12_SwiftObject;

@interface DMPasscodeFlow.AutoEnrollManagedStep : Swift._SwiftObject { // (Swift)
    /* instance variables */
    DMPasscodeFlow.PasscodeFlowStepListener ? listener;
    Swift.Bool isEnabled;
    Swift.Bool isNativeRewrite;
    nominal type descriptor for ChatKotlin.ObjectGraphProvider objectGraphProvider;
    DMPasscodeFlow.RegistrationFlowState state;
    nominal type descriptor for ChatSyncState.ChatActionStream actionStream;
    protocol descriptor for ChatSyncState.ChatAccountProviding accountProvider;
}

@end

#endif /* _TtC14DMPasscodeFlow21AutoEnrollManagedStep_h */
