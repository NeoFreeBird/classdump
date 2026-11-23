//
#ifndef TFSTwitterDisplayTextEntitySmartTagRange_h
#define TFSTwitterDisplayTextEntitySmartTagRange_h
@import Foundation;

#include "TFSTwitterDisplayTextEntityRange.h"
#include "TFSTwitterEntitySmartTag.h"

@class NSString;

@interface TFSTwitterDisplayTextEntitySmartTagRange : TFSTwitterDisplayTextEntityRange // (Swift)

@property (nonatomic, readonly) TFSTwitterEntitySmartTag *smartTagEntity;
@property (nonatomic, readonly) long long rangeFlavor;
@property (nonatomic, readonly) NSString *displayString;

/* instance methods */
- (id)initWithSmartTagEntity:(id)entity;
- (id)initWithCoder:(id)coder;

@end

#endif /* TFSTwitterDisplayTextEntitySmartTagRange_h */
