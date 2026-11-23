//
#ifndef T1FetchSpaceOperation_h
#define T1FetchSpaceOperation_h
@import Foundation;

#include "TASVoiceAccountPerspective-Protocol.h"

@class NSString, TFSConcurrentOperation;

@interface T1FetchSpaceOperation : TFSConcurrentOperation

@property (readonly, nonatomic) id <TASVoiceAccountPerspective> voiceAccount;
@property (readonly, nonatomic) NSString *spaceID;
@property (readonly, nonatomic) _Bool shouldCheckAutoJoining;
@property (readonly, nonatomic) id /* block */ completion;

/* instance methods */
- (id)initWithVoiceAccount:(id)account spaceID:(id)id shouldCheckAutoJoining:(_Bool)joining completion:(id /* block */)completion;
- (void)fetchSpaceWithSpaceID:(id)id shouldCheckAutoJoining:(_Bool)joining voiceAccount:(id)account completion:(id /* block */)completion;
- (void)run;

@end

#endif /* T1FetchSpaceOperation_h */
