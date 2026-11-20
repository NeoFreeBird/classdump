//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1PushActionHandlerFactory_h
#define T1PushActionHandlerFactory_h
@import Foundation;

@class NSObject;

@interface T1PushActionHandlerFactory : NSObject

/* class methods */
+ (id)makeHandlerForIdentifier:(id)identifier;

@end

#endif /* T1PushActionHandlerFactory_h */
