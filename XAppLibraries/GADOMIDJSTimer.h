//
#ifndef GADOMIDJSTimer_h
#define GADOMIDJSTimer_h
@import Foundation;

#include "GADOMIDJSInvoker-Protocol.h"

@class NSMutableSet, NSObject;

@interface GADOMIDJSTimer : NSObject

@property (nonatomic) unsigned long long timerIdCounter;
@property (nonatomic) _Bool isAppActive;
@property (weak, nonatomic) id <GADOMIDJSInvoker> jsInvoker;
@property (readonly, nonatomic) NSMutableSet *timerIds;

/* class methods */
+ (id)timer;

/* instance methods */
- (id)init;
- (void)observeAppStateChanges;
- (void)observeNotification:(id)notification;
- (void)onAppStateChange:(id)change;
- (double)minTimeout;
- (void)setupMethodsForJSObject:(id)jsobject;
- (id)scheduleTimerWithTimeout:(double)timeout callback:(id)callback repeatable:(_Bool)repeatable;
- (void)scheduleTimerWithId:(id)id timeout:(double)timeout callback:(id)callback repeatable:(_Bool)repeatable;
- (void)handleTimerWithId:(id)id timeout:(double)timeout callback:(id)callback repeatable:(_Bool)repeatable;
- (void)cancelTimerWithId:(id)id;
- (void)cancelAllTimers;

@end

#endif /* GADOMIDJSTimer_h */
