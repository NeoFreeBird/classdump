//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef CAAction_Protocol_h
#define CAAction_Protocol_h
@import Foundation;

@protocol CAAction

@required

/* required instance methods */
- (void)runActionForKey:(id)key object:(id)object arguments:(id)arguments;
- (void)runActionForKey:(id)key object:(id)object arguments:(id)arguments;

@optional

@end

#endif /* CAAction_Protocol_h */
