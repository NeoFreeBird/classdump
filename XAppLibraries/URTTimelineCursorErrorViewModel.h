//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef URTTimelineCursorErrorViewModel_h
#define URTTimelineCursorErrorViewModel_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSObject, NSString;

@interface URTTimelineCursorErrorViewModel : NSObject <NSObject> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 mainDisplayText;
    @40@0:8:16@24@32 secondayDisplayText;
    @40@0:8:16@24@32 cursorErrorInjection;
}

@property (nonatomic, readonly) NSString *entryID;
@property (nonatomic, readonly) long long errorCode;

/* instance methods */
- (id)init;

@end

#endif /* URTTimelineCursorErrorViewModel_h */
