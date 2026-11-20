//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCCC13GraphQLModels46GrokConversationItemsByRestIdOperationResponse29GrokConversationItemsByRestId5Items_h
#define _TtCCC13GraphQLModels46GrokConversationItemsByRestIdOperationResponse29GrokConversationItemsByRestId5Items_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.GrokConversationSenderType ?, GraphQLModels.Enumeration GraphQLScalars.GrokMode ?, GraphQLModels.GrokConversationItemsByRestIdOperationResponse.GrokConversationItemsByRestId.Items.Entities ?, GraphQLModels.GrokConversationItemsByRestIdOperationResponse.GrokConversationItemsByRestId.Items.UiLayout ?, GraphQLScalars.NumericString ?, _$sSSSg, _$sSa -> GraphQLModels.GrokConversationItemsByRestIdOperationResponse.GrokConversationItemsByRestId.Items.DeepsearchHeaders ?, _$sSa -> GraphQLModels.GrokConversationItemsByRestIdOperationResponse.GrokConversationItemsByRestId.Items.FileAttachments ?, _$sSa -> GraphQLModels.GrokConversationItemsByRestIdOperationResponse.GrokConversationItemsByRestId.Items.WebResults ?, _$sSa -> GraphQLModels.TweetResultsFragment ?, _$sSaySSGSg, _$sSbSg, _$ss5Int64VMn ?, _TtCs12_SwiftObject;

@interface GraphQLModels.GrokConversationItemsByRestIdOperationResponse.GrokConversationItemsByRestId.Items : Swift._SwiftObject { // (Swift)
    /* instance variables */
    [Swift.String]? cardAttachments;
    GraphQLScalars.NumericString ? chatItemId;
    nominal type descriptor for Swift.Int64 ? createdAtMs;
    Swift.Array -> GraphQLModels.GrokConversationItemsByRestIdOperationResponse.GrokConversationItemsByRestId.Items.DeepsearchHeaders ? deepsearchHeaders;
    GraphQLModels.GrokConversationItemsByRestIdOperationResponse.GrokConversationItemsByRestId.Items.Entities ? entities;
    Swift.Array -> GraphQLModels.GrokConversationItemsByRestIdOperationResponse.GrokConversationItemsByRestId.Items.FileAttachments ? fileAttachments;
    GraphQLModels.Enumeration GraphQLScalars.GrokMode ? grokMode;
    Swift.Bool? isPartial;
    Swift.String? message;
    Swift.Array -> GraphQLModels.TweetResultsFragment ? postIdsResults;
    GraphQLScalars.NumericString ? responseToChatItemId;
    GraphQLModels.Enumeration GraphQLScalars.GrokConversationSenderType ? senderType;
    Swift.String? thinkingTrace;
    GraphQLModels.GrokConversationItemsByRestIdOperationResponse.GrokConversationItemsByRestId.Items.UiLayout ? uiLayout;
    Swift.Array -> GraphQLModels.GrokConversationItemsByRestIdOperationResponse.GrokConversationItemsByRestId.Items.WebResults ? webResults;
}

@end

#endif /* _TtCCC13GraphQLModels46GrokConversationItemsByRestIdOperationResponse29GrokConversationItemsByRestId5Items_h */
