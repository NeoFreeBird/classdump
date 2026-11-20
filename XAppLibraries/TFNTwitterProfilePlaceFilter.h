//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterProfilePlaceFilter_h
#define TFNTwitterProfilePlaceFilter_h
@import Foundation;

@class NSObject;

@interface TFNTwitterProfilePlaceFilter : NSObject

/* class methods */
+ (id)placeItemsForPlaces:(id)places query:(id)query;

@end

#endif /* TFNTwitterProfilePlaceFilter_h */
