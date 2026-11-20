//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
