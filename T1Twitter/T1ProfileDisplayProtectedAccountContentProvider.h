//
#ifndef T1ProfileDisplayProtectedAccountContentProvider_h
#define T1ProfileDisplayProtectedAccountContentProvider_h
@import Foundation;

#include "T1ProfileDisplayContentProvider.h"

@interface T1ProfileDisplayProtectedAccountContentProvider : T1ProfileDisplayContentProvider

@property (copy, nonatomic) id /* block */ loadTopCompletionHandler;

/* instance methods */
- (_Bool)canBecomeCurrent;
- (_Bool)shouldShowUserDataWhenCurrent;
- (id)contentSubheaderEntries;
- (id)generateDefaultMainViewController;
- (void)profileViewModelDidInvalidateWithReason:(long long)reason;

@end

#endif /* T1ProfileDisplayProtectedAccountContentProvider_h */
