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
