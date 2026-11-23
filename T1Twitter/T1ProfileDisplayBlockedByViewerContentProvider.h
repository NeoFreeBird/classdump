//
#ifndef T1ProfileDisplayBlockedByViewerContentProvider_h
#define T1ProfileDisplayBlockedByViewerContentProvider_h
@import Foundation;

#include "T1ProfileDisplayContentProvider.h"

@interface T1ProfileDisplayBlockedByViewerContentProvider : T1ProfileDisplayContentProvider

/* instance methods */
- (_Bool)canBecomeCurrent;
- (_Bool)shouldAllowScrollingWhenCurrent;
- (id)scribeSection;
- (id)generateDefaultMainViewController;
- (void)profileViewModelDidInvalidateWithReason:(long long)reason;
- (_Bool)_canBlockedByViewerViewAppear;

@end

#endif /* T1ProfileDisplayBlockedByViewerContentProvider_h */
