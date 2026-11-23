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
