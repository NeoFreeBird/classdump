//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRCLSRecordHost_h
#define FIRCLSRecordHost_h
@import Foundation;

#include "FIRCLSRecordBase.h"

@class NSString;

@interface FIRCLSRecordHost : FIRCLSRecordBase

@property (copy, nonatomic) NSString *platform;

/* instance methods */
- (id)initWithDict:(id)dict;

@end

#endif /* FIRCLSRecordHost_h */
