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
