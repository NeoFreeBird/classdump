//
#ifndef GADOMIDSDK_h
#define GADOMIDSDK_h
@import Foundation;

#include "GADOMIDActivityMonitor.h"
#include "GADOMIDAdSessionRegistry.h"
#include "GADOMIDAdSessionRegistryStateObserver-Protocol.h"
#include "GADOMIDClockProtocol-Protocol.h"
#include "GADOMIDStateWatcher.h"
#include "GADOMIDStateWatcherDelegate-Protocol.h"
#include "GADOMIDTreeWalker.h"

@class NSObject, NSString;

@interface GADOMIDSDK : NSObject <GADOMIDAdSessionRegistryStateObserver, GADOMIDStateWatcherDelegate>

@property (retain, nonatomic) GADOMIDAdSessionRegistry *adSessionRegistry;
@property (retain, nonatomic) GADOMIDStateWatcher *stateWatcher;
@property (retain, nonatomic) GADOMIDTreeWalker *treeWalker;
@property (retain, nonatomic) GADOMIDActivityMonitor *activityMonitor;
@property (retain, nonatomic) id <GADOMIDClockProtocol> clock;
@property (readonly) _Bool active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)versionString;
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)appInfo;
- (_Bool)activate;
- (void)updateLastActivity;
- (void)start;
- (void)stop;
- (void)appDidBecomeActive;
- (void)appDidResignActive;
- (void)adSessionRegistryDidBecomeActive;
- (void)adSessionRegistryDidResignActive;
- (void)adSessionDidBecomeActive:(id)active;
- (_Bool)isActive;

@end

#endif /* GADOMIDSDK_h */
