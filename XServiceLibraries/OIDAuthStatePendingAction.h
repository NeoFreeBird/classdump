//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
