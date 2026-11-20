//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
