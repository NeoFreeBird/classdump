//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASSpacesFeatureConfiguration_Protocol_h
#define TASSpacesFeatureConfiguration_Protocol_h
@import Foundation;

@protocol TASSpacesFeatureConfiguration

@required

@property (readonly, nonatomic) float soundsVolume;
@property (readonly, nonatomic) _Bool isWelcomeTrayTitleFocusSkipEnabled;

@optional

@end

#endif /* TASSpacesFeatureConfiguration_Protocol_h */
