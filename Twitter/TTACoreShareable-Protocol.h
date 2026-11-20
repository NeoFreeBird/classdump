//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTACoreShareable_Protocol_h
#define TTACoreShareable_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol TTACoreShareable <NSObject>

@required

@property (nonatomic, readonly) NSString *twitterURLForShare;
@property (nonatomic, readonly) NSString *twitterURLForShareToSnap;
@property (nonatomic, readonly) NSString *twitterURLForEmail;
@property (nonatomic, readonly) NSString *twitterURLForCopy;
@property (nonatomic, readonly) NSString *twitterURLForMessage;

@optional

@end

#endif /* TTACoreShareable_Protocol_h */
