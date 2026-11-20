//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift20QuickPostBarExposure_h
#define _TtC14T1TwitterSwift20QuickPostBarExposure_h
@import Foundation;

@class NSObject, Swift.Bool, _$sSo17TFNTwitterAccountC;

@interface T1TwitterSwift.QuickPostBarExposure : NSObject { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    Swift.Bool isOwed;
}

/* instance methods */
- (id)initWithAccount:(id)account;
- (void)featureSwitchesDidUpdate;
- (void)hostIsVisibleInTraitCollection:(id)collection;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift20QuickPostBarExposure_h */
