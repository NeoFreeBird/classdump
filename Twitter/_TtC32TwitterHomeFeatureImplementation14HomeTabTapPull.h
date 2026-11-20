//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC32TwitterHomeFeatureImplementation14HomeTabTapPull_h
#define _TtC32TwitterHomeFeatureImplementation14HomeTabTapPull_h
@import Foundation;

@class NSObject, TwitterHomeFeatureImplementation.HomeLogoRefreshTuning.TabTap, _$sSd, _$sSo13CADisplayLinkCSg, _$syyc;

@interface TwitterHomeFeatureImplementation.HomeTabTapPull : NSObject { // (Swift)
    /* instance variables */
    TwitterHomeFeatureImplementation.HomeLogoRefreshTuning.TabTap tuning;
    TwitterHomeFeatureImplementation.HomeTabTapPull.Frame function type (escaping) update;
    () -> () completion;
    Swift.Double startTime;
    __C.CADisplayLink? displayLink;
}

/* instance methods */
- (void)step:(id)step;
- (id)init;

@end

#endif /* _TtC32TwitterHomeFeatureImplementation14HomeTabTapPull_h */
