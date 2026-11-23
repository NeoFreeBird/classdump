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
