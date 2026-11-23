//
#ifndef T1FeedbackTableViewCellFactory_h
#define T1FeedbackTableViewCellFactory_h
@import Foundation;

@class NSObject;

@interface T1FeedbackTableViewCellFactory : NSObject // (Swift)

/* class methods */
+ (id)feedbackCellForController:(id)controller accountID:(id)id indexPath:(id)path feedback:(id)feedback withUndoHandler:(id /* block */)handler;

/* instance methods */
- (id)init;

@end

#endif /* T1FeedbackTableViewCellFactory_h */
