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
