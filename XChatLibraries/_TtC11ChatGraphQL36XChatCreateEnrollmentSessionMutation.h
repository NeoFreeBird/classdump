//
#ifndef _TtC11ChatGraphQL36XChatCreateEnrollmentSessionMutation_h
#define _TtC11ChatGraphQL36XChatCreateEnrollmentSessionMutation_h
@import Foundation;

@class Swift.Bool, _$s13GraphQLModels26XChatDeviceDescriptorInputVMn ?, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSS, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface ChatGraphQL.XChatCreateEnrollmentSessionMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String publicKeyHash;
    nominal type descriptor for GraphQLModels.XChatDeviceDescriptorInput ? deviceDescriptor;
}

@end

#endif /* _TtC11ChatGraphQL36XChatCreateEnrollmentSessionMutation_h */
