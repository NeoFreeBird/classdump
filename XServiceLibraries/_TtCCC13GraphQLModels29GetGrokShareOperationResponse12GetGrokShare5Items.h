//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCCC13GraphQLModels29GetGrokShareOperationResponse12GetGrokShare5Items_h
#define _TtCCC13GraphQLModels29GetGrokShareOperationResponse12GetGrokShare5Items_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.GrokMode ?, GraphQLModels.Enumeration GraphQLScalars.GrokShareConversationSender ?, GraphQLModels.GetGrokShareOperationResponse.GetGrokShare.Items.Entities ?, GraphQLModels.GetGrokShareOperationResponse.GetGrokShare.Items.UiLayout ?, _$sSSSg, _$sSa -> GraphQLModels.GetGrokShareOperationResponse.GetGrokShare.Items.DeepsearchHeaders ?, _$sSa -> GraphQLModels.GetGrokShareOperationResponse.GetGrokShare.Items.FileAttachments ?, _$sSa -> GraphQLModels.GetGrokShareOperationResponse.GetGrokShare.Items.WebResults ?, _$sSa -> GraphQLModels.TweetResultsFragment ?, _$sSaySSGSg, _TtCs12_SwiftObject;

@interface GraphQLModels.GetGrokShareOperationResponse.GetGrokShare.Items : Swift._SwiftObject { // (Swift)
    /* instance variables */
    [Swift.String]? cardAttachments;
    Swift.Array -> GraphQLModels.GetGrokShareOperationResponse.GetGrokShare.Items.DeepsearchHeaders ? deepsearchHeaders;
    GraphQLModels.GetGrokShareOperationResponse.GetGrokShare.Items.Entities ? entities;
    Swift.Array -> GraphQLModels.GetGrokShareOperationResponse.GetGrokShare.Items.FileAttachments ? fileAttachments;
    GraphQLModels.Enumeration GraphQLScalars.GrokMode ? grokMode;
    Swift.String? message;
    Swift.Array -> GraphQLModels.TweetResultsFragment ? postIdsResults;
    GraphQLModels.Enumeration GraphQLScalars.GrokShareConversationSender ? sender;
    Swift.String? thinkingTrace;
    GraphQLModels.GetGrokShareOperationResponse.GetGrokShare.Items.UiLayout ? uiLayout;
    Swift.Array -> GraphQLModels.GetGrokShareOperationResponse.GetGrokShare.Items.WebResults ? webResults;
}

@end

#endif /* _TtCCC13GraphQLModels29GetGrokShareOperationResponse12GetGrokShare5Items_h */
