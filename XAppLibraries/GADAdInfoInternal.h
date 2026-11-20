//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADAdInfoInternal_h
#define GADAdInfoInternal_h
@import Foundation;

#include "GADQueryInfo.h"

@class NSDictionary, NSObject, NSString;

@interface GADAdInfoInternal : NSObject

@property (readonly, copy, nonatomic) NSDictionary *queryDictionary;
@property (readonly, copy, nonatomic) GADQueryInfo *queryInfo;
@property (readonly, copy, nonatomic) NSString *adString;
@property (readonly, nonatomic) NSString *fetchURLString;

/* instance methods */
- (id)initWithAdString:(id)string;

@end

#endif /* GADAdInfoInternal_h */
