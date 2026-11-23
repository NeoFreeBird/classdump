//
#ifndef PTVCopyrightViolation_h
#define PTVCopyrightViolation_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject, NSString, NSURL;

@interface PTVCopyrightViolation : NSObject <NSCopying>

@property (readonly, nonatomic) long long violationType;
@property (readonly, nonatomic) long long violationState;
@property (readonly, nonatomic) NSString *copyrightHolderName;
@property (readonly, nonatomic) NSString *copyrightContentName;
@property (readonly, nonatomic) _Bool broadcasterAllowListed;
@property (readonly, nonatomic) _Bool matchAccepted;
@property (readonly, nonatomic) _Bool matchDisputed;
@property (readonly, nonatomic) NSURL *learnMoreURL;

/* instance methods */
- (id)initWithViolationType:(long long)type copyrightHolderName:(id)name copyrightContentName:(id)name broadcasterAllowListed:(_Bool)listed matchAccepted:(_Bool)accepted matchDisputed:(_Bool)disputed learnMoreURL:(id)url;
- (_Bool)isEqual:(id)equal;
- (_Bool)isEqualToCopyrightViolation:(id)violation;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)violationWithMatchDisputed:(_Bool)disputed;

@end

#endif /* PTVCopyrightViolation_h */
