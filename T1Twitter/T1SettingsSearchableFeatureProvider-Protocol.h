//
#ifndef T1SettingsSearchableFeatureProvider_Protocol_h
#define T1SettingsSearchableFeatureProvider_Protocol_h
@import Foundation;

@class NSArray;

@protocol T1SettingsSearchableFeatureProvider

@required

@property (nonatomic, readonly) NSArray *searchableFeatures;

@optional

@end

#endif /* T1SettingsSearchableFeatureProvider_Protocol_h */
