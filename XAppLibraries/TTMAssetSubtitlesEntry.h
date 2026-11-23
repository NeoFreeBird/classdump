//
#ifndef TTMAssetSubtitlesEntry_h
#define TTMAssetSubtitlesEntry_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSObject, NSString;

@interface TTMAssetSubtitlesEntry : NSObject <NSSecureCoding, NSCopying>

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSString *text;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithStartTime:(double)time endTime:(double)time text:(id)text;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TTMAssetSubtitlesEntry_h */
