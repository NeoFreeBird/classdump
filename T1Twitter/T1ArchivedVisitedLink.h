//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ArchivedVisitedLink_h
#define T1ArchivedVisitedLink_h
@import Foundation;

#include "T1ArchivedData-Protocol.h"

@class NSDate, NSObject, NSString;

@interface T1ArchivedVisitedLink : NSObject <T1ArchivedData>

@property (readonly, copy, nonatomic) NSString *urlHash;
@property (readonly, nonatomic) NSDate *archivedDate;
@property (readonly, nonatomic) _Bool TTLHasExpired;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLinkURL:(id)url;
- (_Bool)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)_t1_hashForString:(id)string;

@end

#endif /* T1ArchivedVisitedLink_h */
