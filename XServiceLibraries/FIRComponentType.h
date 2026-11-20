//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRComponentType_h
#define FIRComponentType_h
@import Foundation;

@class NSObject;

@interface FIRComponentType : NSObject

/* class methods */
+ (id)instanceForProtocol:(id)protocol inContainer:(id)container;

@end

#endif /* FIRComponentType_h */
