//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
