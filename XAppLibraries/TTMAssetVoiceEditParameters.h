//
#ifndef TTMAssetVoiceEditParameters_h
#define TTMAssetVoiceEditParameters_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "TTMAssetImage.h"

@class NSObject, UIColor;

@interface TTMAssetVoiceEditParameters : NSObject <NSCoding, NSCopying>

@property (retain, nonatomic) TTMAssetImage *image;
@property (retain, nonatomic) UIColor *color;

/* class methods */
+ (id)new;

/* instance methods */
- (id)init;
- (id)initWithImage:(id)image color:(id)color;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TTMAssetVoiceEditParameters_h */
