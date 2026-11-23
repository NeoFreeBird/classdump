//
#ifndef TNUHARResponse_h
#define TNUHARResponse_h
@import Foundation;

#include "TNUHARRequestResponseBase.h"
#include "TNUHARResponseContent.h"

@class NSString;

@interface TNUHARResponse : TNUHARRequestResponseBase

@property (retain, nonatomic) TNUHARResponseContent *content;
@property (copy, nonatomic) NSString *redirectURL;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *statusText;
@property (nonatomic) _Bool wasLocalCacheHit;

/* instance methods */
- (id)mutableJSONDictionary;

@end

#endif /* TNUHARResponse_h */
