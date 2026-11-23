//
#ifndef TFSTwitterPaginatedResults_h
#define TFSTwitterPaginatedResults_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSArray, NSNumber, NSObject, NSString;

@interface TFSTwitterPaginatedResults : NSObject <NSCoding>

@property (readonly, copy, nonatomic) NSNumber *totalCount;
@property (readonly, copy, nonatomic) NSString *nextCursor;
@property (readonly, copy, nonatomic) NSString *previousCursor;
@property (readonly, copy, nonatomic) NSArray *resultsArray;

/* instance methods */
- (id)initWithResultsArray:(id)array totalCount:(id)count nextCursor:(id)cursor previousCursor:(id)cursor;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TFSTwitterPaginatedResults_h */
