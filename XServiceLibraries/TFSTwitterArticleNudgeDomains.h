//
#ifndef TFSTwitterArticleNudgeDomains_h
#define TFSTwitterArticleNudgeDomains_h
@import Foundation;

@class NSObject, NSSet;

@interface TFSTwitterArticleNudgeDomains : NSObject

@property (readonly, copy, nonatomic) NSSet *domainSet;

/* instance methods */
- (id)init;
- (id)initWithDomainList:(id)list;

@end

#endif /* TFSTwitterArticleNudgeDomains_h */
