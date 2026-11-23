//
#ifndef OCFAPITaskServiceCancellable_h
#define OCFAPITaskServiceCancellable_h
@import Foundation;

#include "OCFTaskServiceCancellable-Protocol.h"

@class NSObject, NSString;
@protocol TFSTwitterAPICommandCancellable;

@interface OCFAPITaskServiceCancellable : NSObject <OCFTaskServiceCancellable> {
    /* instance variables */
    id <TFSTwitterAPICommandCancellable> _cancellable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCancellable:(id)cancellable;
- (void)cancel;

@end

#endif /* OCFAPITaskServiceCancellable_h */
