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
