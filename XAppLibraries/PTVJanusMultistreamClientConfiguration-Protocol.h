//
#ifndef PTVJanusMultistreamClientConfiguration_Protocol_h
#define PTVJanusMultistreamClientConfiguration_Protocol_h
@import Foundation;

@class NSNumber, NSString;

@protocol PTVJanusMultistreamClientConfiguration

@required

@property (nonatomic, readonly) NSString *roomID;
@property (nonatomic, readonly) NSString *janusURL;
@property (nonatomic, readonly) NSNumber *janusSessionID;
@property (nonatomic, readonly) NSString *streamName;
@property (nonatomic, readonly) NSString *vidManToken;
@property (nonatomic, readonly) NSString *guestServicesSessionUUID;
@property (nonatomic) _Bool isAudioOnly;
@property (nonatomic, readonly) _Bool isPrivate;
@property (nonatomic, readonly) NSNumber *initialBitrate;
@property (nonatomic, readonly) _Bool useDTX;
@property (nonatomic, readonly) _Bool isXChatGroupCall;
@property (nonatomic, readonly) _Bool isAVChatJanusDisableCameraEnabled;

@optional

@end

#endif /* PTVJanusMultistreamClientConfiguration_Protocol_h */
