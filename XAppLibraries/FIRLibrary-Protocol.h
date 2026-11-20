//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRLibrary_Protocol_h
#define FIRLibrary_Protocol_h
@import Foundation;

@protocol FIRLibrary

@required

/* class methods */
+ (id)componentsToRegister;

@optional

@end

#endif /* FIRLibrary_Protocol_h */
