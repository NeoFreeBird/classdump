//
#ifndef TFSTwitterArticle_h
#define TFSTwitterArticle_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "TFSTwitterEntityMedia.h"
#include "TFSTwitterMediaInfo.h"

@class NSObject, NSString, NSURL;

@interface TFSTwitterArticle : NSObject <NSCopying, NSCoding> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 isGrokSummaryEligible;
    B24@0:8@"NSString"16 coverImageInfo;
}

@property (nonatomic, readonly) NSString *restId;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *previewText;
@property (nonatomic, readonly) NSURL *coverImageURL;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } coverImageSize;
@property (nonatomic, readonly) TFSTwitterMediaInfo *coverMediaInfo;
@property (nonatomic, readonly) TFSTwitterEntityMedia *entityMedia;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(void *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)init;

@end

#endif /* TFSTwitterArticle_h */
