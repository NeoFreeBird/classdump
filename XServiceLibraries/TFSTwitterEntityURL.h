//
#ifndef TFSTwitterEntityURL_h
#define TFSTwitterEntityURL_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "TFSTwitterTextRange-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterEntityURL : NSObject <NSCopying, NSCoding, TFSTwitterTextRange> // (Swift)

@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (nonatomic, readonly) NSString *url;
@property (nonatomic, readonly) NSString *expandedURL;
@property (nonatomic, readonly) NSString *originalDisplayURL;
@property (nonatomic, readonly) NSString *htmlTitle;
@property (nonatomic, readonly) NSString *customTitle;
@property (nonatomic, readonly) NSString *adsOverrideURL;
@property (nonatomic, readonly) NSString *networkURL;
@property (nonatomic, readonly) NSString *accessibilityText;
@property (nonatomic, readonly) NSString *displayURL;
@property (nonatomic, readonly) NSString *displayTitle;
@property (nonatomic, readonly) NSString *displayString;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (id)initWithUrl:(id)url;
- (id)initWithUrl:(id)url customTitle:(id)title;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range url:(id)url expandedURL:(id)url originalDisplayURL:(id)url htmlTitle:(id)title customTitle:(id)title;
- (_Bool)isMedia;
- (_Bool)isImage;
- (_Bool)representsURL:(id)url;
- (id)copyWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)copyWithZone:(void *)zone;
- (_Bool)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithOriginalDisplayURL:(id)url;
- (id)copyWithCustomTitle:(id)title;
- (id)copyWithHTMLTitle:(id)htmltitle;
- (id)copyWithURL:(id)url;
- (id)copyWithAdsOverrideURL:(id)url;
- (id)init;

@end

#endif /* TFSTwitterEntityURL_h */
