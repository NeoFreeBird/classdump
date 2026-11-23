//
#ifndef XPostFailurePolicy_h
#define XPostFailurePolicy_h
@import Foundation;

@class NSObject;

@interface XPostFailurePolicy : NSObject // (Swift)

/* class methods */
+ (id)decisionForError:(id)error composition:(id)composition featureSwitches:(id)switches;

/* instance methods */
- (id)init;

@end

#endif /* XPostFailurePolicy_h */
