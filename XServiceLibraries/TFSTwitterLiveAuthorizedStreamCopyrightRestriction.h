//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterLiveAuthorizedStreamCopyrightRestriction_h
#define TFSTwitterLiveAuthorizedStreamCopyrightRestriction_h
@import Foundation;

#include "TFSTwitterLiveAuthorizedStreamRestriction.h"

@class NSString;

@interface TFSTwitterLiveAuthorizedStreamCopyrightRestriction : TFSTwitterLiveAuthorizedStreamRestriction

@property (readonly, copy, nonatomic) NSString *copyrightHolderName;
@property (readonly, copy, nonatomic) NSString *copyrightedWorkName;
@property (readonly, copy, nonatomic) NSString *type;

/* instance methods */
- (id)initWithCopyrightHolderName:(id)name copyrightedWorkName:(id)name type:(id)type;
- (_Bool)isEqual:(id)equal;

@end

#endif /* TFSTwitterLiveAuthorizedStreamCopyrightRestriction_h */
