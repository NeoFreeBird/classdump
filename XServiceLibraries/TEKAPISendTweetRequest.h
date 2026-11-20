//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TEKAPISendTweetRequest_h
#define TEKAPISendTweetRequest_h
@import Foundation;

#include "TEKAPIRequest.h"

@class NSArray, NSString;

@interface TEKAPISendTweetRequest : TEKAPIRequest

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSString *placeID;
@property (readonly, copy, nonatomic) NSArray *mediaIDs;

/* instance methods */
- (id)initWithText:(id)text placeID:(id)id mediaIDs:(id)ids;
- (id)initWithText:(id)text placeID:(id)id;
- (long long)HTTPMethodValue;
- (Class)responseClass;
- (id)jsonEscapedBody;
- (id)host;
- (id)endpointPath;

@end

#endif /* TEKAPISendTweetRequest_h */
