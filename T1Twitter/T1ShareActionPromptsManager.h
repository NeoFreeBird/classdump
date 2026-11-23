//
#ifndef T1ShareActionPromptsManager_h
#define T1ShareActionPromptsManager_h
@import Foundation;

@class NSObject;

@interface T1ShareActionPromptsManager : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *statusID;
}

/* class methods */
+ (id)shared;
+ (void)t1_resetShareTooltipPrompt:(id)prompt;
+ (void)t1_resetSharePromptThreshold;

/* instance methods */
- (id)init;
- (void)configurePromptsManagerFor:(id)_for statusID:(long long)id;

@end

#endif /* T1ShareActionPromptsManager_h */
