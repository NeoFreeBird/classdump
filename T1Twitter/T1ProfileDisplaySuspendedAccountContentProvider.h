//
#ifndef T1ProfileDisplaySuspendedAccountContentProvider_h
#define T1ProfileDisplaySuspendedAccountContentProvider_h
@import Foundation;

#include "T1ProfileDisplayContentProvider.h"

@interface T1ProfileDisplaySuspendedAccountContentProvider : T1ProfileDisplayContentProvider

/* instance methods */
- (_Bool)canBecomeCurrent;
- (_Bool)shouldShowUserImagesWhenCurrent;
- (id)generateDefaultMainViewController;

@end

#endif /* T1ProfileDisplaySuspendedAccountContentProvider_h */
