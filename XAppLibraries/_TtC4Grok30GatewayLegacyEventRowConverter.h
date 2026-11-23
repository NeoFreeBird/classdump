//
#ifndef _TtC4Grok30GatewayLegacyEventRowConverter_h
#define _TtC4Grok30GatewayLegacyEventRowConverter_h
@import Foundation;

@class Grok.GatewayChunkReducer.Content, Grok.GatewayLegacyEventRowConverter.Phase, Grok.GatewayLegacyEventRowConverter.Turn, Grok.GrokFeatureAccess, Swift.Bool, _$sSDyS2SG, _$sSS, _$sSSSg, _$sSi, _TtCs12_SwiftObject;

@interface Grok.GatewayLegacyEventRowConverter : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Grok.GatewayLegacyEventRowConverter.Phase phase;
    Swift.Bool didSessionEnd;
    Swift.String? responseId;
    Swift.Int currentTurnEventCount;
    Grok.GatewayLegacyEventRowConverter.Turn turn;
    Swift.String responseCreateEventId;
    Grok.GrokFeatureAccess grokAccess;
    Swift.Bool confirmsLeafOnPersisted;
    Swift.String? userItemId;
    Swift.Bool hasEmittedUserIds;
    Swift.Bool isThinkingVisible;
    Swift.Bool hasReceivedText;
    Grok.GatewayChunkReducer.Content content;
    Swift.Bool didEmitTerminalRows;
    Swift.Bool didEmitBranchLeaf;
    [Swift.String : Swift.String] imageUrlCacheByCardId;
}

@end

#endif /* _TtC4Grok30GatewayLegacyEventRowConverter_h */
