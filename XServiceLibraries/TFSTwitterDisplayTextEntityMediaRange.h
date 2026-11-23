//
#ifndef TFSTwitterDisplayTextEntityMediaRange_h
#define TFSTwitterDisplayTextEntityMediaRange_h
@import Foundation;

#include "TFSTwitterDisplayTextEntityURLRange.h"
#include "TFSTwitterEntityMedia.h"

@class NSString;

@interface TFSTwitterDisplayTextEntityMediaRange : TFSTwitterDisplayTextEntityURLRange // (Swift)

@property (nonatomic, readonly) TFSTwitterEntityMedia *mediaEntity;
@property (nonatomic, readonly) long long rangeFlavor;
@property (nonatomic, readonly) NSString *displayString;

/* instance methods */
- (id)initWithMediaEntity:(id)entity;
- (id)initWithCoder:(id)coder;

@end

#endif /* TFSTwitterDisplayTextEntityMediaRange_h */
