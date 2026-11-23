//
#ifndef TLTGenericBackgroundFetchTask_h
#define TLTGenericBackgroundFetchTask_h
@import Foundation;

#include "TLTBackgroundFetchTask.h"

@interface TLTGenericBackgroundFetchTask : TLTBackgroundFetchTask

/* instance methods */
- (void)startWithCompletion:(id /* block */)completion;
- (void)cancel;

@end

#endif /* TLTGenericBackgroundFetchTask_h */
