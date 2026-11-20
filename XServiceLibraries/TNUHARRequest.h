//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNUHARRequest_h
#define TNUHARRequest_h
@import Foundation;

#include "TNUHARPostData.h"
#include "TNUHARRequestResponseBase.h"

@class NSString;

@interface TNUHARRequest : TNUHARRequestResponseBase

@property (readonly, copy, nonatomic) NSString *method;
@property (readonly, copy, nonatomic) NSString *url;
@property (retain, nonatomic) TNUHARPostData *postData;

/* instance methods */
- (id)init;
- (id)initWithMethod:(id)method url:(id)url;
- (id)mutableJSONDictionary;

@end

#endif /* TNUHARRequest_h */
