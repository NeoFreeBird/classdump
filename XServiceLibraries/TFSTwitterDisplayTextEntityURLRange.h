//
#ifndef TFSTwitterDisplayTextEntityURLRange_h
#define TFSTwitterDisplayTextEntityURLRange_h
@import Foundation;

#include "TFSTwitterDisplayTextEntityRange.h"
#include "TFSTwitterEntityURL.h"

@class NSString;

@interface TFSTwitterDisplayTextEntityURLRange : TFSTwitterDisplayTextEntityRange // (Swift)

@property (nonatomic, readonly) TFSTwitterEntityURL *urlEntity;
@property (nonatomic, readonly) long long rangeFlavor;
@property (nonatomic, readonly) NSString *displayString;

/* instance methods */
- (id)initWithURLEntity:(id)urlentity;
- (id)initWithCoder:(id)coder;

@end

#endif /* TFSTwitterDisplayTextEntityURLRange_h */
