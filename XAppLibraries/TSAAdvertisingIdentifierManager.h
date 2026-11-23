//
#ifndef TSAAdvertisingIdentifierManager_h
#define TSAAdvertisingIdentifierManager_h
@import Foundation;

#include "TSAAdvertisingInformation.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface TSAAdvertisingIdentifierManager : NSObject

@property (retain) TSAAdvertisingInformation *cachedAdvertisingInformation;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;
@property (readonly, nonatomic) _Bool isAdvertisingTrackingEnabled;

/* class methods */
+ (id)sharedManager;

/* instance methods */
- (id)init;
- (_Bool)_tsa_isAdvertisingTrackingEnabledGivenIDFAString:(id)idfastring;
- (void)asyncFetchAdvertisingInformationWithCallback:(id /* block */)callback;
- (id)syncFetchAdvertisingInformation;
- (void)_tsa_willEnterForeground:(id)foreground;
- (void)_tsa_notification_authorizationManagerDidUpdateServiceStatus:(id)status;

@end

#endif /* TSAAdvertisingIdentifierManager_h */
