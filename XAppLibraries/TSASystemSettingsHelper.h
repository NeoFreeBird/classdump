//
#ifndef TSASystemSettingsHelper_h
#define TSASystemSettingsHelper_h
@import Foundation;

@class NSObject, TFSTimer;

@interface TSASystemSettingsHelper : NSObject {
    /* instance variables */
    id /* block */ _completion;
    TFSTimer *_timeoutTimer;
}

/* instance methods */
- (void)openSettingsWithCompletion:(id /* block */)completion;
- (void)dealloc;
- (void)private_appWillEnterForeground;
- (void)private_callCompletion;
- (void)private_resetTimer;

@end

#endif /* TSASystemSettingsHelper_h */
