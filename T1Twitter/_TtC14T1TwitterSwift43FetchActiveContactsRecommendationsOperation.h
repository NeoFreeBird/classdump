//
#ifndef _TtC14T1TwitterSwift43FetchActiveContactsRecommendationsOperation_h
#define _TtC14T1TwitterSwift43FetchActiveContactsRecommendationsOperation_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TFSProgressing-Protocol.h"

@class NSString, Swift.Bool, T1TwitterSwift.FetchActiveContactsRecommendationsCommandFactory, T1TwitterSwift.FetchRecommendationsRelationshipsCommandFactory, TFSConcurrentOperation, _$sSo26TFSTwitterAPICommandLoader_p, _$sSo53T1FetchActiveContactsRecommendationsOperationDelegate_pSgXw, _$sSo9NSCopying_p, _$sSu;

@interface T1TwitterSwift.FetchActiveContactsRecommendationsOperation : TFSConcurrentOperation <TFSProgressing> { // (Swift)
    /* instance variables */
    weak __C.T1FetchActiveContactsRecommendationsOperationDelegate? delegate;
    __C.TFSTwitterAPICommandLoader commandLoader;
    T1TwitterSwift.FetchActiveContactsRecommendationsCommandFactory fetchRecommendationsCommandFactory;
    T1TwitterSwift.FetchRecommendationsRelationshipsCommandFactory fetchRelationshipsCommandFactory;
}

@property (nonatomic, readonly) id <NSCopying> uniqueID;
@property (nonatomic, readonly) _Bool excludeFromProgressCenter;
@property (nonatomic, readonly) unsigned long long progressWeight;
@property (nonatomic, readonly) double progress;
@property (nonatomic, readonly) NSString *progressDisplayTitle;

/* instance methods */
- (void)run;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift43FetchActiveContactsRecommendationsOperation_h */
