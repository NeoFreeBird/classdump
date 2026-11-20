//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRCLSRecordIdentity_h
#define FIRCLSRecordIdentity_h
@import Foundation;

#include "FIRCLSRecordBase.h"

@class NSString;

@interface FIRCLSRecordIdentity : FIRCLSRecordBase

@property (copy, nonatomic) NSString *build_version;
@property (copy, nonatomic) NSString *app_quality_session_id;

/* instance methods */
- (id)initWithDict:(id)dict;

@end

#endif /* FIRCLSRecordIdentity_h */
