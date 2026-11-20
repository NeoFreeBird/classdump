//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVAnalyticsPlaybackStartTracker_h
#define TAVAnalyticsPlaybackStartTracker_h
@import Foundation;

#include "TAVAnalyticsEventSink-Protocol.h"
#include "TAVAnalyticsTracker-Protocol.h"

@class NSError, NSMutableDictionary, NSMutableSet, NSObject, NSString;

@interface TAVAnalyticsPlaybackStartTracker : NSObject <TAVAnalyticsTracker>

@property (retain, nonatomic) NSMutableSet *playthroughIDsWithPlaybackStart;
@property (retain, nonatomic) NSMutableSet *playthroughIDsWithReplay;
@property (retain, nonatomic) NSError *lastFatalError;
@property (retain, nonatomic) NSMutableDictionary *intentToPlayWallTimeForPlaythrough;
@property (retain, nonatomic) NSMutableSet *playlistItemKeyWithPlaybackStart;
@property (nonatomic) _Bool usePrepareWallTimeForIntentToPlay;
@property (retain, nonatomic) id <TAVAnalyticsEventSink> sink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)processState:(id)state;
- (void)private_processStartupErrorFromState:(id)state;

@end

#endif /* TAVAnalyticsPlaybackStartTracker_h */
