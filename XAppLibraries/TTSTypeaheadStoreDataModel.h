//
#ifndef TTSTypeaheadStoreDataModel_h
#define TTSTypeaheadStoreDataModel_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray, NSObject;

@interface TTSTypeaheadStoreDataModel : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *recentSearches;
@property (readonly, nonatomic) double cs2LastUserPrefetchSuccessTime;
@property (readonly, nonatomic) double cs2userPrefetchBackoffTime;

/* instance methods */
- (id)initWithRecentSearches:(id)searches cs2LastUserPrefetchSuccessTime:(double)time cs2userPrefetchBackoffTime:(double)time;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TTSTypeaheadStoreDataModel_h */
