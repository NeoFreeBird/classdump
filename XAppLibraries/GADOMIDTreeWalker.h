//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADOMIDTreeWalker_h
#define GADOMIDTreeWalker_h
@import Foundation;

#include "GADOMIDAdSessionRegistry.h"
#include "GADOMIDScreenProcessor.h"
#include "GADOMIDStatePublisher.h"
#include "GADOMIDViewProcessor.h"
#include "GADOMIDWindowProcessor.h"

@class NSDate, NSObject, NSTimer;
@protocol GADOMIDTreeWalkerTimeLogger;

@interface GADOMIDTreeWalker : NSObject {
    /* instance variables */
    NSTimer *_timer;
    unsigned long long _count;
    unsigned long long _nonZeroAlphaObstructionCount;
    NSDate *_date1;
    NSDate *_date2;
}

@property (readonly, nonatomic) GADOMIDAdSessionRegistry *adSessionRegistry;
@property (readonly, nonatomic) GADOMIDScreenProcessor *screenProcessor;
@property (readonly, nonatomic) GADOMIDWindowProcessor *windowProcessor;
@property (readonly, nonatomic) GADOMIDViewProcessor *viewProcessor;
@property (readonly, nonatomic) GADOMIDStatePublisher *statePublisher;
@property (weak, nonatomic) id <GADOMIDTreeWalkerTimeLogger> timeLogger;

/* instance methods */
- (id)initWithAdSessionRegistry:(id)registry statePublisher:(id)publisher;
- (void)start;
- (void)onTick:(id)tick;
- (void)stop;
- (void)pause;
- (void)updateTreeState;
- (void)beforeWalk;
- (void)afterWalk;
- (void)doWalk;
- (void)doWalkScenes;
- (id)sceneSessions;
- (id)findPipSessions;
- (void)doWalkWithAdSessions:(id)sessions container:(id)container;
- (void)walkView:(id)view processor:(id)processor parentState:(id)state adViewCache:(id)cache;
- (void)walkChildrenForView:(id)view processor:(id)processor state:(id)state type:(unsigned long long)type adViewCache:(id)cache;
- (_Bool)handleAdView:(id)view withState:(id)state adViewCache:(id)cache;
- (void)checkFriendlyObstruction:(id)obstruction withState:(id)state adViewCache:(id)cache;
- (void)handleNotVisibleAdView:(id)view view:(id)view viewState:(id)state adViewCache:(id)cache;

@end

#endif /* GADOMIDTreeWalker_h */
