//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADServerTransaction_h
#define GADServerTransaction_h
@import Foundation;

#include "GADServerRequest.h"
#include "GADServerResponse.h"

@class NSObject;

@interface GADServerTransaction : NSObject

@property (readonly, nonatomic) GADServerRequest *serverRequest;
@property (readonly, nonatomic) GADServerResponse *serverResponse;

/* instance methods */
- (id)initWithServerRequest:(id)request serverResponse:(id)response;

@end

#endif /* GADServerTransaction_h */
