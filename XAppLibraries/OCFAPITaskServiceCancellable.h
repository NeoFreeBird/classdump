//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
