//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAppealable_h
#define TFSTwitterAppealable_h
@import Foundation;

#include "TFSURTRichText.h"

@class NSObject, NSString;

@interface TFSTwitterAppealable : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 appealable;
}

@property (nonatomic, readonly) _Bool isAppealable;
@property (nonatomic, readonly) short violationLevel;
@property (nonatomic, readonly) TFSURTRichText *labelText;
@property (nonatomic, readonly) NSString *reportSource;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterAppealable_h */
