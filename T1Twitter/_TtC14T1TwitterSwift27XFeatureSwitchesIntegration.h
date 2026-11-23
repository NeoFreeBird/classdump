//
#ifndef _TtC14T1TwitterSwift27XFeatureSwitchesIntegration_h
#define _TtC14T1TwitterSwift27XFeatureSwitchesIntegration_h
@import Foundation;

@class NSObject, T1TwitterSwift.XFeatureSwitchesImpressionLogger, T1TwitterSwift.XFeatureSwitchesNetworkProvider;

@interface T1TwitterSwift.XFeatureSwitchesIntegration : NSObject { // (Swift)
    /* instance variables */
    T1TwitterSwift.XFeatureSwitchesNetworkProvider networkProvider;
    T1TwitterSwift.XFeatureSwitchesImpressionLogger impressionLogger;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
- (_Bool)startWithDeviceGuestID:(unsigned long long)id;
- (void)applicationDidEnterBackground;
- (void)refreshDeviceIfNecessaryWithGuestAccountID:(id)id;

@end

#endif /* _TtC14T1TwitterSwift27XFeatureSwitchesIntegration_h */
