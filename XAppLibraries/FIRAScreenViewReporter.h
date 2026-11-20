//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRAScreenViewReporter_h
#define FIRAScreenViewReporter_h
@import Foundation;

#include "APMScreenViewReporter.h"

@interface FIRAScreenViewReporter : APMScreenViewReporter

/* class methods */
+ (id)sharedInstance;

@end

#endif /* FIRAScreenViewReporter_h */
