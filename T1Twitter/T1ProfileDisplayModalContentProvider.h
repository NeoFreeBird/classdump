//
#ifndef T1ProfileDisplayModalContentProvider_h
#define T1ProfileDisplayModalContentProvider_h
@import Foundation;

#include "T1ProfileContentMainEntry.h"
#include "T1ProfileDisplayContentProvider.h"

@interface T1ProfileDisplayModalContentProvider : T1ProfileDisplayContentProvider

@property (retain, nonatomic) T1ProfileContentMainEntry *actionsEntry;

/* instance methods */
- (_Bool)canBecomeCurrent;
- (_Bool)shouldAllowScrollingWhenCurrent;
- (_Bool)shouldDisableContentPaddingWhenCurrent;
- (_Bool)shouldShowUserDataWhenCurrent;
- (id)contentMainEntries;
- (void)removeCachedViewControllersIfNeeded;
- (double)modalContentHeightExpanded:(_Bool)expanded defaultValue:(double)value;
- (void)profileViewModelDidInvalidateWithReason:(long long)reason;
- (id)contentSubheaderEntries;

@end

#endif /* T1ProfileDisplayModalContentProvider_h */
