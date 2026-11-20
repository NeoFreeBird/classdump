//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1PlayerBroadcastSessionProducible_h
#define T1PlayerBroadcastSessionProducible_h
@import Foundation;

#include "TFCCardDataSource-Protocol.h"
#include "TVPPlayerSessionProducible-Protocol.h"

@class NSObject, NSString, TFSTwitterBroadcast;

@interface T1PlayerBroadcastSessionProducible : NSObject <TVPPlayerSessionProducible>

@property (readonly, nonatomic) TFSTwitterBroadcast *broadcast;
@property (readonly, nonatomic) id <TFCCardDataSource> cardDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBroadcast:(id)broadcast cardDataSource:(id)source;
- (id)init;
- (_Bool)canProducePlayerSessionWithAccount:(id)account;
- (id)produceSessionForConfiguration:(id)configuration account:(id)account playbackObservers:(id)observers initialScribeContext:(id)context;

@end

#endif /* T1PlayerBroadcastSessionProducible_h */
