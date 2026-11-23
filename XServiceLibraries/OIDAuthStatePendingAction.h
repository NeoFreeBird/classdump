//
#ifndef OIDAuthStatePendingAction_h
#define OIDAuthStatePendingAction_h
@import Foundation;

@class NSObject;
@protocol OS_dispatch_queue;

@interface OIDAuthStatePendingAction : NSObject

@property (readonly, nonatomic) id /* block */ action;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

/* instance methods */
- (id)initWithAction:(id /* block */)action andDispatchQueue:(id)queue;

@end

#endif /* OIDAuthStatePendingAction_h */
