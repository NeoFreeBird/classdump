//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef Subsystem_ios_iosArm64_mainLastSeenSendHandler_Protocol_h
#define Subsystem_ios_iosArm64_mainLastSeenSendHandler_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainLastSeenSendHandler

@required

/* required instance methods */
- (void)markReadConvId:(id)id;
- (void)markReadConvId:(id)id;
- (void)markReadConvIds:(id)ids;
- (void)markReadConvIds:(id)ids;
- (void)markUnreadConvId:(id)id fromSequenceNumber:(id)number;
- (void)markUnreadConvId:(id)id fromSequenceNumber:(id)number;
- (void)maybeUpdateLastSeenByMeConvId:(id)id visibleReadableSequenceNumbers:(id)numbers scrolledToBottom:(_Bool)bottom previewLatestSeqNum:(id)num;
- (void)maybeUpdateLastSeenByMeConvId:(id)id visibleReadableSequenceNumbers:(id)numbers scrolledToBottom:(_Bool)bottom previewLatestSeqNum:(id)num;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainLastSeenSendHandler_Protocol_h */
