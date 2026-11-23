//
#ifndef APMFilterResult_h
#define APMFilterResult_h
@import Foundation;

@class NSData, NSObject;

@interface APMFilterResult : NSObject

@property (readonly, nonatomic) int audienceID;
@property (readonly, nonatomic) NSData *currentResults;
@property (readonly, nonatomic) NSData *previousResults;

/* instance methods */
- (id)initWithAudienceID:(int)id currentResults:(id)results previousResults:(id)results;

@end

#endif /* APMFilterResult_h */
