//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMUserBannerImageFetchRequest_h
#define TTMUserBannerImageFetchRequest_h
@import Foundation;

#include "TTMUserBaseImageFetchRequest.h"

@interface TTMUserBannerImageFetchRequest : TTMUserBaseImageFetchRequest

/* instance methods */
- (id)init;
- (id)initWithUserID:(long long)id profileBannerURL:(id)url;

@end

#endif /* TTMUserBannerImageFetchRequest_h */
