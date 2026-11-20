//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRCancelPostAlert_h
#define TCRCancelPostAlert_h
@import Foundation;

@class NSObject;

@interface TCRCancelPostAlert : NSObject // (Swift)

/* class methods */
+ (_Bool)presentFromViewController:(id)controller hidesKeepEditingButton:(_Bool)button onDiscard:(id /* block */)discard onSaveDraft:(id /* block */)draft onKeepEditing:(id /* block */)editing;

/* instance methods */
- (id)init;

@end

#endif /* TCRCancelPostAlert_h */
