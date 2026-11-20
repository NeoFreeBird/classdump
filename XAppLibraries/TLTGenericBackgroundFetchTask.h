//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
