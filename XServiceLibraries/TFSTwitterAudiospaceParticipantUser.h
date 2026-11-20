//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAudiospaceParticipantUser_h
#define TFSTwitterAudiospaceParticipantUser_h
@import Foundation;

#include "TFSTwitterCanonicalUser-Protocol.h"
#include "TFSTwitterUserReference.h"

@class NSObject, NSString;

@interface TFSTwitterAudiospaceParticipantUser : NSObject // (Swift)

@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *periscopeUserID;
@property (nonatomic, readonly) TFSTwitterUserReference *userReference;
@property (nonatomic, readonly) id <TFSTwitterCanonicalUser> user;
@property (nonatomic, readonly) _Bool isMutedByAdmin;
@property (nonatomic, readonly) _Bool isMutedByGuest;
@property (nonatomic, readonly) NSString *raiseHandEmoji;
@property (nonatomic, readonly) NSString *communityRole;

/* instance methods */
- (id)initWithPeriscopeUserID:(id)id userReference:(id)reference user:(id)user isMutedByAdmin:(_Bool)admin isMutedByGuest:(_Bool)guest raiseHandEmoji:(id)emoji communityRole:(id)role;
- (id)init;

@end

#endif /* TFSTwitterAudiospaceParticipantUser_h */
