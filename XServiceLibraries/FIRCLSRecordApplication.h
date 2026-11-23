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
