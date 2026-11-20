//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1EditLocationNUXPrompt_h
#define T1EditLocationNUXPrompt_h
@import Foundation;

@class NSObject;

@interface T1EditLocationNUXPrompt : NSObject // (Swift)

/* class methods */
+ (id)shared;

/* instance methods */
- (_Bool)presentEditLocationNUXPromptWithHostViewController:(id)controller account:(id)account;
- (id)init;

@end

#endif /* T1EditLocationNUXPrompt_h */
