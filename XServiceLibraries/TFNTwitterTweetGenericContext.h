//
#ifndef TFNTwitterTweetGenericContext_h
#define TFNTwitterTweetGenericContext_h
@import Foundation;

#include "TFSURTUrl.h"

@class NSObject, NSString;

@interface TFNTwitterTweetGenericContext : NSObject // (Swift)

@property (nonatomic, readonly) NSString *primaryText;
@property (nonatomic, readonly) NSString *secondaryText;
@property (nonatomic, readonly) TFSURTUrl *url;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)initWithPrimaryText:(id)text secondaryText:(id)text url:(id)url;
- (id)init;

@end

#endif /* TFNTwitterTweetGenericContext_h */
