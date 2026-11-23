//
#ifndef _TtC8Payments21ChatSupportGRPCEngine_h
#define _TtC8Payments21ChatSupportGRPCEngine_h
@import Foundation;

@class Payments.PaymentsActionService, Payments.PaymentsLogging, Payments.PaymentsModelContext, _$s8TFSModel20TypedModelIdentifierCMn PaymentsOrchestrator.XMoneySupportSessionModel ?, _$sSS, _$sSa -> _$s13TFSObservable8ObserverCMn PaymentsOrchestrator.XMoneySupportSessionModel, _TtCs12_SwiftObject;

@interface Payments.ChatSupportGRPCEngine : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String sessionID;
    Payments.PaymentsActionService actionService;
    Payments.PaymentsModelContext modelContext;
    Payments.PaymentsLogging logger;
    nominal type descriptor for TFSModel.TypedModelIdentifier PaymentsOrchestrator.XMoneySupportSessionModel ? $__lazy_storage_$_modelIdentifier;
    Swift.Array -> nominal type descriptor for TFSObservable.Observer PaymentsOrchestrator.XMoneySupportSessionModel observers;
}

@end

#endif /* _TtC8Payments21ChatSupportGRPCEngine_h */
