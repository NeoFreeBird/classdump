//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGraphQL26GroupInviteDetailsFragment_h
#define _TtC11ChatGraphQL26GroupInviteDetailsFragment_h
@import Foundation;

@class _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars19XChatGroupJoinStateOMn ?, _$s14GraphQLScalars13NumericStringVMn ?, _$sSSSg, _$ss5Int32VMn ?, _TtCs12_SwiftObject;

@interface ChatGraphQL.GroupInviteDetailsFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for GraphQLScalars.NumericString ? adminUserId;
    Swift.String? affiliateId;
    Swift.String? conversationId;
    nominal type descriptor for GraphQLScalars.NumericString ? expiresAtMsec;
    Swift.String? groupAvatarUrl;
    Swift.String? groupName;
    Swift.String? inviteUrl;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.XChatGroupJoinState ? joinState;
    nominal type descriptor for Swift.Int32 ? memberCount;
    Swift.String? token;
    Swift.String? welcomeMessage;
}

@end

#endif /* _TtC11ChatGraphQL26GroupInviteDetailsFragment_h */
