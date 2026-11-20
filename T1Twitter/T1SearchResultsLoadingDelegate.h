//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1SearchResultsLoadingDelegate_h
#define T1SearchResultsLoadingDelegate_h
@import Foundation;

#include "T1URTViewControllerLoadingDelegate-Protocol.h"

@class NSObject;

@interface T1SearchResultsLoadingDelegate : NSObject <T1URTViewControllerLoadingDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *searchParameters;
    NSNumber"16@0:8 *onInitialLoad;
}

/* class methods */
+ (void)showGrokSummaryIfEligibleForAccount:(id)account searchParameters:(id)parameters;

/* instance methods */
- (id)initWithAccount:(id)account searchParameters:(id)parameters onInitialLoad:(id /* block */)load;
- (void)urtViewControllerDidBeginInitialLoading:(id)loading;
- (void)urtViewController:(id)controller didLoadTimelineInitially:(_Bool)initially;
- (id)init;

@end

#endif /* T1SearchResultsLoadingDelegate_h */
