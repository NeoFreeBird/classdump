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
