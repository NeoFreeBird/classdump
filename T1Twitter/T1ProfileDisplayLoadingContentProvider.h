//
#ifndef T1ProfileDisplayLoadingContentProvider_h
#define T1ProfileDisplayLoadingContentProvider_h
@import Foundation;

#include "T1LoadingStateViewController.h"
#include "T1ProfileDisplayContentProvider.h"

@interface T1ProfileDisplayLoadingContentProvider : T1ProfileDisplayContentProvider

@property (weak, nonatomic) T1LoadingStateViewController *loadingStateViewController;
@property (readonly, nonatomic) unsigned long long loadingState;

/* instance methods */
- (_Bool)canBecomeCurrent;
- (_Bool)shouldShowUserImagesWhenCurrent;
- (void)profileViewModelDidInvalidateWithReason:(long long)reason;
- (id)generateDefaultMainViewController;
- (_Bool)_isPermissionToShowUserInfoUnknown;

@end

#endif /* T1ProfileDisplayLoadingContentProvider_h */
