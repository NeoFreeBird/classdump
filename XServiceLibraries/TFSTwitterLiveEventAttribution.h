//
#ifndef TFSTwitterLiveEventAttribution_h
#define TFSTwitterLiveEventAttribution_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject, NSString, NSURL;

@interface TFSTwitterLiveEventAttribution : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSURL *url;

/* instance methods */
- (id)init;
- (id)initWithText:(id)text url:(id)url;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqualToAttribution:(id)attribution;

@end

#endif /* TFSTwitterLiveEventAttribution_h */
