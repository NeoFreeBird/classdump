//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterLimitedActionPrompt_h
#define TFSTwitterLimitedActionPrompt_h
@import Foundation;

#include "TFSURTRichText.h"

@class NSObject;

@interface TFSTwitterLimitedActionPrompt : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 ctaType;
}

@property (nonatomic, readonly) TFSURTRichText *headline;
@property (nonatomic, readonly) TFSURTRichText *subtext;
@property (nonatomic, readonly) _Bool isSeeConversationCTA;

/* instance methods */
- (id)init;

@end

#endif /* TFSTwitterLimitedActionPrompt_h */
