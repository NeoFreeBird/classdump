//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef URTTimelineCursorViewModel_h
#define URTTimelineCursorViewModel_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSObject, NSString;

@interface URTTimelineCursorViewModel : NSObject <NSObject> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 cursor;
}

@property (nonatomic, readonly) NSString *description;

/* instance methods */
- (id)init;

@end

#endif /* URTTimelineCursorViewModel_h */
