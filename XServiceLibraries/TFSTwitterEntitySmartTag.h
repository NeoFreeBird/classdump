//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterEntitySmartTag_h
#define TFSTwitterEntitySmartTag_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TFSTwitterTextRange-Protocol.h"
#include "_TtC14TFSTwitterCore15TFSSmartTagData.h"

@class NSObject, NSString;

@interface TFSTwitterEntitySmartTag : NSObject <NSCoding, TFSTwitterTextRange> // (Swift)

@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) TFSTwitterCore.TFSSmartTagData *smartTagData;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

/* instance methods */
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range text:(id)text;
- (_Bool)isEqual:(id)equal;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)init;

@end

#endif /* TFSTwitterEntitySmartTag_h */
