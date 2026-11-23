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
