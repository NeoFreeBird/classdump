//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterDisplayTextEntityUserMentionRange_h
#define TFSTwitterDisplayTextEntityUserMentionRange_h
@import Foundation;

#include "TFSTwitterDisplayTextEntityRange.h"
#include "TFSTwitterEntityUserMention.h"

@class NSString;

@interface TFSTwitterDisplayTextEntityUserMentionRange : TFSTwitterDisplayTextEntityRange // (Swift)

@property (nonatomic, readonly) TFSTwitterEntityUserMention *mentionEntity;
@property (nonatomic, readonly) long long rangeFlavor;
@property (nonatomic, readonly) NSString *displayString;

/* instance methods */
- (id)initWithMentionEntity:(id)entity;
- (id)initWithCoder:(id)coder;

@end

#endif /* TFSTwitterDisplayTextEntityUserMentionRange_h */
