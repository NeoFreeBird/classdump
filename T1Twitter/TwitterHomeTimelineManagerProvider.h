//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TwitterHomeTimelineManagerProvider_h
#define TwitterHomeTimelineManagerProvider_h
@import Foundation;

#include "TFNTwitterTimelineManagerProvider-Protocol.h"

@class NSObject, NSString;

@interface TwitterHomeTimelineManagerProvider : NSObject <TFNTwitterTimelineManagerProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)timelineManagerForAccount:(id)account;

@end

#endif /* TwitterHomeTimelineManagerProvider_h */
