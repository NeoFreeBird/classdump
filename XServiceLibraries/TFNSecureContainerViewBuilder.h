//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNSecureContainerViewBuilder_h
#define TFNSecureContainerViewBuilder_h
@import Foundation;

@class NSObject;

@interface TFNSecureContainerViewBuilder : NSObject

/* class methods */
+ (id)build;
+ (id)build:(id *)build;

@end

#endif /* TFNSecureContainerViewBuilder_h */
