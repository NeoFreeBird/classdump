//
#ifndef T1TranslateButtonDisplayHelper_h
#define T1TranslateButtonDisplayHelper_h
@import Foundation;

@class NSObject;

@interface T1TranslateButtonDisplayHelper : NSObject // (Swift)

/* class methods */
+ (_Bool)canShowTranslationButtonFor:(id)_for;
+ (_Bool)canShowTranslationButtonFor:(id)_for account:(id)account;

/* instance methods */
- (id)init;

@end

#endif /* T1TranslateButtonDisplayHelper_h */
