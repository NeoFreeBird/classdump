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
