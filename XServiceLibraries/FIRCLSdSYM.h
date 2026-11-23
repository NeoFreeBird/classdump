//
#ifndef FIRCLSdSYM_h
#define FIRCLSdSYM_h
@import Foundation;

#include "FIRCLSMachOBinary.h"

@class NSBundle, NSObject, NSString, NSURL;

@interface FIRCLSdSYM : NSObject

@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) FIRCLSMachOBinary *binary;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSURL *executableURL;
@property (readonly, copy, nonatomic) NSString *executablePath;
@property (readonly, copy, nonatomic) NSString *bundleVersion;
@property (readonly, copy, nonatomic) NSString *shortBundleVersion;

/* class methods */
+ (id)dSYMWithURL:(id)url;

/* instance methods */
- (id)initWithURL:(id)url;
- (void)enumerateUUIDs:(id /* block */)uuids;

@end

#endif /* FIRCLSdSYM_h */
