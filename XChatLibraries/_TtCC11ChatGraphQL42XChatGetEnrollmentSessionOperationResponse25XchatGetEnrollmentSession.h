//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC11ChatGraphQL42XChatGetEnrollmentSessionOperationResponse25XchatGetEnrollmentSession_h
#define _TtCC11ChatGraphQL42XChatGetEnrollmentSessionOperationResponse25XchatGetEnrollmentSession_h
@import Foundation;

@class _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars21DeviceEnrollmentErrorOMn ?, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars27XChatDeviceEnrollmentStatusOMn ?, _$sSSSg, _TtCs12_SwiftObject;

@interface ChatGraphQL.XChatGetEnrollmentSessionOperationResponse.XchatGetEnrollmentSession : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String? encryptedKeyMaterial;
    Swift.String? enrolledDevicePublicKey;
    Swift.String? enrollmentId;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.DeviceEnrollmentError ? errorCode;
    Swift.String? newDevicePublicKey;
    Swift.String? publicKeyHash;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.XChatDeviceEnrollmentStatus ? status;
    Swift.String? userAgent;
}

@end

#endif /* _TtCC11ChatGraphQL42XChatGetEnrollmentSessionOperationResponse25XchatGetEnrollmentSession_h */
