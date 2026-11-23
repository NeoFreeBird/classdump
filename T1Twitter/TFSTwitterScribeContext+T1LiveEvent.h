//
#ifndef TFSTwitterScribeContext_T1LiveEvent_h
#define TFSTwitterScribeContext_T1LiveEvent_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "T1ShareableByURL-Protocol.h"
#include "TFSTwitterCanonicalUser-Protocol.h"
#include "TTACoreShareable-Protocol.h"

@class NSArray, NSObject, NSString, TFSTwitterEntityImageInfo, TFSTwitterLiveEventRemindMeSubscription, TFSTwitterLiveEventSponsorshipDetails, TFSTwitterRect;

@interface TFSTwitterScribeContext (T1LiveEvent) <TSCScribeContextRepresentable>

/* instance methods */
- (id)hostBroadcastID;
- (id)tavScribeContext;
- (id)hostLiveEventID;
- (id)liveEventTimelineID;
- (id)_t1_liveVideoEventParameterForKey:(id)key;

@end

#endif /* TFSTwitterScribeContext_T1LiveEvent_h */
