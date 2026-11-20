//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterCompositionGeotagger_h
#define TFNTwitterCompositionGeotagger_h
@import Foundation;

@class NSObject;

@interface TFNTwitterCompositionGeotagger : NSObject

/* class methods */
+ (void)geotagComposition:(id)composition withPlace:(id)place location:(id)location interactedWithPlacePicker:(_Bool)picker includeCoordinates:(_Bool)coordinates geotagSettingEnabled:(_Bool)enabled locationServicesAvailable:(_Bool)available geotagButtonActive:(_Bool)active;

@end

#endif /* TFNTwitterCompositionGeotagger_h */
