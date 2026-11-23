//
#ifndef GACAppCheckTokenRefresher_h
#define GACAppCheckTokenRefresher_h
@import Foundation;

#include "GACAppCheckSettingsProtocol-Protocol.h"
#include "GACAppCheckTimerProtocol-Protocol.h"
#include "GACAppCheckTokenRefreshResult.h"
#include "GACAppCheckTokenRefresherProtocol-Protocol.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface GACAppCheckTokenRefresher : NSObject <GACAppCheckTokenRefresherProtocol>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *refreshQueue;
@property (readonly, nonatomic) id <GACAppCheckSettingsProtocol> settings;
@property (readonly, nonatomic) id /* block */ timerProvider;
@property (retain) id <GACAppCheckTimerProtocol> timer;
@property unsigned long long retryCount;
@property (retain, nonatomic) GACAppCheckTokenRefreshResult *initialRefreshResult;
@property (copy, nonatomic) id /* block */ tokenRefreshHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)backoffTimeForRetryCount:(long long)count;
+ (double)randomMilliseconds;

/* instance methods */
- (id)initWithRefreshResult:(id)result timerProvider:(id /* block */)provider settings:(id)settings;
- (id)initWithRefreshResult:(id)result settings:(id)settings;
- (void)dealloc;
- (void)updateWithRefreshResult:(id)result;
- (void)refresh;
- (void)scheduleWithTokenRefreshResult:(id)result;
- (void)scheduleRefreshAtDate:(id)date;
- (void)cancelTimer;
- (id)nextRefreshDateWithTokenRefreshResult:(id)result;

@end

#endif /* GACAppCheckTokenRefresher_h */
