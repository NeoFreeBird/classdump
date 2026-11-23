//
#ifndef TFSURTUrl_h
#define TFSURTUrl_h
@import Foundation;

#include "TFSURTUrlEndpointOptions.h"

@class NSObject, NSString;

@interface TFSURTUrl : NSObject // (Swift)

@property (nonatomic, readonly) long long urlType;
@property (nonatomic, readonly) NSString *url;
@property (nonatomic, readonly) TFSURTUrlEndpointOptions *urtEndpointOptions;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (id)initWithUrlType:(long long)type url:(id)url urtEndpointOptions:(id)options;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSURTUrl_h */
