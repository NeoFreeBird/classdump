//
#ifndef T1MediaUploadConfigurationProvider_h
#define T1MediaUploadConfigurationProvider_h
@import Foundation;

#include "TTMUploadConfigurationProvider-Protocol.h"

@class NSObject, NSString;

@interface T1MediaUploadConfigurationProvider : NSObject <TTMUploadConfigurationProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)load;

/* instance methods */
- (id)configurationForDataSource:(id)source;

@end

#endif /* T1MediaUploadConfigurationProvider_h */
