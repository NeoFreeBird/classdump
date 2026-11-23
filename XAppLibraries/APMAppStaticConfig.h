//
#ifndef APMAppStaticConfig_h
#define APMAppStaticConfig_h
@import Foundation;

#include "APMStaticConfig-Protocol.h"

@class NSObject, NSString;

@interface APMAppStaticConfig : NSObject <APMStaticConfig>

@property (readonly, nonatomic) _Bool screenReportingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

@end

#endif /* APMAppStaticConfig_h */
