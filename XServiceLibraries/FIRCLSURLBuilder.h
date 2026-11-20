//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRCLSURLBuilder_h
#define FIRCLSURLBuilder_h
@import Foundation;

@class NSMutableString, NSObject;

@interface FIRCLSURLBuilder : NSObject

@property (retain, nonatomic) NSMutableString *URLString;
@property (nonatomic) unsigned long long queryParams;

/* class methods */
+ (id)URLWithBase:(id)base;

/* instance methods */
- (id)init;
- (id)escapeString:(id)string;
- (void)appendComponent:(id)component;
- (void)escapeAndAppendComponent:(id)component;
- (void)appendValue:(id)value forQueryParam:(id)param;
- (id)URL;

@end

#endif /* FIRCLSURLBuilder_h */
