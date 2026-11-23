//
#ifndef _TtC6AVChat41AVChatJanusMultistreamClientConfiguration_h
#define _TtC6AVChat41AVChatJanusMultistreamClientConfiguration_h
@import Foundation;

#include "PTVJanusMultistreamClientConfiguration-Protocol.h"

@class NSNumber, NSString, Swift.Bool, _$sSS, _$sSSSg, _$sSo8NSNumberCSg, _TtCs12_SwiftObject;

@interface AVChat.AVChatJanusMultistreamClientConfiguration : Swift._SwiftObject <PTVJanusMultistreamClientConfiguration> // (Swift)

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
@property (nonatomic, readonly) _Bool isAVChatJanusDisableCameraEnabled;
@property (nonatomic, readonly) _Bool isXChatGroupCall;

@end

#endif /* _TtC6AVChat41AVChatJanusMultistreamClientConfiguration_h */
