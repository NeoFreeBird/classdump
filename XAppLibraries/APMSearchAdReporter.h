//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMSearchAdReporter_h
#define APMSearchAdReporter_h
@import Foundation;

#include "APMAlarm.h"
#include "APMPersistedConfig.h"

@class NSObject;

@interface APMSearchAdReporter : NSObject {
    /* instance variables */
    APMAlarm *_searchAdReporterAlarm;
    APMPersistedConfig *_persistedConfig;
}

@property (nonatomic) _Bool searchAdReporterEnabled;

/* instance methods */
- (id)initWithWorkerQueue:(id)queue persistedConfig:(id)config;
- (void)start;
- (void)dealloc;
- (void)maybeLogIAdCampaignEvent;
- (void)scheduleSearchAdReport;
- (void)cancelScheduling;
- (void)requestAttributionPayloadWithToken:(id)token;
- (id)adClientInstance;
- (void)logCampaignEventWithSearchAdCampaign:(_Bool)campaign campaign:(id)campaign term:(id)term;
- (void)fetchAttributionDetails;
- (_Bool)isSearchAdReporterEnabled;

@end

#endif /* APMSearchAdReporter_h */
