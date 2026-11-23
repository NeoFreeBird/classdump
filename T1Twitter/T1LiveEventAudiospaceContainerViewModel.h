//
#ifndef T1LiveEventAudiospaceContainerViewModel_h
#define T1LiveEventAudiospaceContainerViewModel_h
@import Foundation;

#include "T1LiveEvent.h"
#include "TASSpaceModel-Protocol.h"
#include "TFSTwitterCanonicalUser-Protocol.h"

@class NSObject, TFNTwitterAccount, TFSTwitterAudiospace;

@interface T1LiveEventAudiospaceContainerViewModel : NSObject

@property (readonly, nonatomic) TFSTwitterAudiospace *audiospace;
@property (readonly, nonatomic) id <TFSTwitterCanonicalUser> creatorTwitterUser;
@property (readonly, nonatomic) T1LiveEvent *liveEvent;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) id <TASSpaceModel> spaceModel;

/* instance methods */
- (id)initWithAudiospace:(id)audiospace creatorTwitterUser:(id)user liveEvent:(id)event account:(id)account;
- (_Bool)isEqualToViewModel:(id)model;

@end

#endif /* T1LiveEventAudiospaceContainerViewModel_h */
