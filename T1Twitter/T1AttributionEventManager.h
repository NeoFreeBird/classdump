//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1AttributionEventManager_h
#define T1AttributionEventManager_h
@import Foundation;

@class NSMutableDictionary, NSObject, NSString, TFNHUD, TFSTimer;

@interface T1AttributionEventManager : NSObject {
    /* instance variables */
    _Bool _didBecomeActive;
    _Bool _didContinueUserActivity;
    _Bool _didEnterBackground;
    _Bool _didHandleLaunchURL;
    _Bool _didHandleShortcutURL;
    _Bool _didEnqueueVisibleAttributionOpenEvent;
    NSMutableDictionary *_deferredDispatchBlocksForDidBecomeActive;
    NSString *_vendorIDString;
    TFNHUD *_postAttributionEventHUD;
    TFSTimer *_postAttributionEventTimeoutTimer;
}

/* class methods */
+ (id)sharedManager;
+ (void)_t1_fetchAppleAttributionParametersWithCompletion:(id /* block */)completion;
+ (void)_t1_fetchValueWithTimeout:(double)timeout executedOnQueue:(const char *)queue valueFetcher:(id /* block */)fetcher cacheReader:(id /* block */)reader cacheWriter:(id /* block */)writer completion:(id /* block */)completion;
+ (id)_t1_referralSourceScribeParametersForUrl:(id)url;
+ (id)_t1_trackingStringForQueryParameters:(id)parameters;
+ (id)_t1_scribeParametersForTrackingString:(id)string;
+ (void)_t1_storeLandingReferralSource:(id)source;
+ (id)_t1_fetchStoredLandingReferralSource:(id)source bySubKey:(id)key;
+ (id)_t1_trackingStringForShortenedSource:(id)source withShortenedTrackingParameters:(id)parameters;
+ (id)_t1_fetchStoredReferralSourceScribeParameters;
+ (id)_t1_standardUserDefaults;
+ (id)_t1_scribeForAccount:(id)account;

/* instance methods */
- (void)fetchAttributionHeaderFieldsWithCompletion:(id /* block */)completion;
- (void)resetStoredDates;
- (id)_t1_attributionHeaderFields;
- (_Bool)isExternalReferralURL:(id)url;
- (id)_t1_attributionBodyFieldsVisible:(_Bool)visible;
- (id)_t1_dateOfCurrentInstallation;
- (void)_t1_fetchAsynchronousHeaderFieldsWithCompletion:(id /* block */)completion;
- (void)_t1_fetchAsynchronousBodyFieldsWithCompletion:(id /* block */)completion;
- (id)referralSourceParameters;
- (id)referralSourceForProfileClusterFollow;
- (id)referralSourceForProfileUserTimeline;
- (id)sessionToken;

@end

#endif /* T1AttributionEventManager_h */
