//
#ifndef TFSTwitterDisplayTextEntitySymbolRange_h
#define TFSTwitterDisplayTextEntitySymbolRange_h
@import Foundation;

#include "TFSTwitterDisplayTextEntityRange.h"
#include "TFSTwitterEntitySymbol.h"

@class NSString;

@interface TFSTwitterDisplayTextEntitySymbolRange : TFSTwitterDisplayTextEntityRange // (Swift)

@property (nonatomic, readonly) TFSTwitterEntitySymbol *symbolEntity;
@property (nonatomic, readonly) long long rangeFlavor;
@property (nonatomic, readonly) NSString *displayString;

/* instance methods */
- (id)initWithSymbolEntity:(id)entity;
- (id)initWithCoder:(id)coder;

@end

#endif /* TFSTwitterDisplayTextEntitySymbolRange_h */
