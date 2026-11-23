//
#ifndef PTVModelSessionTaskInternal_h
#define PTVModelSessionTaskInternal_h
@import Foundation;

#include "PTVModelSession-Protocol.h"
#include "PTVModelSessionTask-Protocol.h"
#include "PTVModelSessionTaskContext-Protocol.h"

@class NSObject, NSString, NSURLSession, NSURLSessionTask;

@interface PTVModelSessionTaskInternal : NSObject <PTVModelSessionTask> {
    /* instance variables */
    NSURLSession *_session;
    NSURLSessionTask *_task;
    long long _mode;
    id <PTVModelSession> _owner;
}

@property (readonly, nonatomic) id <PTVModelSessionTaskContext> ptv_context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMode:(long long)mode context:(id)context owner:(id)owner;
- (void)dealloc;
- (void)_generateTask;
- (void)_handleCompletion:(id)completion data:(id)data error:(id)error;
- (void)ptv_start;

@end

#endif /* PTVModelSessionTaskInternal_h */
