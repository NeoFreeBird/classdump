//
#ifndef TFSTwitterDisplayTextEntityHashtagRange_h
#define TFSTwitterDisplayTextEntityHashtagRange_h
@import Foundation;

#include "TFSTwitterDisplayTextEntityRange.h"
#include "TFSTwitterEntityHashtag.h"

@class NSString;

@interface TFSTwitterDisplayTextEntityHashtagRange : TFSTwitterDisplayTextEntityRange // (Swift)

@property (nonatomic, readonly) TFSTwitterEntityHashtag *hashtagEntity;
@property (nonatomic, readonly) long long rangeFlavor;
@property (nonatomic, readonly) NSString *displayString;

/* instance methods */
- (id)initWithHashtagEntity:(id)entity;
- (id)initWithCoder:(id)coder;

@end

#endif /* TFSTwitterDisplayTextEntityHashtagRange_h */
