//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADInspectorAdTransaction_h
#define GADInspectorAdTransaction_h
@import Foundation;

#include "GADResponseInfo.h"

@class NSArray, NSData, NSDictionary, NSObject, NSString, NSURLRequest;

@interface GADInspectorAdTransaction : NSObject

@property (readonly, nonatomic) NSString *state;
@property (readonly, nonatomic) double responseTimeSinceEpoch;
@property (readonly, nonatomic) GADResponseInfo *responseInfo;
@property (readonly, nonatomic) NSString *requestOrigin;
@property (readonly, nonatomic) NSURLRequest *URLRequest;
@property (readonly, nonatomic) NSDictionary *adResponseHeaders;
@property (readonly, nonatomic) NSData *adResponseBody;
@property (readonly, nonatomic) NSDictionary *extras;
@property (readonly, nonatomic) NSArray *errors;
@property (readonly, nonatomic) NSString *adType;

/* instance methods */
- (id)initWithResponseInfo:(id)info requestOrigin:(id)origin URLRequest:(id)urlrequest adResponseHeaders:(id)headers adResponseBody:(id)body adTypes:(id)types extras:(id)extras errors:(id)errors;

@end

#endif /* GADInspectorAdTransaction_h */
