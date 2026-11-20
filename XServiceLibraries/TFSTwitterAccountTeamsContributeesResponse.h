//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAccountTeamsContributeesResponse_h
#define TFSTwitterAccountTeamsContributeesResponse_h
@import Foundation;

@class NSArray, NSObject;

@interface TFSTwitterAccountTeamsContributeesResponse : NSObject // (Swift)

@property (nonatomic, readonly) NSArray *contributees;

/* instance methods */
- (id)initWithContributees:(id)contributees;
- (id)init;

@end

#endif /* TFSTwitterAccountTeamsContributeesResponse_h */
