//
#ifndef T1StatusViewGrokAnalyzeEventHandler_h
#define T1StatusViewGrokAnalyzeEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewGrokAnalyzeEventHandler : NSObject // (Swift)

/* class methods */
+ (void)handleStatusViewEvent:(id)event controller:(id)controller scribeContext:(id)context;
+ (void)openGrokFor:(id)_for account:(id)account scribePage:(id)page scribeSection:(id)section scribeComponent:(id)component scribeParameters:(id)parameters followUpPrompt:(id)prompt prefillOnly:(_Bool)only menuItem:(long long)item presentAsSheetFrom:(id)from;

/* instance methods */
- (id)init;

@end

#endif /* T1StatusViewGrokAnalyzeEventHandler_h */
