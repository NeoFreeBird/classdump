//
#ifndef TASSpacesFeatureConfiguration_Protocol_h
#define TASSpacesFeatureConfiguration_Protocol_h
@import Foundation;

@protocol TASSpacesFeatureConfiguration

@required

@property (nonatomic, readonly) float soundsVolume;
@property (nonatomic, readonly) _Bool isWelcomeTrayTitleFocusSkipEnabled;

@optional

@end

#endif /* TASSpacesFeatureConfiguration_Protocol_h */
