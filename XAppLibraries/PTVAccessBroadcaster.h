//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVAccessBroadcaster_h
#define PTVAccessBroadcaster_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "PTVBroadcast.h"
#include "PTVChatRoomAccess-Protocol.h"
#include "PTVChatRoomPerms.h"
#include "PTVPublishLadder.h"

@class NSArray, NSObject, NSString;

@interface PTVAccessBroadcaster : NSObject <PTVChatRoomAccess, NSSecureCoding>

@property (retain) NSString *thumbnail_upload_url;
@property (readonly) PTVBroadcast *broadcast;
@property (readonly) NSString *protocol;
@property (readonly) NSString *host;
@property (readonly) NSString *stream_name;
@property (readonly) NSString *application;
@property (readonly) NSString *credential;
@property (readonly) NSString *private_protocol;
@property (readonly) NSString *webrtc_url;
@property (readonly) int private_port;
@property (readonly) int port;
@property (readonly) NSArray *pspVersion;
@property (readonly) PTVPublishLadder *publishLadder;
@property (readonly) _Bool shouldLog;
@property (readonly) _Bool readOnly;
@property (readonly) PTVChatRoomPerms *chatRoomPerms;
@property (readonly) long long participant_index;
@property (readonly) NSString *roomID;
@property (readonly, nonatomic) _Bool isModerator;
@property (readonly) NSString *endpoint;
@property (readonly) NSString *accessToken;
@property (readonly) _Bool sendStats;
@property (readonly) NSString *replayEndpoint;
@property (readonly) NSString *replayAccessToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)bestReplayEndpoint;
- (id)bestReplayAccessToken;
- (id)initWithBroadcast:(id)broadcast dictionary:(id)dictionary;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* PTVAccessBroadcaster_h */
