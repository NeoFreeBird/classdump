//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterConversationAnnotation_h
#define TFSTwitterConversationAnnotation_h
@import Foundation;

#include "TFSURTRichText.h"

@class NSObject;

@interface TFSTwitterConversationAnnotation : NSObject // (Swift)

@property (nonatomic, readonly) long long conversationType;
@property (nonatomic, readonly) TFSURTRichText *body;
@property (nonatomic, readonly) TFSURTRichText *header;

/* instance methods */
- (id)init;

@end

#endif /* TFSTwitterConversationAnnotation_h */
