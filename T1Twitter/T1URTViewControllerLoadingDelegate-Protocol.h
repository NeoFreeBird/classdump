//
#ifndef T1URTViewControllerLoadingDelegate_Protocol_h
#define T1URTViewControllerLoadingDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1URTViewControllerLoadingDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)urtViewControllerDidBeginInitialLoading:(id)loading;
- (void)urtViewController:(id)controller didLoadTimelineInitially:(_Bool)initially;
- (void)urtViewController:(id)controller didLoadViewModels:(id)models;

@end

#endif /* T1URTViewControllerLoadingDelegate_Protocol_h */
