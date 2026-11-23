//
#ifndef _TtC4Grok25GrokConversationsProvider_h
#define _TtC4Grok25GrokConversationsProvider_h
@import Foundation;

@class Grok.GatewayListCoordinator, Grok.GatewayListPaging, Grok.GrokConversationsProvider.SupplementedGatewayRefresh ?, Grok.GrokFeatureAccess, Grok.GrokGatewayKnownAccountStore, Grok.LegacyListPaging, Grok0A18AccountPerspective_p, _$s20TwitterActionService0bC0CMn ?, _$s7Combine14AnyCancellableCMn ?, _$s7Combine18PassthroughSubjectCMn _$sySS _$ss5NeverOMn, _$s7Combine9PublishedVMn Grok.GrokConversationsProvider.FetchingState, _$s7Combine9PublishedVMn _$sSbSg, _$s7Combine9PublishedVMn _$sySa -> Grok.GrokHistoryConversation, _$s7Combine9PublishedVMn _$sySa -> _$s13GraphQLModels33GrokMediaHistoryOperationResponseC0cdE0C5ItemsCMn, _$sSSSg, _$sSSSgycSg, _$sSa -> Grok.GrokHistoryConversation, _$sScTyyt _$ss5NeverOMn ?, _$sShySSG, _$sSi, _$sySa -> Grok.GrokHistoryConversation _$sGcSg, _TtCs12_SwiftObject;

@interface Grok.GrokConversationsProvider : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Grok.GrokFeatureAccess featureAccess;
    Grok0A18AccountPerspective_p account;
    Grok.GrokGatewayKnownAccountStore knownAccountStore;
     empty-list Swift.Array -> Grok.GrokHistoryConversation _$sGcSg subscriber;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> Grok.GrokHistoryConversation _conversations;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> nominal type descriptor for GraphQLModels.GrokMediaHistoryOperationResponse.GrokMediaHistory.Items _media;
    nominal type descriptor for Combine.Published Grok.GrokConversationsProvider.FetchingState _fetchingState;
    nominal type descriptor for Combine.Published Grok.GrokConversationsProvider.FetchingState _mediaFetchingState;
    nominal type descriptor for Combine.PassthroughSubject  empty-list Swift.String nominal type descriptor for Swift.Never gatewayConversationDeleted;
    nominal type descriptor for Combine.PassthroughSubject  empty-list Swift.String nominal type descriptor for Swift.Never gatewayConversationDeleteFailed;
    Swift.Set<Swift.String> deletedConversationIds;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? gatewayFetchTask;
    Grok.GatewayListCoordinator gatewayCoordinator;
    Grok.GatewayListPaging gatewayPaging;
    Swift.Array -> Grok.GrokHistoryConversation heldBackSupplementedRows;
    Grok.GrokConversationsProvider.SupplementedGatewayRefresh ? pendingSupplementedGatewayRefresh;
    Swift.Int supplementedRowsBeforeLoadMore;
    Swift.Int supplementedPagesRemaining;
    Grok.LegacyListPaging legacyPaging;
    Swift.Int legacyFetchGeneration;
    Swift.String? mediaCursor;
    nominal type descriptor for Combine.Published Swift.Bool? _loadedListUsesGateway;
    Swift.Int listRouteGeneration;
    nominal type descriptor for Combine.AnyCancellable ? linkStateCancellable;
    nominal type descriptor for Combine.AnyCancellable ? titleUpdateCancellable;
    (() -> Swift.String?)? currentlyOpenGatewayConversationId;
    nominal type descriptor for TwitterActionService.ActionService ? $__lazy_storage_$_actionService;
}

@end

#endif /* _TtC4Grok25GrokConversationsProvider_h */
