//
#ifndef TwitterAdvancedSearch_h
#define TwitterAdvancedSearch_h
@import Foundation;

@class NSObject, NSString;

@interface TwitterAdvancedSearch : NSObject // (Swift)

@property (nonatomic, readonly) NSString *searchString;
@property (nonatomic, readonly) _Bool isFollowingFilterEnabled;
@property (nonatomic, readonly) _Bool isLocationFilterEnabled;
@property (nonatomic, readonly) _Bool isEmpty;

/* instance methods */
- (id)initWithSearchString:(id)string isFollowingFilterEnabled:(_Bool)enabled isLocationFilterEnabled:(_Bool)enabled;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TwitterAdvancedSearch_h */
