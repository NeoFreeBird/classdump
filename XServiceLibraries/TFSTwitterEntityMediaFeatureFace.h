//
#ifndef TFSTwitterEntityMediaFeatureFace_h
#define TFSTwitterEntityMediaFeatureFace_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterEntityMediaFeatureFace : NSObject <NSCoding, NSCopying> // (Swift)

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(void *)zone;
- (id)init;

@end

#endif /* TFSTwitterEntityMediaFeatureFace_h */
