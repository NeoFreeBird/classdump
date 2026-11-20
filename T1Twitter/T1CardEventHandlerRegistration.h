//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1CardEventHandlerRegistration_h
#define T1CardEventHandlerRegistration_h
@import Foundation;

@class NSObject;

@interface T1CardEventHandlerRegistration : NSObject

/* class methods */
+ (void)registerCardEventHandlers;

@end

#endif /* T1CardEventHandlerRegistration_h */
