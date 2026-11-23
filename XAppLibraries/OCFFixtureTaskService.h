//
#ifndef OCFFixtureTaskService_h
#define OCFFixtureTaskService_h
@import Foundation;

#include "OCFTaskService-Protocol.h"

@class NSError, NSObject, NSString;
@protocol OCFFixtureTaskServiceDelegate;

@interface OCFFixtureTaskService : NSObject <OCFTaskService> {
    /* instance variables */
    NSError *_parseError;
    long long _taskIndex;
    id /* block */ _taskProvider;
}

@property (weak, nonatomic) id <OCFFixtureTaskServiceDelegate> delegate;
@property (nonatomic) double fetchNextTaskWaitTime;
@property (retain, nonatomic) NSError *fetchNextTaskError;
@property (nonatomic) long long fetchNextTaskErrorDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFile:(id)file;
- (id)initWithJSONData:(id)jsondata;
- (id)initWithJSONArray:(id)jsonarray;
- (id)initWithTasks:(id)tasks;
- (id)initWithTaskProvider:(id /* block */)provider;
- (id)sendPreviousTask:(id)task withState:(id)state forAccountID:(id)id terminationReason:(long long)reason debugParameters:(id)parameters headerFields:(id)fields fetchNextTaskWithResponseBlock:(id /* block */)block;

@end

#endif /* OCFFixtureTaskService_h */
