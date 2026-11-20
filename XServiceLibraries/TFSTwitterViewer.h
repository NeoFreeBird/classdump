//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterViewer_h
#define TFSTwitterViewer_h
@import Foundation;

#include "TFSTwitterAccountUserDetails.h"
#include "TFSTwitterUser.h"

@class NSObject;

@interface TFSTwitterViewer : NSObject // (Swift)

@property (nonatomic, readonly) TFSTwitterUser *user;
@property (nonatomic, readonly) TFSTwitterAccountUserDetails *accountUserDetails;
@property (nonatomic, readonly) _Bool isAltTextPromptEnabled;
@property (nonatomic, readonly) _Bool isActiveCreator;

/* instance methods */
- (id)init;

@end

#endif /* TFSTwitterViewer_h */
