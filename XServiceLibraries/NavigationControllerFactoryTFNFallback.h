//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NavigationControllerFactoryTFNFallback_h
#define NavigationControllerFactoryTFNFallback_h
@import Foundation;

@class NSObject;

@interface NavigationControllerFactoryTFNFallback : NSObject

/* class methods */
+ (id)makeWithRootViewController:(id)controller;
+ (id)makeWithRootViewController:(id)controller allowsInteractivePop:(_Bool)pop;
+ (id)make;

@end

#endif /* NavigationControllerFactoryTFNFallback_h */
