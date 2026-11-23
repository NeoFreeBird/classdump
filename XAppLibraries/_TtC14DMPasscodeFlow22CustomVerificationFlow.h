//
#ifndef _TtC14DMPasscodeFlow22CustomVerificationFlow_h
#define _TtC14DMPasscodeFlow22CustomVerificationFlow_h
@import Foundation;

@class DMPasscodeFlow.CustomVerificationFlowState, DMPasscodeFlow.EnterPasscodeBuilder, DMPasscodeFlow.PasscodeFlowPresenter, Swift.Bool, _$s10ChatKotlin19ObjectGraphProviderCMn, _$s13ChatSyncState0A12ActionStreamCMn, _TtCs12_SwiftObject;

@interface DMPasscodeFlow.CustomVerificationFlow : Swift._SwiftObject { // (Swift)
    /* instance variables */
    DMPasscodeFlow.EnterPasscodeBuilder enterPasscodeBuilder;
    DMPasscodeFlow.PasscodeFlowPresenter presenter;
    Swift.Bool shouldGenerateSigningKey;
    Swift.Bool shouldRegister;
    DMPasscodeFlow.CustomVerificationFlowState state;
    Swift.Bool isNativeRewrite;
    nominal type descriptor for ChatKotlin.ObjectGraphProvider objectGraphProvider;
    nominal type descriptor for ChatSyncState.ChatActionStream actionStream;
}

@end

#endif /* _TtC14DMPasscodeFlow22CustomVerificationFlow_h */
