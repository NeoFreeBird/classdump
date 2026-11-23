//
#ifndef _TtC16XFeatureSwitches18RefreshCoordinator_h
#define _TtC16XFeatureSwitches18RefreshCoordinator_h
@import Foundation;

@class XFeatureSwitches.FeatureSwitchFetching ?, XFeatureSwitches.FeatureSwitchManifest, XFeatureSwitchesAPI.FeatureSwitchConfiguration, XFeatureSwitchesAPI.UnfairLock, _$sSDySSScTySb _$ss5NeverOMn, _TtCs12_SwiftObject;

@interface XFeatureSwitches.RefreshCoordinator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XFeatureSwitchesAPI.FeatureSwitchConfiguration configuration;
    XFeatureSwitches.FeatureSwitchManifest manifest;
    XFeatureSwitches.FeatureSwitchFetching ? fetcher;
    XFeatureSwitchesAPI.UnfairLock taskLock;
    Swift.Dictionary empty-list Swift.StringSwift.Task empty-list Swift.Bool nominal type descriptor for Swift.Never inFlightTasks;
}

@end

#endif /* _TtC16XFeatureSwitches18RefreshCoordinator_h */
