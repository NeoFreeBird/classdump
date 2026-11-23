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
