//
#ifndef TFNViewModelIdentifier_h
#define TFNViewModelIdentifier_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSObject-Protocol.h"

@class NSObject;

@interface TFNViewModelIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) id <NSObject, NSCopying> viewIdentifier;
@property (readonly, nonatomic) id <NSObject, NSCopying> modelIdentifier;

/* instance methods */
- (id)initWithViewIdentifier:(id)identifier modelIdentifier:(id)identifier;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;

@end

#endif /* TFNViewModelIdentifier_h */
