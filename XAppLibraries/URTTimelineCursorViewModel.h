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
