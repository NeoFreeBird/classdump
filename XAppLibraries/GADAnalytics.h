//
#ifndef GADAnalytics_h
#define GADAnalytics_h
@import Foundation;

@class NSObject;

@interface GADAnalytics : NSObject {
    /* instance variables */
    id _adExposureReporter;
    id _analyticsIdentifiers;
    id _analytics;
    id _screenViewReporter;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)initWithFIRFramework;
- (_Bool)validateAnalytics;
- (id)googleAppID;
- (id)appInstanceID;
- (id)adEventID;
- (id)appIDOrigin;
- (void)logEventWithName:(id)name adEventID:(id)id parameters:(id)parameters;
- (void)getScreenName:(id *)name screenClass:(id *)_class;
- (void)setScreenName:(id)name screenClass:(id)_class;
- (void)beginAdUnitExposure:(id)exposure;
- (void)endAdUnitExposure:(id)exposure;

@end

#endif /* GADAnalytics_h */
