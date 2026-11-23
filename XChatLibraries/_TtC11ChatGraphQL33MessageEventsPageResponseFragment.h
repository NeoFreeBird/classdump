//
#ifndef _TtC11ChatGraphQL33MessageEventsPageResponseFragment_h
#define _TtC11ChatGraphQL33MessageEventsPageResponseFragment_h
@import Foundation;

@class ChatGraphQL.GrokBotPromptFragment ?, ChatGraphQL.MessageRequestsInfoFragment ?, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars25GetMessageEventsErrorTypeOMn ?, _$s13GraphQLModels5UnionOMn ChatGraphQL.MessageEventsPageResponseFragment.Cursor ?, _$sSSSg, _$sSaySSG, _$sSbSg, _$ss5Int32VMn ?, _TtCs12_SwiftObject;

@interface ChatGraphQL.MessageEventsPageResponseFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for GraphQLModels.Union ChatGraphQL.MessageEventsPageResponseFragment.Cursor ? cursor;
    Swift.Bool? enabledGrokBotInXChat;
    [Swift.String] encodedMessageEvents;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.GetMessageEventsErrorType ? errorCode;
    ChatGraphQL.GrokBotPromptFragment ? grokBotPrompt;
    nominal type descriptor for Swift.Int32 ? messageRequestsCount;
    ChatGraphQL.MessageRequestsInfoFragment ? messageRequestsInfo;
    Swift.String? usernameChangeWarningBody;
    Swift.String? usernameChangeWarningHeader;
    Swift.String? usernameChangeWarningText;
}

@end

#endif /* _TtC11ChatGraphQL33MessageEventsPageResponseFragment_h */
