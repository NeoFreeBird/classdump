//
#ifndef _TtC11ChatGraphQL40XChatSendEnrollmentEncryptedKeysMutation_h
#define _TtC11ChatGraphQL40XChatSendEnrollmentEncryptedKeysMutation_h
@import Foundation;

@class Swift.Bool, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSS, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface ChatGraphQL.XChatSendEnrollmentEncryptedKeysMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String enrollmentID;
    Swift.String encryptedKeyMaterial;
}

@end

#endif /* _TtC11ChatGraphQL40XChatSendEnrollmentEncryptedKeysMutation_h */
