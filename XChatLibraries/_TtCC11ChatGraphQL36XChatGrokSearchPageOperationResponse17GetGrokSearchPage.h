//
#ifndef _TtCC11ChatGraphQL36XChatGrokSearchPageOperationResponse17GetGrokSearchPage_h
#define _TtCC11ChatGraphQL36XChatGrokSearchPageOperationResponse17GetGrokSearchPage_h
@import Foundation;

@class _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars17ConversationErrorOMn ?, _$s14GraphQLScalars13NumericStringVMn ?, _$sSSSg, _$sSa -> ChatGraphQL.XChatGrokSearchPageOperationResponse.GetGrokSearchPage.CitedWebResults ?, _$sSa -> ChatGraphQL.XChatGrokSearchPageOperationResponse.GetGrokSearchPage.WebResults ?, _$sSaySSGSg, _TtCs12_SwiftObject;

@interface ChatGraphQL.XChatGrokSearchPageOperationResponse.GetGrokSearchPage : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> ChatGraphQL.XChatGrokSearchPageOperationResponse.GetGrokSearchPage.CitedWebResults ? citedWebResults;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.ConversationError ? errorCode;
    nominal type descriptor for GraphQLScalars.NumericString ? id;
    Swift.String? message;
    Swift.Array -> ChatGraphQL.XChatGrokSearchPageOperationResponse.GetGrokSearchPage.WebResults ? webResults;
    [Swift.String]? xPostIds;
}

@end

#endif /* _TtCC11ChatGraphQL36XChatGrokSearchPageOperationResponse17GetGrokSearchPage_h */
