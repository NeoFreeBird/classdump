//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRCLSRecordApplication_h
#define FIRCLSRecordApplication_h
@import Foundation;

#include "FIRCLSRecordBase.h"

@class NSString;

@interface FIRCLSRecordApplication : FIRCLSRecordBase

@property (copy, nonatomic) NSString *build_version;
@property (copy, nonatomic) NSString *display_version;

/* instance methods */
- (id)initWithDict:(id)dict;

@end

#endif /* FIRCLSRecordApplication_h */
