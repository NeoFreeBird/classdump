//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
