//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSync27ChatDeviceEnrollmentService_h
#define _TtC8ChatSync27ChatDeviceEnrollmentService_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatKeys.XChatIdentityKeyService, ChatSync.XChatLocalReset, ChatSyncState.ChatDeviceEnrollmentStream, ChatTransport.XChatGraphQLClient, ChatTransport.XChatThriftCodec, _$s13GraphQLModels26XChatDeviceDescriptorInputVMn, _$sScC -> ChatThrift.DeviceEnrollmentInstruction ? _$ss5NeverOMn ?, _$sScCySb _$ss5NeverOMn ?, _$sScTyyt _$ss5NeverOMn ?, _TtCs12_SwiftObject;

@interface ChatSync.ChatDeviceEnrollmentService : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatTransport.XChatGraphQLClient graphQLClient;
    ChatKeys.XChatIdentityKeyService identityKeyService;
    ChatSync.XChatLocalReset localReset;
    nominal type descriptor for GraphQLModels.XChatDeviceDescriptorInput deviceDescriptor;
    ChatSyncState.ChatDeviceEnrollmentStream stream;
    ChatTransport.XChatThriftCodec codec;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? enrollment;
    Swift.CheckedContinuation -> ChatThrift.DeviceEnrollmentInstruction ? nominal type descriptor for Swift.Never ? instructionWaiter;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? instructionTimeout;
    Swift.CheckedContinuation empty-list Swift.Bool nominal type descriptor for Swift.Never ? verificationWaiter;
}

@end

#endif /* _TtC8ChatSync27ChatDeviceEnrollmentService_h */
