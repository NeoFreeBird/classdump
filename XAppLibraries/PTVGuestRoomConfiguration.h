//
#ifndef PTVGuestRoomConfiguration_h
#define PTVGuestRoomConfiguration_h
@import Foundation;

@class NSNumber, NSObject, NSString;

@interface PTVGuestRoomConfiguration : NSObject {
    /* instance variables */
    NSNumber *_bitsPerSecond;
    NSNumber *_videoBitrateRatio;
}

@property (readonly, copy, nonatomic) NSString *roomID;
@property (readonly, nonatomic) long long roomBehavior;
@property (readonly, copy, nonatomic) NSString *vidManToken;
@property (readonly, copy, nonatomic) NSString *janusURL;
@property (readonly, nonatomic) NSNumber *janusSessionID;
@property (readonly, copy, nonatomic) NSString *streamName;
@property (readonly, copy, nonatomic) NSString *guestServicesSessionUUID;
@property (nonatomic) _Bool isAudioOnly;
@property (readonly, nonatomic) _Bool isPrivate;
@property (readonly, nonatomic) NSNumber *initialBitrate;
@property (readonly, nonatomic) _Bool useDTX;

/* instance methods */
- (_Bool)isXChatGroupCall;
- (_Bool)isAVChatJanusDisableCameraEnabled;
- (id)initWithRoomID:(id)id roomBehavior:(long long)behavior streamName:(id)name vidManToken:(id)token bitsPerSecond:(id)second videoBitrateRatio:(id)ratio janusURL:(id)url janusSessionID:(id)id guestServicesSessionUUID:(id)uuid isAudioOnly:(_Bool)only isPrivate:(_Bool)_private useDTX:(_Bool)dtx;
- (void)calculateInitialBitrateIfNeeded;
- (id)copyWithRoomBehavior:(long long)behavior useDTX:(_Bool)dtx;

@end

#endif /* PTVGuestRoomConfiguration_h */
