//
#ifndef T1StatusMuteTextHelper_h
#define T1StatusMuteTextHelper_h
@import Foundation;

@class NSObject;

@interface T1StatusMuteTextHelper : NSObject

/* class methods */
+ (void)muteKeywordViewController:(id)controller didRefreshKeywordList:(id)list forKeywordString:(id)string action:(unsigned long long)action;
+ (void)muteKeywordViewController:(id)controller handleErrorForKeywordString:(id)string action:(unsigned long long)action isUserInputFormError:(_Bool)error;

@end

#endif /* T1StatusMuteTextHelper_h */
