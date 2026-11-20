//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok23FinanceConnectionsModel_h
#define _TtC4Grok23FinanceConnectionsModel_h
@import Foundation;

@class Grok.FinanceConnectionsModel.Failure _$scSg ->, Grok.FinanceConnectionsModel.LinkSessionHandlers, Grok0A13Authenticable_pSgyc, _$s7Combine9PublishedVMn Grok.FinanceConnectionsModel.LinkPhase, _$s7Combine9PublishedVMn Grok.FinanceConnectionsModel.ListState, _$s7Combine9PublishedVMn _$sySa -> _$s16GrokBackendProto05Prod_A43_Connectors_Manager_FinancialConnectionInfoVMn, _$s7LinkKit7HandlerMp ?, _$sSa -> _$s16GrokBackendProto05Prod_A43_Connectors_Manager_FinancialConnectionInfoVMn, _$sScTyyt _$ss5NeverOMn ?, _$sSi, _$ss5Int64VMn, _TtCs12_SwiftObject;

@interface Grok.FinanceConnectionsModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> nominal type descriptor for GrokBackendProto.Prod_Grok_Connectors_Manager_FinancialConnectionInfo _connections;
    nominal type descriptor for Combine.Published Grok.FinanceConnectionsModel.ListState _listState;
    nominal type descriptor for Combine.Published Grok.FinanceConnectionsModel.LinkPhase _linkPhase;
    Grok.FinanceConnectionsModel.Failure _$scSg -> onFailure;
    Grok0A13Authenticable_pSgyc accountProvider;
    nominal type descriptor for Swift.Int64 userID;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? listTask;
    Swift.Int listGeneration;
    Swift.Array -> nominal type descriptor for GrokBackendProto.Prod_Grok_Connectors_Manager_FinancialConnectionInfo pendingConnections;
    protocol descriptor for LinkKit.Handler ? linkHandler;
    Grok.FinanceConnectionsModel.LinkSessionHandlers linkSessionHandlers;
}

@end

#endif /* _TtC4Grok23FinanceConnectionsModel_h */
