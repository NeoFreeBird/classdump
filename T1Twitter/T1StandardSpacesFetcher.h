//
#ifndef T1StandardSpacesFetcher_h
#define T1StandardSpacesFetcher_h
@import Foundation;

#include "TASSpacesFetcher-Protocol.h"
#include "TASVoiceAccountPerspective-Protocol.h"

@class NSObject, NSOperationQueue;

@interface T1StandardSpacesFetcher : NSObject <TASSpacesFetcher>

@property (retain, nonatomic) id <TASVoiceAccountPerspective> voiceAccount;
@property (retain, nonatomic) NSOperationQueue *fetchQueue;

/* instance methods */
- (id)initWithContext:(id)context;
- (void)fetchSpaceWithSpaceID:(id)id shouldCheckAutoJoining:(_Bool)joining completion:(id /* block */)completion;
- (void)fetchExistingSpaceWithCompletion:(id /* block */)completion;

@end

#endif /* T1StandardSpacesFetcher_h */
