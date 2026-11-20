//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterDisplayTextEntityTimestampRange_h
#define TFSTwitterDisplayTextEntityTimestampRange_h
@import Foundation;

#include "TFSTwitterDisplayTextEntityRange.h"
#include "TFSTwitterEntityTimestamp.h"

@class NSString;

@interface TFSTwitterDisplayTextEntityTimestampRange : TFSTwitterDisplayTextEntityRange // (Swift)

@property (nonatomic, readonly) TFSTwitterEntityTimestamp *timestampEntity;
@property (nonatomic, readonly) long long rangeFlavor;
@property (nonatomic, readonly) NSString *displayString;

/* instance methods */
- (id)initWithTimestampEntity:(id)entity;
- (id)initWithCoder:(id)coder;

@end

#endif /* TFSTwitterDisplayTextEntityTimestampRange_h */
