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
