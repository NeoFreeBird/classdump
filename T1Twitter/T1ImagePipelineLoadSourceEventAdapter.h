//
#ifndef T1ImagePipelineLoadSourceEventAdapter_h
#define T1ImagePipelineLoadSourceEventAdapter_h
@import Foundation;

#include "T1ImagePipelineLoadSourceEventObserver-Protocol.h"
#include "TIPImagePipelineObserver-Protocol.h"

@class NSObject, NSString;

@interface T1ImagePipelineLoadSourceEventAdapter : NSObject <TIPImagePipelineObserver> {
    /* instance variables */
    struct { unsigned int hit:1; unsigned int miss:1; unsigned int cancel:1; unsigned int fail:1; } _observerMethods;
}

@property (readonly, weak, nonatomic) id <T1ImagePipelineLoadSourceEventObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithObserver:(id)observer;
- (void)tip_imageFetchOperationDidFinish:(id)finish;
- (void)_t1_processMetricsInfo:(id)info forOperation:(id)operation;

@end

#endif /* T1ImagePipelineLoadSourceEventAdapter_h */
