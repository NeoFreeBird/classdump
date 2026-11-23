//
#ifndef T1PlayerAVPlayerSessionSourceSessionProducible_h
#define T1PlayerAVPlayerSessionSourceSessionProducible_h
@import Foundation;

#include "TVPPlayerSessionProducible-Protocol.h"
#include "TVPPlayerSessionSource-Protocol.h"

@class NSObject, NSString;

@interface T1PlayerAVPlayerSessionSourceSessionProducible : NSObject <TVPPlayerSessionProducible>

@property (readonly, nonatomic) id <TVPPlayerSessionSource> avSessionSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAVSessionSource:(id)source;
- (id)init;
- (_Bool)canProducePlayerSessionWithAccount:(id)account;
- (id)produceSessionForConfiguration:(id)configuration account:(id)account playbackObservers:(id)observers initialScribeContext:(id)context;

@end

#endif /* T1PlayerAVPlayerSessionSourceSessionProducible_h */
