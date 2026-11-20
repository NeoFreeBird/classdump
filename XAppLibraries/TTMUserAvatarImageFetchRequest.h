//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMUserAvatarImageFetchRequest_h
#define TTMUserAvatarImageFetchRequest_h
@import Foundation;

#include "TTMUserBaseImageFetchRequest.h"

@interface TTMUserAvatarImageFetchRequest : TTMUserBaseImageFetchRequest

/* instance methods */
- (id)init;
- (id)initWithUserID:(long long)id profileImageURL:(id)url options:(unsigned long long)options;
- (id)transformer;

@end

#endif /* TTMUserAvatarImageFetchRequest_h */
