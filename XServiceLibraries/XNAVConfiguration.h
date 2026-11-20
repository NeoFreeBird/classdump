//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef XNAVConfiguration_h
#define XNAVConfiguration_h
@import Foundation;

@class NSObject;

@interface XNAVConfiguration : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 configuration;
}

/* class methods */
+ (id)standardConfiguration;
+ (id)pinnedConfiguration;
+ (id)hiddenConfiguration;
+ (id)pinnedTransparentConfiguration;
+ (id)configurationWithCollapseMode:(long long)mode popGestureMode:(long long)mode;
+ (id)configurationWithCollapseMode:(long long)mode popGestureMode:(long long)mode solidBackgroundColor:(id)color;

/* instance methods */
- (id)configurationWithPopGestureMode:(long long)mode;
- (id)configurationWithScrollEdgeTreatmentMode:(long long)mode;
- (id)configurationWithBarBackgroundTouchMode:(long long)mode;
- (id)init;

@end

#endif /* XNAVConfiguration_h */
