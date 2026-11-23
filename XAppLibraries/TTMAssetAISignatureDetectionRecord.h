//
#ifndef TTMAssetAISignatureDetectionRecord_h
#define TTMAssetAISignatureDetectionRecord_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSObject, NSString;

@interface TTMAssetAISignatureDetectionRecord : NSObject <NSCoding, NSCopying>

@property (readonly, copy, nonatomic) NSString *detectorIdentifier;
@property (readonly, nonatomic) long long outcome;
@property (readonly, copy, nonatomic) NSString *grokRawSignature;

/* instance methods */
- (id)initWithDetectorIdentifier:(id)identifier outcome:(long long)outcome grokRawSignature:(id)signature;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TTMAssetAISignatureDetectionRecord_h */
