//
#ifndef _TtC14TFSTwitterCore27TwitterCommunityBannerMedia_h
#define _TtC14TFSTwitterCore27TwitterCommunityBannerMedia_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSObject, _$sSS, __C.CGRect ?, __C.CGSize;

@interface TFSTwitterCore.TwitterCommunityBannerMedia : NSObject <NSSecureCoding, NSCopying> { // (Swift)
    /* instance variables */
    Swift.String imageUrl;
    __C.CGSize originalImageSize;
    __C.CGRect ? salientRect;
}

@property (nonatomic, readonly) long long hash;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(void *)zone;
- (_Bool)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore27TwitterCommunityBannerMedia_h */
