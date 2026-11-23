//
#ifndef GADOperation_h
#define GADOperation_h
@import Foundation;

@class NSError, NSObject, NSString;
@protocol OS_dispatch_group;

@interface GADOperation : NSObject {
    /* instance variables */
    id /* block */ _operationBlock;
    struct atomic_flag { _Atomic _Bool _Value; } _hasStarted;
    NSObject<OS_dispatch_group> *_completionGroup;
    id _result;
    NSError *_error;
    NSString *_operationName;
    double _timeout;
    id /* block */ _completionBlock;
}

/* instance methods */
- (id)initWithOperationName:(id)name timeout:(double)timeout operationBlock:(id /* block */)block completionBlock:(id /* block */)block;
- (void)dealloc;
- (void)start;

@end

#endif /* GADOperation_h */
