//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StandardSpaceVideoAccessManager_h
#define T1StandardSpaceVideoAccessManager_h
@import Foundation;

#include "TASVoiceAccountPerspective-Protocol.h"

@class NSString, PTVVideoAccessManager;

@interface T1StandardSpaceVideoAccessManager : PTVVideoAccessManager

@property (retain, nonatomic) NSString *mediaKey;
@property (nonatomic) _Bool askForReplay;
@property (retain, nonatomic) id <TASVoiceAccountPerspective> account;
@property (copy, nonatomic) NSString *clipID;

/* instance methods */
- (id)init;
- (id)initWithMediaKey:(id)key clipID:(id)id askForReplay:(_Bool)replay account:(id)account;
- (void)fetchVideoAccessWithCachePolicy:(long long)policy;

@end

#endif /* T1StandardSpaceVideoAccessManager_h */
