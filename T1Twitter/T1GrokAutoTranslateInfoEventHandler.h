//
#ifndef T1GrokAutoTranslateInfoEventHandler_h
#define T1GrokAutoTranslateInfoEventHandler_h
@import Foundation;

@class NSObject;

@interface T1GrokAutoTranslateInfoEventHandler : NSObject // (Swift)

/* instance methods */
- (void)showInfoSheetWithSourceLanguage:(id)language account:(id)account controller:(id)controller sourceView:(id)view scribeContext:(id)context;
- (void)handleStatusViewEvent:(id)event controller:(id)controller scribeContext:(id)context;
- (id)init;

@end

#endif /* T1GrokAutoTranslateInfoEventHandler_h */
