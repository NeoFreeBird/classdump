//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef URTTimelineModuleViewModel_h
#define URTTimelineModuleViewModel_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSObject;

@interface URTTimelineModuleViewModel : NSObject <NSObject> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 entryID;
    @40@0:8:16@24@32 sortIndex;
    @40@0:8:16@24@32 module;
    @40@0:8:16@24@32 failedEntryErrors;
}

/* instance methods */
- (id)init;

@end

#endif /* URTTimelineModuleViewModel_h */
