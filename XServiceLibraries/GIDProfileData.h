//
#ifndef GIDProfileData_h
#define GIDProfileData_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSObject, NSString, NSURL;

@interface GIDProfileData : NSObject <NSCopying, NSSecureCoding> {
    /* instance variables */
    NSURL *_imageURL;
}

@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *givenName;
@property (readonly, nonatomic) NSString *familyName;
@property (readonly, nonatomic) _Bool hasImage;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)initWithEmail:(id)email name:(id)name givenName:(id)name familyName:(id)name imageURL:(id)url;
- (id)imageURLWithDimension:(unsigned long long)dimension;
- (_Bool)isFIFEAvatarURL:(id)url;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* GIDProfileData_h */
