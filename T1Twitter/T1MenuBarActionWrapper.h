//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1MenuBarActionWrapper_h
#define T1MenuBarActionWrapper_h
@import Foundation;

@class NSObject;

@interface T1MenuBarActionWrapper : NSObject

@property (readonly, nonatomic) SEL action;

/* instance methods */
- (id)initWithAction:(SEL)action;

@end

#endif /* T1MenuBarActionWrapper_h */
