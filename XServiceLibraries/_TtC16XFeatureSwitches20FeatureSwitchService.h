//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16XFeatureSwitches20FeatureSwitchService_h
#define _TtC16XFeatureSwitches20FeatureSwitchService_h
@import Foundation;

@class XFeatureSwitches.FeatureSwitchManifest, XFeatureSwitches.RefreshCoordinator, XFeatureSwitchesAPI.FeatureSwitchConfiguration, XFeatureSwitchesAPI.FeatureSwitchImpressionLogging ?, XFeatureSwitchesAPI.UnfairLock, _$sSDySS XFeatureSwitches.FeatureSwitchStore, _TtCs12_SwiftObject;

@interface XFeatureSwitches.FeatureSwitchService : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XFeatureSwitchesAPI.FeatureSwitchConfiguration configuration;
    XFeatureSwitches.FeatureSwitchManifest manifest;
    XFeatureSwitches.RefreshCoordinator refreshCoordinator;
    XFeatureSwitchesAPI.UnfairLock lock;
    Swift.Dictionary empty-list Swift.String XFeatureSwitches.FeatureSwitchStore stores;
    XFeatureSwitchesAPI.FeatureSwitchImpressionLogging ? impressionLogger;
}

@end

#endif /* _TtC16XFeatureSwitches20FeatureSwitchService_h */
