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
