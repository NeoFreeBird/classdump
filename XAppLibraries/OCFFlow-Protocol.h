//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFFlow_Protocol_h
#define OCFFlow_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFNTwitterAccount.h"

@protocol OCFFlow <NSObject>

@required

@property (nonatomic, readonly) TFNTwitterAccount *account;
@property (nonatomic, readonly) _Bool flowInProgress;
@property (nonatomic, readonly) _Bool flowInProgress;
@property (nonatomic, readonly) _Bool willViewAccountOnFlowCompletion;

/* required instance methods */
- (_Bool)isFlowInProgress;
- (_Bool)isFlowInProgress;
- (void)addFlowCompletionObserver:(id)observer selector:(SEL)selector;
- (void)addFlowCompletionObserver:(id)observer selector:(SEL)selector;
- (void)removeFlowCompletionObserver:(id)observer;
- (void)removeFlowCompletionObserver:(id)observer;
- (void)addFlowCompletionHandler:(id /* block */)handler;
- (void)addFlowCompletionHandler:(id /* block */)handler;
- (void)completeFlowAnimated:(_Bool)animated completion:(id /* block */)completion;
- (void)completeFlowAnimated:(_Bool)animated completion:(id /* block */)completion;

@optional

@end

#endif /* OCFFlow_Protocol_h */
