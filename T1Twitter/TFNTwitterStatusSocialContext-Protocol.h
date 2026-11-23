//
#ifndef TFNTwitterStatusSocialContext_Protocol_h
#define TFNTwitterStatusSocialContext_Protocol_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSObject-Protocol.h"

@protocol TFNTwitterStatusSocialContext <NSObject, NSCopying, NSCoding>

@required

/* required instance methods */
- (id)bannerText;
- (id)linkText;
- (id)activityName;
- (id)allUserReferences;
- (id)activityTitle;
- (id)activityPage;
- (long long)contextType;
- (id)landingURL;

@optional

@end

#endif /* TFNTwitterStatusSocialContext_Protocol_h */
