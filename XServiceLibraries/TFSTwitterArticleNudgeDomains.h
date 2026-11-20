//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
