//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNUndoSendCompositionDetails_h
#define TFNUndoSendCompositionDetails_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray, NSObject;

@interface TFNUndoSendCompositionDetails : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *compositions;

/* instance methods */
- (id)initWithCompositions:(id)compositions;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (_Bool)isEqualToUndoSendCompositionDetails:(id)details;
- (unsigned long long)hash;

@end

#endif /* TFNUndoSendCompositionDetails_h */
