//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
