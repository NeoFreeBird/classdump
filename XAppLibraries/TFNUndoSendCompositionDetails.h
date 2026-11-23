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
