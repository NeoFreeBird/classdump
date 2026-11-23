//
#ifndef T1ProfileDisplayInvalidUserContentProvider_h
#define T1ProfileDisplayInvalidUserContentProvider_h
@import Foundation;

#include "T1ProfileDisplayLoadingContentProvider.h"

@interface T1ProfileDisplayInvalidUserContentProvider : T1ProfileDisplayLoadingContentProvider

/* instance methods */
- (_Bool)canBecomeCurrent;

@end

#endif /* T1ProfileDisplayInvalidUserContentProvider_h */
