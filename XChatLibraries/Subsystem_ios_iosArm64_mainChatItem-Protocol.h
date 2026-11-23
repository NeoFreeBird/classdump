//
#ifndef Subsystem_ios_iosArm64_mainChatItem_Protocol_h
#define Subsystem_ios_iosArm64_mainChatItem_Protocol_h
@import Foundation;

@class NSString, Subsystem_ios_iosArm64_mainDmSequenceNumber, Subsystem_ios_iosArm64_mainKotlinInstant;

@protocol Subsystem_ios_iosArm64_mainChatItem

@required

@property (nonatomic, readonly) NSString *contentType;
@property (nonatomic, readonly) Subsystem_ios_iosArm64_mainKotlinInstant *created;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) Subsystem_ios_iosArm64_mainDmSequenceNumber *sequenceNumber;
@property (nonatomic, readonly) Subsystem_ios_iosArm64_mainDmSequenceNumber *sequenceNumberForReadState;

/* required instance methods */
- (id)id_;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainChatItem_Protocol_h */
