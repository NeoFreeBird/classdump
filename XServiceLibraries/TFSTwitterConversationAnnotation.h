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
